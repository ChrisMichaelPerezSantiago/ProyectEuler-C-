
#include <iostream>
using namespace std;

/*
    Problem: Largest palindrome product
    Problem 4

    @Author: Chris M.
    @Date:   5/18/2017
*/

bool isPalindrome(int);
void largestPalindrom(int);

int main() {
    largestPalindrom(999);
    return 0;
}

void largestPalindrom(int arg){
  int actual;
  int product;
  int last;

  for(int i=100;i<=arg;i++){
    for(int j=100000/i+1;j<=arg;j++){
      product = i * j;

      if(isPalindrome(product)){
        actual = product;

        if(actual > last){
          last = actual;
        }
      }
    }
  }
  cout << last << endl;
}

bool isPalindrome(int arg){
  int temp;
  int reversed = 0;
  bool isPal = false;

  temp = arg;

  while(temp > 0){
    reversed = reversed * 10 + temp % 10;
    temp = temp / 10;
  }

  if(arg == reversed){
    isPal = true;
  }
  return isPal;
}
