/*So what is a Big O : it is a mathematical notation that describes the limiting behavior of a 'function' when the argument tends towards a particular value or infinity.

so for example lets take O(1) : it is referred as " 'O' of one ". No matter how many loops you have or how much complex code you have, ' it is independent of the number of items in the collection '.

Now enough for the theory lets look at a program here:
*/

#include<iostream>

using namespace std;

int BigO1(int array[]){
  return array[0]; //this is O(1) because no matter how many elements you have in array it always prints first element.
}

int main(){
  int array[10];
  for (int i = 0; i < 10; i++) {
    array[i]=i;
  }
  cout<<BigO1(array);
}

/*whats the deal : No matter how many elements are there in array the function always returns the first value hence the time of execution here is 'constant time'.

O(1) is the fastest compared to other Big O notations.

NOTE: Constant- no loops.

*/
