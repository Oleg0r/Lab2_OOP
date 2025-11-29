#pragma once
#include <string>
using namespace std;

class ModelWindow {
private:
    string title;
    int x, y;
    int width, height;
    string color;
    bool visible;
    bool framed;

public:
    void Init();
    void Read();
    void Display();
    string toString();

    void MoveHorizontal(int dx);
    void MoveVertical(int dy);
    void Resize(int dw, int dh);
    void ChangeColor(string newColor);
    void SetVisible(bool v);
    void SetFrame(bool f);
};
