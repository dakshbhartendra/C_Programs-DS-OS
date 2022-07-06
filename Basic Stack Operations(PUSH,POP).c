main()
{
    int a[20],top=1,choice,i;
    while(1)
    {
        printf("\nPress 1 to PUSH element to Stack\nPress 2 to POP element from Stack\nPress 3 to print Stack\nPress 4 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                if(top==20){
                    printf("Buffer Overflow!!\n");
                    break;
                }
                else
                {
                    printf("Enter Element: \n");
                    scanf("%d",&a[top]);
                    top++;
                    break;
                }
            }
            case 2:
            {
                if(top==0)
                    printf("Stack is empty!!\n");
                else
                {
                    printf("Element POPED!!\n");
                    top--;
                    break;
                }
            }
            case 3:
            {
                for(i=1;i<top;i++)
                {
                    printf("%5d",a[i]);
                }
                break;
            }

        }
        if(choice==4)
            break;
    }
}
