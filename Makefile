SHELL=/bin/bash
compile_main: compile_arrays main.c
	#compilando
	gcc main.c arrays.o -lm
compile_arrays: arrays.c
	gcc -c arrays.c
run: compile_main
	#Executando o programa
	chmod +x a.out
	./a.out
test:
	#testando todas as funções
	./a.out < input.txt
