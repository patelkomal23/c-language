#include<stdio.h>
main(){
    int i,j, num[3][3], sum = 0;
    printf("     ********    \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
        
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d",num[i][j]);
        }
        printf("\n");
    }
    printf("     ********    \n");
    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            if (i == j)
            {
                sum += num[i][j];
            }
        }
    }
                printf("%d",sum);
    
}
