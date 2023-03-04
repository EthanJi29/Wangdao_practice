#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,d;
    for(a=1;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                for(d=0;d<10;d++){
                    if(9*(a*1000+b*100+c*10+d)==(d*1000+c*100+b*10+a)){
                        printf("%d\n",(a*1000+b*100+c*10+d));
                    }
                }
            }
        }
    }
    return 0;
}
//求反序数
int reverse(int n){
    int revn=0;
    while(n!=0){
        revn*=10;
        revn+=n%10;
        n/10;
    }
    return revn;
}