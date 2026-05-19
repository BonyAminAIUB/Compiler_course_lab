#include<bits/stdc++.h>

using namespace std;

bool expression1(string s){
    if(s.size() == 0){
        return false;
    }
    if(s[0] != 'a'){
        return false;
    }
    for(int i = 1; i<s.size(); i++){
        if(s[i] != 'b'){
            return false;
        }
    } 
    return true; 
}

bool expression2(string s){
    if(s.size() == 0){
        return false;
    }
    bool valid = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            if(valid == true){
                return false;
            }
        }
        else if(s[i] == 'b'){
            valid = true;
        }
        else{
            return false;
        }
    }
    return true;
}

void final_expression(string s){
    if(s.size() == 0){
        cout << s << " is invalid string" << endl;
        return;
    }
    if(expression1(s) || expression2(s)){
        cout << "Accepted" << endl;
    }
    else{
        cout << "String not Accepted" << endl;
    }
}

int main(){
    final_expression("a");
    final_expression("ab");
    final_expression("abbab");
    final_expression("baa");
    final_expression("ba");
  
    return 0;
}