#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int length=strlen(str);
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            return 0;
        
        }
    }
    return 1;
}
int main(){.
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    if(isPalindrome(str)){
        printf("%s is a palindrome.\n",str);

    }else{
        printf("%s is not a palindrome.\n",str);
    }
    return 0;
}


























