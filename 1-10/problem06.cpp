
#include <iostream>
using namespace std;

/*
    Problem: Sum Square Difference
    Problem 6

    @Author: Chris M.
    @Date:   5/18/2017
*/

void sumSquareDifference(int);

int main() {
    sumSquareDifference(100);
    return 0;
}

void sumSquareDifference(int arg){
  int sumSquare = 0;
  int squareSum = 0;

  for(int i=1;i<=arg;i++){
    sumSquare += i * i;
    squareSum += i;
  }

  cout << (squareSum * squareSum) - sumSquare << endl;
}
