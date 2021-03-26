
/*O(n^2) notation : Quadratic- every element in a collection needs to be compared to ever other element. Two nested loops*/

#include<iostream>

using namespace std;

int main(){
  int array[5] = {1,2,3,4,5};
  //the following algorithm prints the pairs for each element in the array.
  for (int i = 0; i < 5; i++) {//Nested for loops is considered as O(n^2) notation. This for loop is O(n).
    for (int j = 0; j < 5; j++) {//O(n)
      cout<<array[i]<<","<<array[j]<<endl;//O(n)
    }
  }
}


/*since according to rule 3, when steps are nested, we multiply the notations. as the for loop is in other for loop the notation will be O(n*n) which implies to O(n^2).

O(n^2) is of quadratic time.

Why? if we have 2 elements, the program needs to run 4 operations if we had 3,elements the program must run 9 operations which increases quadratically.

NOTE : if we had different arrays like in the simplifyBigO program with nested loops, then the notation will be O(n*m).

*/
