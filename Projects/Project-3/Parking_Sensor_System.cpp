#include <iostream>
#include <thread>
#include <chrono>

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
    float distance;

    cout << "=== Parking Sensor System Simulation ===" << endl;

    while (true)
    {
        cout << "\nEnter distance from obstacle (in cm): ";
        cin >> distance;

        // Exit condition
        if (distance < 0)
        {
            cout << "System Stopped." << endl;
            break;
        }

        // Safe Zone
        if (distance > 100)
        {
            cout << "Status: Safe Distance" << endl;
            cout << "No buzzer." << endl;
        }

        // Warning Zone
        else if (distance > 50 && distance <= 100)
        {
            cout << "Status: Object Nearby" << endl;

            for (int i = 0; i < 3; i++)
            {
                beep(700); // Slow beep
            }
        }

        // Close Zone
        else if (distance > 20 && distance <= 50)
        {
            cout << "Status: Warning! Getting Close" << endl;

            for (int i = 0; i < 5; i++)
            {
                beep(300); // Faster beep
            }
        }

        // Danger Zone
        else
        {
            cout << "Status: STOP! Very Close Obstacle" << endl;

            for (int i = 0; i < 10; i++)
            {
                beep(100); // Very fast beep
            }
        }
    }

    return 0;
}