#include <stdio.h>
int main(){
    int a,b,c,d,h,m;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    h=c-a;
    m=d-b;
    if(m<0){
        h--;
        m=60+m;
    }
    printf("%d %d", h,m);
}
