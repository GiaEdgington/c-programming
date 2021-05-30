//Activity: using null terminator (External resource)
#include <stdio.h>
int main(void){
    int names;
    scanf("%d", &names);
    char full_names[101];
    int i;
    for(i=0; i<names; i++){
        scanf("%s", full_names[i]);
    }

    return 0;
}