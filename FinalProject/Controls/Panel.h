#pragma once
#include "../Common/Control.h"
#include "vector"

class Panel : public Control{
    protected:
        vector <Control*> Controlers;

    public:
        Panel(short left, short top, short width, short height, Border* border, Color textColor, Color backgroundColor) : Control(left, top, width, height, border, textColor, backgroundColor) {};
        ~Panel();
        void addToPanel(Control* controler);
        void draw(Graphics& g, int x, int y, size_t z);
};