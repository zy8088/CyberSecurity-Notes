#include<stdio.h>
#include<string.h>

#define MAXLINE 1000
#define LIM 80
#define MAX_STORED_LINES 50

int getline_(char input[], int lim);

int main()
{
    int len, index, i;
    char line[MAXLINE], longest[MAX_STORED_LINES][MAXLINE];

    index = 0;
    while ((len = getline_(line, MAXLINE)) > 0)
    {
        if(len > 10)
        {
            strcpy(longest[index], line);

            index++;
        }
    }

    i = 0;
    printf("---------------------------\n");
    while (i < index)
    {
        printf("%s", longest[i]);
        i++;
    }
    

    return 0;
    
}

int getline_(char input[], int lim)
{
    int c;
    int index = 0;

    while ((c = getchar()) != EOF && index < lim && c != '\n')
    {
        input[index] = c;
        ++index;
    }
    if(c == '\n')
    {
        input[index] = c;
        index++;
    }
    input[index] = '\0';

    return index;
    
}