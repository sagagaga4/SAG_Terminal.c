#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 20
#define row 4
#define col 7
#define BINARY_LEN 8

typedef struct Linux{
	int data;
	char* name[MAX_LEN];
} Linux;

int binary(char *a, char *b)
{
	if(a == NULL || b ==  NULL)
	{
		printf("Empty Array \n");
		return 1;
	}
	
	size_t len_a = strlen(a);
	size_t len_b = strlen(b);

	int *temp = (int *)malloc(len_a * BINARY_LEN * sizeof(int));
	int *temp2 = (int *)malloc(len_b * BINARY_LEN * sizeof(int));

	if(temp == NULL || temp2 == NULL)
	{
		printf("Allocation Failed\n");
		return 1;
	}

	int index = 0,index2 = 0;

	for(size_t i = 0; i < len_a ; i++)
	{
		unsigned char s = (unsigned char)a[i];
		for(int j = 0; j < BINARY_LEN; j++ )
		{
			temp[index++] =  (s >> j) & 1;
		}	
	}
	
	for(size_t i = 0; i < len_b ;i++)
	{
		unsigned char k = (unsigned char)b[i];	
		for(int i = 0; i < BINARY_LEN; i++ )
			{
				temp2[index2++] =  (k >> i) & 1;
			}
	}

	printf("Binary representation of password: ");
	for(int i = 0; i < len_a * BINARY_LEN; i++)
	{
		printf("%d",temp[i]);
	}

	printf("\n");

	printf("Binary representation of key: ");
	for(int i = 0; i < len_b * BINARY_LEN; i++)
	{
		printf("%d",temp2[i]);
	}

	printf("\n");
	
	printf("XOR PASSWORD (binary)= ");
	for(int i = 0; i < BINARY_LEN; i++)
	{	
		printf("%d",temp[i] ^ temp2[i]);
	}
	printf("\n");
	return 0;
}

int xor()
{
	char str[256];
	char key[256];
	printf("________________________________________\n");
	printf("\nYOUR PASSWORD LONGS FOR XOR ENCRYPTION: \n");
	printf("________________________________________\n");
	printf("Enter password (At least 2 characters):\n");
	if(fgets(str,sizeof(str),stdin) == NULL || strlen(str) <= 1 )
	{
		printf("WHAT THE HELL MAN?!\n");
		printf("GET OUT OF MY SYSTEM!\n");
		return 1;
	}
	printf("Enter a Key(At least 2 characters):\n");
	printf("\033[033m**For best $ecurity make sure that key length == password length\033[0m\n");

	if(fgets(key,sizeof(key),stdin) == NULL || strlen(key) <= 1 )
	{
		printf("ALL YOU HAVE TO DO WAS INSERT A DAMN KEY CJ...\n");
		printf("GET OUT OF MY SWAMP!\n");
		return 1;
	}

	str[strcspn(str,"\n")] = 0;
	key[strcspn(key,"\n")] = 0;

	binary(str,key);
	return 0;
}

