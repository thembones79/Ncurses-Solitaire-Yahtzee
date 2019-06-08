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
// 0 value indicates that the dice held do not meet the criteria for the box
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
