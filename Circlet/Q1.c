#include<stdio.h>
main(){
//41
//41 42
//41 42 43
//41 42 43 44
//41 42 43 44 45

int i,j,num=41;
 for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",num+j);
        }
        printf("\n");
    }
    
}
