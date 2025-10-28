#include<stdio.h>
#include<string.h>
  
typedef struct {
    char name_e[10];
    double length;
    char name_c[10];
} Tran;

Tran Trans[] = {
    {"km",   1000.0,      "公里"},    // 1公里(km) = 1000米
    {"m",    1.0,         "米"},      // 1米(m) = 1米
    {"dm",   0.1,         "分米"},    // 1分米(dm) = 0.1米
    {"cm",   0.01,        "厘米"},    // 1厘米(cm) = 0.01米
    {"mm",   0.001,       "毫米"},    // 1毫米(mm) = 0.001米
    {"um",   0.000001,    "微米"},    // 1微米(um) = 0.000001米(1e-6米)
    {"里",   500.0,       "里"},      // 1里 = 500米(中国市制单位)
    {"丈",   10.0/3,      "丈"},      // 1丈 ≈ 3.333米(10/3米，中国市制)
    {"寸",   1.0/30,      "寸"},      // 1寸 ≈ 0.0333米(1/30米，中国市制)
    {"分",   1.0/300,     "分"},      // 1分 = 0.00333...米(1/300米，中国市制)
    {"厘",   1.0/3000,    "厘"},      // 1厘 = 0.000333...米(1/3000米，中国市制)
    {"nmi",  1852.0,      "海里"},    // 1海里(nmi) = 1852米(航海单位)
    {"mi",   1609.344,    "英里"},    // 1英里(mi) ≈ 1609.344米(英制)
    {"fur",  201.168,     "弗隆"},    // 1弗隆(fur) = 201.168米(英制)
    {"yd",   0.9144,      "码"},      // 1码(yd) = 0.9144米(英制)
    {"ft",   0.3048,      "英尺"},    // 1英尺(ft) = 0.3048米(英制)
    {"in",   0.0254,      "英寸"}     // 1英寸(in) = 0.0254米(英制)
};

#define Trans_SIZE (sizeof(Trans)/sizeof(Trans[0]))

int main() {
    double old_length;
    char old_name_e[5];
    int i;
    int input_found = -1;
    char new_name_e[5];
    printf("请输入长度和单位（如 12.5 km）：\n");
    scanf("%lf %s", &old_length, old_name_e);
    printf("请输入您要转换的目标单位（如 m）：");
    scanf("%s", new_name_e);
    // 查找输入单位对应的转换信息
    for(i=0;i<Trans_SIZE;i++) {
        if(strcmp(old_name_e,Trans[i].name_e)==0) {
            input_found = i;
            break;
        }
}
    if (input_found == -1) {
        printf("不支持的单位：%s\n", old_name_e);
        return 1;
    }
    double length_in_meters = old_length * Trans[input_found].length;
    // 查找目标单位对应的转换信息
    int output_found = -1;
    for(i=0;i<Trans_SIZE;i++) {
        if(strcmp(new_name_e,Trans[i].name_e)==0) {
            output_found = i;
            break;
        }
    }
    if (output_found == -1) {
        printf("不支持的单位：%s\n", new_name_e);
        return 1;
    }
    double new_length = length_in_meters /Trans[output_found].length;
    printf("%.6f %s 等于 %.6f %s\n", old_length,old_name_e, new_length, new_name_e);
    return 0;
} 

   
    
