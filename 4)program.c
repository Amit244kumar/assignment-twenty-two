char* input();
int main()
{
    char *p;
    p=input();
    printf("%s",p);

    getch();
    return 0;
}
char* input()
{
    int l;
    char *p;
    char str[100];
    gets(str);
    l=length(str);
    p=(char*)malloc(l);
    for(int i=0;i<=l;i++)
        p[i]=str[i];
    return p;
}
int length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}
