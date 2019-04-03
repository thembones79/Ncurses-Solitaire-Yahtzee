//Up to two re-rolls are allowed
void playerReRolls()
{
  int dice;
  printw("\n");

  if (ones>0)
  {
    printw("\tHow many ones do you wish to re-roll? ");
    dice = getDigit();

    if (dice >= 0 && dice <= ones)
    {
      reRolls += dice;
      ones -= dice;
    };
  };

  if (twos>0)
  {
    printw("\tHow many twos do you wish to re-roll? ");
    dice = getDigit();

    if (dice >= 0 && dice <= twos)
    {
      reRolls += dice;
      twos -= dice;
    };
  };

  if (threes>0)
  {
    printw("\tHow many threes do you wish to re-roll? ");
    dice = getDigit();

    if (dice >= 0 && dice <= threes)
    {
      reRolls += dice;
      threes -= dice;
    };
  };

  if (fours>0)
  {
    printw("\tHow many fours do you wish to re-roll? ");
    dice = getDigit();

    if (dice >= 0 && dice <= fours)
    {
      reRolls += dice;
      fours -= dice;
    };
  };

  if (fives>0)
  {
    printw("\tHow many fives do you wish to re-roll? ");
    dice = getDigit();

    if (dice >= 0 && dice <= fives)
    {
      reRolls += dice;
      fives -= dice;
    };
  };

  if (sixes>0)
  {
    printw("\tHow many sixes do you wish to re-roll? ");
    dice = getDigit();

    if (dice >= 0 && dice <= sixes)
    {
      reRolls += dice;
      sixes -= dice;
    };
  };
}
