#include <iostream>
#include <random>  


int util(int answer) {

    std::random_device rand; 
    std::mt19937 gen(rand()); 

    std::uniform_int_distribution<> dis(100, 1000); 

    answer = dis(gen); 

return answer; 

}