# QUORIDOR
## 1. Description
This project is a command line version of the board game Quoridor that I made using C.

Two players take turns and move their piece on a 9×9 board or they can place walls to block each other.

In this phase the basic board setup, player movement, wall placement, input checking and turn switching is covered.

## 2. Files

these are the files used:

- main.c
- game.c
- board.c 
- input.c 
- game.h
- board.h
- input.h
- Makefile 

## 3. Compilation 

in the terminal we run both of these commands.

- make
- .\quoridor.exe

## 5. Input Format

there are three types of moves;
- m - moves the player
- h- to place a horizontal wall
- v- to place a vertical wall

Both uppercase and lowercase letters are accepted.


## 6. Gameplay
- player 1 starts at position (1, 5).
- player 2 starts at position (9, 5).
- both players start with 10 walls.
- player 1 gets the first turn.
- on each turn, a player can move their pawn or place a wall.
- after that, the turn passes to the other player.
- if a move is invalid, the board stays the same and the player can try again.
- the board is displayed after every turn.

## 7. Assumptions 

- rows and columns are numbered from 1 to 9.
- each player starts with 10 walls
- a pawn can move one position up, down, left or right.
- a player cannot move to a position occupied by the other player.
- walls cannot overlap or be placed in positions that conflict with existing walls.
- one wall is deducted from the players count after a successful wall placement.
 


