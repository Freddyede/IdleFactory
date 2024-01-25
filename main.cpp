#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Titre de ta fenetre");
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == Event::KeyPressed)
            {
                if(event.key.code == Keyboard::Escape)
                {
                    window.close();
                }
            }
        }
    }
    return 0;
}
