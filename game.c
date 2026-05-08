//Contributors
//GP
//
//



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void jbInit(void);
void ip21(void);
void folksamEV(void);
void rtFun(void);
void JLeyva(void);
void fish(void);
void printStudent30(void);
void printInitialsAjewett(void);
void jgFun(void);
void playRoom1(void);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 75 doors, each labeled with a number.");
		puts("The room starts filling with water and a loud voice tells you that you must choose a door to open and enter or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				playRoom1();
				break;
			}
			case 70:
			{
				puts("room70");
				break;
			}
			case 71:
			{
				puts("room71");
				break;
			}
			case 72:
			{
				puts("room72");
				break;
			}
			case 73:
			{
				puts("room73");
				break;
			}
			case 74:
			{
				puts("room74");
				break;
			}
			case 75:
			{
				puts("room75");
				break;
			}
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

void playRoom1(void) 
{
	int i, decision, rNum;
	char inventory[3][20] = {"Sword", "Shield", "Potion"};
	int hasItem = 0;

	rNum = rand() % 10 + 1;

	printf("You enter a dusty room. You see a glint in the corner.\n");
	printf("1. Inspect the glint\n2. Ignore it and walk forward\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("You found a %s! But it crumbles to dust.\n", inventory[0]);
	} else {
		printf("You step carefully.\n");
	}

	printf("A goblin drops from the ceiling! It rolled a %d for initiative.\n", rNum);
	printf("1. Attack\n2. Defend\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("You attack the goblin!\n");
	} else {
		printf("You block the goblin's strike!\n");
	}

	printf("The goblin drops a chest.\n");
	printf("1. Open it\n2. Leave it\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		for (i = 0; i < 3; i++) {
			printf("Checking compartment %d...\n", i + 1);
		}
		printf("You found a %s!\n", inventory[2]);
		hasItem = 1;
	} else {
		printf("You walk past the chest.\n");
	}

	printf("A large door blocks your path with a riddle.\n");
	printf("1. Try to solve it\n2. Try to smash the door\nChoice: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("You speak the password and the door opens.\n");
	} else {
		printf("You bounce off the heavy iron door and eventually figure out the password.\n");
	}

	printf("You reach the end of the room.\n");
	printf("1. Return to the main hall\n2. Search the room one last time\nChoice: ");
	scanf("%d", &decision);

	if (decision == 2 && hasItem == 0) {
		printf("You find nothing else.\n");
	}
	
	printf("You leave the room.\n");
}

void folksamEV(void) 
{
	printf("EV\n");
}

void jbInit(void)
{
	puts("jbRoom17");
}

void ip21(void)
{
	printf("IP\n");
}

void rtFun(void)
{
	printf("RT");
}

void JLeyva(void)
{
	printf("JL");
}

void fish(void) 
{
	printf("JF");
}

void printStudent30(void)
{
	printf("Student initials CP\n");
	return;
}

void printInitialsAjewett(void)
{
	printf("AJ\n");
}
