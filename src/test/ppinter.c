#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ppointer(char *line, char **com, char **val);
int Nppointer(char *line, char *com, char *val);
char *strd(char *beg, char *end);

int main()
{
    char *com = NULL, *val = NULL;
    char *line = "abcdefg";

    ppointer(line, &com, &val);

    printf("com:%s\n", com);

    Nppointer(line, com, val);
    printf("com2:%s\n", com);


    return 0;
}

char *strd(char *beg, char *end)
{
    char *res = malloc(end - beg + 1);
    memcpy(res, beg, end - beg);
    res[end - beg] = '\0';
    return res;
}

int ppointer(char *line, char **com, char **val)
{
    char *beg, *end;

    beg = line;
    end = line + strlen(line);
    *com = strd(beg, end);
    printf("ret:%s\n", *com);
}


int Nppointer(char *line, char *com, char *val)
{
    char *beg, *end;

    beg = line;
    end = line + strlen(line);
    com = strd(beg, end);
    printf("ret2:%s\n", com);
}

