#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int minDeletionSize(char** strs, int strsSize);

int main() {
    int strsSize,i;
    scanf("%d", &strsSize);
    
    char *strs[strsSize];
    
    for (i = 0; i < strsSize; i++) {
        strs[i] = malloc(100 * sizeof(char));  
        scanf("%s", strs[i]);
    }
    printf("%d",minDeletionSize(strs,strsSize));
    for (i = 0; i < strsSize; i++) {
        free(strs[i]);
    }
}
int minDeletionSize(char** strs, int strsSize) {
    int count=0;
    int length = strlen(strs[0]);
    for(int i=0;i<length;i++){
        for(int j=0;j<strsSize-2;j++){
            if(strs[j][i]>strs[j+1][i]){
                count++;
                break;
            }
        }
    }
    return count;
}
