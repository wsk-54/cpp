#include<stdio.h>
#include<math.h>

int main(){
    double x1,x2,y1,y2,a;
    while(scanf("%lf %lf %lf %lf\n",&x1,&y1,&x2,&y2)!=EOF){
        a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        printf("%.2f\n",a);
    }
    return 0;
}