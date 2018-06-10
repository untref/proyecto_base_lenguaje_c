/*
 * mian.c
 */
#include <stdio.h>

#include "./tda/MiTda.h"

int main(int argc, char** argv) {
	printf("argc: %d\n", argc);
	printf("argv[0]: %s\n", argv[0]);

	MiTda t;

	mitda_init(&t);
}

