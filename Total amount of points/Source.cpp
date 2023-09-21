/*
Our football team has finished the championship.

Our team's match results are recorded in a collection of strings. Each match is represented
by a string in the format "x:y", where x is our team's score and y is our opponents score.
*/
#include<iostream>
#include<string>
#include<array>

int points(const std::array<std::string, 10>& games) {
    int sum{0};
    for (int i{ 0 }; i < 10; ++i)
    {
        std::string one = games[i].substr(0, 1);
        std::string two = games[i].substr(2, 1);
        int x{ std::stoi(one) };
        int y{ std::stoi(two) };
        if (x > y)
            sum = sum + 3;
        if (x == y)
            ++sum;
    }
    /*
    int score = 0;
  for(auto i : games) {
    if(i[0] == i[2]) score += 1;
    if(i[0] > i[2]) score += 3;
  }
  return score;//интересный вариант
    */ 
    
    return sum;
}

int main()
{
    int r;
    r = points(std::array<std::string, 10>{"1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3"});
}