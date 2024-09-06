#include<stdio.h>
main(){
	float bs,gs,hra,da,ta,hraamount,daamount,taamout;
	printf("Enter the Base Salary:\n");
	scanf("%f",&bs);
	printf("Enter the Hra percentage:\n");
	scanf("%f",&hra);
	printf("Enter the da percentage:\n");
	scanf("%f",&da);
	printf("Enter the ta percentage:\n");
	scanf("%f",&ta);
	hraamount = (hra/100)*bs;
	daamount = (da/100)*bs;
	taamout = (ta/100)*bs;
	gs = bs+hraamount+daamount+taamout;
	printf("Gross Salary: %.2f",gs);

		
}
