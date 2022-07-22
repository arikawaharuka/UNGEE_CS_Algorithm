#include <iostream>
#include "SqList.h"
using namespace std;

bool Delete_Min(SqList &L,ElementType &value){
    if(L.length==0){
        return false;//empty return
    }
    value=L.data[0];//initialize
    int Min_pos=0;
    //traversal array to find Mininum
    for(int i=1;i<L.length;i++){
        if(L.data[i]<value){
            value=L.data[i];
            Min_pos=i;
        }
    }
    L.data[Min_pos]=L.data[L.length-1];//last element->delete pos
    L.length--;
    return true;
}