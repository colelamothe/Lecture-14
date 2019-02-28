// Lecture 14 supplementary program

#include <iostream>

using namespace std;

int main() {
	/*Midterm info
	- When writing hand code, start at the main loop, do not bother with #include and such preamble
	- 

	Things you may have forgotten
	- Casting variables to other datatypes for an operation
	- toupper()
	*/

	// Do While loop.
	/*
	// This structure is used the same as a while loop but it is evaluated for condition at the end of the loop rather than the start of the loop
	// This means that the loop will always run a minimum of once since the code is ran before the condition is checked.
	int i = 0;

	do {
		i++;
		cout << i << endl;
	} while (i < 10);

	// Even though this second statement is false before entering the loop, the loop runs once since the condition has not been evaluated yet.
	do {
		i++;
		cout << i << endl;
	} while (i < 5); // Condition returns false so it does not run a second time.
	*/
	// Loops can be stacked to acheive multiple effects
	/*
	int numberOfNumbers;
	int sum(0), currentNumber;
	char cont; // In this case we can initialize the variable but it does not need to be since it will not be checked before being reassigned. 

	do {
		cout << "How many numbers would you like to find the average of?" << endl;
		cin >> numberOfNumbers;


		for (int i = 0; i < numberOfNumbers; i++) { // 
			cout << "Insert a number: " << endl;
			cin >> currentNumber;
			sum += currentNumber;
		}
		cout << "The average is: " << (double)sum / numberOfNumbers << endl; // In this case we have cast the output to double so we can show non-integer averages from integer entries without using another variable.
		// At this point the program would exit without another loop but we can use a do while loop to allow the user to continue

		cout << "would you like to find another average? Y/N: " << endl;
		cin >> cont;
		cont = toupper(cont); // This allows us to write our conditional as simply as possible, otherwise our while would need an && to handle lowercase 'y'
	} while (cont == 'Y');
	*/
	// Using a while loop to solve factorials of large numbers.
	
	int factor;
	int total = 0;
	

	cout << "Please enter the number to calculate as a factorial: " << endl;
	cin >> factor;

	while (factor != 0) {
		if (total == 0) { // You can either initialize total as == 1 or include this if statement
			total = factor;
		}
		else {
			total = total * factor;
		}
		factor--;
	}
	cout << "The result is: " << total << endl;
	

	// Break and continue statements

	// The continue statement causes the program to exit out of the loop at that point and start again at the top of the loop

	for (int i = 0; i <= 10; ++i) {
		if (i % 2) { // This statement will check if the number is an even number and if it is returns 0 (false) or any remainder (true)
			continue; // This only runs on odd numbers and starts the loop back at the top. This causes the whole loop to only print even numbers.
		}
		cout << i << endl;
	}

	// This is the same as the above loop but for odd numbers instead of even.
	for (int i = 0; i <= 10; ++i) {
		if (!(i % 2)) { 
			continue;				// if numbers are even program goes back to top
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}