  int arr[5]={10, 20, 30, 40, 50}, i, sum=0, avg;
    for(i=0; i<=4; i++){
        sum=sum+arr[i];
    }
    avg=sum/i;
    printf("avg of number is %d\n", avg);
}