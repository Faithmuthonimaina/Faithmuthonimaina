#include<stdio.h>
int main(){
	int customerID;
	int unitsconsumed;
    char customerName[15];
	float chargesperunit;
	float totalbill;
	float surcharge;
	
	printf("\nEnter customerName\n:");
	scanf("%[^\n]", &customerName);
	
	printf("\nEnter customerID\n:");
	scanf("%d", &customerName);
	
	printf("\nEnter unitsconsumed\n:");
	scanf("%d", &unitsconsumed);
	
	if(unitsconsumed<=199){
		chargesperunit=1.20;
	}else if(unitsconsumed>=200 && unitsconsumed<=400) {
		chargesperunit=1.50;
	}else if(unitsconsumed>=400 && unitsconsumed<=600) {
		chargesperunit=1.80;
	}else{
		chargesperunit=2.00;
	}
		totalbill = unitsconsumed*chargesperunit;
		
		if(totalbill>400){
			surcharge=0.15;
			totalbill+=surcharge;
		}
		
		if(totalbill<100){
			totalbill=100;
		}
		
		printf("\ncustomers iD: %d\n",customerID);
		printf("\nunitsconsumed: %d\n",unitsconsumed);
		printf("\ncustomerName: %[^\n]",customerName);
		printf("\nchargesperunit: %.2f\n",chargesperunit);
		printf("\ntotalbill: %.2f\n",totalbill);
		
   return 0;	
}