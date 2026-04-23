#include<bits/stdc++.h>
using namespace std;

int first(string s){
    bool accepted = false;
    int sz = s.size();
    if(sz == 2){
        if((s[0] == 'a' && s[s.size()-1] == 'b')){
            accepted = true;
        }
    }
    else if(s.size() > 2){
        if((s[0] == 'a' && s[s.size()-2] == 'b') && s[s.size()-1] == 'a'){
            if(s[1] == 'a'){
                for(int i = 1; i<s.size()-2; i++){
                    if(s[i] == 'a'){
                        accepted = true;
                    }
                    else{
                        accepted = false;
                        break;
                    }
                }
            }
            else if(s[1] == 'b'){
                for(int i = 1; i<s.size()-2; i++){
                    if(s[i] == 'b'){
                        accepted = true;
                    }
                    else{
                        accepted = false;
                        break;
                    }
                }
            }
        }
        else if((s[0] == 'a' && s[s.size()-1] == 'b')){
            if(s[1] == 'a'){
                for(int i = 1; i<s.size()-1; i++){
                    if(s[i] == 'a'){
                        accepted = true;
                    }
                    else{
                        accepted = false;
                        break;
                    }
                }
            }
            else if(s[1] == 'b'){
                for(int i = 1; i<s.size()-1; i++){
                    if(s[i] == 'b'){
                        accepted = true;
                    }
                    else{
                        accepted = false;
                        break;
                    }
                }
            }
        }
    }   
    else if(s.size() < 2){
        cout << "Invlid string" << endl;
        return -1;
    } 
    if(accepted){
        cout << "Accepted" << endl;
    }
    else{
        cout << "String not Accepted" << endl;
    } 
}

int main(){
    first("ab");
    first("aaaaba");
    first("abbbba");
    first("aaabbbba");
    first("a");
    first("aaaa");
    return 0;
}