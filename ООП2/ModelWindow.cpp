#include "ModelWindow.h"
#include <iostream>

using namespace std;

void ModelWindow::Init() {
    title = "NoTitle";
    x = 0;
    y = 0;
    width = 100;
    height = 100;
    color = "white";
    visible = true;
    framed = true;
}

void ModelWindow::Read() {
    cout << "Введіть назву: ";
    cin >> title;

    cout << "x y: ";
    cin >> x >> y;

    cout << "width height: ";
    cin >> width >> height;

    cout << "Колір: ";
    cin >> color;

    cout << "Видиме (1/0): ";
    cin >> visible;

    cout << "З рамкою (1/0): ";
    cin >> framed;
}

void ModelWindow::Display() {
    cout << "\n******** ДАНІ ВІКНА ********\n";
    cout << toString() << endl;
}

string ModelWindow::toString() {
    return "Назва: " + title +
        "\nКоординати: (" + to_string(x) + ", " + to_string(y) + ")" +
        "\nРозмір: " + to_string(width) + "x" + to_string(height) +
        "\nКолір: " + color +
        "\nВидиме: " + string(visible ? "так" : "ні") +
        "\nРамка: " + string(framed ? "так" : "ні");
}

void ModelWindow::MoveHorizontal(int dx) {
    x += dx;
}

void ModelWindow::MoveVertical(int dy) {
    y += dy;
}

void ModelWindow::Resize(int dw, int dh) {
    width += dw;
    height += dh;
}

void ModelWindow::ChangeColor(string newColor) {
    color = newColor;
}

void ModelWindow::SetVisible(bool v) {
    visible = v;
}

void ModelWindow::SetFrame(bool f) {
    framed = f;
}
