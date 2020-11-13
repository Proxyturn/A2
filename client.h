#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct client{
	
	int id;
	char name[30];
	char birthday[15];
	int age;
	char health_plan[50];
	char address[50];
	int phone_number;
};

void saveClientToFile(struct client newclient[]){
	//TODO
}

void createClient(int id, struct client newclient[]){
	
	char* s;
	
	newclient[id].id = id;
	printf("\n\npacient's name: ");
	scanf("%s", &newclient[id].name);
	printf("\npacient's birthday in mm/dd/yyyy format: ");
	scanf("%s", &newclient[id].birthday);
	printf("\npacient's age: ");
	scanf("%d", &newclient[id].age);
	printf("\npacient's health plan: ");
	scanf("%s", &newclient[id].health_plan);
	printf("\npacient's address: ");
	scanf("%s", &newclient[id].address);
	printf("\npacient's phone number(numbers only): ");
	scanf("%d", &newclient[id].phone_number);
	
	
	printf("\n\n%d", newclient[id].id);
	printf("\n%s", newclient[id].health_plan);
	printf("\n%d", newclient[id].phone_number);
	printf("\n%s", newclient[id].birthday);
	
	id++;
}
