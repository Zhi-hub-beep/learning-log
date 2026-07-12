#include <stdio.h>

int main() {
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    
    // 核心操作：printf 的返回值就是打印的字符数
    int digits = printf("%d", n);
    
    printf("\n数字 %d 的位数是：%d\n", n, digits);
    
    return 0;
}