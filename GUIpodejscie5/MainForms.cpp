#include "MainForms.h"
#include "MainApp.h"
#include "Register.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    while (true) {
        GUIpodejscie5::MainForms mainForm;
        mainForm.ShowDialog();
        if (mainForm.switchToRegister)
        {
            GUIpodejscie5::Register registerForm;
            registerForm.ShowDialog();
            if (registerForm.switchToRegister)
            {
                if (mainForm.switchToApp)
                {
                    GUIpodejscie5::MainApp appForm;
                    appForm.ShowDialog();
                    break;
                }
                break;
            }
            else {
                break;
            }
        }
        if(mainForm.switchToApp)
        {
            GUIpodejscie5::MainApp appForm;
            appForm.ShowDialog();
            break;
        }
        break;

    }
}