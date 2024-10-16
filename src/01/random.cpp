#include<iostream>
#include<algorithm>
//#include<string>
//#include<cctype>
using namespace std;


bool maybe_pal(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string rev = str;
    reverse(str.begin(), str.end());
    return rev == str; 
}
int main(){
string s;
cout<<"Enter a string: ";
getline(cin,s);
cout << "\n" << s << (maybe_pal(s) ? " is a pal" : "is not a pal");
//cout << "\n\"" << s << (maybe_pal(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";




return 0;
}