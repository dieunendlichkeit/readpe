all:
	gcc -o main main.c -L./lib -lpetest

clean:
	rm -f main

install:
	install -m 0644 /readpe/lib/libpetest.so /lib/libpetest.so

uninstall:
	rm -f /lib/libpetest.so
