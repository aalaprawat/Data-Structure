/**
 * Move all negative numbers to beginning and positive to end with constant extra space
 * */

/**
 * Program to find the kth smallest element in an array
 * 
 * We will use a priority queue here to store the kth largest element
 * 
 * */

#include <iostream>

using namespace std;

int main() {

    int sampleArray[]={ -1, 2, -3, 4, 5, 6, -7, 8, 9};  
    
    int start = 0;
    int end = sizeof(sampleArray)/sizeof(sampleArray[0]) - 1;

    while(start<end){
        if (sampleArray[start]<0 && sampleArray[end]<0) {
            start +=1;
        } else if (sampleArray[start]>0 && sampleArray[end]>0) {
            end -=1;
        } else if (sampleArray[start]>0 && sampleArray[end]<0) {
            int temp = sampleArray[start];
            sampleArray[start] = sampleArray[end];
            sampleArray[end] = temp;
            start+=1;
            end-=1 ;
        } else {
            start+=1;
            end-=1 ;
        }
    }
    end = sizeof(sampleArray)/sizeof(sampleArray[0]);

    for (int i=0;i<end;i++) {
        cout<<sampleArray[i]<<"\t";
    }

    return 0;
}