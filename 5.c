#include <stdio.h>

int main()
{
    int x,y,z;
    printf("input");
    printf("\nx=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("z=");
    scanf("%d",&z);
    if (x<=y){
        if (y<=z) printf("xyz");
        else printf("xzy");
    }
    if (y<=x){
        if (z<=x) printf("yzx");
        else printf("yxz");
    }
    if (z<=y){
        if (y<=x) printf("zyx");
        else printf("zxy");
    }
    return 0;
}