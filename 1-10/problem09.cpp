#include <iostream>
using namespace std;

/*
    Problem: Special Pythagorean
    Problem 7

    @Author: Chris M.
    @Date:   5/18/2017
*/

bool PythagoreanTheorem(int);
void PythagoreanTriplet(int);


int main() {
    PythagoreanTriplet(1000);
    return 0;
}

bool PythagoreanTheorem(int a,int b,int c){
  return (a * a) + (b * b) == (c * c);
}

void PythagoreanTriplet(int arg){
  bool correctPythagoreanTriplet = false;
  int product;
  int k;

  for(int i=1;i<=arg/3;i++){
    for(int j=1;j<=arg/2;j++){
      k = arg - i - j;

      if(PythagoreanTheorem(i , j , k)){
        correctPythagoreanTriplet = true;
        product = i * j * k;
        break;
      }
    }

    if(correctPythagoreanTriplet){
      break;
    }
  }

  cout << product << endl;
}
