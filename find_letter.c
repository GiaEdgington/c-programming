//searching for letter in word
#include <stdio.h>
int main(void){
    char word[50];
    scanf("%s", word);
    int i, t, l;
    i = 0;
    l = 0;
    t = -1;

    while(word[l] != '\0') {
        l++;
    }
    while(word[i] != '\0'){
        if((word[i] == 't' || word[i] == 'T') && (i <= l/2)){
            t = 1;
            break;
        } else if((word[i] == 't' || word[i] == 'T') && (i > l/2)){
           t = 2;
           break;
        } else {
            t=-1;
        }
        i++;
    }
    printf("%d", t);
    return 0;
}