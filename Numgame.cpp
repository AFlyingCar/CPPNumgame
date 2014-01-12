#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	int choice;
	int mystnum;
	int turn = 0;

	srand(time(NULL));
	mystnum = (rand() % 100)+1;

	while(turn < 10 && choice != mystnum){
		cout << "Please enter a number between 1 and 100: ";
		cin >> choice;

		if(choice > mystnum){
			cout << "Too high!\n";
		}else if(choice < mystnum){
			cout << "Too low!\n";
		}

		turn++;
	}

	if(choice == mystnum){
		cout << "Congratulations! You guessed the number in " << turn << " turns!\n";

	}else if(choice != mystnum){
		cout << "Too bad. The correct number was " << mystnum << ".\n";

	}
	return 0;
}

char nuclear = '\u2622';
