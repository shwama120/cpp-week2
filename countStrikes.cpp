#include <iostream> 

int countStrikes(int answerDigit1, int answerDigit2, int answerDigit3, int guessDigit1, int guessDigit2, int guessDigit3) {

    int strikes = 0; 

    if(guessDigit1 == answerDigit1) 
    strikes++; 
    if(guessDigit2 == answerDigit2) 
    strikes++; 
    if(guessDigit3 == answerDigit3) 
    strikes++; 
    
    return strikes; 
    
 }