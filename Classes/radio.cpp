/*
   Example of a class to define a Radio 

   Gilberto Echeverria
   14/11/2019
*/

#include <iostream>

using namespace std;

class Radio {
    private:
        // Attributes
        int volume;
        float frequency;
        bool on;
    public:
        // Empty Constructor
        Radio() {}
        // Conctructor with initial values
        Radio(int _volume, float _frequency);
        // Methods
        void tuneUp();
        void tuneDown();
        void volumeUp();
        void volumeDown();
        float getFrequency() { return frequency; }
        int getVolume() { return volume; }
};

// Constructor
Radio::Radio(int _volume, float _frequency)
{
    volume = _volume;
    frequency = _frequency;
}

void Radio::tuneUp()
{
    frequency += 0.5;
}

void Radio::tuneDown()
{
    frequency -= 0.5;
}

int main()
{
    // Create an instance
    Radio my_radio;
    Radio another_radio(0, 100.5);

    cout << "My radio.frequency: " << my_radio.getFrequency() << endl;
    cout << "Another.frequency: " << another_radio.getFrequency() << endl;

    another_radio.tuneUp();
    cout << "Another.frequency: " << another_radio.getFrequency() << endl;

    return 0;
}
