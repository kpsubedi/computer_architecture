// gcc sample.c -o sample
// gcc -ggdb sample.c -o sample_with_debug

#include <stdio.h>

int main(int argc, char **argv, char **envp){
      printf("Welcome to Computer Architecture\n");
      return 0x1234;
}

// objdump -d sample 
// And look in main function

