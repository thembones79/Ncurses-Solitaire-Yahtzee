//Loop to insure that a valid input has been entered
void scoringSelection()
{  
  int exitLoop = 0;
  while (exitLoop == 0)
  {
    printw("\tWhat is your selection?  ");
    char ch[2];
    getnstr(ch,1);
    if (validInput(ch[0]))
    {
      exitLoop = 1;
    };
  }
}	
