#include <stdio.h>
main()
{
	int i,j;
    int n;
    int arr[n][n],*ptr;
    
    printf("Enter Array size : ");
    scanf("%d", &n);
    printf("\nEnter array elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("str[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    ptr = &arr[0][0];

    printf("Cubes of all elements:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", *ptr * *ptr * *ptr);
            ptr++;
        }
            
    }
}
