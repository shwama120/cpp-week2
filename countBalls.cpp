#include <iostream> 

int countBalls(int guessDigit1, int guessDigit2, int guessDigit3, int answerDigit1, int answerDigit2, int answerDigit3) {

    int balls = 0; 


    if(guessDigit1 == answerDigit2 || guessDigit1 == answerDigit3)
    balls++; 
    if(guessDigit2 == answerDigit1 || guessDigit2 == answerDigit3) 
    balls++; 
    if(guessDigit3 == answerDigit1 || guessDigit3 == answerDigit2)
    balls++; 

    return balls; 

}