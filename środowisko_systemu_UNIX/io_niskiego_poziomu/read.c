//Funkcja read niskiego poziomu
#include "syscalls.h"

int main() {	//kopiuj wejście na wyjście
	char buf[BUFSIZ];
	int n;

	while ((n = read(0, buf, BUFSIZ)) > 0) {
		write(1, buf, n);
	}
	return 0;
}
