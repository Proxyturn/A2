#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "client.h"
#include "medic.h"


struct examReq
{

	int id;
	int date;
	char client_name[30]
	char location[20];
	char medic_name[30];
	char exam_type;
	bool health_plan;
}ExamReq;


void createExam(int id, struct examReq newexam[], struct client newclient[], struct medic newmedic[])
{

	char* s;
	int i;

	newexam[id].id = id;
	printf("\nexam's date in mm/dd/yyyy format: ");
	scanf("%d", &newexam[id].date);
	
	printf("\npacient's complete name': ");
	strcmp()
	for(int i = 0; i < newclient.Length; i++)
	{
		
		if(strcmp(newclient[i].name,gets(s) == 0)
		{
			new
		}
	}
	
	printf("\nexam's health plan: ");
	scanf("%s", &newexam[id].health_plan);
	
	printf("\nexam's address: ");
	scanf("%s", &newexam[id].address);
	
	printf("\nexam's' type: ");
	scanf("%d", &newexam[id].phone_number);

	id++;
}
