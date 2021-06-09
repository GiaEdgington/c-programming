//sorting and searching repetitive letters (External resource)
#include <stdio.h>
int main(void){
    char word[50];
    scanf("%s", word);
    int i, j;
    char letter;
    
    for(j=0;j<strlen(word)-1;j++){
        for(i=0; i<strlen(word)-1;i++){
            if(word[i] > word[i+1]){
                letter = word[i];
                word[i] = word[i+1];
                word[i]= letter;
            }
        }
    }
    return 0;
}