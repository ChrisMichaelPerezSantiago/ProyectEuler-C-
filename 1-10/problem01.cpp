
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Problem: Multiple of 3 and 5
    Problem 1

    @Author: Chris M.
    @Date:   5/17/2017
*/

void multiples(int);


int main() {
    multiples(1000);
    return 0;
}

void multiples(int arg){
  vector<int> v;
  vector<int> k;
  int sum = 0;

  for(int i=0;i<arg;i++){
    v.push_back(i);
  }

  for(auto it = v.begin(); it != v.end(); ++it){
    const auto index = distance(v.begin(),it);

    if((index % 3) == 0 || (index % 5) == 0){
      sum += index;
    }
  }
  cout << sum << endl;
}
