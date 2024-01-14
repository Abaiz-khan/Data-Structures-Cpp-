#include <iostream>
using namespace std;


void search(int arr[],int index,int n){
  
  
    cout << arr[index] <<" is the value your searching for " << endl;
  

  } 


void traverse(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<"-";
  }
  
}

int del(int arr[],int n,int index){
  for (int i = index; i < count; i++)
  {
    arr[i] = arr[i+1];
  }
  
  return n-1;
}


int insertion(int arr[],int n,int index,int val){
 for (int i = n-1; i >= index; i--)
 {
  arr[i+1] = arr[i];
 }
 arr[index] = val;
 return (n+1);
}

void updation(int arr[],int n,int index,int val){
  arr[index] = val;
  return;
}

void searchh(int arr[],int n,int index){
 cout<< arr[index] <<<"is the value";
}

int main(int argc, char const *argv[])
{
  int n ;
  int index;
  cout << "enter size : ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter value at " << i << endl;
    cin>> arr[i];
}

    cout<<"enter index to be searched: " ;
    cin >> index;
   search(arr,index,n);
    return 0;
}
