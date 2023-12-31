default_target: main

main: main.c
	gcc -o deline main.c -g

install: main
	install -m 755 -t /usr/bin/ deline
