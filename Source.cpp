#include <iostream>
#include <cstdlib>
#include <string>

void msg_prompt() { //Function for menu interface
	std::cout << "Input number to choose command: " << std::endl;
	std::cout << "(1) dir: " << std::endl;
	std::cout << "(2) cd: " << std::endl;
	std::cout << "(3) mkdir: " << std::endl;
	std::cout << "(4) echo: " << std::endl;
	std::cout << "(5) type: " << std::endl;
	std::cout << "(6) EXIT: " << std::endl;
	std::cout << "User input: ";
}

void check_exec(int result) { // Returns std::cout string depending on returned integer from system() function
    if (result == 0){
        std::cout << std::endl <<  "Command executed successfully." << std::endl;
    }
    else {
        std::cout << "Command executed unsuccessfully." << std::endl;
    }
}

void exec_command() {
    char command [1000]; // Creates char stream since system() has char* as an input
    std::cout << "Enter the command: ";
    std::cin.getline(command, 1000); //  Gets user input, while accepting " " 
    int result = system(command); // returns 0 or 1 from system command
    check_exec(result); // executed function to return message
}


void parse_input(int input) { // Simple switch case depending on user input
    int result = 0;
    switch (input) {
    case 1:
        std::cout << "You entered 1, executing dir..." << std::endl;
        system("dir");
        break;
    case 2:
        std::cout << "You entered 2, executing cd... please enter directory path. (cd directory_path && dir)" << std::endl;
        exec_command();
        break;
    case 3:
        std::cout << "You entered 3, executing mkdir... please enter new directory name. (mkdir directory_name)" << std::endl;
        exec_command();
        break;
    case 4:
        std::cout << "You entered 4, executing echo... please enter echo. (echo echo)" << std::endl;
        exec_command();
        break;
    case 5:
        std::cout << "You entered 5, executing type... please enter type. (type file.txt) NOTE: to concat do 'type typetest.txt >> typetest2.txt' (first copied to second), then run type again to display" << std::endl;
        exec_command();
        break;
    case 6:
        std::cout << "You entered 6, exiting program..." << std::endl;
        break;
    default:
        std::cout << "You entered " << input << ", invalid input." << std::endl;
        std::cin.clear(); //Code snipit to clear any error flags to prevent infinite loop by resetting the streams state, stream tries to continuously read the input otherwise
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // In case of string or char input, clears input buffer after invalid input
    }
}

int main() {
	int input = 0;
	while (input != 6) { // conditional for exit
		msg_prompt(); // calls function for menu display
		std::cin >> input; // numberical input
        std::cin.ignore(); // fixes the buffer for string input
        parse_input(input); // calls function given numerical input
	}

	return 0;
}