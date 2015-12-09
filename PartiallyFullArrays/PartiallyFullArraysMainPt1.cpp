// This program demonstrates how to use partially full arrays
// PartiallyFullArrays.exe
// Programmer: Andrew Thomas
// 12/9/2015

#include "PartiallyFullArraysPt1Header.h"
#include <iostream>
#include <string>
using namespace std;

void main(){
	const int SIZE = 3;
	int logicalSize;
	double studentScores[SIZE];
	
	showTitle();

	cout << endl << endl;

	while (true){
		cout
			<< "Enter the students' scores. Enter a negative value to stop." << endl
			<< "\t [Physical size of the array is " << SIZE << "]";

		logicalSize = loadStudentScores(studentScores, SIZE);

		cout
			<< endl << endl
			<< "\t Done loading scores" << endl
			<< "\t Logical size is " << logicalSize << endl;

		cout << "Hit enter to see the array.";
		cin.get();

		cout << endl << endl << "Now printing the scores: " << endl;
		printArray(studentScores, logicalSize);

		cout << endl << endl << "=================================================" << endl << endl;
	}
}