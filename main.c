#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t[10];
    int i;
    float s,m,p;
    for(i=0;i<10;i++){
        printf("t[%d]=",i+1);
        scanf("%f",&t[i]);
    }s=0;
    p=1;
    for(i=0;i<10;i++){
        s=s+t[i];
    p=p*t[i];}
    m=s/10;
    printf("sum is:%.1f",s);
    printf("multiply:%.1f",p);

    printf("average:%.1f\n",m);



    return 0;
}
