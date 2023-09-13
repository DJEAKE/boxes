#include <iostream>

int main()
{
	setlocale(LC_ALL, "russian");

	int transferringBallsToStore = 10;
	int countBallsInStore = 0;
	int transferringBallsToCar = 0;

	std::cout << "На складе " << countBallsInStore << " шаров" << std::endl;
	countBallsInStore = transferringBallsToStore;

	std::cout << "На склад загружено " << countBallsInStore << " шаров" << std::endl;
	transferringBallsToCar = countBallsInStore;

	std::cout << "В грузовую машину загружено " << transferringBallsToCar << " шаров" << std::endl;
	countBallsInStore = 0;

	std::cout << "На складе " << countBallsInStore << " шаров" << std::endl;
}
