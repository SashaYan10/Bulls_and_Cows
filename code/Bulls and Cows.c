#include <stdio.h>
#include <Windows.h>

void bot() { 	//Скрипт гри з ботом
	int n, a, b, c=0, d=0, B=0, C, a1, b1, c1, d1;
	srand(time(NULL)); //Для отримання різних чисел в грі
	while (d==c||d==b||d==a||c==b||c==a||b==a) {	//Поци щось із цього працюватиме, то будуть загадуватися різні числа від 0-9
		a=rand()%10;
		b=rand()%10;
		d=rand()%10;
		c=rand()%10;
	}
	while (B!=4) {			//Поки биків не 4, то будуть обраховуватися
		n=0;
		while (d1==c1||d1==b1||d1==a1||c1==b1||c1==a1||b1==a1||n<123||n>9876) {		//Поки щось із цього працюватиме, то буде дана можливість вгадувати числа
			printf("\nВаш варіант -> ");
			scanf("%d", &n);
			a1=n%10;
			b1=(n/10)%10;
			c1=(n/100)%10;
			d1=(n/1000)%10;
		}
		B=0; C=0;
		if (d1==c||d1==b||d1==a) {	//Якщо одна із змінних буде дорівнювати загаданому числу, то будуть обрахуватися 'корови' - змінна C та 'бики' - змінна m
			C=C+1;
		}
		else if(d1==d) {
			B=B+1;
		}
		if (c1==d||c1==b||c1==a) {
			C=C+1;
		}
		else if(c1==c) {
			B=B+1;
		}
		if (b1==c||b1==d||b1==a) {
			C=C+1;
		}
		else if(b1==b) {
			B=B+1;
		}
		if (a1==c||a1==b||a1==d) {
			C=C+1;
		}
		else if(a1==a) {
			B=B+1;
		}
		printf("Корів: %d Биків: %d\n", C, B);	//Виводиться обрахований вище результат
		if (B==4)	//Якщо всі m (бики) правильні, то виводитиметься повідомлення про виграш
			printf("\nВИ ВГАДАЛИ!!!");
	}
	getch();
}

void player() {		//Скрипт для гри з іншим гравцем
	int n, a, b, c=0, d=0, B=0, C, a1, b1, c1, d1;
		system("cls");			//Дається можливість одному учасникку ввести по одному різні чотири числа, після їх введення це повідомлення сховається
		printf("Введіть перше число: \n");
		scanf("%d", &d);
		printf("Введіть друге число: \n");
		scanf("%d", &c);
		printf("Введіть третє число: \n");
		scanf("%d", &b);
		printf("Введіть четверте число: \n");
		scanf("%d", &a);
		system("cls");
		
		while (d==c||d==b||d==a||c==b||c==a||b==a) {				//Якщо якісь числа, загадані іншим гравцем, будуть співпадати, то потрібно буде ввести їх ще раз
			system("cls");
			printf("Всі числа повинні бути різні!!!\n\n");
			printf("Введіть перше число: \n");
			scanf("%d", &d);
			printf("Введіть друге число: \n");
			scanf("%d", &c);
			printf("Введіть третє число: \n");
			scanf("%d", &b);
			printf("Введіть четверте число: \n");
			scanf("%d", &a);
			system("cls");
		}
		
	while (B!=4) {			//Поки биків не 4, то будуть обраховуватися
		n=0;
		while (d1==c1||d1==b1||d1==a1||c1==b1||c1==a1||b1==a1||n<123||n>9876) {		//Поки щось із цього працюватиме, то буде дана можливість вгадувати числа
			printf("\nВаш варіант -> ");
			scanf("%d", &n);
			a1=n%10;
			b1=(n/10)%10;
			c1=(n/100)%10;
			d1=(n/1000)%10;
		}
		B=0; C=0;
		if (d1==c||d1==b||d1==a) {	//Якщо одна із змінних буде дорівнювати загаданому числу, то будуть обрахуватися 'корови' - змінна C та 'бики' - змінна m
			C=C+1;
		}
		else if(d1==d) {
			B=B+1;
		}
		if (c1==d||c1==b||c1==a) {
			C=C+1;
		}
		else if(c1==c) {
			B=B+1;
		}
		if (b1==c||b1==d||b1==a) {
			C=C+1;
		}
		else if(b1==b) {
			B=B+1;
		}
		if (a1==c||a1==b||a1==d) {
			C=C+1;
		}
		else if(a1==a) {
			B=B+1;
		}
		printf("Корів: %d Биків: %d\n", C, B);	//Виводиться обрахований вище результат
		if (B==4)	//Якщо всі m (бики) правильні, то виводитиметься повідомлення про виграш
			printf("\nВИ ВГАДАЛИ!!!");
	}
	getch();
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int k, l;
	char ch;
	
	while (1) {
		system("cls");		//Вивід меню
		Sleep(500);
		printf("************МЕНЮ****************\n\n\n");
		Sleep(500);
		printf("1. Почати гру.\n");
		Sleep(500);
		printf("2. Інструкція.\n");
		Sleep(500);
		printf("3. Вихід.\n");
		Sleep(500);
		printf("\n\n----------------------------");
		Sleep(500);
		printf("\n> ");
		scanf("%d", &k);
		system("cls");
	
		while (k==1) {		//Меню вибору режима гри
			system("cls");
			printf("Виберіть режим гри:\n");
			printf("1. Гра з ботом.\n2. Гра з іншим гравцем.");
			printf("\n> ");
			scanf("%d", &l);
			system("cls");
		
			switch (l) {
				case 1: bot(); break;	//При виборі запуститься скрипт гри з ботом
				case 2: player(); break;	//При виборі запуститься скрипт гри з іншим гравцем
				default: printf("Введіть '1' або '2'.");
			}
			break;
		}
		while (k==2) {		//Запуститься інструкція
			printf("Бики та корови - це гра, в якій один учасник загадує чотири числа (всі числа різні),\nа інший повинен вгадати їх правильну послідовність.\n");
			printf("Корова - цифра, яка є в записі задуманого числа, але не стоїть у своїй позиції,\nбик - цифра, яка стоїть у правильному місці.\n");
			printf("Для того, щоб зіграти, виберіть пункт 'Почати гру' та виберіть\nрежим гри: з комп'ютером чи зі своїм другом.\n");
			printf("Комп'ютер загадає чотири числа, і ви одразу вводите їх.\n");
			printf("На екрані з'являться написи: 'Корів:', 'Биків:'.\n");
			printf("Якщо вгадаєте, то з'явиться напис 'ВИ ВГАДАЛИ!!!'.\n");
			printf("Якщо виберете режим гри з другом, то хтось із вас вводить\nпо черзі чотири числа, а потім інший, знову ж таки, вгадує їх.\n");
			printf("\n\n\nДля продовження натисніть Enter...");
			getch();
		break;
		}
		while (k==3) {	//Вихід
			printf("Дякую, що зіграли :)");
			return 0;
		}
	}
}
