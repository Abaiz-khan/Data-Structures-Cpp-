#include <iostream>         
using namespace std;

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
};

int deletionArr(int arr[],int n,int index){
for (int i = index; i < n; i++)
  {
    arr[i] = arr[i+1];
  }
  return n-1;
};

int main(int argc, char const *argv[])
{
     int n;
     int index;
    cout<<" enter size " << endl;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << " running traverse " << endl;
    traverse(arr, n);
    cout << " traverse successfull" << endl;
    
    cout<<"enter index to be deleted "<<endl; 
    cin >> index;
    deletionArr(arr,n,index);
    n = n-1; 
    traverse(arr,n);

    return 0;
};

