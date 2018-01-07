#define MAX_PLAYERS 10
#define SUIT 4 
#define DECK 13

typedef struct {
	int id;
}Player;

typedef struct {
	char name[4];
	int value;
}Card;

//declare functions
void setPlayerInfo(int numPlayer, Player playerList[MAX_PLAYERS]);
void deal(int numPlayers, Card allCards[MAX_PLAYERS][DECK]);
void selectCard(int numPlayers, Card allCards[MAX_PLAYERS][DECK], Card selectedCards[MAX_PLAYERS]);
void getScores(int numPlayers, Card selectedCards[MAX_PLAYERS], int scores[MAX_PLAYERS]);
void showWinner(int numPlayers, int totalScores[MAX_PLAYERS]);
