#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char OutFile[80];   // output file name
    ofstream OutStream; // open an output stream

    cout << "Please enter output file name: ";
    cin >> OutFile;

    OutStream.open(OutFile, ios::out | ios::trunc);

    // make sure file is successfully opened
    if (!OutStream)
    {
	cout << "Error open file " << OutFile << " for writing\n";
	return 1;
    }

    // Write the following two lines to file
    OutStream << "It is easier to resist at the beginning than at the end.\n";
    OutStream << "                 -- Leonardo da Vinci" << endl;

    OutStream.close(); // close output stream

    cout << "Content written to " << OutFile << ".\n";

    return 0;
}
