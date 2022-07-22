#include <stdio.h>

typedef int ElementType;
#define MaxSize 50
typedef struct {
    ElementType data[MaxSize];
    int length;
}SqList;