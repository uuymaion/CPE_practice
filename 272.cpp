#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define int long long
signed main(void){
    string input;
    int count = 0;
    while(getline(cin, input)){
        for(int i=0;i<input.length();i++){
            if(input[i]=='\"'){
                if(count==0){
                    cout << "``";
                    count = 1;
                }else{
                    cout << "\'\'";
                    count = 0;
                }
            }else{
                cout << input[i];
            }
        }
        cout << endl;
    }
    return 0;
}
