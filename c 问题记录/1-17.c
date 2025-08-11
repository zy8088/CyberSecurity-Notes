#include<stdio.h>

#define MAXLINE 1000
#define LIM 80

int getline_(char input[], int lim);

int main()
{
    int len, index, i;
    char line[MAXLINE], longest[MAXLINE];

    index = 0;
    while ((len = getline_(line, MAXLINE)) > 0)
    {
        if(len > 10)
        {
            longest[index] = line;
            index++;
        }
    }

    i = 0;
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
    
} // 推荐第十八行和第26行的修改建议