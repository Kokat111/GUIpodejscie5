#include "MainForms.h"
#include "MainApp.h"
#include "Register.h"
#include "MyAccount.h"
#include "UserId.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    int userId;
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    GUIpodejscie5::MainForms mainForm;
    GUIpodejscie5::Register registerForm;
    GUIpodejscie5::MainApp AppForm;
    GUIpodejscie5::MyAccount accountForm;

        while (mainForm.dzial && registerForm.dzial)
        {
            mainForm.ShowDialog();
            if (registerForm.switchToLogin)
            {
                registerForm.switchToLogin = false;
                GUIpodejscie5::MainForms mainForm;
                if (mainForm.switchToApp) {
                    mainForm.switchToApp = false;
                    GUIpodejscie5::MainApp AppForm;
                    AppForm.ShowDialog();
                    if (AppForm.switchToAccount)
                    {
                        AppForm.switchToAccount = false;
                        GUIpodejscie5::MyAccount accountForm;
                        accountForm.ShowDialog();
                        if (accountForm.switchToApp)
                        {
                            accountForm.switchToApp = false;
                            GUIpodejscie5::MainApp AppForm;
                            AppForm.ShowDialog();

                        }
                    }
                }
            }
            if (mainForm.switchToRegister)
            {
                mainForm.switchToRegister = false;
                GUIpodejscie5::Register registerForm;
                registerForm.ShowDialog();
                if (registerForm.switchToApp) {
                    registerForm.switchToApp = false;
                    GUIpodejscie5::MainApp AppForm;
                    AppForm.ShowDialog();
                    if (AppForm.switchToAccount)
                    {
                        AppForm.switchToAccount = false;
                        GUIpodejscie5::MyAccount accountForm;
                        accountForm.ShowDialog();
                        if (accountForm.switchToApp)
                        {
                            accountForm.switchToApp = false;
                            GUIpodejscie5::MainApp AppForm;
                            AppForm.ShowDialog();

                        }
                    }
                }
            }
            if (mainForm.switchToApp) {
                mainForm.switchToApp = false;
                GUIpodejscie5::MainApp AppForm;
                AppForm.ShowDialog();
                if (AppForm.switchToAccount)
                {
                    AppForm.switchToAccount = false;
                    GUIpodejscie5::MyAccount accountForm;
                    accountForm.ShowDialog();
                    if (accountForm.switchToApp)
                    {
                        accountForm.switchToApp = false;
                        GUIpodejscie5::MainApp AppForm;
                        AppForm.ShowDialog();

                    }
                }
            }
            
        }


}