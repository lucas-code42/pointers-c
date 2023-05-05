#include <stdio.h>

void alterCopyValue(int copyValue) {
    copyValue++;
    printf("alterCopyValue: %d\n", copyValue);
    return;
}


// para assinar uma função com um ponteiro precisamos assinar o tipo com um '*' -> func...(int* value) {...}
void alterPointerValue(int* pointerValue) {
    // para acessar o conteúdo de um endereço de memória precisamos primeiro "resove-lo"
    // podemos fazer isso uasndo (*value)
    (*pointerValue)++;
    (*pointerValue)++;
    (*pointerValue)++;
    printf("alterPointervalue: %d\n", (*pointerValue));
    return;
}

int main() {
    int c = 0;
    alterCopyValue(c);
    alterPointerValue(&c);
    printf("after run pointer function the value is -> %d\n", c);
    return 0;
}


