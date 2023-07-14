// Zonte Bryant
// 10/27/2021
// Rock, Papper, Scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //random number

int main()
{
	int computerChoice = 0;
	char userChoice;
	char computerPlay;
	
	srand(time(NULL));
	computerChoice = rand() % 3 + 1; //random number from1 to 3.
	
	if(computerChoice == 1)  // 1 becomes the computer playing rock
	{
		computerPlay = 'r';
	}
	else if (computerChoice == 2)  //2 becomes the computer playing paper
	{
		computerPlay = 'p';
	}
	else 
	{
		computerPlay = 's';
	}
	// now get the users play
	
	printf("Please enter r(rock, p(paper), or s(scissors)! \n");
	scanf(" %c", &userChoice);
	
	while(userChoice != 'r' && userChoice != 'p' && userChoice !='s')
	{
		printf("That is not a legal input! \n");
		printf("Please enter r(rock), p(paper), or s(scissors)! \n");
		scanf(" %c", &userChoice);
		
		
	}
	
	system("pause");
	printf("1\n");
	system("pause");
	printf("2\n");
	system("pause");
	printf("3\n");
	
	if(computerPlay == 'r' && userChoice =='p')
	{
		printf("The computer chose %c and you chose %c. YOU WIN! \n\n", computerPlay, userChoice);
	}
	else if(computerPlay == 'r' && userChoice =='s')
	{
		printf("The computer chose %c and you chose %c. THE COMPUTER WINS! \n\n", computerPlay, userChoice);
	}
	else if(computerPlay =='p' && userChoice =='s') 
	{
		printf("The computer chose %c and you chose %c. YOU WIN!! \n\n", computerPlay, userChoice);
	}
	else if(computerPlay =='s' && userChoice =='r') 
	{
		printf("The computer chose %c and you chose %c. YOU WIN!! \n\n", computerPlay, userChoice);
	}
	else if(computerPlay =='s' && userChoice =='p') 
	{
		printf("The computer chose %c and you chose %c. THE COMPUTER WINS!! \n\n", computerPlay, userChoice);
	}
	else 
	{
		printf("The computer chose %c and you chose %c. IT IS A TIE!!\n\n", computerPlay, userChoice);
	}
	
	
	
	
	
	return 0;
}
