#include <iostream>
#include <vector>
#include <string>

// might need inheritance class?

class ColorDetector {   // system blueprint

    public: // Acces alllowed in main code 

        // ==== Color Attributes ====


        const int red[4] = {255, 0, 0, 255};
        const int blue[4] = {0, 0, 255, 255};
        const int black[4] = {0, 0, 0, 255};
        const int white[4] = {255, 255, 255, 255};

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