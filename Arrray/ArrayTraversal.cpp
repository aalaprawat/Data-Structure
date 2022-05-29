#include <iostream>
using namespace std;

int main(){
    int traversalArray[5] = {1,2,3,4,5};
    int size = sizeof(traversalArray)/sizeof(int);
    for (int i=0;i<size;i++){
        cout<<traversalArray[i];
    }
    return 0;
}