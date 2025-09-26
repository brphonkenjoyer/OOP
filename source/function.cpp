#include "function.hpp"

int CountDays(int up, int down, int goal){
    int days = 0;
    int height = 0;

    if (up <= down && goal > up) return -1;  // недостижимо

    while (height < goal){
        height += up;
        days++;
        if (height >= goal){
            break;
        }
        height -= down; 
    }
    
    return days;
}