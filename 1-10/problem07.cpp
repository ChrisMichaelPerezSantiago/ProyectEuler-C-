
#include <iostream>
#include <math.h>
using namespace std;

/*
    Problem: 10001st Prime
    Problem 7

    @Author: Chris M.
    @Date:   5/18/2017
*/

bool isPrime(int);
void primeNumbers(int);


int main() {
    primeNumbers(10001);
    return 0;
}

bool isPrime(int arg){
  int x;
  int counter;

  if(arg < 2){ return false; }
  if(arg == 2){ return true; }

  x = static_cast<int>(sqrt(arg));

  for(int i=2;i<=x;i++){
    if(arg % i == 0){
      return false;
    }
  }
  return true;
}

void primeNumbers(int arg){
  int x = 0;
  int counter = 0;

  while(counter != arg){
    x++;
    if(isPrime(x)){
      counter++;
    }
  }

  cout << x << endl;
}
