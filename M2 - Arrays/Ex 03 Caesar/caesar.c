#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool vkey(string str) {
    for (int i = 0, n = strlen(str); i < n; i++){
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void cac(string pt, int key){
    for(int i = 0, n = strlen(pt); i < n; i++){
        if (isalpha(pt[i])) {
            char offset = isupper(pt[i]) ? 'A' : 'a';
            pt[i] = (pt[i] - offset + key) % 26 + offset;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2 && !vkey(argv[1])) {
        printf("Use: ./caesar (key)\n");
        return 1;
    }

int key = atoi(argv[1]);


    string pt = get_string("plaintext: ");

    cac(pt, key);

    printf("ciphertext: %s\n", pt);

    return 0;
}