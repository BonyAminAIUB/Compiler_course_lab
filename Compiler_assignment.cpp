#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    ifstream file("myFIle.txt");
    int i = 1;
    while(getline(file,s)){       
        stringstream ss(s);
        string word;
        cout << "Line " << i <<":" << endl;
        while(ss >> word){           
            if(word == ")" || word == "(" || word == "{" || word == "}" || word == "[" || word == "]" || word == ";" || word == "#"){
                cout << word << " -> Puntuations, " << endl;
            }
            else if(word == "int" || word == "main" || word == "cout" || word == "return" || word == "using" || word == "namespace" || word == "include" || word == "iostream" || word == "cin" || word == "float" || word == "double" || word == "char" || word == "string" || word == "void"){
                cout << word << " -> Keyword, " << endl;
            }
            else if((word[0] >= 'a' && word[0] <= 'z') || (word[0] >= 'A' && word[0] <= 'Z') || word[0] == '_'){
                bool valid = true;
                for(int i = 1; i<word.length(); i++){
                    if(!(word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= '0' && word[i] <= '9')){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    cout << word << " -> Identifier, " << endl;
                }             
            }
            else if(word == ">" || word == "<" || word == "=" || word == "+" || word == "-" || word == "*" || word == "/" || word == "%" || word == "<<" || word == ">>" || word == "<=" || word == ">=" || word == "&&" || word == "||" || word == "=="){
                cout << word << " -> Operator, " << endl;
            }
            else{
                cout << word << " -> Constant, " << endl;
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}