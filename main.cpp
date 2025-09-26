#include "function.hpp"

int main() {
    int up, down, goal;
    int days = 0;
    cin >> up >> down >> goal;

    days = CountDays(up, down, goal);

    cout << days << endl;

    return 0;
}
