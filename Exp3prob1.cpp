#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
  int  size=15, array[50], i, j, temp, total, ave;
 
  cout<< "Please enter 15 numbers: ";
  for (i=0; i<size; i++)
  {
      cin>> array[i];
  }
  cout << endl;
  
  for (i=0; i<size; i++)
  {
      for (j=i+1; j< size; j++)
      {
          if(array[i]> array[j])
          {
              temp = array[i];
              array[i]= array[j];
              array[j]=temp;
          }
      }
  }
  
  cout<< "Array after sorting in ascending order: \n";
  for (i=0; i<size; i++)
  {
      cout <<array[i]<<" ";
  }
  cout << endl;
  cout<< "\n the smallest number is: "<< array[0];
  cout << endl;
  cout<< "\n the largest number is: " << array[14];

for (i=0; i< size; i++)
{
    total+=array[i];
}

cout << endl;
 cout<< "\ntotal: "<<total; 
 
 ave = total/15;
 cout << "\naverage: "<< ave;
 
 getch();
  return 0;
}
  

