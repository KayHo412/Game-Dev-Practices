#include <iostream>
using namespace std;

void welcome();
char getYesNo();
void printRespond(char responseToPrint);
void AskUser();

int main()
{
	// Asks user to enter Y or N and returns the response
	AskUser();

	system("pause");
}

void welcome()
{
	// Welcomes the user to the program
	cout << "Welcome to C++ programming!" << endl;
}

char getYesNo()
{
	// Asks user to enter Y or N and returns the response
	cout << "Please enter Y or N: " << endl;

	char response;

	// Get user input from keyboard
	cin >> response; 

	return response;
}

void printRespond(char responseToPrint)
{
	// Prints the response entered by the user
	cout << "You entered: " << responseToPrint << endl;
} 

void AskUser()
{
	// Calls other functions to welcome user, get response, and print response
	welcome();

	char answer = getYesNo();

	printRespond(answer);
}