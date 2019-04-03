//Three of a kind score function
int threeOfAKind()
{
  int value = 0;
  if (ones == 3 || twos == 3 || threes == 3 || fours == 3 || fives == 3 || sixes == 3)
  {
    value = ones + (twos * 2) + (threes * 3) + (fours * 4) + (fives * 5) + (sixes * 6);
  };
  return value;
}

//Four of a kind score function
int fourOfAKind()
{
  int value = 0;
  if (ones == 4 || twos == 4 || threes == 4 || fours == 4 || fives == 4 || sixes == 4)
  {
    value = ones + (twos * 2) + (threes * 3) + (fours * 4) + (fives * 5) + (sixes * 6);
  };
  return value;
}

//Full house score function
int fullHouse()
{
  int value = 0;
  int tripleTest = 0;
  int pairTest = 0;

  if (ones == 3 || twos == 3 || threes == 3 || fours == 3 || fives == 3 || sixes == 3)
  {
    tripleTest = 1;
  };

  if (ones == 2 || twos == 2 || threes == 2 || fours == 2 || fives == 2 || sixes == 2)
  {
    pairTest = 1;
  };

  if ((tripleTest * pairTest) == 1)
  {
    value = 25;
  };

  return value;
}

//Small straight score function
int smallStraight()
{
  int value = 0;

  if (ones>0 && twos>0 && threes>0 && fours>0)
  {
    value = 30;
  };

  if (twos>0 && threes>0 && fours>0 && fives>0)
  {
    value = 30;
  };

  if (threes>0 && fours>0 && fives>0 && sixes>0)
  {
    value = 30;
  };

  return value;
}

//Large straight score function
int largeStraight()
{
  int value = 0;

  if (ones>0 && twos>0 && threes>0 && fours>0 && fives>0)
  {
    value = 40;
  };

  if (twos>0 && threes>0 && fours>0 && fives>0 && sixes>0)
  {
    value = 40;
  };

  return value;
}

//The total of all dice. Regardless of arrangement
int chance()
{
  return ones + (twos * 2) + (threes * 3) + (fours * 4) + (fives * 5) + (sixes * 6);
}

//Yahtzee score function
int yahtzee()
{
  int value = 0;
  if (ones == 5 || twos == 5 || threes == 5 || fours == 5 || fives == 5 || sixes == 5)
  {
    value = 50;
  };
  return value;
}
