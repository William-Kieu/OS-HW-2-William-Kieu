This program provides a simple command-line interface for executing various commands such as dir, cd, mkdir, echo, and type. It prompts the user to input a number corresponding to the desired command and executes the selected command. Note, input the number first before inputting the command. The number input will bring you to the command line necessary for calling the system() function.

Formatting for execution is listed in message prompts from the console.
To run in Visual Studio, select the project folder in the project selection in Visual Studio. There are test folders and Txt files for program functionality in the source.cpp directory, or open source code in any project and run. There area no dependables for the source code so the execution is portable.

Functionality:
Menu Interface: Displays a menu interface with options for various commands.
Command Execution: Executes the chosen command based on user input.
Error Handling: Preventing infinite loops and providing feedback on command execution success or failure.

Supports Commands:
dir: Lists the files and directories in the current directory.
cd: Changes the current directory (Note: Only executes cd command; dir should be executed manually after cd).
mkdir: Creates a new directory.
echo: Displays the entered text.
type: Displays the contents of a text file. NOTE: to concat do 'type typetest.txt >> typetest2.txt' (first copied to second), then rerun type to display the concat file

There are several implementations of verifying correct input. Clearing error flags is implemented for successful program flow regardless of bad inputs. These programs should be run locally on your environment to mitigate security risks as the implemented commands could bloat and edit text files as well as open new directories. 

