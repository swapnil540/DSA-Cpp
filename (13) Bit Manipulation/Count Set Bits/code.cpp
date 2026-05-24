#include<iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    // extract rem and add in count 
    while(num > 0) {
        int rem = num % 2;
        count += rem;
        num /= 2;
    }

    return count;

}

int main() {
   cout <<  countSetBits(15); // 4

}