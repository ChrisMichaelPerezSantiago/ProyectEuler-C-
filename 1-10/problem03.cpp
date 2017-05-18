
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Problem: Largest prime factor
    Problem 3

    @Author: Chris M.
    @Date:   5/17/2017
*/

void LargestPrimeFactorization(long long);


int main() {
    LargestPrimeFactorization(600851475143);
    return 0;
}

void LargestPrimeFactorization(long long arg){
  int i;
  for(i = 2;i < arg;i++){
    while(arg % i == 0){
      arg /= i;
    }
  }
  cout << i << endl;
}
