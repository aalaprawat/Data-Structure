/**
 * Program to find the greatest and the smallest element in an array 
 * using O(n) time complexity and o(1) space
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    int max = INT_MIN;
    int min = INT_MAX;


    int sampleArray[]={34, 78, 21, 90, 5, 2};  
    int size = sizeof(sampleArray)/sizeof(sampleArray[0]);
    for (int i = 0; i < size; i++)
    {
        if(max < sampleArray[i])
            max = sampleArray[i];
        if(min > sampleArray[i])
            min = sampleArray[i];
    }

    cout<<"max is "<<max <<"&"<<"min is"<<min;

    

    return 0;
}