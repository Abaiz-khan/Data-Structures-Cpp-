#include <iostream>
using namespace std;

void updation(int arr[],int n, int index, int value){
    
    
        arr[index] = value ;
    
};


void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
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
  traverse(arr,n);
  cout << "index to be updated ";
  cin >> index;
  cout << "enter the value  ";
  cin >> value;
  updation(arr,n,index,value);
 traverse(arr,n);

    return 0;
}

