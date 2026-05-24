#include<iostream>
#include<cstring>
using namespace std;

void reverseCharArr(char arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        // swap
        // swap(arr[start], arr[end]);
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    cout << arr << endl;
}

int main() {
    char arr[] = "iran";

    reverseCharArr(arr, strlen(arr));
}