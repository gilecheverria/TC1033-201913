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
    if (frequency >= 105)
    {
        frequency = 90;
    }
    else
    {
        frequency += 0.5;
    }
}

void Radio::tuneDown()
{
    if (frequency <= 90)
    {
        frequency = 105;
    }
    else
    {
        frequency -= 0.5;
    }
}

void Radio::volumeUp()
{
    if (volume < 10)
    {
        volume++;
    }
}

void Radio::volumeDown()
{
    if (volume > 0)
    {
        volume--;
    }
}

int main()
{
    // Create an instance
    Radio my_radio;
    Radio another_radio(0, 100.5);
    int option;

    while (true)
    {
        cout << "Current frequency: " << another_radio.getFrequency() << endl;
        cout << "Current volume: " << another_radio.getVolume() << endl;
        cout << "RADIO OPTIONS:" << endl;
        cout << "1. Tune Up" << endl;
        cout << "2. Tune Down" << endl;
        cout << "3. Volume Up" << endl;
        cout << "4. Volume Down" << endl;
        cout << "Select option: ";
        cin >> option;
        if (option == 1)
        {
            another_radio.tuneUp();
        }
        else if (option == 2)
        {
            another_radio.tuneDown();
        }
        if (option == 3)
        {
            another_radio.volumeUp();
        }
        else if (option == 4)
        {
            another_radio.volumeDown();
        }
    }

    return 0;
}
