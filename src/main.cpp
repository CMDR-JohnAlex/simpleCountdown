// JOHN ALEXANDER LE ROUX
#include <iostream>
#ifdef _WIN32 // _WIN32 and _WIN64
#include <Windows.h>
#endif
#ifdef __unix__
#include <>
#endif
#ifdef __APPLE__
#include <>
#endif

int main(int argc, char* argv[])
{
	int countdownDay, countdownHour, countdownMinute, countdownSecond;
	std::cout << "Days: ";
	std::cin >> countdownDay;
	std::cout << "Hours: ";
	std::cin >> countdownHour;
	std::cout << "Minutes: ";
	std::cin >> countdownMinute;
	std::cout << "Seconds: ";
	std::cin >> countdownSecond;

	while (true)
	{
#ifdef _WIN32 // _WIN32 and _WIN64
		system("CLS");
#endif
#ifdef __unix__
		system("clear");
#endif
#ifdef __APPLE__
		system("clear");
#endif

		std::cout << countdownDay  << " days, " << countdownHour << " hours, " << countdownMinute << " minutes, " << countdownSecond << " Seconds left!\n";

#ifdef _WIN32 // _WIN32 and _WIN64
		Sleep(1000);
#endif
#ifdef __unix__
		sleep(1);
#endif
#ifdef __APPLE__
		sleep(1);
#endif

		countdownSecond--;
		if (countdownSecond < 0)
		{
			countdownMinute--;
			countdownSecond = 59;
		}
		if (countdownMinute < 0)
		{
			countdownHour--;
			countdownMinute = 59;
		}
		if (countdownHour < 0)
		{
			countdownDay--;
			countdownHour = 23;
		}
		if (countdownDay < 0)
		{
			break;
		}
	}
	return 0;
}