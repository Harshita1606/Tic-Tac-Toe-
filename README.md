# Tic-Tac-Toe project by P.S.Harshita,24ME01065.\n
This the code for the game of tic-tac-toe in C and is played between 2 players (player1 and player2).The game board is a 2D array. Player1 is assigned the symbol 'X' while Player2 is assigned the symbol 'O'.The game ends when either of the players have achieved three symbols in a row or when the board is full.The winner is determined by checking the rows,columns and diagonals of the game board.
##Features
-Simple command-line interface.
-Direct prompts for smooth gameplay.
-Enables a game between 2 real life players.
-Checks the invalid moves by the players.
-Determines whether the match is a win or a draw.
##Functions used
-The resetBoard() function clears the board when the game ends.
-The printBoard() function prints the state of the board after every move of the players.
-The checkFreeSpaces() function returns the number of empty spaces on the board.
-The player1Move() and player2Move() functions allow the players to input their symbols in the desired locations and checks for invalid moves,prompting them to enter a valid location.
-The checkWinner() function checks for the winner by checkimg the rows,columns and diagonals pf the board.If winner is found it returns the symbol of the winner.If no winner, it returns an empty space.
