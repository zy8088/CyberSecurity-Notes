#include<stdio.h>
#include<stdlib.h>

int main()
{
    char hex_string[] = "1A";
    char *end_ptr;// 用于错误检查

    // 使用 strtoul 函数，指定基数为 16

    unsigned long number = strtoul(hex_string, &end_ptr, 16);
    // 错误检查：如果 end_ptr 指向字符串开头，说明没有转换任何数字
    // 或者 *end_ptr 不是字符串结束符 '\0'，说明字符串后面还有非数字字符

    if(*end_ptr == '\0')
        printf("字符串 \"%s\" 转换为无符号长整型是: %lu\n", hex_string, number); // %lu 用于打印 unsigned long
    else
        printf("字符串 \"%s\" 包含无效字符。\n", hex_string);
    
    return 0;

}