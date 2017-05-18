
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Problem: Even Fibonacci numbers
    Problem 2

    @Author: Chris M.
    @Date:   5/17/2017
*/

void fibonacci_secuence(int);
int fibonacci(int);

int main() {
    fibonacci_secuence(4000000);
    return 0;
}

void fibonacci_secuence(int arg){
  int sum = 0;
  int i = 1;

  while(true){
    if(fibonacci(i) >= arg) { break; }
    if(fibonacci(i) % 2 == 0){
      sum += fibonacci(i);
    }
    i++;
  }
  cout << sum << endl;
}

int fibonacci(int arg){
  static vector<int> v = {1 , 1};

  if(arg < v.size()-1){
    return v[arg];
  }

  int start = v.size();
  for(auto iter = start; iter - 1 < arg; ++iter){
    v[iter] = v[iter - 2] + v[iter - 1];
  }
  return v[arg];
}
