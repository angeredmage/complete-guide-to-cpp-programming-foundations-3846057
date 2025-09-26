// Complete Guide to C++ Programming Foundations
// Exercise 05_08
// Ranged For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> lapTimes = {92, 85, 88, 90, 87};
    float average;

    average = 0.f;
    for (auto lapTime : lapTimes)
        average += lapTime;
    average /= lapTimes.size();
    std::cout << "Average Lap Time: " << average << std::endl;

    std::cout << std::endl << std::endl;

    return 0;
}