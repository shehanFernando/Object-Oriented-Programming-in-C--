/*
Shehan Fernando
CSci 211 
homewok#2
*/
#include <iostream>
using namespace std;

bool equivalent(int a[], int b[],int size){
    int counter = 0;
    for(int i = 0 ;i < size; i++){// shift by 0 - n
        for(int c = 0; c < size; c++){//compare each elements 
            if(a[c] == b[(c+i)%size]) counter++;//adds 1 to counter if an element matches
        }
    if(size == counter) return true;//return true if all of the elements are matching
	
    counter = 0;//reset the counter so it starts from 0 for the next shift
    }
    
    return false;//
    
}

int main() {
   cout << boolalpha; // to print bool values as true/false instead of 1/0
   
   int a1[5] = {1, 2, 3, 4, 5};
   int a2[5] = {3, 4, 5, 1, 2};
   cout << equivalent(a1, a2, 5)<<endl; // true
   
   int b1[3] = {1, 2, 3};
   int b2[3] = {2, 3, 3};
   cout << equivalent(b1, b2, 3)<<endl ; // false
   
   int c1[4] = {2, 3, 4, 1};
   int c2[4] = {1, 4, 3, 2};
   cout << equivalent(c1, c2, 4) <<endl ; // false
   
   int d1[4] = {3, 2, 3, 1};
   int d2[4] = {3, 1, 3, 2};
   cout << equivalent(d1, d2, 4) << endl; // true
   
   int e1[5] = {1, 1, 1, 1, 2};
   int e2[5] = {1, 1, 1, 2, 1};
   cout << equivalent(e1, e2, 5) << endl; // true
   
   return 0;
}
