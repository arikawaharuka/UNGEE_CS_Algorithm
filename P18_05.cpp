#include <stdio.h>
#include "SqList.h"
using namespace std;

bool delete_range_close(SqList &L,ElementType s,ElementType t){
    if(s>=t||L.length==0){
        return false;//illegal s,t and empty List
    }

    int delete_num=0;
    for(int i=0;i<L.length;i++){
        if(L.data[i]>=s&&L.data[i]<=t){
            delete_num++;//delete element count
        }
        else{
            L.data[i-delete_num]=L.data[i];
        }
    }
    L.length=L.length-delete_num;//new length
    return true;
}