/**
 * Program to find the kth smallest element in an array
 * 
 * We will use a priority queue here to store the kth largest element
 * 
 * */

#include <iostream>
#include <queue>

using namespace std;

int main() {

    int sampleArray[]={34, 78, 21, 90, 5, 2};  
    int k = 3;
    priority_queue<int> pq;
    int size = sizeof(sampleArray)/sizeof(sampleArray[0]);
    for (int i = 0; i < size; i++)
    {
        pq.push(sampleArray[i]);   
        if(pq.size()>3)
            pq.pop();
    }

    cout<<"Kth min is "<<pq.top();
    

    return 0;
}