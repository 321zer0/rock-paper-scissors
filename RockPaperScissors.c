/*
Project: Rock-Paper-Scissors Game
File: RockPaperScissors.c
Author: Muzaffar Auhammud
Date: January 31, 2018
License: MIT License
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int get_random(int min, int max)
{
    srand(time(NULL));
    return (rand() % (max - min)) + min;
}

int main()
{
    int user_choice;
    int computer_choice = get_random(1, 3);

    printf("1) Rock \n2) Paper \n3) Scissors \nYour choice (1 - 3): ");
    scanf("%d", &user_choice);
	
	while(user_choice < 1 || user_choice > 3)
	{
		printf("\n");
		printf("1) Rock \n2) Paper \n3) Scissors \nYour choice (1 - 3): ");
		scanf("%d", &user_choice);
	}

	printf("\n");
	
    switch(user_choice)
    {
        case 1:
            if(computer_choice == 1)
            {
                printf("Computer: Rock. You: Rock. It's a tie!");
            }
            else if(computer_choice == 2)
            {
                printf("Computer: Paper. You: Rock. You lose :(");
            }
            else if(computer_choice == 3)
            {
                printf("Computer: Scissors. You: Rock. You win! :D");
            }
            break;


        case 2:
            if(computer_choice == 1)
            {
                printf("Computer: Rock. You: Paper. You win! :D");
            }
            else if(computer_choice == 2)
            {
                printf("Computer: Paper. You: Paper. It's a tie!");
                
            }
            else if(computer_choice == 3)
            {
                printf("Computer: Scissors. You: Paper. You lose :(");
            }
            break;

        case 3:
            if(computer_choice == 1)
            {
                printf("Computer: Rock. You: Scissors. You lose :(");
            }
            else if(computer_choice == 2)
            {
                printf("Computer: Paper. You: Scissors. You win! :D");
            }
            else if(computer_choice == 3)
            {
                printf("Computer: Scissors. You: Scissors. It's a tie!");
                
            }
            break;
    }
	
	getch();
    return 0;
}