#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Task 3a
   NAME : ABDUL RAFAY
   ROLL NO : 23i-2027
   ASSIGNMENT 4 */

int main ()
{
	int choice1, num1, num2, num3, guess1, guess2, guess3;
	char choice2, choice3;
	cout << "\n\n\t\t:::   GUESSING GAMES   :::" << endl;
	cout << "\n1. Play Higher or Lower" << endl;
	cout << "2. Play Paper - Scissors - Rock" << endl;
	cout << "3. Guess the Numbers" << endl;
	cout << "4. Quit" << endl;
	cout << "\nEnter your Choice ( 1-4 ) : ";
	cin >> choice1;
		if ( choice1==1 )
		{
			srand ( time (0) );
			num1 = (rand () % 20) + 1;
			num2 = (rand () % 20) + 1;
			cout << "\n\nTHE FIRST NUMBER IS : " << num1;
			cout << "\n\n:: GUESS THE NEXT NUMBER ( 1-20 ) ::" << endl;
			cout << "\nEnter \'H\' for HIGHER" << endl;
			cout << "Enter \'L\' for LOWER" << endl;
			cout << "\nMake your choice : ";
			cin >> choice2;
				if ( num2>num1 )
				{
					if ( choice2=='H' || choice2=='h' )
					{
						cout << "\n\nYOUR GUESS WAS RIGHT!!\nYOU WIN";
						cout << "\n\nTHE SECOND NUMBER WAS " << num2;
					}
					else if ( choice2=='L' || choice2=='l' )
					{
						cout << "\n\nYOUR GUESS WAS NOT RIGHT!!\nYOU LOST";
						cout << "\n\nTHE SECOND NUMBER WAS " << num2;
					}
					else 
					cout << ":::   INAVLID INPUT   :::";
				}
				else if ( num1>num2 )
				{
					if ( choice2=='L' || choice2=='l' )
					{
						cout << "\n\nYOUR GUESS WAS RIGHT!!\nYOU WIN";
						cout << "\n\nTHE SECOND NUMBER WAS " << num2;
					}
					else if ( choice2=='H' || choice2=='h' )
					{
						cout << "\n\nYOUR GUESS WAS NOT RIGHT!!\nYOU LOST";
						cout << "\n\nTHE SECOND NUMBER WAS " << num2;
					}
					else 
						cout << ":::   INAVLID INPUT   :::";
				}
		}
		
		else if ( choice1==2 )
		{
			srand ( time (0) );
			num1 = (rand () % 3) + 1;
			cout << "\nTHE COMPUTER HAS MADE ITS CHOICE";
			cout << "\n\nEnter \'P\' for PAPER" << endl;
			cout << "Enter \'S\' for SCISSORS" << endl;
			cout << "Enter \'R\' for ROCK";
			cout << "\n\nMake your choice : ";
			cin >> choice3;
				if ( choice3=='P' || choice3=='p' )
				{
					if ( num1==1 )
						cout << "\n\nIT'S A DRAW";
					else if ( num1==2 )
						cout << "\n\nTHE COMPUTER WON";
					else
						cout << "\n\nYOU WON!";
				}
				else if ( choice3=='S' || choice3=='s' )
				{
					if ( num1==1 )
						cout << "\n\nYOU WON!";
					else if ( num1==2 )
						cout << "\n\nIT'S A DRAW";
					else
						cout << "\n\nTHE COMPUTER WON";
				}
				else if ( choice3=='R' || choice3=='r' )
				{
					if ( num1==1 )
						cout << "\n\nTHE COMPUTER WON";
					else if ( num1==2 )
						cout << "\n\nYOU WON!";
					else
						cout << "\n\nIT'S A DRAW";
				}
				else
				{
					cout << "\n:::   ERROR   :::";
					cout << "\n:::   INVALID INPUT   :::";
				}
		}
		else if ( choice1==3 )
		{
			srand ( time (0) );
			num1 = rand() % 10;
			num2 = rand() % 10;
			num3 = rand() % 10;
			cout << "\n\n   :::   GUESS THE 3 THREE NUMBERS   :::" << endl;
			cout << "\nEnter your First guess ( 0-9 ) : " << endl;
			cin >> guess1;
			cout << "Enter your Second guess ( 0-9 ) : " << endl;
			cin >> guess2;
			cout << "Enter your Third guess ( 0-9 ) : " << endl;
			cin >> guess3;
				if ( (guess1<0 || guess1>9) || ( guess2<0 || guess2>9 ) || ( guess3<0 || guess3>9) )
				{
					cout << "\n:::   INVALID INPUT   :::";
				}
				else if ( num1==guess1 && num2==guess2 && num3==guess3 )
				{
					cout << "\nTHREE MATCHING IN EXACT ORDER!";
				}
				else if ( !(num1==guess1 || num1==guess2 || num1==guess3 ) && !( num2==guess1 || num2==guess2 || num2==guess3 ) && !( num3==guess1 || num3==guess2 || num3==guess3 ) )
				{
					cout << "\nNO MATCHING NUMBERS!";
				}
				else if ( (num1==guess1 || num1==guess2 || num1==guess3 ) && ( num2==guess1 || num2==guess2 || num2==guess3 ) && ( num3==guess1 || num3==guess2 || num3==guess3 ) )
				{
					cout << "\nTHREE MATCHING, NOT IN ORDER!";
				}
				else if ( (num1==guess1 || num1==guess2 || num1==guess3 ) && ( num2==guess1 || num2==guess2 || num2==guess3 ) || ( num3==guess1 || num3==guess2 || num3==guess3 ) && ( num2==guess1 || num2==guess2 || num2==guess3 ) || (num1==guess1 || num1==guess2 || num1==guess3 ) && ( num3==guess1 || num3==guess2 || num3==guess3 )  )
				{
					cout << "\nTWO MATCHING!";
				}
				else if ( (num1==guess1 || num1==guess2 || num1==guess3 ) || ( num2==guess1 || num2==guess2 || num2==guess3 ) || ( num3==guess1 || num3==guess2 || num3==guess3 ) )
				{
					cout << "\nANY ONE MATCHING!";
				}
		}
		else
			cout << "\nYOU HAVE DECIDED TO QUIT!";
						
return 0;
}
