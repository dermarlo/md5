#include <sys/types.h>
#include <openssl/md5.h>
#include <stdio.h>
#include <string.h>

#define STRING "test"

int main(void) {
    MD5_CTX ctx;
    unsigned char digest[16];
    int i;

    MD5_Init(&ctx);
    MD5_Update(&ctx, STRING, strlen(STRING));
    MD5_Final(digest, &ctx);

    for (i=0;i<16;i++) {
        printf("%0.2x", digest[i]);
    }
    putchar('\n');

return 0;
}

