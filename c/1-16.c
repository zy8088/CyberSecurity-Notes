#include<stdio.h>
#include<ctype.h>
#define MAXLINE 1000

void copy(char to[], char from[], int len);

int main()
{
    int max_len, current_len;
    char current_line[MAXLINE], longest_line[MAXLINE];
    int c, i;

    max_len = current_len = 0;

    while ((c = getchar()) != EOF)
    {
        if(c != '\n')
        {
            ++current_len;
            if(current_len < MAXLINE)
            {
                current_line[current_len - 1] = c;
            }
            else
                ;
        }
        else if(c == '\n')
        {
            if(current_len > max_len)
            {
                max_len = current_len;
                copy(longest_line, current_line, max_len);
                current_len = 0;
            }
        }
    }
    
    i = 0;

    if(max_len > 0)
    {
        while (i < max_len)
        {
            putchar(longest_line[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}

void copy(char to[], char from[], int len)
{
    int i;
    
    i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
    
}