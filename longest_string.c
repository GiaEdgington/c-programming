//find longest string length

#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    int i;
    int l;
    int longest = 0;
    char word[100];
    for(i=0;i<num;i++){
        scanf("%s", word);
        l = 0;
        while(word[l] != '\0'){
        l++;
        }
        if(l > longest){
            longest = l;
        }
    }
    printf("%d", longest);
    return 0;
}