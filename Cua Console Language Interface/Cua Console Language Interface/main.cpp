#include<iostream>
#include<string>
#include<cstdlib>
#include<Windows.h>
#include<vector>

using namespace std;

class Execution
{
public:
	void execution(string stmt)
	{
		if (stmt == "ccli")
		{
			cout << "Cua Command Language Interface v1.1\nCheck the source code out at \n\nhttps://github.com/CuaMcCarsaree44/CCLI_1.1.git\nGNU GENERAL PUBLIC LICENSE";
		}

		if (stmt == "help")
		{
			cout << "ccli\t\t\t\tView About Software" << endl
				<< "command-prompt\t\t\tOpen CMD" << endl
				<< "easyworship9\t\t\tRun EasyWorship 2009" << endl
				<< "help\t\t\t\tShow All Syntaxes" << endl
				<< "restart\t\t\t\tRestart the Computer" << endl
				<< "shutdown\t\t\tShutdown the Computer" << endl
				<< "task-manager\t\t\tOpen Task Manager" << endl
				<< "xit\t\t\t\tExit Shell";
		}

		if (stmt == "restart")
		{
			system("shutdown -r");
		}

		if (stmt == "shutdown")
		{
			system("shutdown -s");
		}

		if (stmt == "task-manager")
		{
			system("taskmgr.exe");
		}

		if (stmt == "command-prompt")
		{
			system("cmd");
		}


	}
};


class StringBuilder
{
private: vector<string> query;
public: 
	bool getString(string stmt)
	{
		for (int i = 0; i < query.size(); i++)
		{
			if (stmt == query.at(i))
			{
				Execution exec;
				exec.execution(stmt);
				return true;
			}
		}
		cout << "'" + stmt + "'" + " is not is not recognized as an internal or external command";
		return false;
		
	}

	StringBuilder()
	{
		query.push_back("ccli"); //Show ccli Version
		query.push_back("help"); //Show all Syntaxes on this CCLI
		query.push_back("command-prompt"); //Run cmd
		query.push_back("easyworship9"); //Run EZWorship9
		query.push_back("xit"); //Exit Shell
		query.push_back("task-manager"); //Run Taskmanager
		query.push_back("shutdown"); //Shutdown Computer
		query.push_back("restart"); //Restart the Computer
		query.push_back("admin"); //Logout from Guest mode into Admin mode
	}
};

int main()
{
	system("COLOR 1E");
	string query; StringBuilder build;
	cout << "Cua Command Language Interface 1.1\n(c) ZIPFolder 2019 All Right Reserved GNU LICENSED\n";
	do
	{
		cout << ">> ";
		getline(cin, query); cin.sync(); cin.clear();
		if (query == "xit")
		{
			goto a;
		}
		build.getString(query);
		cout << "\n\n";
	} while (true);
	a:
	return 0;
}