#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char InFile[80];  // input file name
	char ch;
	
	ifstream InStream;

	cout << "This program reads the content of a file and ";
	cout << "prints it out on the screen." << endl;

	cout << "Enter input file name: " ;
	cin >> InFile;

	// Open file for input
	// in.open(fin); also works
	InStream.open(InFile, ios::in);

	// ensure file is opened successfully
	if(!InStream)
	{
		cout << "Error open file " << InFile << endl;
		return 1;
	}
	
	cout << "Here is the content of " << InFile << ":\n";
	// Read in each character until eof character is read.
	// Output it to screen.
	while (!InStream.eof()) {
		//Read each character.
		InStream.get(ch);    

		// make sure we don't write any odd characters on screen
		if (!InStream.eof()) 
		{
			cout << ch;  //Write to screen
		}
	}

	InStream.close();
}