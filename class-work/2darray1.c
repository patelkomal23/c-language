#include<stdio.h>
main(){
    int i,j,num[3][3], sum=0;
    float avg;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
        
    }
    
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("\t %d",num[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum += num[i][j];
        }
    }
    
    printf("%d",sum);
    avg = sum / 9;
    printf("%.2f",avg);
    
}
