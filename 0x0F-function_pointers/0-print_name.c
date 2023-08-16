#include <stdio.h>

void print_name_default(char *name) {
    printf("Name: %s\n", name);
}

void print_name_uppercase(char *name) {
    for (int i = 0; name[i]; i++) {
        putchar(toupper(name[i]));
    }
    putchar('\n');
}

void print_name_lowercase(char *name) {
    for (int i = 0; name[i]; i++) {
        putchar(tolower(name[i]));
    }
    putchar('\n');
}

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

int main() {
    char name[] = "John Doe";

    printf("Default: ");
    print_name(name, print_name_default);

    printf("Uppercase: ");
    print_name(name, print_name_uppercase);

    printf("Lowercase: ");
    print_name(name, print_name_lowercase);

    return 0;
}

