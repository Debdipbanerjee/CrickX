/*
CrickX is A Game That Resembles Real Life Cricket But in a Logical Fashion
Made By: Debdip Banerjee
Date: 30th May,2019
*/


#include<iostream>		//To Recieve Input & Print Output
#include<cstdlib>		//To Use rand() & srand() functions
#include<ctime>			//To Use time to genereate Random Numbers
#include<string>		//To Use String Operations


void Intro(); //Function Of Introduction Of the Game
int PlayGame(); //Function Declaration For Main Game
int Display(int Ball, int Bat, int Score, int Wicket); //Function To Display The Scores
bool AskToPlayAgain(); //Function To Play Again

					   //Main Function of the Program
int main()
{
	Intro();	//To Introduce the Game & Rules
	PlayGame(); //Function Of the Main Game Logic
	AskToPlayAgain();	//To Play Again
	return 0;
}

//Function For Intro
void Intro()
{
	std::cout << "WELCOME To CRICKx" << std::endl;
	std::cout << "Here You'Re Going To Play Cricket In Different Style" << std::endl;
	getchar();
	std::cout << "***********READ THESE 6 RULES CAREFULLY***************" << std::endl;
	getchar();
	std::cout << "****RULES****" << std::endl;
	std::cout << "1.Wicket: User Needs To Enter How Many WICKETS He/She Wants To play with" << std::endl;
	std::cout << "2.Overs: User Needs To Enter How Many OVERS He/She Wants To play" << std::endl;
	std::cout << "3.Batting: User have To Enter a Number Between Given Range" << std::endl;
	std::cout << "4.Bowling: Computer Will Generate a Number Between Given Range" << std::endl;
	getchar();
	std::cout << "5.OUT: Different Types Of OUT" << std::endl;
	std::cout << "----RUN OUT: If User Input Is Less Than 0 " << std::endl;
	std::cout << "----CATCH OUT: If User Input Is Greater Than 6" << std::endl;

	std::cout << "----LEG BEFORE WICKET: If User Input Is 5" << std::endl;
	std::cout << "----BOWLED OUT: If User Input is Same AS Computer Generated Number" << std::endl;
	std::cout << "6.Score: If User Input & Computer Generated Numbers are Valid & Not Same.User Scores" << std::endl;
	std::cout << std::endl;
}

//Function Of Main Game Logic
int PlayGame()
{
	srand(time(NULL));	//Function To Generate Random Numbers Based On Result

	int Ball;	//Variable To Store The Ball
	int Bat;	//Variable To Store the Bat

	int Score = 0;	//Variable To Store the Score

	std::cout << "----****USER INPUTS****----" << std::endl; //It's Nothing
	int Wicket;		//Variable To Store the Wicket
	std::cout << "Enter Number of Wickets" << std::endl;	//User Input of Getting highest Wickets
	std::cin >> Wicket;

	int BallNumbers;		//Variable To Iterate Every Balls
	int MaxBallInOver = 6;		//Variable To Store Maximum Balls in a Over

	int Overs = 0;	//Variable To iterate Every Overs
	int MaxOvers;	//Variable To Store the Maximum Numbers of Overs
	std::cout << "Enter Number of Overs" << std::endl;		//Getting User Input Of Maximum Numbers of Overs
	std::cin >> MaxOvers;

	std::cout << "********Now You Can Play*************" << std::endl; //It's Nothing Also

	for (Overs; Overs <= (MaxOvers - 1); Overs++)	//For Iterrating Each & Every Over 
	{
		for (BallNumbers = 1; BallNumbers <= MaxBallInOver; BallNumbers++)	//For Iterating Each & Every Ball
		{
			if (Wicket != 0)	//Condition To check any Wickets Left
			{
				Ball = rand() % 6;	//Random Number Generated For Bowling

				std::cout << std::endl;
				std::cout << "Over:" << Overs << "." << BallNumbers << std::endl;	//Displaying Overs
				std::cout << "Enter a Number Between 0 - 6" << std::endl;		//User Input For Batting
				std::cin >> Bat;
				if (Bat < 0) //Condition For RUN OUT
				{
					std::cout << "****RUN OUT****" << std::endl;	//User is OUT
					Wicket--;	//One Wicket is gone
					Display(Ball, Bat, Score, Wicket);	//Displaying Score after Getting Out
				}
				else if (Bat > 6)	//Condition For CATCH OUT
				{
					std::cout << "****CATCH OUT****" << std::endl;	//User is OUT
					Wicket--;	//One Wicket is gone
					Display(Ball, Bat, Score, Wicket);	//Displaying Score after Getting Out
				}
				else if (Bat == 5)
				{
					std::cout << "****LEG BEFORE WICKET****" << std::endl;	//User is OUT
					Wicket--;	//One Wicket is gone
					Display(Ball, Bat, Score, Wicket);	//Displaying Score after Getting Out
				}
				else      //If Inputs are Valid
				{
					if (Bat == Ball)	//if User Input & Computer Generated Random Numebers are Same
					{
						std::cout << "****BOWLED OUt****" << std::endl;	//User is OUT
						Wicket--;	//One Wicket is gone
						Display(Ball, Bat, Score, Wicket);	//Displaying Score after Getting Out
					}
					else            //if User Input & Computer Generated Random Numebers are Not Same
					{
						Score = Score + Bat;	//Score Increases
						Display(Ball, Bat, Score, Wicket);	//Display Of Score
					}
				}
			}
			else           //If No Wicket is Left,You're Gone
			{
				std::cout << "All Wickets are Gone,Bye Bye" << std::endl;
				std::cout << "****FINAL SCORE: " << Score << "****" << std::endl;
				AskToPlayAgain(); //To play Again
			}
		}
	}
	if (Overs > (MaxOvers - 1))		//When Over is More Than Given Maximum Over
	{
		std::cout << std::endl;
		std::cout << "Your Innings is Complete" << std::endl;	//Game is Done
		std::cout << "****FINAL SCORE: " << Score << "****" << std::endl;

		AskToPlayAgain(); //To play Again
	}

	return 0;
}

//Function To Display Results
int Display(int Ball, int Bat, int Score, int Wicket)
{
	std::cout << "Bat: " << Bat << std::endl;
	std::cout << "Ball: " << Ball << std::endl;
	std::cout << "Score: " << Score << std::endl;
	std::cout << "Wickets: " << Wicket << std::endl;
	return 0;
}

//Function Asking To Play Again
bool AskToPlayAgain()
{
	std::cout << std::endl;
	getchar(); //Waiting For Input & Restrict computer from Taking Inputs Form Input Buffer
	std::cout << "Do you wanna Play again?" << std::endl;
	std::cout << "Y/N" << std::endl;
	std::string Response = "";
	getline(std::cin, Response);

	std::cout << "Your response is:" << Response << std::endl;		//If YES,Game Contineus
	if ((Response[0] == 'y') || (Response[0] == 'Y'))
	{
		PlayGame();
		AskToPlayAgain();
		return 1;
	}
	else if ((Response[0] == 'n') || (Response[0] == 'N'))		//If NO, Game ENDS
	{
		exit(0);
	}
	else
	{
		std::cout << "Please,give valid input" << std::endl;	//Anything other than  Yes or No is INVAILD
		AskToPlayAgain();
	}

	return false;
}