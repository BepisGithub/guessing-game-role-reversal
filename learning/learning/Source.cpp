#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <cstdlib>
#include <ctime>

void pause() {
	std::cout << std::endl; //flush the stream
	std::cin.clear(); //clear the input stream
	int x;
	std::cin >> x;
}

void guessLowRandomNum(int &pGuess,std::vector<int> &lVector) {
	//store answer in low vector
	//bla bla programguess += 1+(rand()%9) 
	//check biggest element in vector 
	//if programguess smaller than biggest element in vector generate a new num till it isnt
	//probably using a while loop
	//once its higher return it

}

void guessHighRandomNum(int &pGuess,std::vector<int> &hVector) {
	//store answer in low vector
	//bla bla programguess = programguess - 1+(rand()%9) 
	//check smallest element in vector 
	//if programguess bigger than smallest element in vector generate a new num till it isnt
	//probably using a while loop
	//once its lower return it
}



int main() {
	std::vector<int> guessesTooLow;
	std::vector<int> guessesTooHigh;
	int programsGuess;
	char userAnswer;
	bool isCorrect = false;
	srand(time(0));
	programsGuess = rand();
	std::cout << "Ok think of a random number \n";

	while (true) {
		if (!(isCorrect)) {
			std::cout << "My guess is " << programsGuess << std::endl;
			std::cout << "If I was correct type c, if my guess was lower than the number you were thinking of type l and if it was higher type h " << std::endl;
			std::cin >> userAnswer;
			switch (userAnswer) {
			case 'c':
				isCorrect = true;
				std::cout << "Nice, the number you were thinking of was " << programsGuess;
				break;
			case 'l':
				std::cout << "My guess was too low! \n";
				guessesTooLow.push_back(programsGuess);
				guessLowRandomNum(programsGuess,guessesTooLow);
				break;
			case 'h':
				std::cout << "My guess was too high! \n";
				guessesTooHigh.push_back(programsGuess);
				guessHighRandomNum(programsGuess, guessesTooHigh);
				break;
			}
		}
		else {
			std::cout << "Congrats you have won the game ! \n";
			std::cout << "Would you like to try again? y or n \n";
			std::cin >> userAnswer;
			switch (userAnswer) {
			case 'y':
				isCorrect = false;
				programsGuess = rand();
				guessesTooLow.clear();
				guessesTooHigh.clear();
				break;
			default:
				std::cout << "ok have a good day bitch \n";
				break;
			}
		}
		pause();
	}
}





//user thinks of number x     22
//program creates a number  10
//program puts out the number is your number 10?
//if number is too high minus a random value between 1-5 for example
//if number is too low add a random value between 1-5 for example add 5        15 is your number....      17....... 20 ....... 23 cant go below 20 now 

//maybe make an array of guesses that were too low and make sure new guess isnt smaller than the biggest number in the array
//likewise make an array of guesses that were too high make sure new guess isnt smaller than the biggest number in the array

//keep this guess in a loop
