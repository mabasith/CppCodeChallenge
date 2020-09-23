// include import C++ libraries here.

#include <SFML/Graphics.hpp>

// Make code easier to type with "using namespacecsf"
using namespace sf;


int main()
{
    //Create a video mode object.
    VideoMode vm(1920, 1080);
    // Create and open a window for the game
    RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

    return 0;
}