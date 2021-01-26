// Progran to print all possible permutations of a string using Backtracking algorithm (and Recursion)
// code written by Mirza Asad 

#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
void permute(char str[],int i,int l){
   // cout<<"permute called for i,j = "<<i<<" "<<endl;
    if (i==l) {
       // cout<<"terminted"<<endl;
        for (int p=0;p<l;p++)
        cout<<str[p];
        cout<<" ";
        return;
    }
    else {
        for (int k=i;k<l;k++){
            char temp;
            temp = str[k];
            str[k] = str[i];
            str[i] = temp;
            permute(str,i+1,l);
            temp = str[i];
            str[i] = str[k];
            str[k] = temp;
        }
    }
    
}
using namespace std;
int main()
 {    	cout<<"Enter a string to prints its permutations"<<endl;
        char s[100];
        cin>>s;
        int l = strlen(s);
       
       sort(s,s+l);
        permute(s,0,l);
        cout<<endl;
    

	return 0;
}
