//Total of the upper section
int upperTotal()
{
  return scoreOnes + scoreTwos + scoreThrees + scoreFours + scoreFives + scoreSixes;
}

//If the upper section total is greater than 62, then a bonus of 35 is awarded
int upperBonus()
{
  int value = 0;
  if (upperTotal()>62)
  {
    value = 35;
  }
  return value;
}

//Total of all scores
int grandTotal()
{
  return upperTotal() + upperBonus() + scoreThreeOfAKind + scoreFourOfAKind + scoreFullHouse + scoreSmallStraight + scoreLargeStraight
  + scoreChance + scoreYahtzee;
}