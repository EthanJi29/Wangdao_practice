#include<iostream>
using namespace std;

int main(){
    int h, l, dl;
    cin>>h;
    l=h;
    dl=l+(h-1)*2; //最底层*数量
    for(int i=0;i<h;i++){
        for(int j=0;j<dl-l;j++){
            printf(" ");
        }
        for(int j=0;j<l;j++){
            printf("*");
        }
        l+=2;
        printf("\n");
    }
    return 0;
}