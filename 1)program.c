char* input();
int main()
{
    char *p;
    p=input("hello");
    printf("%s",p);
    getch();
    return 0;
}
char* input(char *str)
{
    int l;
    char *p;
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
