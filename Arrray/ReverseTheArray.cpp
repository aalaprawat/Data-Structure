#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int traversalArray[5] = {1,2,3,4,5};
    int size = sizeof(traversalArray)/sizeof(int);

    reverse(traversalArray,traversalArray+size);

    for (int i=0;i<size;i++)
        cout<< traversalArray[i];
    return 0;
}