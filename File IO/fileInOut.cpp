#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string fileName, line;

	cout << "name new text file: ";
	cin >> fileName;

	ofstream fout (fileName);

	if (fout.is_open())
	{
		cout << "opening file... " << endl;
		cout << "writing to file..." << endl;
		fout << "test line 1\n";
		fout << "test line2\n";
	}
	else
	{
		cout << "file could not be created..." << endl;
	}

	fout.close();
	cout << "closing file..." << endl;

	cout << endl;

	cout << "enter name of file to open: ";
	cin >> fileName;

	ifstream fin (fileName);
	if (fin.is_open())
	{
		cout << "opening file..." << endl;
		cout << "reading from file" << endl;
		cout << "*********************\n" << endl;
		while(getline(fin, line))
		{
			cout << line << endl;
		}
		cout << "\n*********************" << endl;
		cout << "finished rading from file " << fileName << endl;
		cout << "now closing file..." << endl;
		fin.close();
	}
	else
	{
		cout << "could not open file " << fileName << endl;
	}


	return 0;
}