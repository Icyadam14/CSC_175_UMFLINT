//
// Created by Adam Kahl on 2/24/2021.
//


#include <iostream>
#include <fstream>

int main()
{
    // in this function, we want to export the items to a text file
    std::ofstream myfile("test.txt");
//    myfile.open("TodayTime.txt");
    if (myfile.is_open())
    {
        myfile << "The average call time is ";
        myfile.flush();
        myfile.close();
    }
    else
    {
        std::cerr << "didn't write" << std::endl;
    }
}