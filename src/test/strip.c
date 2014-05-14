#include<stdio.h>
#include<string.h>

int c_isspace(char c);

void line_strip(char *line);

int main()
{
    char *line = "   a\tb\vc\fd\ne g ";

    line_strip(line);

    return 0;
}

int c_isspace(char c)
{
    if(c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
        return 1;
    else
        return 0;
}

void line_strip(char *line)
{
    const char *end = line + strlen(line);
    char *p;
    int i;

    while(*line && c_isspace(*line))
        ++line;
    while(end > line && c_isspace(end[-1]))
        --end;

    printf("line:%s\n", p);
    for(i = 0; i < strlen(p); i++)
        printf("p[%d]:%c\n", i, p[i]);
}
