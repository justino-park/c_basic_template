game.o : main.c
	clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a main.c -o game
	./game