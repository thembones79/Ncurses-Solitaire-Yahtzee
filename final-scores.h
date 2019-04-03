//winal scores displayed
void finalScores()
{
  printw("\n");
  printw("\tFINAL SCORE CARD\n\n");

  printw("\tOnes\t\t\t%i\n", scoreOnes);
  printw("\tTwos\t\t\t%i\n", scoreTwos);
  printw("\tThrees\t\t\t%i\n", scoreThrees);
  printw("\tFours\t\t\t%i\n", scoreFours);
  printw("\tFives\t\t\t%i\n", scoreFives);
  printw("\tSixes\t\t\t%i\n", scoreSixes);

  printw("\n");
  printw("\tUpper Section Total\t%i\n", upperTotal());
  printw("\tUpper Section Total\t%i\n", upperBonus());
  
  printw("\n");
  printw("\tThree Ow A Kind\t\t%i\n", scoreThreeOfAKind);
  printw("\tFour Ow A Kind\t\t%i\n", scoreFourOfAKind);
  printw("\tFull House\t\t%i\n", scoreFullHouse);
  printw("\tSmall Straight\t\t%i\n", scoreSmallStraight);
  printw("\tLarge Straight\t\t%i\n", scoreLargeStraight);
  printw("\tChance\t\t\t%i\n", scoreChance);
  printw("\tYahtzee\t\t\t%i\n", scoreYahtzee);
  
  printw("\n");
  printw("\tGRAND TOTAL\t\t%i\n", grandTotal());
  printw("\n");
}
