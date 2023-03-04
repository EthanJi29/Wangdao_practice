#include <cstdio>
#include <algorithm>
#include <vector>  //用vector数组一直出segmentation fault， 还是别用了
using namespace std;

struct student{
    int number;
    int score;
};

student arr[100];

int cmp(student x, student y){
    if(x.score==y.score){
        return x.number<y.number;
    }
    else return x.score<y.score;
}

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i].number,&arr[i].score);
    }

    sort(arr,arr+n,cmp);                        //注意这个cmp是决定比较什么数的

    for(int i=0;i<n;i++){
        printf("%d %d\n",arr[i].number,arr[i].score);
    }
    return 0;
}
