#include <stdio.h>
#include "SqList.h"
using namespace std;

bool delete_range_open(SqList &L,ElementType s,ElementType t){
    if(s>=t||L.length==0){
        return false;//illegal s,t and empty List
    }

    int i,j;
    //find the first data to delete 
    for(i=0;i<L.length&&L.data[i]<s;i++){
        if(i>=L.length){
            return false;//overload
        }   
    }
    //find the next data of the last deleted data
    for(int j=i;j<L.length&&L.data[i]<=t;j++)
    for(;j<L.length;i++,j++){
        L.data[i]=L.data[j];//move foward
    }
    L.length=i;//new length
    return true;
}
