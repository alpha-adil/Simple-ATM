/*
 ============================================================================
 Name        : SimpleBankingSystem.c
 Author      : alpha_adil
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void create();
int deposit(int);
int withdraw(int);
void checkbalance(int);

int main(void){

	setbuf(stdout,NULL);
	puts("Welcome to XYZ Bank");
	puts("----------");
	int opt = 0, balance = 0;

	do{

		printf("What would you like to do:\n1. Create account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit\n\n");
		scanf("%d", &opt);

		switch(opt){
		case 1:
			create();
			break;
		case 2:
			balance = deposit(balance);
			printf("Your new balance is %d.\n", balance);
			break;
		case 3:
			balance = withdraw(balance);
			printf("Your new balance is %d\n", balance);
			break;
		case 4:
			checkbalance(balance);
		}

	}while(opt != 5);

	return 0;
}

void create(){
	char name[20];
	char number[10];

	puts("Enter your name: ");
	scanf("%s", name);

	puts("Enter your phone number: ");
	scanf("%s", number);

	printf("Account creation successful.\nHello %s, Your account number is %s.\n",name,  number);
	puts("----------");
}

int deposit(int bal){
	int amount;

	puts("How much would you like to deposit: ");
	scanf("%d", &amount);

	int newBal = amount + bal;
	printf("Rupees %d has been successfully deposited.\n", amount);
	puts("----------");

	return newBal;
}

int withdraw(int bal){
	int newBal = 0, withdrawamnt = 0;
	puts("How much would you like to withdraw: ");
	scanf("%d", &withdrawamnt);

	newBal = bal - withdrawamnt;
	printf("Rupees %d has been successfully withdrawn.\n", withdrawamnt);
	puts("----------");
	return newBal;
}

void checkbalance(int bal){
	printf("Your balance is %d.\n", bal);
}


