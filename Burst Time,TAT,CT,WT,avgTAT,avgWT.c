#include<stdio.h>
void main()
{
    int i,j,a[10],b[10],c[10],d[10],e[10],n;
    float avgTAT,avgWT;
    printf("enter no. of processes you wanna enter\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Arrival Time\n");
        scanf("%d",&a[i]);
        printf("Enter Burst Time\n");
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
    c[0]=b[0];
    d[0]=c[0]-a[0];
    e[0]=d[0]-b[0];
    avgTAT=d[0];
    avgWT=e[0];
    printf("The table is\n\nPID    AT   BT   CT   TAT  WT\n1  %5d%5d%5d%5d%5d\n",a[0],b[0],c[0],d[0],e[0]);
    for(i=1;i<n;i++)
    {
        c[i]=c[i-1]+b[i];
        d[i]=c[i]-a[i];
        e[i]=d[i]-b[i];
        avgTAT=avgTAT+d[i];
        avgWT=avgWT+e[i];
        printf("%d  %5d%5d%5d%5d%5d\n",i+1,a[i],b[i],c[i],d[i],e[i]);
    }
    printf("Average TAT=%.2f  Average WT=%.2f",avgTAT,avgWT);
}
