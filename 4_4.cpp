#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number[128];
    string str1, str2;
    while (getline(cin, str1))
    {
        if (str1 == "#")
            break;

        // for (int i = 0; i < 128; i++)           //初始化number数组
        //     number[i] = 0;
        memset(number,0,sizeof(number));            //memset函数也行

        getline(cin, str2);

        for (int i = 0; i < str1.size(); i++)
        {
            for (int j = 0; j < str2.size(); j++)
            {
                if (str2[j] == str1[i])
                    number[i]++;
            }
        }
        for (int i = 0; i < str1.size(); i++)
        {
            printf("%c %d\n", str1[i], number[i]);
        }
    }
    return 0;
}