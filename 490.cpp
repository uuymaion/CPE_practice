#include <iostream>
#include <string>
#include <vector>
#define int long long
using namespace std;

signed main(void){
    string input;
    int count = 0;
    int len = 0;
    vector<string> list;
    while(getline(cin, input)){
        list.push_back(input);
        if(input.length()>len){
            len = input.length();
        }
    }
    for(int i=0;i<len;i++){
        for(int j=list.size()-1;j>=0;j--){
            if(list[j].length()<i+1){
                cout << " "; // 某字串比較短的時候要用空白補
            }else{
                cout << list[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}