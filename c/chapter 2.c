//返回字符串s的长度
int strlen(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

//将字符串转化为整数
int atoi(char s[])
{
    int i, n;
    i = n = 0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        ++i;
    }
    return n;
}
//s[i] - '0' 能够计算出s[i]中存储的字符所对应的数字值，这是因为'0'、'l'等在字符集中对应的数值是一个连续的递增序列

//大写转小写
int lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c; 
}

//删除字符串中所有出现的字符c
void squeeze(char s[], int c)
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
        if(s[i] != c)
        {
            s[j++] =  s[i];
        }
        ++i;
    }

    s[j] = '\0';
}

//将字符串t连接到字符串s的尾部
void strcat(char s[], char t)
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    while ((s[i++] = s[j++]) != '\0')
        ;    
}

//从一个无符号整数 x 中，取出从右边第 p 位开始、长度为 n 位的一段二进制位。可以把它想象成两步操作：“对齐” 和 “过滤”。
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << 4);
}
//(x >> (p+1-n)) —— 对齐操作 这部分代码通过 >> (右移) 运算，将您想要的 n 位二进制码，不多不少地移动到整个数字的最右边。
//& ~(~0 << n) —— 过滤操作作用：这部分代码非常巧妙地创建了一个掩码 (mask)。这个掩码的二进制形式是，末尾刚好有 n 个 1，而其余高位全都是 0 (例如，n=4 时，掩码就是 00...01111)。