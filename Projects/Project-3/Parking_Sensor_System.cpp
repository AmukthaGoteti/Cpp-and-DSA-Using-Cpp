#include <iostream>
#include <thread>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

// Function to simulate buzzer beep
void beep(int delayTime)
{
    cout << "BEEP!\a" << endl;
    this_thread::sleep_for(milliseconds(delayTime));
}

int main()
{
    string input;
    float distance;

    cout << "=== Parking Sensor System Simulation ===" << endl;
    cout << "Type distance in cm or type 'stop' to end program.\n";

    while (true)
    {
        cout << "\nEnter distance: ";
        cin >> input;

        // Stop condition
        if (input == "stop" || input == "STOP")
        {
            cout << "System Stopped Successfully." << endl;
            break;
        }

        // Convert input string to float
        distance = stof(input);

        // Safe Zone
        if (distance > 100)
        {
            cout << "Status: Safe Distance" << endl;
            cout << "No buzzer." << endl;
        }

        // Warning Zone
        else if (distance > 50)
        {
            cout << "Status: Object Nearby" << endl;

            for (int i = 0; i < 3; i++)
            {
                beep(700);
            }
        }

        // Close Zone
        else if (distance > 20)
        {
            cout << "Status: Warning! Getting Close" << endl;

            for (int i = 0; i < 5; i++)
            {
                beep(300);
            }
        }

        // Danger Zone
        else
        {
            cout << "Status: STOP! Very Close Obstacle" << endl;

            for (int i = 0; i < 10; i++)
            {
                beep(100);
            }
        }
    }

    return 0;
}