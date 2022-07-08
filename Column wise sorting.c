#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j,n,x;
    printf("Enter no. of rows in the array\n");
    scanf("%d",&n);
    printf("Enter the data in table\n");
    printf("Enter data in column 1\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter data in column 2\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter the column with which you want to sort\n");
    scanf("%d",&x);
    switch (x){
    case 1:{
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
                b[j]=b[j]+b[j+1];
                b[j+1]=b[j]-b[j+1];
                b[j]=b[j]-b[j+1];
            }
            
        }
        break;
    }
    case 2:{
    for(j=0;j<n;j++)
        {
            if(b[j]>b[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
                b[j]=b[j]+b[j+1];
                b[j+1]=b[j]-b[j+1];
                b[j]=b[j]-b[j+1];
            }
            
        }
    }
    default:
        break;
    }
    printf("Sorted Array is:\nColumn A  Column B\n");
    for(i=0;i<n;i++){
        printf("%6d %6d\n",a[i],b[i]);
    }
}