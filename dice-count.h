// Rolling the dice and recording the results
void diceCount()
{
  while (reRolls>0)
  {
  int roll = (rand() % 6) + 1;
  reRolls--;
  switch (roll)
  {
    case 1:
      ones++;
      break;
    case 2:
      twos++;
      break;
    case 3:
      threes++;
      break;
    case 4:
      fours++;
      break;
    case 5:
      fives++;
      break;
    case 6:
      sixes++;
      break;
    };
  };
}
