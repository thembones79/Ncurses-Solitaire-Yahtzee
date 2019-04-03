#include <ncurses.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROUNDS 13
#define DICE 5

// The number of dice to be rolled
int reRolls = DICE;

// The number of dice held of each type
int ones = 0;
int twos = 0;
int threes = 0;
int fours = 0;
int fives = 0;
int sixes = 0;

// The Scorecard
// -1 value indicates that the box is empty
// 0 value indicates that the dice held do not meet the criteria fpr the box
int scoreOnes = -1;//total of all ones
int scoreTwos = -1;//total of all twos
int scoreThrees = -1;//total of all threes
int scoreFours = -1;//total of all fours
int scoreFives = -1;//total of all fives
int scoreSixes = -1;//total of all sixes
int scoreThreeOfAKind = -1;//three dice of one type
int scoreFourOfAKind = -1;//four dice of one type
int scoreFullHouse = -1;//three dice of one type and two of another
int scoreSmallStraight = -1;//four dice in sequence
int scoreLargeStraight = -1;//five dice in sequence
int scoreChance = -1;//the total of all dice
int scoreYahtzee = -1;//all dice of the same type

#include "get-digit.h"
#include "dice-count.h"
#include "display-dice.h"
#include "player-rerolls.h"
#include "score-card.h"
#include "scoring-functions.h"
#include "valid-input.h"
#include "scoring-selection.h"
#include "totals.h"
#include "final-scores.h"

//The entry point to the program
int main()
{
  initscr();
  scrollok(stdscr,TRUE);
  srand(time(0));

  printw("\n");
  printw("\tWELCOME TO SOLITAIRE YAHTZEE IN THE TERMINAL\n");
  
  for (int count = 0; count<ROUNDS; count++)
  {
    diceCount();
    displayDice();
    playerReRolls();
    if (reRolls>0)
    {
      diceCount();
      displayDice();
      playerReRolls();
    };
    diceCount();
    displayDice();
    scoreCard();
    scoringSelection();
    //return to default values
    reRolls = DICE;
    ones = 0;
    twos = 0;
    threes = 0;
    fours = 0;
    fives = 0;
    sixes = 0;
  };
  
  finalScores();
  
  printw("\n");
  printw("\tPress any key to continue... ");
  getch();

  endwin();
}
