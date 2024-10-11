#include<stdio.h>
int main(){
	int num1,num2;
	int choice;
	char s='y';
	
	while(s='y'){
		printf("\nPress 1 for +\n");
    	printf("Press 2 for -\n");
    	printf("Press 3 for *\n");
    	printf("Press 4 for /\n");
    	printf("Press 5 for %%\n");
    	printf("Press 0 for exit\n");
    	printf("Enter your choice:");
    	scanf("%d",&choice);
    	
		if(choice==0){
    		printf("You have exited the program.\n");
    		break;
		}
		if(choice>=1 && choice<=5){
			printf("Enter the value of first number:");
			scanf("%d",&num1);
			printf("Enter the value of second number:");
			scanf("%d",&num2);
		}
		
			switch(choice){
            //ADDITION
			case 1:
			printf("Addition of %d and %d is %d:\n",num1,num2,add(num1,num2));
			break;
		    //SUBTRACTION
		    case 2:
		    printf("Subtraction of %d and %d is %d:\n",num1,num2,sub(num1,num2));
		    break;
			
			//MULTIPLICATION
			case 3:
		    printf("Multiplication of %d and %d is %d:\n",num1,num2,mul(num1,num2));
		    break;
		    
            //DIVISION
			case 4:
			printf("Division of %d and %d is %d:\n",num1,num2,div(num1,num2));
			break;	
			
			
            //MODULO
            case 5:
            printf("Modulo of %d and %d is %d:\n",num1,num2,mod(num1,num2));
			break;	
				
    
		}
		
	}
}
int add(int a,int b){
	int add;
	add =a+b;
	return add;
}
int sub(int a,int b){
	int sub;
	sub =a-b;
	return sub;
}
int mul(int a,int b){
	int mul;
	mul =a*b;
	return mul;
}
int div(int a,int b){
	int div;
	div =a/b;
	return div;
}
int mod(int a,int b){
	int mod;
	mod =a%b;
	return mod;
}
