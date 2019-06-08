#include <ncurses.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "initialise.h"
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
