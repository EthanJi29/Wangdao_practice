#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;

struct student{
    string name;
    int order;
    int score;
};

bool CompareAscending(student x, student y){
    if(x.score==y.score) return x.order<y.order;
    else return x.score<y.score;
}

bool CompareDescending(student x, student y){
    if(x.score==y.score) return x.order<y.order;
    else return x.score>y.score;
}

int main(){
    
    int number, flag;
    while(scanf("%d %d",&number,&flag)){
    student v[number];
    for(int i=0;i<number;i++){
        v[i].order=i;
        //scanf("%s",v[i].name);    //scanf不适合输入string类型
        cin>>v[i].name;
        scanf("%d",&v[i].score);  //记住加 & ！！
    }

    if(flag==0){
        sort(v,v+number,CompareDescending);
    }
    else{
        sort(v,v+number,CompareAscending);
    }

    for(int i=0;i<number;i++){
        printf("%s %d\n",v[i].name.c_str(),v[i].score);     //printf 输出字符串时 str.c_str()
    }
    }
}