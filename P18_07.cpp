#include <stdio.h>
#include "SqList.h"
using namespace std;

bool Merge(SqList A,SqList B,SqList &C){
    if(A.length+B.length>MaxSize){
        return false;
    }
    int i=0,j=0,k=0;
    while(i<A.length&&j<B.length){
        if(A.data[i]<=B.data[j]){
            C.data[k++]=A.data[i++];
        }
        else{
            C.data[k++]=B.data[j++];
        }
    }
    while(i<A.length){
        C.data[k++]=A.data[i++];
    }
    while(j<B.length){
        C.data[k++]=B.data[j++];
    }
    C.length=k;
    return true;
}