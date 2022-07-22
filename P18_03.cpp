#include <stdio.h>
#include "SqList.h"
using namespace std;

void Delete_num(SqList &L,ElementType x){
    int len=0;    
    for(int i=0;i<L.length;i++){
        if(L.data[i]!=x){
            L.data[len]=L.data[i];
            len++;//length after deletion
        }
    }
    L.length=len;//new length
}