int cal()
{
	int calender[row][col];
	int j, i;
	printf("			August 2024\n");
	printf("\nsun	mon	tue	wed	thu	fri	sat \n");
	calender[0][0] = 1;
	calender[0][1] = 2;
	calender[0][2] = 3;
	calender[0][3] = 4;
	calender[0][4] = 5;
	calender[0][5] = 6;
	calender[0][6] = 7;
	calender[0][7] = 8;
	calender[1][0] = 9;
	calender[1][1] = 10;
	calender[1][2] = 11;
	calender[1][3] = 12;
	calender[1][4] = 13;
	calender[1][5] = 14;
	calender[1][6] = 15;
	calender[1][7] = 16;
	calender[2][0] = 17;
	calender[2][1] = 18;
	calender[2][2] = 19;
	calender[2][3] = 20;
	calender[2][4] = 21;
	calender[2][5] = 22;
	calender[2][6] = 23;
	calender[2][7] = 24;
	calender[3][0] = 25;
	calender[3][1] = 26;
	calender[3][2] = 27;
	calender[3][3] = 28;
	calender[3][4] = 29;
	calender[3][5] = 30;
	calender[3][6] = 31;

	for(i = 0; i < row;i++)
	{
		for(j = 0; j <col ;j++)
		{
			printf(" %d	", calender[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int print(Linux *Q)
{
	char buffer[256];
	int c;
	printf("---------------------------------------\n");
	printf("|          WELCOME TO SAGSAG          |\n");
	printf("---------------------------------------\n");
	printf("| 1.Enter your age (1-99):	      |\n");
	printf(">");
	if(scanf("	%d",&Q->data) != 1)
	{
		printf("INVALID INPUT\n");
		free(Q);
		return 1;
	} 
	printf("| 2.Enter your name:                  |\n");
	printf(">");
	if(scanf("	%d",&Q->data) != 1)
	if(scanf("	%s",&Q->name) != 1)
	{
		printf("INVALID INPUT");
		free(Q);
		return 1;
	}
	printf("---------------------------------------\n");
	printf("Your age is: %d and your name is %s\n", Q ->data, Q ->name);
	printf("-----------------------------------------------------------------------------------------------\n");
	printf("\033[37m     __          __   _____    _       ______  ________   ____________	 _____ 	\033[0m\n");
	printf("\033[37m    /  /  __    /  / / ____/  / /     / ____/ / ___   / /  __   __    / / ____/	\033[0m\n");
	printf("\033[37m   /  /  /  /  /  / / /__    / /     / /     / /   / / /  / /  /  /  / / /__   	\033[0m\n");
	printf("\033[37m  /  /  /  /  /  / / ____/  / /	    / /	    / /	  / / /	 / /  /  /  / / ____/  	\033[0m\n");
	printf("\033[37m /  /__/  /__/  / / /____  / /___  / /___  / /___/ / /  / /  /  /  / / /____   	\033[0m\n");
	printf("\033[37m ______________/ /_______//______//______//_______/ /__/ /__/  /__/ /______/   	\033[0m\n");
	printf("-----------------------------------------------------------------------------------------------\n");
	printf("\n");
	printf("\n\033[36m$ - YOU WERE BORN NOW...\033[0m\n");
	printf("\n\033[36m$ - YOU TOOK YOUR BEST DECISION TODAY\033[0m\n");
	printf("\n\033[36m$ - WELCOME TO SAGSAG OPERATING SYSTEM! \033[0m\n");
	printf("\n");
	printf("\n\033[33m$ - Enjoy :) \033[0m\n");
	printf("\n");
	printf("\033[33m$ - To Exit = ^z \033[0m\n");
	printf("\n");
	printf("\033[33m$ - COMMANDS in the system  = H \033[0m\n");
	printf("\n");

	while((c = getchar()) != '\n' && c != EOF);
	while(1)
	{
		printf("\033[32m%s_root\033[0m\033[37m@\033[0m\033[35mMAIN_MENU\033[0m:$ ", Q->name);
		if(fgets(buffer, sizeof(buffer), stdin) == NULL)
		{
			printf("\nINPUT ERROR OR EOF DETECTED\n");
			break;
		}
		buffer[strcspn(buffer, "\n")] = 0;
		if(strcmp(buffer,"wmi") == 0)
		{
			printf("%s\n", Q->name);
		}
		if(strcmp(buffer,"where") == 0)
		{
			printf("At the age of %d talking to a computer instead of working out or getting social\n", Q->data);
		}
		if(strcmp(buffer,"H") == 0)
		{
			printf(" wmi = Who Am I\n");
			printf(" where = Where am I\n");
			printf(" cal = Calander\n");
			printf(" xor = XOR Encrypt a string\n");
		}
		if(strcmp(buffer,"cal") == 0)
		{
			cal();
		}
		if(strcmp(buffer,"xor") == 0)
		{
			xor();
		}
		else if(strcmp(buffer,"") == 0)
		{
			continue;
		}
	}
	return 0;	
}

int main()
{
	int age = 0;
	char* name[MAX_LEN];
	Linux *lin = malloc(sizeof(Linux));
	if(lin == NULL)
	{
		printf("Allocation Failed\n");
		exit(1);
	}
	int result = print(lin);
	free(lin);
	return result;
}
