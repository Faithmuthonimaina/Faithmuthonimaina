#include<stdio.h>
#include<stdlib.h>
int main()
{
int overdue,fine,id,Return,due;
printf("Enter id\n");
scanf("%d",&id);
printf("Enter due\n");
scanf("%d",&due);
printf("Enter Return\n");
scanf("%d",& Return);
overdue =Return-due;
printf("Overdue days are %d\n", overdue);
if(overdue<=7){
 fine=overdue*20;
 printf("Fine rate is Ksh.20\n");
 printf("FIne Amount is Ksh.%d",fine);}
 if(overdue <=14){
 fine=overdue*50;
 printf("FIne Rate is Ksh.50\n");
 printf("Fine Amount Is Ksh.%d",fine);}
 if(overdue>=15){
 fine=overdue*100;
 printf("Fine Rate is Ksh.100\n");
 printf("Fine Amount is Ksh.%d",fine);}
 return 0;
 }