#include <iostream>
using namespace std;


void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};



int insertion(int arr[], int n,int index,int value)
 {
   for (int i = n-1; i >= index; i--)
   {
     arr[i+1] = arr[i];
     
   }
   arr[index] = value;
   return (n+1); 
 };


int main(int argc, char const *argv[])
{
  int index;
  int value;
  int n ;
  cout << "enter size : ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter value at " << i << endl;
    cin>> arr[i];
}

  cout << "----------------- TREVERSING -------------- " << endl;
    traverse(arr, n);
    cout << " traverse successfull" << endl;

  cout << "------------------ INSERTION ----------------"<< endl;
  

   cout<< "enter index on which you have to insert"<< endl;
   cin >> index;
   
   cout << "enter value to be inserted" << endl;
   cin >> value;
   insertion(arr,n,index,value);
   n = n+1;
   cout << n << endl;
  cout << "insertion successfull "<<endl;

 cout << "----------------- TREVERSING -------------- " << endl;
    traverse(arr, n);
    cout << " traverse successfull" << endl;
   return 0;
   }
