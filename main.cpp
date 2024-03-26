#include <iostream> 
int countStrikes(int guessDigit1, int guessDigit2, int guessDigit3, int answerDigit1, int answerDigit2, int answerDigit3); 
int countBalls(int guessDigit1, int guessDigit2, int guessDigit3, int answerDigit1, int answerDigit2, int answerDigit3); 
int util(int anser);  

int main() {

    int answer = 0;

    answer = util(answer); 

    std::cout << "Answer is " << answer << std::endl; 
    

    int answerDigit1 = answer / 100; 
    int answerDigit2 = (answer / 10) % 10; 
    int answerDigit3 = answer % 10; 

    while(true) {

        int guess; 
        std::cout << "Enter a guess: "; 
        std::cin >> guess; 

       

        int guessDigit1 = guess / 100; 
        int guessDigit2 = (guess / 10) % 10; 
        int guessDigit3 = guess % 10;

        int strikes = countStrikes(guessDigit1, guessDigit2, guessDigit3, answerDigit1, answerDigit2, answerDigit3); 
        int balls = countBalls(guessDigit1, guessDigit2, guessDigit3, answerDigit1, answerDigit2, answerDigit3); 


         if(strikes == 3) { 

            std::cout << "You win!" << std::endl; 

            break; 


         }

         std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl; 





    }



    return 0; 
}