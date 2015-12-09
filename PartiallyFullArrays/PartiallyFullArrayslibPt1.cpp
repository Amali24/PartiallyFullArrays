#include "PartiallyFullArraysPt1Header.h"
#include <iostream>
#include <string>
using namespace std;

void showTitle(ostream &output){                    //     DONE
	output
		<< "\t This program loads an array of doubles with students' scores" << endl
		<< "\t       using a negative value as the loop's sentinel" << endl
		<< "\t        setting physical size to 3 for easy testing" << endl
		<< "\t                        by A. Thomas";
}

double getNum(){                    //     DONE
	int x;

	while (!(cin >> x)){
		cin.clear();		cin.ignore(80, '\n');
		cout << "No Letters please. Try again: ";
	}
	cin.ignore(80, '\n');
	
	return x;
}

double getNumLessThan(double lessThan, string numType){                    //     DONE
	int x = getNum();
	
	while (x > lessThan){
		cout << "Invalid" << numType << ". " << numType << "s must be less than" << lessThan;
		x = getNum();
	}
	
	return x;
}

int loadStudentScores(double numArray[], int size){                    //     DONE
	double grade;
	
	int logical = 0;
	
	for (; logical < size; logical++){  //  ???
		cout << "\nEnter the score for student " << logical + 1 << ": ";
		grade = getNumLessThan(100, "Score");

		if (grade < 0)
			return logical;
		
		numArray[logical] = grade;
	}

	cout << "Array FULL! Cannot accept any more scores.";

	return logical;
}

void printArray(const double numArray[], int size, int numPerLine, ostream &output){                    //     DONE
	for (int i = 0; i < size; i++)
		output << numArray[i] << ((i + 1) % numPerLine == 0 ? "\n" : "\t");
}