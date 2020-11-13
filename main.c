#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "medic.h"
#include "client.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int id_client = 1;
	int id_medic = 1;
	int id_exam = 1;
	
	struct client* newclient = (struct client*)malloc(sizeof(struct client));
	struct medic* newmedic = (struct medic*)malloc(sizeof(struct medic));
	
	createClient(id_client, newclient);
	createMedic(id_medic, newmedic);
	
	
	free(newclient);
	free(newmedic);
	
	return 0;
}

