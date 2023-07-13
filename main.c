#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void fatal(char *msg){
    fprintf(stderr, "%s\n", msg);
    exit(1);
}

int main(int argc, char *argv[]){

    if(argc != 2){
        fatal("Modo de uso: ./readpe.exe <arg>");
    }

    PEFILE pe;

	pe.filepath = argv[1];
	petest_init(&pe);
	printf("MAGIC NUMBER:   %x\n", pe.hdr_dos->e_magic);

    return 0;
}
