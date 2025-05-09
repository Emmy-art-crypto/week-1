#include<stdio.h>

int main (){
	char name[50];
	float income,expenses,savings;
	
	printf("Enter Your Name: ");
	scanf("%s",&name);
	printf("\nEnter Your Monthly Income: ");
	scanf("%f",&income);
	printf("\nEnter Your total expenses this month:");
	scanf("%f",&expenses);
	
	printf("\n\n----Monthly Financial summary---");
	
	savings=income-expenses;
	
	if(savings>0){
		printf("\nName: %s",name);
		printf("\nMonthly Income:%f",income);
		printf("\nTotal Expenses:%f",expenses);
		printf("\nRemaining Savings:%f",savings);
		printf("\nYou're saving momey this month");
		
		
		
	}
	
	else if(savings==0){
		printf("\nName: %s",name);
		printf("\nMonthly Income:%f",income);
		printf("\nTotal Expenses:%f",expenses);
		printf("\nRemaining Savings:%f",savings);
		printf("\nYou're not saving this month");
	}
	else{
		printf("\nName: %s",name);
		printf("\nMonthly Income:%f",income);
		printf("\nTotal Expenses:%f",expenses);
		printf("\nRemaining Savings:%f",savings);
		printf("\nYou're over spending this month");
	}
	
	return 0;
}
