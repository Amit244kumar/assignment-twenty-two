int main()
{
    int n,*l,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    l=malloc(n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",l+i);
    for(int i=0;i<n;i++)
      sum+=*(l+i);
    printf("The sum is %d",sum);
    getch();
    return 0;
}
