#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)){
        if(n==0) break;
        int cnt=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=3*n+1;
                n=n/2;
            }
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}