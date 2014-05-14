#include<stdio.h>
#include<string.h>

int main()
{
    char *line = "abcde";
    char *end = line + strlen(line);
    printf("line:%s\n", line);
    printf("end[-1]:%c\n", end[-1]);

    return 0;
}
