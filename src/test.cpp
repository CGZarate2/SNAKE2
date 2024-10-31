#include <ftxui/dom/elements.hpp>  // NOLINT//Intento de html en la terminal (TUI) en c++
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp> 
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    

    while (true)
    {
        auto can = Canvas(300, 150);
        //can.DrawPointCircle(10,10,10);
        //can.DrawPointLine(0, 0, 300, 50);
        
        can.DrawPointLine(150, 10, 150, 40);
        can.DrawPointLine(130, 25, 170, 25);
        can.DrawPointLine(150, 10, 170, 10);
        can.DrawPointLine(130, 25, 130, 10);
        can.DrawPointLine(130, 40, 150, 40);
        can.DrawPointLine(170, 25, 170, 40);
        can.DrawPointCircle(frame, 25, 20);

        if (frame == 150){
            can.DrawBlockCircleFilled(150, 25, 30);
            this_thread::sleep_for(2s);
        }
        
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element personaje = spinner(21, frame);
        Element lienzo = bgcolor(Color::Blue, canvas(&can));
        Render(pantalla, lienzo);


        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}
