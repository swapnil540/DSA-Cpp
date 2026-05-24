#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "enter size of array: " ;
    cin >> n;
  
    // int n = sizeof(arr) / sizeof(int);

    int arr[n] ;
    //input array
    cout << "enter " << n << " array elements: ";

    for(int i=0; i<n; i++) {

        cin >> arr[i];

    }



    // output array
    //print array elements

    for(int i=0; i<n; i++) {
        cout << "element at index " << i << " : " << arr[i] << endl;
    }
}

