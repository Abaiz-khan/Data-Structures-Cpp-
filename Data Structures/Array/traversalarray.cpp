#include <iostream>         
using namespace std;

void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
};

int main(int argc, char const *argv[])
{
     int n;
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

    return 0;
}
