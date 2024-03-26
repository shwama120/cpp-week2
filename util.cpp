#include <iostream>
#include <random>  
#include <chrono>

int util(int answer) {

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();  
    std::mt19937 gen(seed); 

    std::uniform_int_distribution<> dis(100, 1000); 

    answer = dis(gen); 

return answer; 

}