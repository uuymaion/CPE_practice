#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <array>
// #define int long long
using namespace std;
int direction(char a){
    if(a=='N'){
        return 0;
    }else if(a=='E'){
        return 1;
    }else if(a=='S'){
        return 2;
    }else if(a=='W'){
        return 3;
    }else if(a=='R'){
        return 1;
    }else if(a=='L'){
        return -1;
    }else{
        return 0;
    }
}
signed main(void){
    int sx, sy;
    cin >> sx >> sy;
    int arr[sx+1][sy+1];
    int x, y;
    char d;
    string input;
    while(cin >> x >> y >> d){
        cin >> input;
        bool lost = false;
        int dir = direction(d);
        for(int i=0;i<input.length();i++){
            if(direction(input[i])){
                dir = (dir+direction(input[i])+4)%4;
            }else{
                if(dir==0 && y!=sy){
                    y++;
                }else if(dir==1 && x!=sx){
                    x++;
                }else if(dir==2 && y!=0){
                    y--;
                }else if(dir==3 && x!=0){
                    x--;
                }else{
                    if(arr[x][y]==1){
                        continue;
                    }else{
                        arr[x][y] = 1;
                        lost = true;
                        break;
                    }
                }
            }   
            // cout << endl << input[i] << " " << dir << " " << x << " " << y << endl;
        }
        cout << x << " " << y << " ";

        if(dir==0)cout << 'N';
        else if(dir==1)cout << 'E';
        else if(dir==2)cout << 'S';
        else if(dir==3)cout << 'W';

        if(lost)cout << " LOST";
        cout << endl;
    }
    return 0;
}