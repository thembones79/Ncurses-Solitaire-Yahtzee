//Is user selection valid?
int validInput(char choice)
{
  int value = 0;

  if ((choice == 'a') && scoreOnes == -1)
  {
    scoreOnes = ones;
    value = 1;
  };

  if ((choice == 'b') && scoreTwos == -1)
  {
    scoreTwos = (twos * 2);
    value = 1;
  };

  if ((choice == 'c') && scoreThrees == -1)
  {
    scoreThrees = (threes * 3);
    value = 1;
  };

  if ((choice == 'd') && scoreFours == -1)
  {
    scoreFours = (fours * 4);
    value = 1;
  };

  if ((choice == 'e') && scoreFives == -1)
  {
    scoreFives = (fives * 5);
    value = 1;
  };

  if ((choice == 'f') && scoreSixes == -1)
  {
    scoreSixes = (sixes * 6);
    value = 1;
  };

  if ((choice == 'g') && scoreThreeOfAKind == -1)
  {
    scoreThreeOfAKind = threeOfAKind();
    value = 1;
  };

  if ((choice == 'h') && scoreFourOfAKind == -1)
  {
    scoreFourOfAKind = fourOfAKind();
    value = 1;
  };

  if ((choice == 'i') && scoreFullHouse == -1)
  {
    scoreFullHouse = fullHouse();
    value = 1;
  };

  if ((choice == 'j') && scoreSmallStraight == -1)
  {
    scoreSmallStraight = smallStraight();
    value = 1;
  };

  if ((choice == 'k') && scoreLargeStraight == -1)
  {
    scoreLargeStraight = largeStraight();
    value = 1;
  };

  if ((choice == 'l') && scoreChance == -1)
  {
    scoreChance = chance();
    value = 1;
  };

  if ((choice == 'm') && scoreYahtzee == -1)
  {
    scoreYahtzee = yahtzee();
    value = 1;
  };

  return value;
}
