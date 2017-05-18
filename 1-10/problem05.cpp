
#include <iostream>
using namespace std;

/*
    Problem: Smallest Multiple
    Problem 5

    @Author: Chris M.
    @Date:   5/18/2017
*/

void smallestMultiple(int);

int main() {
    smallestMultiple(20);
    return 0;
}

void smallestMultiple(int arg){
  bool flag = true;
  int actualValue = arg;

  while(true){
    for(int i=1;i<=arg;i++){
      flag = true;

      if((actualValue % i) != 0){
        flag = false;
        break;
      }
    }

    if(flag){
      break;
    }
    actualValue++;
  }
  cout << actualValue << endl;
}
