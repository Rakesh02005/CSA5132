#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plain[100], cipher[100], decrypted[100];
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int i;

    printf("Enter Plain Text (UPPERCASE): ");
    scanf("%s", plain);

    for(i = 0; plain[i] != '\0'; i++) {
        if(isalpha(plain[i])) {
            cipher[i] = key[plain[i] - 'A'];
        } else {
            cipher[i] = plain[i];
        }
    }
    cipher[i] = '\0';

    for(i = 0; cipher[i] != '\0'; i++) {
        if(isalpha(cipher[i])) {
            for(int j = 0; j < 26; j++) {
                if(cipher[i] == key[j]) {
                    decrypted[i] = j + 'A';
                    break;
                }
            }
        } else {
            decrypted[i] = cipher[i];
        }
    }
    decrypted[i] = '\0';

    printf("\nCipher Text: %s", cipher);
    printf("\nDecrypted Text: %s", decrypted);

    return 0;
}

output:
Enter Plain Text (UPPERCASE): HELLO

Cipher Text: ITSSG
Decrypted Text: HELLO
