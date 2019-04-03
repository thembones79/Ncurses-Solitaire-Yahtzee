//Displays the player's scorecard so far
void scoreCard()
{
  printw("\n");
  printw("\tSCORE CARD\n\n");

  if (scoreOnes == -1)
  {
    printw("\tOnes \t\t\t[a]\n");
  }
  else
  {
    printw("\tOnes \t\t\t%i\n", scoreOnes);
  };

  if (scoreTwos == -1)
  {
    printw("\tTwos \t\t\t[b]\n");
  }
  else
  {
    printw("\tTwos \t\t\t%i\n", scoreTwos);
  };

  if (scoreThrees == -1)
  {
    printw("\tThrees \t\t\t[c]\n");
  }
  else
  {
    printw("\tThrees \t\t\t%i\n", scoreThrees);
  };

  if (scoreFours == -1)
  {
    printw("\tFours \t\t\t[d]\n");
  }
  else
  {
    printw("\tFours \t\t\t%i\n", scoreFours);
  };

  if (scoreFives == -1)
  {
    printw("\tFives \t\t\t[e]\n");
  }
  else
  {
    printw("\tFives \t\t\t%i\n", scoreFives);
  };

  if (scoreSixes == -1)
  {
    printw("\tSixes \t\t\t[f]\n");
  }
  else
  {
    printw("\tSixes \t\t\t%i\n", scoreSixes);
  };

  printw("\n");

  if (scoreThreeOfAKind == -1)
  {
    printw("\tThree Of A Kind \t[g]\n");
  }
  else
  {
    printw("\tThree Of A Kind \t%i\n", scoreThreeOfAKind);
  };

  if (scoreFourOfAKind == -1)
  {
    printw("\tFour Of A Kind \t\t[h]\n");
  }
  else
  {
    printw("\tFour Of A Kind \t\t%i\n", scoreFourOfAKind);
  };

  if (scoreFullHouse == -1)
  {
    printw("\tFull House \t\t[i]\n");
  }
  else
  {
    printw("\tFull House \t\t%i\n", scoreFullHouse);
  };

  if (scoreSmallStraight == -1)
  {
    printw("\tSmall Straight \t\t[j]\n");
  }
  else
  {
    printw("\tSmall Straight \t\t%i\n", scoreSmallStraight);
  };

  if (scoreLargeStraight == -1)
  {
    printw("\tLarge Straight \t\t[k]\n");
  }
  else
  {
    printw("\tLarge Straight \t\t%i\n", scoreLargeStraight);
  };

  if (scoreChance == -1)
  {
    printw("\tChance \t\t\t[l]\n");
  }
  else
  {
    printw("\tChance \t\t\t%i\n", scoreChance);
  };

  if (scoreYahtzee == -1)
  {
    printw("\tYahtzee \t\t[m]\n");
  }
  else
  {
    printw("\tYahtzee \t\t%i\n", scoreYahtzee);
  };

  printw("\n");
}
