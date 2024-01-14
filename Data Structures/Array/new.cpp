#include <iostream>
using namespace std;


void traversal(int arr[],int n){
for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<"-";
}
cout<<"NULL";
return;
}

void deltetion(int arr[],int n,int index){
  for (int i = index; i < n; i++)
  {
    arr[i]=arr[i+1];
  }
  return n-1;
}


void insertion(int arr[],int n,int index,int value){
  for (int i = n; i >= index; i--)
  {
    arr[i+1] =arr[i];
  }
  arr[index] = value;
  return;
}


void search(int arr[],int n,int index){
  cout<<arr[index]<<" is the value.";
  return;
  
}





int main(int argc, char const *argv[])
{
  int n;
  cout<<"enter size: "<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout<<"val at "<<i<<" "<<endl;
    cin >> arr[i];
  }
  
  return 0;
}

