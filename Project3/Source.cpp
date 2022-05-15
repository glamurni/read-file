#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ofstream out;
	out.open("D:/nnn.txt");
	if (out.is_open())
	{
		out << "Привет мир! " << endl;
		out << "Как у вас дела ?" << endl;


	}
	//cout << "End of program" << endl;
	string line;
	ifstream in("D:/nnn.txt");
	if (in.is_open())
	{
		while (getline(in,line))
		{
			cout << line <<endl;
		}



	}
	in.close();
	//cout << "End of program" <<endl;
	cout << "Байты"<< endl<< sizeof(line) << endl;

	return 0;
}