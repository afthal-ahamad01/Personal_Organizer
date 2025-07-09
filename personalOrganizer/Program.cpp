#include "loginForm.h"
#include "Dashboard.h"
#include "registrationForm.h"
#include "Income.h"
#include "Expences.h"
#include "setBudget.h"
#include "Showing Report.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	/*personalOrganizer::loginForm LoginForm;

	LoginForm.ShowDialog();
	User1^ user = LoginForm.user;*/

	User1^ user = nullptr;

	while (true) {
		personalOrganizer::loginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister)
		{
			personalOrganizer::registrationForm registrationForm;
			registrationForm. ShowDialog();

			if (registrationForm.switchToLogin)
			{
				continue;
			}
			else
			{
				user = registrationForm.user;
				MessageBox::Show("Registration Success!","Success",MessageBoxButtons::OK);
				continue;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr)
	{
		//MessageBox::Show("Successfull Authentication of "+user->name,"Success",MessageBoxButtons::OK);

		personalOrganizer::Dashboard dashboard(user);
		Application::Run(%dashboard);

	}
	else {
		MessageBox::Show("Authentication cancelled","Canceled",MessageBoxButtons::OK);
	}
	
	return 0;
		
}