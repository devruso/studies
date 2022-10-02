#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct point{
    float x,y;
}point_t;


point_t *v_point(int);

point_t *v_point(int m){

    point_t *ptr;
    ptr = (point_t*)malloc(m*sizeof(point_t));

    for(int i =0; i<m; i++){
        ptr[i].x = 0;
        ptr[i].y = 0;
    }
    return ptr;
}

int main(){
    printf("Hello, world.\n");

}