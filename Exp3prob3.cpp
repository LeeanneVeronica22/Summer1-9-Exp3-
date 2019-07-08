#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{
	char arr[30];
	int pos;

	cout << "CODE: ";
	cin >> arr;
	cout << endl;
	
	pos =0;
	while(arr[pos] !='\0')
		pos++;
	cout << "REVERSED CODE: ";
		for(int a=pos-1;a>=0;a--)
		{
			cout << arr[a];
		}
	cout << endl;
	cout<< "\nARRAY SIZE: "<< pos;

	getch();
	return 0;
}

