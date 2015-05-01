#include <iostream>
#include <cstdlib>
#include "../include/BST.h"

using namespace std;

int choose =1;
void main()
{
	BST Tree1;
	while (choose != 0)
	{
		cout << "Please Select:" << endl;
		cout << "0: Exit" << endl << "1: Add value to Tree" << endl;
		cin >> choose;
		switch (choose)
		{
		case 0:
			break;
		case 1:
			int value;
			cout << "Please enter the value to enter in the BST:";
			cin >> value;
			Tree1.CreateLeaf(value);
			break;
		default:
			cout << "This is not in the range please try another opetion." << endl;
		}
	}
	//system("PAUSE");
}