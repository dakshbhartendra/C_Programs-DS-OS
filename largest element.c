void main()
{
    int a[100],i,j,big=0,n;
    printf("Enter the number of elements you want to store in array\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>big){
            big=a[i];
        }
    }
    printf("largest element is %d",big);
}
