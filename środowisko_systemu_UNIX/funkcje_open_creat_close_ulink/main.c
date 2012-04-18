#include <stdio.h>
#include <fcntl.h>
#include "syscalls.h"

#define PERMS 0666	//czytanie i pisanie dla wszystkich

void error(char *, ...);

//cp: kopiuj f1 do f2
int main( int argc, char *argv[]) {
	int f1, f2, n;
	char buf[BUFSIZ];

	if (argc != 3) {
		error("Format wywołania: cp skąd dokąd");
	}
	if ((f1 = open (argv[1], O_RDONLY, 0)) == -1) {
		error("cp: nie mogę otworzyć %s", argv[1]);
	}
	if ((f2 = creat(argv[2], PERMS)) == -1) {
		error("cp: nie mogę utworzyć %s z uprawnieniami %03o", argv[2], PERMS);
	}

	while ((n = read(f1, buf, BUFSIZ)) > 0) {
		if (write(f2, buf, n) != n) {
			error("cp: błąd pisania do pliku %s", argv[2]);
		}
	}
	return 0;
}


