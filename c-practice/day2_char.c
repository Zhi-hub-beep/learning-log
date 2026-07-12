#include <stdio.h>
#include <string.h>  // 为了用 strlen 函数

int main() {
    char str[1000];  // 定义一个足够大的字符数组存放输入
    
    printf("请输入一行字符串（可包含空格）：");
    fgets(str, sizeof(str), stdin);  // 读入一整行，包括空格
    // 【关键一步】去掉末尾的换行符 '\n'
    // fgets 会读取回车键，如果不去掉，长度会多算 1，所以必须得加下面这一句的替换
    str[strcspn(str, "\n")] = '\0';  // 把换行符替换成字符串结束符，具体原理是开始扫描str字符串数组，在识别到\n之后返回当前计数值
    //在返回计数值之后，将数组该计数位置的\n替换为结束符号\0
    printf("你输入的是：%s",str);
    // 用 strlen 计算有效字符数
    int len = strlen(str);
    printf("字符串长度为：%d\n", len);
    
    return 0;
}