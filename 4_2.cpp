#include<string>
#include<iostream>
using namespace std;

int main(){             //此题注意，cin遇空格则停止，要输入一个句子，使用getline函数
    string str;
    while(getline(cin,str)){
        for(int i=0;i<str.size();i++){
            if((str[i]>='A'&&str[i]<='Y')||(str[i]>='a'&&str[i]<='y')){
                str[i]+=1;
            }
            else if(str[i]=='Z'){
                str[i]='A';
            }
            else if(str[i]=='z'){
                str[i]='a';
            }
        }
        cout<<str<<endl;

    }
    return 0;
}