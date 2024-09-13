#include<stdio.h>
main(){
	int s1,s2,s3,total;
	float avg;
	char grade;
	
	//marks are entered by user.
	printf("Enter The Marks of Subject1:");
    scanf("%d",&s1);
    
    printf("Enter The Marks of Subject2:");
    scanf("%d",&s2);
    
    printf("Enter The Marks of Subject3:");
    scanf("%d",&s3);
    
    //total calculated.
    total = s1 + s2 + s3;
    printf("Total Marks of All Subject is %d.",total);
    
    //avgerge calculated.
    avg = total/3.0;
    printf("\n Avarage of Marks is %.2f ..", avg);
     //Ternary operation
    grade = avg >= 92 ? 'A' : avg >= 80 ? 'B' : avg >= 70 ? 'C' : avg >= 60 ? 'D' : 'F';

	//Applying switch cases
	switch(grade){
		
	case 'A' :
        printf("\n Excellent work!.");
        break;
    
    case 'B' :
        printf("\n Well done’.");
        break;
    
    case 'C' :
        printf("\n Good job.");
        break;
    
    case 'D' :
        printf("\n You passed,");
        break;
    
    default:
        printf("\n Sorry You are Fail... ");
   
    }
   //Eligiblality crateria for grade.
	if ((grade =='A') ||(grade == 'B') || (grade == 'C') || (grade == 'D'))
    {
        printf("\n Congratulations! You are eligible for the next level");
    }
    else{
        printf("\n Please try again next time");
    }

}

