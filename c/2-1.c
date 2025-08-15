#include<stdio.h>
#include<limits.h>
int main()
{
    // 直接使用 SCHAR_MAX 和 SCHAR_MIN 宏
    signed char sc_min = SCHAR_MIN;
    signed char sc_max = SCHAR_MAX;
    signed int si_min = INT_MIN;
    signed int si_max = INT_MAX; 
    unsigned char usc_max = UCHAR_MAX;
    // 无符号类型的最小值固定为 0
    unsigned char usc_min = 0;
    unsigned int usi_max = UINT_MAX;
    // 无符号类型的最小值固定为 0
    unsigned int usi_min = 0;

    printf("signed char 的最小值: %d, 最大值: %d\n", sc_min, sc_max);
    printf("signed int  的最小值: %d, 最大值: %d\n", si_min, si_max);
    printf("unsigned char的最小值: %u, 最大值: %u\n", usc_min, usc_max);
    printf("unsigned int的最小值: %u, 最大值: %u\n", usi_min, usi_max);
    
    return 0;
}