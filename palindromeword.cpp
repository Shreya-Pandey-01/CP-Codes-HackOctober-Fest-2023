#include <iostream>
#include <array>
using namespace std;

int main(){
    char a[100];
    cin>>a;
    int i=0,n=0;
    bool result=true;
    while(a[i]!='\0'){
        n++;
        i++;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i])
            result=false;
    }
    if(result==true)
        cout<<"Palindrome String";
    else
        cout<<"Not a Palindrome String";
    return 0;
}
