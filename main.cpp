#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int calculateDifference(int a, int b) {
    return b - a;
}

int main() {
    Point p1, p2;

    cout << "Enter the coordinates of the first point in this form (x y) [no comma]: ";
    cin >> p1.x >> p1.y;

    cout << "Enter the coordinates of the second point in this form (x y) [no comma]: ";
    cin >> p2.x >> p2.y;

    int xDifference = calculateDifference(p1.x, p2.x);
    int yDifference = calculateDifference(p1.y, p2.y);

    cout << "The difference in x-coordinates is: " << xDifference << endl;
    cout << "The difference in y-coordinates is: " << yDifference << endl;

    return 0;
}
