#include "ModelWindow.h"
#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ModelWindow w;

    w.Init();
    w.Read();

    w.MoveHorizontal(10);
    w.MoveVertical(5);
    w.Resize(20, 20);
    w.ChangeColor("green");

    w.Display();
}