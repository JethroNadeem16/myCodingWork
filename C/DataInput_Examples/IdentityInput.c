#include <stdio.h>

int main(){
	char gender[10];
	printf("Gender:\n");
	scanf(" %s", gender);
	printf("\n");

	int age;
	printf("Age: \n");
	scanf("%d", &age);
	printf("\n");

	int id;
	printf("UNM ID: \n");
	scanf("%d", &id);
	printf("\n");

	float gpa;
	printf("GPA: \n");
	scanf("%f", &gpa);
	printf("\n");

	char fi;
	printf("First Name's Initial: \n");
        scanf(" %c", &fi);
	printf("\n");
	
	char li;
	printf("Last Name's Initial: \n");
	scanf(" %c", &li);
	printf("\n");

	int db;
	printf("Day's Birthday: \n");
        scanf("%d", &db);
	printf("\n");

	int mb;
	printf("Month's Birthday: \n");
        scanf("%d", &mb);
	printf("\n");

	int yb;
	printf("Year's Birthday:\n");
        scanf("%d", &yb);
	printf("\n");
	

	return 0;
}
