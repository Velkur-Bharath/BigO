//Now lets look at the previous code we used in BigOn.cpp

#include<iostream>

using namespace std;

void BigOn(int array[]); //initializing the function

void BigOnm(int array1[], int array2[]);//initializing the function

int main(){
  int array1[10],array2[10];//O(1)
  for (int i = 0; i < 10; i++) {//O(n)
    array1[i]=i;//O(n)
    array2[i]=-i;//O(n)
  }
  BigOn(array1);//O(1)
}

void BigOn(int array[]){
  for (int i = 0; i < 10; i++) {//O(n)
    if(array[i]==2)//O(n)
      cout<<"number 2 was found!"<<endl;//O(n)
  }
}

/*Here according to rule 3, we add all the notations if the steps are in order,thus when added we get O(1+1+n+n+n+n+n) which simplifies to O(2+5n). so it is of O(2+5n) notation.

but Big O notations are simplified. when we simplify the above code:
a) 2 is ignored (according to the Big O rule 2. you can check them in Readme.cd).
b) O(5n) is equivalent to O(n) after removing the constant.

Thus the BigO notation upto the above code is O(n).
*/

void BigOnm(int array1[],int array2[]){
  for (int i = 0; i < 10; i++) {//O(n+m) (because the inputs are different here (as they have to arrays to iterate on). basically, m is same as n but for another input array2).
    if(array1[i]==2)//O(n) n is for array1
      cout<<"number 2 was found!"<<endl;//O(n)

    if(array2[i]==-6)//O(m) m is for array2
        cout<<"number -6 was found!"<<endl;//O(m)
  }
}

/*Now when we add all the notations, we get O(1+1+n+n+n+n+n+n+n+m+m) (ignore the O(n+m) notation it was kept for simplicity) which simplifies to O(2+7n+2m).

but Big O notations are simplified. when we simplify the above code:
a) 2 is ignored.
b) O(5n) is equivalent to O(n) after removing the constant.
c) O(2m) is equivalent to O(m).

Thus the BigO notation upto the above code is O(n+m).

NOTE : According to rule 4, we always ignore the non-dominant term. (for example: consider O(n + n^2) ew ignore the n term and the notation is therefor O(n^2))
*/
