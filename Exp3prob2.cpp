#include <iostream>
#include <conio.h>
using namespace std;

 char prov='A';
 int Day = 7;
 int Province = 3;

int main()
{
    int tempertr[Province][Day];

    cout << "Please enter temperatures from day 1 to day 7 of provinces A, B, and C continuously.\n";
    cout << endl;
    

   for (char i = 0, prvnce='A'; i < Province; ++i, prvnce++)
    {
        for(int j = 0; j < Day; ++j)
        {
            cout << "Province " << prvnce << ", Day " << j + 1 << " : ";
            cin >> tempertr[i][j];
        }
    }

   
cout<<"\nDISPLAY: \n";
    for (char i = 0, prvnce = 'A' ; i < Province; ++i, prvnce++)
    {
        for(int j = 0; j < Day; ++j)
        {
            cout << "Province " << prvnce << ", Day " << j+1 << " = " << tempertr[i][j] << endl;
        }
    }
	getch();
    return 0;
}

