This program provides a simple command-line interface for executing various commands such as dir, cd, mkdir, echo, and type. It prompts the user to input a number corresponding to the desired command and executes the selected command. Note,input number first before inputing command. The number input will bring you to the command line necessary for calling the system() function.

Formatting for execution is listed in message prompts from the console.
To run in visual studio, select project folder in project selection in Visual Studio. There are test folders and txt files for program functionality in the source.cpp directory, or open source code in any project and run.

Functionality:
Menu Interface: Displays a menu interface with options for various commands.
Command Execution: Executes the chosen command based on user input.
Error Handling: Preventing infinite loops and providing feedback on command execution success or failure.

Supports Commands:
dir: Lists the files and directories in the current directory.
cd: Changes the current directory (Note: Only executes cd command; dir should be executed manually after cd).
mkdir: Creates a new directory.
echo: Displays the entered text.
type: Displays the contents of a text file. NOTE: to concat do 'type typetest.txt >> typetest2.txt' (first copied to second), then run type again to display

