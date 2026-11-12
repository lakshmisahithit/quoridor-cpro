game_test.exe: $(SRC)
	gcc -Wall -Iinclude src/main.c src/game.c src/board.c src/input.c -o game_test.exe

clean:
	del game_test.exe