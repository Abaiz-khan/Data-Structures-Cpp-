#include <iostream>
using namespace std;

void traverse(int arr[],int n){
    for (int i = 0; i < count; i++)
    {
        cout <<arr[i]<<"-";
    }
    cout<<"NULL";
    return;
}

void insertion(int arr[],int n,int index,int val){
    for ( i = n-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]= val;
    n+1;
    return;
}


void deletion(int arr[],int n,int index){
    for ( i = index; i < n; i++)
    {
        arr[i]=arr[i+1];
        return n-1;
    }
    
}

void search(int arr[],int n,int index){
    cout<<arr[index] <<" is the value"<<endl;
    return;
}



int main(int argc, char const *argv[])
{
    int n;
    cout <<"enter the size : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter val at "<<i<<" ";
        cin>>arr[i];
    }
    
    return 0;
}
