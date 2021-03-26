
/*
I request you to read Time Complexity programs before coming to Space complexity

O(1) --> No matter how many elements you have in an array, you always store in array[] which is constant Space Complexity.

O(n) --> You use another variable to store something that you get after executing a method which takes extra space.

*/

#include<iostream>

using namespace std;

void ShowSquaredNumbersUptoN(int sizeofArr, int array[]){ // Now this function does not initialize any other variables other than the arguments. So this is a O(1) notation
  for (int i = 0; i < sizeofArr; i++) {
    cout<<array[i]*array[i]<<endl;
  }
}

void ShowSquaredNumbersUptoNInOtherWay(int sizeofArr, int array[]){ // Now this function initializes another variable to store the value of answers that we get after the first for loop. So this is a O(n) notation
  int arraytemporary[10];
  for (int i = 0; i < sizeofArr; i++) {
    arraytemporary[i]=array[i]*array[i];
  }
  for (int i = 0; i < sizeofArr; i++) { //sizes of arraytemporary and array is same anyway
    cout<<arraytemporary[i];
  }
}

int main() {
  int size = 0;
  int array[] = {12,232,23,45,49,80};
  size = sizeof(array)/sizeof(array[0]); //gets the size of array (i.e 6 in this case)
  ShowSquaredNumbersUptoN(size,array);
  return 0;
}
