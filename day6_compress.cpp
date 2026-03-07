#include<iostream>
#include<string>

using namespace std;

string decompress(){
    string x,s;
    char in;
    int times;
    while(cin>>in){
        
        if(in=='['){
            cin>>times;
            x=decompress();
            while(times){
                s+=x;
                times--;
            }
        }
        else if (in==']'){
            return s;
        }
        else s+=in;

        
    }
    return s;
}



int main(){
    string output;
    output=decompress();
    cout<<output;

}