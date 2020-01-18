//1.定义目标：实现英寸到厘米的转换
//2.程序设计：输入英寸，厘米数等于2.54×英寸，输出厘米数
#include <stdio.h>

int main(void)
{
    double inch;

    printf("Please input inch value:");
    scanf("%lf", &inch);
    printf("%.2lf inches is equal to %.2lf cm.\n", inch, 2.54*inch);
    
    return 0;
}