#include <iostream>
using namespace std;

struct Array
{
    int *arr;
    int cap;
    int size;
  
   
};

void createArr(Array *arr,int cap,int size){
    arr->cap= cap;
    arr->size = size;
    arr->arr = new int[size];
};

void printArray(Array *a){
  for (int i = 0; i < a->size; i++)
  {
    cout << a->arr[i]<<" "; 
  };

};

void setvalues(Array *a){
 int x;
 for (int i = 0; i < a->size; i++)
 {
  cout<<" Enter element at " << i <<" ";
  cin >> x;
  a->arr[i] = x ;
 };
  

};

int main(int argc, char const *argv[])
{
    Array arr;
    int capacity,size;
    cout<<" enter capacity and size of array "<<endl;
    cin>>capacity>>size;
    createArr(&arr,capacity,size);
    setvalues(&arr);
    printArray(&arr);
    return 0;
}
