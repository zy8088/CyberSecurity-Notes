#include<stdio.h>
#include<ctype.h>

int main()
{
    int i, lowers[26], uppers[26];
    int c;
    int max_frequency;

    i = 0;

    while (i < 26)
    {
        lowers[i] = uppers[i] = 0;
        i++;
    }

    while ((c = getchar()) != EOF)
    {
        if(isupper(c) != 0)
        {
            ++uppers[c - 'A'];
        }
        else if (islower(c) != 0)
        {
            ++lowers[c - 'a'];
        }
        else
            ; 
    }

    max_frequency = i = 0;

    while (i < 26)
    {
        if(lowers[i] > max_frequency)
            max_frequency = lowers[i];
    
        
        i++;
    }

    while (max_frequency > 0)
    {
        i = 0;

        while (i < 26)
        {
            if(lowers[i] >= max_frequency)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }

            i++;
        }
        printf("\n");
        --max_frequency;
    }

    i = 0;

    while (i < 26)
    {
        printf(" %c ", 'a' + i);
        
        i++;
    }
    return 0;
}