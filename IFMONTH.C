/*	program name:month name
	programer name:aarav shah
	doc:4 june 2025			*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int month;
	clrscr();
	printf("enter your birth month");
	scanf("%d",&month);
	if(month==1){
		printf("its january");}
	else if(month==2){
		printf("its february");}
	else if(month==3){
		printf("its march");}
	else if(month==4){
		printf("its april");}
	else if(month==5){
		printf("its may");}
	else if(month==6){
		printf("its june");}
	else if(month==7){
		printf("its july");}
	else if(month==8){
		printf("its aguast");}
	else if(month==9){
		printf("its september");}
	else if(month==10){
		printf("its october");}
	else if(month==11){
		printf("its november");}
	else if(month==12){
		printf("its december");}
	else{
		printf("you entered wrong choice");}
	getch();
}