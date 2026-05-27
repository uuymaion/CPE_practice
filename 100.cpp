#include <iostream>
#include <vector>
#define int long long
using namespace std;
signed main(void){
    int a, b;
    while(cin >> a >> b){
        int max = 0;
        int tem_a = a, tem_b = b;
        if(a < b){
            tem_a = b, tem_b = a;
        }
        int n;
        for(int i=tem_b;i<=tem_a;i++){
            int count = 1;
            n = i;
            while(n!=1){
                if(n%2==1){
                    n = n*3 + 1;
                }else{
                    n /= 2;
                }
                count++;
                
            }
            if(count>max){
                max = count;
            }
        }
        cout << a << " " << b <<" " << max << endl;
    
    }
    return 0;
}