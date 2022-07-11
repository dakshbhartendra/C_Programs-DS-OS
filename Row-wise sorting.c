#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j,n;
    printf("Enter no. of rows in the array\n");
    scanf("%d",&n);
    printf("Enter the data in table\n");
    printf("Enter data in column A\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter data in column B\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
        {
            for(j=i;j<n-1;j++)
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
        }
    printf("Sorted 2d array is=\n");
    for(i=0;i<n;i++)
        {
            printf("%5d %5d\n",a[i],b[i]);
        }
}