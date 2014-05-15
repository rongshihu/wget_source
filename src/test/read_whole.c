#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int read_whole_line(FILE *fp);

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen(argv[1], "r");

    read_whole_line(fp);

    return 0;
}

int read_whole_line(FILE *fp)
{
    int length = 0;
    int bufsize = 81;
    char *line = malloc(bufsize);
    char *s;

    printf("line1:%p\n", &line);
    while((s = fgets(line + length, bufsize - length, fp)))
    {
        printf("line2:%p\n", &line);
        printf("line:%d,,,length:%d,,,plus:%d\n", strlen(line), length, strlen(line+length));
        length += strlen(line + length);
        if(line[length -1] == '\n')
            break;
        bufsize <<= 1;
        line = realloc(line, bufsize);
        printf("line3:%p\n", &line);
    }
    printf("line:%s\n", line);
}
