#include <stdio.h>
#include "gc.h"
#include <assert.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i;
    clock_t t;
    GC_INIT();
    t=clock();
    for (i = 0; i < 10000000; ++i){
        int *p = (int *) GC_MALLOC(sizeof(int *));
    }
    t=clock()-t;
    printf("tempo com libgc: %f\n",((double)t)/CLOCKS_PER_SEC);
    t=clock();
    for (i = 0; i < 10000000; ++i){
        int *p = (int *) malloc(sizeof(int *));
        free(p);
    }
    t=clock()-t;
    printf("tempo sem libgc: %f\n",((double)t)/CLOCKS_PER_SEC);

}
