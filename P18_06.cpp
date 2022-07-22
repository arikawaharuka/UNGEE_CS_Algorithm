#include <stdio.h>
#include "SqList.h"
using namespace std;

bool delete_same(SqList &L){
    int delete_num=0;
    if(L.length==0){
        return false;
    }
    int i,j;
    for(i=0,j=1;j<L.length;j++){
        if(L.data[i]!=L.data[j]){
            i++;
            L.data[i]=L.data[j];
        }
    }
    L.length=i+1;
    return true;
}