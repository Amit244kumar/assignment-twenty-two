int main()
{
    int n,*p,sum=0;
    printf("Enter the how many numbers you want to enter:");
    scanf("%d",&n);
    p=malloc(n);
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
    printf("The entered number");
    for(int i=0;i<n;i++)
        sum=sum+*(p+i);
    printf("The average is %d",sum/n);
    getch();
    return 0;
}
