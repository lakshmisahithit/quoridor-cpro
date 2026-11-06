cpro_project.exe: $(SRC)
	gcc -Wall -Iinclude src/main.c src/game.c src/board.c src/input.c -o cpro_project.exe

clean:
	del cpro_project.exe

