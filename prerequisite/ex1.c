#include <string.h>
#include <stdio.h>

void reply_back(char *userdata){
    char buffer[20];
    strcpy(buffer, userdata);
    printf("\n\n%s\n\n", buffer);
}

int main(int argc, char **argv){
    reply_back(argv[1]);
    return 0x1234;
}

