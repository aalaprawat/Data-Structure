#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int a[]= {1,2,3,4,5,6,7,8};  

    int b[]= {10,2,2,3,4,5,6,6};

    int sizeA = sizeof(a)/sizeof(a[0]) ;
    int sizeB = sizeof(b)/sizeof(b[0]) ;


    unordered_map<int,int> um;

    for(int i =0;i<sizeA;i++)
        um[a[i]] = 0;
    for(int i =0;i<sizeB;i++)
        if(um.count(b[i])!=0 && um[b[i]] == 0)
            um[b[i]] = 2;
        else 
            um[b[i]] = 1;    
    
    cout<<"Union is" ;
    for (auto i : um) {
        cout<<"\t" << i.first;
    }

    cout<<"\n"<<"Intersection is";
    for (auto i : um) {
        if(i.second == 1)
            cout<<"\t" << i.first;
    }


    return 0;
}