    #include <iostream>
    using namespace std;
    #include <windows.h>
    struct Point {
        double x, y;
    };
    struct Circle {
        Point center; 
        double radius; 
    };
    bool isInside(Circle circle, Point point) {
        double dx = point.x - circle.center.x;
        double dy = point.y - circle.center.y;
        double distanceSquared = dx * dx + dy * dy;
        return distanceSquared <= circle.radius * circle.radius;
    }
    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);   
        Circle circle;
        Point point;
        cout << "Введіть координати центру кола (x y): ";
        cin >> circle.center.x >> circle.center.y;
        cout << "Введіть радіус кола: ";
        cin >> circle.radius;
        cout << "Введіть координати точки (x y): ";
        cin >> point.x >> point.y;
        if (isInside(circle, point)) {
            cout << "Точка всередині кола." << endl;
        }
        else {
            cout << "Точка поза колом." << endl;
        }
        return 0;
    }
