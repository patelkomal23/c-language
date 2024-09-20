#include<stdio.h>
#define pi 3.14

main(){
	 int r,area;
	 float perimeter;
	 printf("enter the value of r:\n");
	 scanf("%d",&r);
	 area=pi*r*r;
	 printf("Area of a circle is:%d\n",area);
	 perimeter=2*pi*r;
	 printf("Perimeter of the circleis:%f",perimeter);
	 
}
