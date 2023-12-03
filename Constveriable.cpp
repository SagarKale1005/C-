#include<iostream>
using namespace std;
 int main()
 {
    int i=10;
    const int j=20;
   // const int k;    not allowed


    i++;    // Allowed
   // j++;  // not allowed

    return 0;
 }