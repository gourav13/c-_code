#include<iostream>
using namespace std;

void replacePi(char *a,int i){
    ///Base Case
    if(a[i]=='\0'||a[i+1]=='\0'){
        return;
    }
    ///Rec Case
    if(a[i]=='p'&&a[i+1]=='i'){

            int j = i+2;
            while(a[j]!='\0'){
                j++;
            }

            while(j>=i+2){
                a[j+2] = a[j];
                j--;
            }
            a[i] = '3';
            a[i+1] = '.';
            a[i+2] = '1';
            a[i+3] = '4';

            replacePi(a,i+4);

    }
    else{
        replacePi(a,i+1);
    }
}


int main(){
    char input[100] = "xpipypihpi";
    cout<<input<<endl;
    replacePi(input,0);
    cout<<input<<endl;

return 0;
}
