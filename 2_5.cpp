#include<iostream>
#include<stdio.h>
using namespace std;

//先构造再输出！！
int main(){
    int n;
    char a,b,tian;
    while(scanf("%d %c %c",&n, &a, &b)){
        int c=n/2+1;  //圈数
        char matrix[n][n];

        for(int i=0;i<c;i++){               //按圈数计

            if(i%2==0) tian=a;              //填什么
            else tian=b;

            for(int j=i;j<n-i;j++){
                matrix[i][j]=tian;        //up
                matrix[n-i-1][j]=tian;    //down
                matrix[j][i]=tian;        //left
                matrix[j][n-i-1]=tian;    //right
            }
        }

        if(n!=1){                           //去角
            matrix[0][0]=' ';
            matrix[n-1][0]=' ';
            matrix[0][n-1]=' ';
            matrix[n-1][n-1]=' ';
        }

        for(int i=0;i<n;i++){                   //print
            for(int j=0;j<n;j++){
                printf("%c",matrix[i][j]);
            }
            printf("\n");
        }
    }
}
//输入 11 A B
//niubi