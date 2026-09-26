#include <iostream>

using namespace std;

int main() {
	// here is all the variable we use though out the program
	int i;
	double grade1;
	double grade2;
	double grade3;
	double Average;
	// her is all the fuction we are use for menu, add grade and find Average 
	void Menu();
	void inputGrades(double& g1, double& g2, double& g3);
	double calculateAverage(const double g1, const double g2, const double g3);

	// here we give the user a list to choose and get their answer after
	Menu();
	cin >> i;

	do {
		// we use the answer to choose case and their code inside that case
		switch (i) {
		case 1:
			//we get each grade from user
			cout << "enter grade 1" << endl;
			cin >> grade1;
			
			
			cout << "enter grade 2" << endl;
			cin >> grade2;
			
			
			cout << "enter grade 3" << endl;
			cin >> grade3;
			
			// then check if any is over 100 or under 0 for each grade
			if ( grade1 < 0 || grade1 > 100) {
				cout << "grades is out of bounds of the range" << endl;

				break;
			}
			if (grade2 < 0 || grade2 > 100) {
				cout << "grades is out of bounds of the range" << endl;

				break;
			}
			if (grade3 < 0 || grade3 > 100) {
				cout << "grades is out of bounds of the range" << endl;

				break;
			}

			// if the input is anything but a number
			 else if (cin.fail()) {
				cin.clear();
				cin.ignore();
				cout << "invaild try again" << endl;

				break;
			}
			// we get the grade and store them for the other cases
			else {
				inputGrades(grade1, grade2, grade3);
				Menu();
				cin >> i;
				break;
			}
		case 2:
			// we use this to get the calculate for average and get back to use inside this case
			Average = calculateAverage(grade1, grade2, grade3);
			
			//then print out for the user 
				cout << "The average is " << Average << endl;
				Menu();
				cin >> i;
				break;
			
		case 3:
			// we do again to get average
			Average = calculateAverage(grade1, grade2, grade3);
			
			
				//then we find the grade letter by use the average to get it
				if (Average <= 100 && Average >= 90) {
					cout << "the grade latter is A" << endl;
					Menu();
					cin >> i;
					break;
				}
				if (Average <= 89 && Average >= 80) {
					cout << "the grade latter is B" << endl;
					Menu();
					cin >> i;
					break;
				}
				if (Average <= 79 && Average >= 70) {
					cout << "the grade latter is C" << endl;
					Menu();
					cin >> i;
					break;
				}
				if (Average <= 69 && Average >= 60) {
					cout << "the grade latter is D" << endl;
					Menu();
					cin >> i;
					break;
				}
				if (Average <= 59 && Average >= 0) {
					cout << "the grade latter is F" << endl;
					Menu();
					cin >> i;
					break;
				}
			
		case 4:
			// user use this to leave/end the program
			cout << "now exiting program" << endl;
			break;
			//if they input a number out of bound of the range or that is isn't a number use this
		default:
			if (cin.fail()) {
				cin.clear();
				cin.ignore();
				cout << "invaild try again" << endl;
				Menu();
				cin >> i;
				break;
			}
			else {
				cout << "invaild try again" << endl;
				Menu();
				cin >> i;
				break;
			}
			
		}
		
// this is a loop until we hit 4 to stop the loop
	} while (i != 4);
	// this help end/finish the program
	return 0;
}
//we use this for the menu for the user and to use less time to use it and less cutter
void Menu() {
	cout << "1 Input Grade" << endl;
	cout << "2 Calcutate and Display Average" << endl;
	cout << "3 Assign and Display Letter Grade" << endl;
	cout << "4 quit" << endl;
}
// use to storge the grade here for later use in the program
void inputGrades(double& g1, double& g2, double& g3) {
	g1 = g1;
	g2 = g2;
	g3 = g3;

}
// them use this to calculate to get the average
double calculateAverage(const double g1, const double g2, const double g3) {
	double Average;
	Average = (g1 + g2 + g3) / 300;
	// then we use this to make the number a whole number for easy use in the program for later use
	Average = Average * 100;
	return Average;

}
