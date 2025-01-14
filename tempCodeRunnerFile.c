    int num, q, rem, sum,i;
    printf("enter a number:\n");
    scanf("%d",&num);
    q=num;
    for(i=1; q>0;i++){
    rem=q%10;
    q=q/10;
    sum=sum+rem;
    }
    printf("sum of number is %d\n", sum);