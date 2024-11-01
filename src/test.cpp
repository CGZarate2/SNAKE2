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
        
        can.DrawPointLine(130, 60, 170, 60);   
        can.DrawPointLine(130, 60, 130, 30);   
        can.DrawPointLine(170, 60, 170, 30);   
        can.DrawPointLine(130, 30, 170, 30);   


        can.DrawPointLine(130, 30, 150, 10);   
        can.DrawPointLine(170, 30, 150, 10);   

        can.DrawPointLine(145, 60, 155, 60);  
        can.DrawPointLine(145, 60, 145, 45);   
        can.DrawPointLine(155, 60, 155, 45);   
        can.DrawPointLine(145, 45, 155, 45); 
        //can.DrawPointCircle(frame, 25, 20);

        if (frame <= 120){
            can.DrawPointLine(frame, 60, frame + 20, 60);
            can.DrawPointLine(frame, 60, frame + 10, 50);
            can.DrawPointLine(frame + 20, 60, frame + 10, 50);
            can.DrawPointLine(frame + 10, 50, frame + 10, 40);
            can.DrawPointLine(frame + 10, 40, frame + 15, 45);
            can.DrawPointLine(frame + 10, 40, frame + 5, 45);
            
        }else{
            if (frame < 200)
            {
                can.DrawBlockCircleFilled(130, 45, frame-140);
            }
            
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
