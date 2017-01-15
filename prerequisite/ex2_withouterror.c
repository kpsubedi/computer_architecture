#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void routineshouldnotrun(void){
    printf("\n\nI Should not execute!!!\n\n");
    exit(0);
}

void reply_back(char *message){
    char buffer[20];
    strcpy(buffer, message);
    printf("\n\n%s\n\n", buffer);
}

int get_sum(int x, int y){
    return x + y;
}


int main(int argc, char **argv){
    int sum = 0;
    reply_back(argv[1]);
    sum = get_sum(atoi(argv[2]), atoi(argv[3]));
    printf("Sum of %s + %s is %d\n\n", argv[2], argv[3], sum);
    return 0;
}

