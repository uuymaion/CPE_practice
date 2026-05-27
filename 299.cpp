#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
#define int long long
signed main(void){
    int how;
    cin >> how;
    for(int t=0;t<how;t++){
        int numb;
        cin >> numb;
        vector<int> list;
        
        int value;
        for(int i=0;i<numb;i++){
            cin >> value;
            list.push_back(value);
        }
        int count = 0;
        for(int i=0;i<numb;i++){
            for(int j=0;j<numb-1-i;j++){
                if(list[j]>list[j+1]){
                    int temp = list[j+1];
                    list[j+1] = list[j];
                    list[j] = temp;
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps.\n";
        
    }    
    return 0;
}