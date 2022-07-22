#include <iostream>
#include "SqList.h"
using namespace std;

void Reverse(SqList &L){
    ElementType temp;
    for(int i=0;i<L.length;i++){
        temp=L.data[i];
        L.data[i]=L.data[L.length-i-1];
        L.data[L.length-i-1]=temp;
    }
}