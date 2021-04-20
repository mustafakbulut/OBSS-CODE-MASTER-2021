#include<stdio.h>
int main(){
	
    int i=0;
    int jump=1;
    char S[9]={'a','b','?','?','a','b','?','a','?'}; 
    while(S[i]!='\0'){
       jump=1;
       if(S[i]=='?'){
           if(i==0){
               if(S[i+1]=='a'){
                   S[i]='b';
                   jump=2;
               }
                else{
                    S[i]='a';
                }
           }
            else{
                if(S[i+1]=='?'){
                    S[i]=195-S[i-1];
                }
                else if(S[i+1]==S[i-1]){
                    
                    S[i]=195-S[i-1];
                    jump=2;
                }
                else{
                    if(S[i-1]==S[i-2]){
                       S[i]=195-S[i-1];
                    }
                    else if(S[i-1]==S[i-2]){
                        S[i]=195-S[i-1];
                    }
                    else{
                        S[i]=S[i-1];
                    }
                    jump=2;
                }
            }
       }
       i=i+jump;
   }
    puts(S);

	return 0;
}
