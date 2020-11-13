#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


struct medic
{
	
	int id;
	char name[30];
	int age;
	char* health_plan[30];
	char area[50];
	int phone_number;
};

void saveMedicToFile(struct medic newmedic[])
{
	//TODO
}

void createMedic(int id, struct medic newmedic[])
{
	
	char* s;
	
	newmedic[id].id = id;
	printf("\n\nmedic's name: ");
	gets(newmedic[id].name);
	printf("\nmedic's age: ");
	newmedic[id].age = atoi(gets(s));
	
	bool more_plans = true;
	int count = 0;
	printf("\nhealth plans the medic attends(one at a time): ");
	while(more_plans)
	{
		
		gets(newmedic[id].health_plan[count]);
		printf("Would you like to add another plan?(yes/no)");
		char add_plans;
		scanf("%s", &add_plans);
		if(add_plans == "YES" || add_plans == "yes" || add_plans == "Yes") count++;
		else more_plans = false;
	}
	
	printf("\nmedic's phone number(numbers only): ");
	newmedic[id].phone_number = atoi(gets(s));
	
	printf("\n\n%d", &newmedic[id].id);
	printf("\n%d", &newmedic[id].age);
	puts(newmedic[id].area);
	int i;
	for(i = 0; i <= count; i++)
	{
		
		printf("\n%s | ", newmedic[id].health_plan[i]);
	}
	puts(newmedic[id].name);
	printf("\n%d", newmedic[id].phone_number);
	
	id++;
	free(newmedic);
}
