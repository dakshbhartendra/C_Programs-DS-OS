int main()
{
int a[10];
float avg=0;
int i;
printf("Enter marks in five subjects");
for(i=1;i<6;i++)
{
    scanf("%d",&a[i]);
    avg=avg+a[i];
    printf("%d",a[i]);
}
avg=avg/5;
printf("%d",avg);
return 0;
}

