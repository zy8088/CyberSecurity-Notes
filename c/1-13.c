#include<stdio.h>
#include<ctype.h>
#define IN 1
#define OUT 0

int main()
{
    int c, i, j;
    int state;
    int lengths[20], current_length;

    i = j = 0;
    while (i < 20)
    {
        lengths[i] = 0;
        ++i;
    }
    
    i = 0; state = OUT; current_length = 0;

    while ((c = getchar()) != EOF)
    {
        if(isalpha(c) != 0)
        {
            state = IN;
            ++current_length;
        }
        else if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == IN)
            {
                ++lengths[current_length];
                current_length = 0;
            }
            state = OUT;
        }
    }

    printf("绘制水平直方图 \n");
    
    i = 0;
    while (i < 20)
    {
        j = 0;
        if(lengths[i] > 0)
        {
            printf("长度%d: ", i);
            while(j < lengths[i])
            {
                printf("*");
                j++;
            }
            printf("\n");
        }
        i++;
    }

    printf("绘制垂直直方图 \n");
    int max_freqnency, h;
    i = max_freqnency = h = 0;

    while (i < 20)
    {
        if(lengths[i] > max_freqnency)
            max_freqnency = lengths[i];
        
        i++;
    }

    //h = max_freqnency;

    while (max_freqnency > 0)
    {
        i = 0;
        while (i < 20)
        {
            if(lengths[i] >= max_freqnency)
                printf(" * ");
            else
                printf("   ");
            
            ++i;
        }
        printf("\n");
        --max_freqnency;
    }
    
    i = 0;

    while (i < 20)
    {
        printf(" %d ", i);
        i++;
    }
    
}