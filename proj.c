#include <stdio.h>  
#include <stdlib.h>  
char board[3][3]; 
const char PLAYER1 = 'X'; 
const char PLAYER2 = 'O'; 
void resetBoard(); 
void printBoard(); 
int checkFreeSpaces(); 
void player1Move();
void player2Move(); 
char checkWinner(); 
void printWinner(char); 
int main(){
int flag=0;
do{ 
 printf(" The game of Tic Tac Toe \n");  
 printf("Insturctions of the game \n");
 printf("\tPlayer 1 sign = X\n"); 
 printf("\tPlayer 2 sign = O\n\n"); 
 char winner = ' '; 
 resetBoard(); 
 while(winner == ' ' && checkFreeSpaces() != 0) 
 { 
 printBoard(); 
 printf("Player1 turn\n");
 player1Move(); 
 printBoard();
 winner = checkWinner(); 
 if(winner != ' ' || checkFreeSpaces() == 0){ 
 break; 
 } 
 printf("Player2 turn\n");
 player2Move(); 
 winner = checkWinner(); 
 if(winner != ' ' || checkFreeSpaces() == 0){ 
 break; 
 } 
 } 
 printBoard(); 
 printWinner(winner);
 printf("Do you want to play the game again(0=yes,1=no)?");
 printf("\n");
 scanf("%d",&flag); 
}while(flag==0);
return 0;
} 
void resetBoard(){ 
 for(int i = 0; i < 3; i++){ 
 for(int j = 0; j < 3; j++){ 
 board[i][j] = ' '; 
 } 
 } 
} 
void printBoard(){ 
 printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);  printf("---|---|---\n"); 
 printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);  printf("---|---|---\n"); 
 printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);  printf("\n\n"); 
}
int checkFreeSpaces(){ 
 int freeSpaces = 9; 
 for(int i = 0; i < 3; i++){ 
 for(int j = 0; j < 3; j++){ 
 if(board[i][j] != ' '){ 
 freeSpaces--; 
 } 
 } 
 } 
 return freeSpaces; 
} 
void player1Move(){ 
 int x; 
 int y; 
 int l=0;
 do{    
 printf("Enter row #(1-3): "); 
 scanf("%d", &x); 
 x--; 
 printf("Enter column #(1-3): "); 
 scanf("%d", &y); 
 y--;
 if((x>=0 && x<3) && (y>=0 && y<3)){
 printf("\n"); 
 if(board[x][y] !=' '){ 
 printf("Invalid move! Try again!\n");
 l=1; 
 printf("\n"); 
 }  
 else{ 
 board[x][y] = PLAYER1; 
 break; 
 }
 }
 else { 
    printf("Invalid value of row and/or column\n");
    l=1;
 } 
 } while(l==1); 
} 
void player2Move(){ 
 int x; 
 int y; 
 int l=0;
 do{    
 printf("Enter row #(1-3): "); 
 scanf("%d", &x); 
 x--; 
 printf("Enter column #(1-3): "); 
 scanf("%d", &y); 
 y--;
 if((x>=0 && x<3) && (y>=0 && y<3)){
 printf("\n"); 
 if(board[x][y] !=' '){ 
 printf("Invalid move! Try again!\n");
 l=1; 
 printf("\n"); 
 }  
 else{ 
 board[x][y] = PLAYER2; 
 break; 
 }
 }
 else { 
    printf("Invalid value of row and/or column\n");
    l=1;
 } 
 } while(l==1); 
} 
char checkWinner(){ 
 //check rows 
 for(int i = 0; i < 3; i++){ 
 if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){  return board[i][0]; 
 } 
 } 
 //check columns 
 for(int i = 0; i < 3; i++){ 
 if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){  return board[0][i]; 
 } 
 } 
 //check diagonals 
 if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){  return board[0][0]; 
 } 
 if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
 return board[0][2]; 
 } 
 return ' '; 
} 
void printWinner(char winner) { 
 if(winner == PLAYER1){ 
 printf("\n\t  Game Over  \n"); 
 printf(" *** Congratulations, PLAYER1 won!! ***\n"); 
 }
 else if(winner == PLAYER2){ 
 printf("\n\t  Game Over  \n"); 
  printf(" *** Congratulations, PLAYER2 won!! ***\n");   
 } 
 else { 
 printf("\n\t  Game Over  \n"); 
 printf(" *** It's a tie! ***\n");  
}
}
