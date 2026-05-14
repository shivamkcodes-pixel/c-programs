#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Hey! What's your name? ");

    
    if (fgets(name, sizeof(name), stdin)) {
        
        name[strcspn(name, "\n")] = '\0';

        printf("Nice to meet you, %s!\n", name);
    }

    return 0;
}
