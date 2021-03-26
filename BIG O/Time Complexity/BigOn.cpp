//refer BigO1.cpp for clear explanation on Big O notation.

/*Now let's have a look at O(n) notation.

here, n is the number of inputs. the program should iterate around the loop or the program to perform a particular task in O(n).

for example look at the following code.

*/
#include<iostream>

using namespace std;

void BigOn(int array[]){
  /*O(n) is not a constant value as it is in O(1), it is linear. what is linear?

  in O(n), the time of execution depends on number of elements we give in the array. if we give 1000 elements the time complexity increases or when we give 5 the time complexity decreases.

  the following piece of code search for 6 in the array and prints if found.
  */
  for (int i = 0; i < 10; i++) {// the loop must go through all 10 elements in array to find number 6. so it is of O(n).
    if(array[i]==6)// O(n) every line in a for loop represents a O(n) as they iterate along the loop.
      cout<<"number 6 was found!"<<endl;//O(n)
  }
}

int main(){
  int array[10];//O(1) as it is called only once in the runtime.
  for (int i = 0; i < 10; i++) {//O(n)
    array[i]=i;//O(n)
  }
  BigOn(array);//O(1)
}

/*
whats the deal :O(n) depends upon the number of times the program should iterate around hence the time od execution here is 'Linear time'.

BigO notations always considered for the worst cases according to rule 1. for example even if 2 was found at index 1 in the array, the notation is O(n) (not O(1)) because n is considered as the worst case.

NOTE: Linear- for loops, while loops through n items. also check the rules in Readme.cd
*/
