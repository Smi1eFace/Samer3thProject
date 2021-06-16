#include <iostream>
#include <chrono>
#include <thread>


using std::cout;
using std::endl;
using std::cin;
using std::string;

void sleep(int f)
{
  int x = 0;
  for (int i = 0; i < f * 100; ++i)
  {
    x++;
  }
}

int main()
{
	string MyName[6] = {"  _________                            "," /   _____/____    _____   ___________ "," \\_____  \\__  \\  /     \\_/ __ \\_  __ \\"," /        \\/ __ \\|  Y Y  \\  ___/|  | \\/","/_______  (____  /__|_|  /\\___  >__|   ","        \\/     \\/      \\/     \\/       "};
	system("clear");
	int x = 0;
	int y = 0;
	int currentYval = 0;
	bool reset = false;
	bool idk = false;
	bool resetCYV = false;
	int len = sizeof(MyName) / sizeof(MyName[0]);
	system("clear");
	cout << "                     Made With ❤️ By Samer Alabdaly" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	while (true)
	{
		system("clear");
		
		if (resetCYV == false)
		{
			if(y % 9 == 0 && y >= 9)
				currentYval++;
			
			for(int d = 0;d <= currentYval;d++)
			{
				cout << " " << endl;
			}
			if (currentYval == 33)
			{
				resetCYV = true;
				idk = true;
			}
		}
		else
		{
			if (reset == true && idk == true)
			{
				for(int d = 0;d <= currentYval;d++)
				{
					cout << endl;
				}
				idk = false;
			}
			else
			{
				if(idk == true)
				{
					for(int d = 0;d <= currentYval;d++)
					{
						cout << " " << endl;
					}
				}
				else
				{
					if (y == 0 && x != 0)
					{
						y += 9;
					}
					else if (y < 10 && x == 0)
					{
						currentYval = 0;
						resetCYV = false;
					}
					if(y % 9 == 0 && y >= 9)
						currentYval--;
					for(int d = 0;d <= currentYval;d++)
					{
						cout << endl;
					}
				}
			}
 		}

		if(x <= 127 && reset == false)
		{
			for(int d = 0;d < len;d++)
			{
				for(int i = 0;i <= x;i++)
				{
					cout << " ";
				}
				cout << MyName[d] << endl;
			}
			if (x == 127)
				reset = true;
		}
		else if(reset == true)
		{
			for (int d = 0;d < len;d++)
			{
				for(int i = 0;i <= x;i++)
				{
					cout << " ";
				}
				cout << MyName[d] << endl;
			}
			if (x == 0)
				reset = false;
		}

		if(resetCYV == true)
			y--;
		else
			y++;
		if (reset)
			x--;
		else
			x++;
		std::this_thread::sleep_for(std::chrono::milliseconds(15));
	}
}

/*

	made with ❤️ by samer alabdaly

*/
