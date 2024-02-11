#include <iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "Russian");

	short number;

	cout << "Введите число в диапазоне 1-7, чтоб узнать день недели: \n";
	while (true) {
		try {
			cin >> number;
			if ((number <= 0) || number > 7) {
				throw "Ошибка ввода.";
			}

			switch (number) {
				case 1:
					cout << number << "й день недели это понедельник." ;
					break;
				case 2:				    
					cout << number << "й день недели это вторник." ;
					break;
				case 3:				    
					cout << number << "й день недели это среда." ;
					break;
				case 4:				    
					cout << number << "й день недели это четверг." ;
					break;
				case 5:				    
					cout << number << "й день недели это пятница." ;
					break;
				case 6:				    
					cout << number << "й день недели это суббота." ;
					break;
				case 7:				    
					cout << number << "й день недели это воскресенье." ;
					break;
			}
			break;
		}
		catch (...) {
			cout << "Необходимо ввести число от 1 до 7.\n";
			
			cin.clear();
			while (cin.get() != '\n');
		}
	}

}
