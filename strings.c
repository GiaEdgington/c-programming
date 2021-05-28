//Activity: repetition of strings (External resource)
#include <stdio.h>
int main(void){
    int num;
    char word[101];
    scanf("%d %s", &num, word);
    int count = 0;
    while(count < num){
        printf("%s\n", word);
        count+=1;
    }
    return 0;
}