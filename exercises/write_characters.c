#include <unistd.h>

void ft_writeChar(char character) {

    write(1, &character, 1);

}

int main(void) {

    ft_writeChar('C');
    ft_writeChar('4');
    ft_writeChar('2');
    ft_writeChar('\n');

    return 0;
}