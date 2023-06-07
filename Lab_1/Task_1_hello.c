#include <stdio.h>
#include <locale.h>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus");
    
    if (argc > 1) {
        printf("Hello, %s!\n", argv[1]);
    } else {
        printf("Hello, World!\n");
    }
    return 0;
}
