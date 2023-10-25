program1: program1.c
	gcc -o program1 program1.c

program2: program2.c
	@clear
	@echo "Compiling program..."
	gcc -o program2 program2.c
	@echo "Program compiled successfully."
	@ls

all: program1 program2

clean:
	rm -f program1 program2
