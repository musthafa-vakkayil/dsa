#include <iostream>

using namespace std;

int solution1(int n);
int solution2(int n);
int solution3(int n);

// Given a Number n write a function to find sum of first n natural numbers
// Order of groqth -> C < loglogn < logn < n^ 1/3 < n^ 1/2 < n < n^ 2 < n^ 3 < n^4 < 2^ n < n^n
int main(){
   int n = 5;
   int sum = solution1(n);
   cout << "Sum is " <<sum << endl;
}

// Order of Groqth -> Constant
int solution1(int n){
    return n * (n-1)/2;
}

// Order of Grwoth -> n
int solution2(int n){
    int sum = 0;
    for (int i=1; i<= n; i++){
        sum  += i;
    }
    return sum;
}

// Ordder of growth -> n ^ 2
int solution3(int n){
    int sum = 0;
    for (int i=1; i<= n; i++){
        for(int j=1; j<=i; j++){
            sum++;
        }
    }
    return sum;
}
