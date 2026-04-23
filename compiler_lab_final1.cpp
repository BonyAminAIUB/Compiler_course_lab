#include<bits/stdc++.h>

using namespace std;
void first(string s){
    bool accepted = false;
    if(s.size() == 1){
        if(s[0] == 'a'){
            accepted = true;
        }
        else if(s[0] == ' '){
            accepted = true;
        }
        else{
            accepted = false;
        }
    }
    else if(s.size() > 1){
        if(s[0] == 'a'){
            for(int i = 1; i<s.size(); i++){
                if(s[i] == 'a'){
                    accepted = true;
                }
                else{
                    accepted = false;
                    break;;
                }
            }
        }
    }  
    if(accepted){
        cout << "Accepted" << endl;
    }
    else{
        cout << "String not Accepted" << endl;
    }
}

void second(string s){
    bool accepted = false;
    if(s.size() == 1){
        if(s[0] == 'a' || s[0] == 'b'){
            accepted = true;
        }
        else{
            accepted = false;
        }
    }
    else{
        if(s[0] == 'a'){
            for(int i = 1; i<s.size(); i++){
                if(s[i] == 'a'){
                    accepted = true;
                }
                else{
                    accepted = false;
                    break;
                }
            }
        }
        else if(s[0] == 'b'){
            for(int i = 1; i<s.size(); i++){
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
    if(accepted){
        cout << "Accepted" << endl;
    }
    else{
        cout << "String not Accepted" << endl;
    }
}

void third(string s){
    bool accepted = false;
    if(s[0] == 'a'){
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'a'){
                accepted = true;
            }
            else{
                accepted = false;
            }
        }
    }
    else{
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'b'){
                accepted = true;
            }
            else{
                accepted = false;
            }
        }
    }
    if(accepted){
        cout << "Accepted" << endl;
    }
    else{
        cout << "String not Accepted" << endl;
    } 
}

void forth(string s){
    bool accepted = false;
    int sz = s.size();
    if(sz == 2){
        if((s[0] == 'a' && s[s.size()-1] == 'b')){
            accepted = true;
        }
    }
    else{
        if((s[0] == 'a' && s[s.size()-1] == 'b')){
            accepted = true;
        }
        if(s[1] == 'a'){
            for(int i = 1; i<s.size()-2; i++){
                if(s[i] == 'a'){
                    accepted = true;
                }
                else{
                    accepted = false;
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
                }
            }
        }
    }    
    if(accepted){
        cout << "Accepted" << endl;
    }
    else{
        cout << "String not Accepted" << endl;
    } 
}

int main(){
    cout << "First Regular Expression: " << endl;
    first("a");
    first(" ");
    first("aaaa");
    first("abb");

    cout << endl << "Second Regular Expression: " << endl;
    second("b");
    second("a");
    second("ba");
    second("aaa");

    cout << endl << "Third Regular Expression: " << endl;
    third("a");
    third("aa");
    third("bb");
    third("abb");

    cout << endl << "Forth Regular Expression: " << endl;
    forth("ab");
    forth("aab");
    forth("abb");
    forth("abc");
    return 0;
}