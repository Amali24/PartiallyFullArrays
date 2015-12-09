#include <iostream>
using namespace std;

// Preconditions : "output" must be connected
// Postconditions: Prints title block to "output"
void showTitle(ostream &output = cout);

// Preconditions : NONE
// Postconditions: Return valid double
//				 : Restores cin object if necessary
//				 : Removes everything from keyboard buffer
double getNum();

// Preconditions : "numType" is "name" of numbers (e.g. "scores")
// Postconditions: Returns valid double smaller than "lessThan"
//				 : Restores cin object if necessary
//				 : Removes everything from keyboard buffer
double getNumlessThan(double lessThan, string numType);

// Preconditions : "size" is logical size of "numArray"
//				 : 0 <= "size" <= physical size of "numArray"
// Postconditions: Loads an array with user inputted doubles (negative sentinel terminates)
//				 : Returns logical size of "numArray"
int loadStudentScores(double numArray[], int size);

// Preconditions : "output" must be connected
//				 : "num1" is number of values to be printed per line
//				 : "size" is logical size of "numArray"
//				 : 0 <= "size" <= physical size of "numArray"
// Postconditions: Prints "numArray" to "output" with "num1" values per line
void printArray(const double numArray[], int size, int num1 = 5, ostream &output = cout);