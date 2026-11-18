#include <iostream>
#include <vector>
#include <string>

class ColorIdentity {
    public: // Acces alllowed in main code 

        // ==== Color Attributes ====

        // How do i allow more initializer values for colors??

        int red = {255, 0, 0, 255};
        int blue = {0, 0, 255, 255};
        int black = {0, 0, 0, 255};
        int white = {255, 255, 255, 255};

        // Camera Attributes 

        bool IsCameraOn;
        bool IsCameraOff;

    private: // Access not allowed in main code

};


int main () { 

    std::cout << "Hello World" << std::endl;

    return 0;
}

/*
    Questions

    - What can I do to open a camera 
    - How can I store colors 
    - Do I need external things to help me (something non C++)
    - What do I start on

*/