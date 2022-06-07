/* Week 02 Assignment:

Author:		John Lukomski

This Program will read in the amount of cheese in kg and output the amount of containers needed to hold that amount, the cost for that many
containers, and the profit for that many containers. */

//header files necessary
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//constant numbers
const double CHEESE_PER_CONTAINER = 2.76,
COST_PER_CONTAINER = 4.12,
PROFIT_PER_CONTAINER = 1.45;
const int TITLE_SIZE = 80;
const char TITLE_CHAR = '*', COST_PROFIT_CHAR = '.';
const string TITLE_WORDS = " The Cheese Calculator ";


int main()
{
	//declare variables
	int containerNum = 0,
		cheeseNum = 0,
		titleBorderSize = 0;
	double profit = 0.0,
		cost = 0.0,
		containerTemp = 0.0;
	string 	outString;


	//display title
	titleBorderSize = (TITLE_SIZE - TITLE_WORDS.length()) / 2;					//number of chars on each side of the words
	cout << setfill(TITLE_CHAR);
	cout << setw(TITLE_SIZE) << TITLE_CHAR << endl;
	cout << setw(titleBorderSize) << TITLE_CHAR;
	cout << TITLE_WORDS;
	cout << setw(titleBorderSize) << TITLE_CHAR << endl;
	cout << setw(TITLE_SIZE) << TITLE_CHAR << endl << endl;


	//prompt the user for amount of cheese
	cout << "Please enter the total number of kilograms of cheese produced: ";
	cin >> cheeseNum;

	//calculate and round to the number of whole containers
	containerTemp = cheeseNum / CHEESE_PER_CONTAINER;			//real (double) answer
	containerNum = static_cast<int>(containerTemp);								//integer answer
	containerTemp = containerTemp - containerNum;				//fractional portion of answer
	if (containerTemp >= 0.0)
		containerNum++;

	//output the number of containers
	outString = "The number of containers to hold the cheese is: ";

	cout << setfill('.');
	cout << outString << setw(TITLE_SIZE - outString.length()) << containerNum << endl;

	//calculate the profit and cost of the containers of cheese

	//cost calculation:
	cost = containerNum * COST_PER_CONTAINER;

	//profit claculation:
	profit = containerNum * PROFIT_PER_CONTAINER;

	//output the cost

	outString = "The cost of producing " + to_string(containerNum) + " container(s) of cheese is : ";

	cout << setfill('.');
	cout << outString << setw(TITLE_SIZE - outString.length())
		<< fixed << showpoint << setprecision(2) << cost << endl;

	//output the profit
	outString = "The profit from producing " + to_string(containerNum) + " container(s) of cheese is : ";

	cout << setfill('.');
	cout << outString << setw(TITLE_SIZE - outString.length())
		<< fixed << showpoint << setprecision(2) << profit << endl;

	cout << endl;

	system("pause");

	return 0;


	/*	Code I didn't use.
	//display title
	titleBorderSize = (TITLE_SIZE - TITLE_WORDS.length()) / 2;					//number of chars on each side of the words
	cout << setfill(TITLE_CHAR) << setw(TITLE_SIZE) << TITLE_CHAR << endl;
	cout << setfill(TITLE_CHAR) << setw(titleBorderSize) << TITLE_CHAR;
	cout << TITLE_WORDS;
	cout << setfill(TITLE_CHAR) << setw(titleBorderSize) << TITLE_CHAR << endl;
	cout << setfill(TITLE_CHAR) << setw(TITLE_SIZE) << TITLE_CHAR << endl << endl;*/


}