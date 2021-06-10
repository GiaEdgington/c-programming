//sorting and searching repetitive letters (External resource)
#include <stdio.h>
int main(void){
    char word[50];
    scanf("%s", word);
    int i=0;
    int l=0;
    while (word[i]!='\0') {
        l++;
        i++;
    };
    int j;
    char letter;
    int k=0;
    int same = 0;
   
    for(j=0;j<(l-1);j++){
        for(i=0; i<(l-1);i++){
        if(word[i] > word[i+1]){
            letter = word[i];
            word[i] = word[i+1];
            word[i]= letter;
        } else if(word[i] == word[i+1]){
            letter = word[i];
            k+=1;
        }
       }
    }
    printf("%d", k);
    
    return 0;
}