#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    while (true)
    {
        // Open the web browser and navigate to the website. chrome.exe and the link can be changed.
        ShellExecuteA(NULL, "open", "chrome.exe", "https://open.spotify.com/album/5uiQ8OwH5i9BBrWGg2l46G", NULL, SW_SHOWNORMAL);

        Sleep(5000); // Wait for the website to load

        // Set up the mouse move and click functions. Don't change this.
        INPUT Input = { 0 };
        Input.type = INPUT_MOUSE;

        // Move the mouse to the cancel button. Don't change this.
        Input.mi.dx = 40000;
        Input.mi.dy = 13000;
        Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
        SendInput(1, &Input, sizeof(INPUT));

        // Click the cancel button
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
        SendInput(1, &Input, sizeof(INPUT));

        // Wait for the cancel button to take effect. Don't change this.
        Sleep(1000);

        // Move the mouse to the mute button. Don't change this.
        Input.mi.dx = 60000;
        Input.mi.dy = 60000;
        Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
        SendInput(1, &Input, sizeof(INPUT));

        // Click the mute button. Don't change this.
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
        SendInput(1, &Input, sizeof(INPUT));

        // Wait for the mute button to take effect. Don't change this.
        Sleep(1000);

        // Move the mouse to the restart button. Don't change this.
        Input.mi.dx = 31000;
        Input.mi.dy = 59000;
        Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
        SendInput(1, &Input, sizeof(INPUT));

        // Click the restart button. Don't change this.
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
        SendInput(1, &Input, sizeof(INPUT));

        // Wait for the restart button to take effect. Don't change this.
        Sleep(1000);

        // Move the mouse to the play button. Don't change this.
        Input.mi.dx = 6350;
        Input.mi.dy = 35800;
        Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
        SendInput(1, &Input, sizeof(INPUT));

        // Click the play button
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
        SendInput(1, &Input, sizeof(INPUT));

        // Click the play button again
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
        SendInput(1, &Input, sizeof(INPUT));

        // Wait 1 minute before exiting the website. This can be changed.
        Sleep(60000);

        // Move the mouse to the exit button. Don't change this.
        Input.mi.dx = 16000;
        Input.mi.dy = 1000;
        Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
        SendInput(1, &Input, sizeof(INPUT));

        // Click the exit button
        Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP;
        SendInput(1, &Input, sizeof(INPUT));

        // Wait 1 second before repeating the code. Don't change this.
        Sleep(2000);
    }
    return 0;
}
