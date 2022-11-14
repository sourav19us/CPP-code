#include <iostream>
#include <thread>
#include <map>
#include <chrono>
using namespace std;

void forecastData(std::map<std::string, int> forecastMap)
{
    for (auto &item : forecastMap)
    {
        item.second++;
        std::cout << item.first << " " << item.second << " C" << std::endl;
    }

    this_thread::sleep_for(2000ms);
}

int main()
{
    std::map<std::string, int> forecastMap{
        {"Jaipur", 12},
        {"Mumbai", 20},
        {"Goa", 22}};

    // forecastData(forecastMap);

    thread bgWorke(forecastData, forecastMap);

    return 0;
}