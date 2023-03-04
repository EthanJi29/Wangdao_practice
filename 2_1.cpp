#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    for(a=0;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                if(100*a+110*b+12*c==532){
                    // cout<<a<<" "<<b<<" "<<c<<endl;
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}