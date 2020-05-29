
#pragma once
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include <iostream>
#include <fstream>
#include <regex>
#include <ctype.h>
typedef bool (Fun)(const int&, const int&);
/*!
	\brief Данный класс являеться списком
	Работает с класами CcoopK и CcoopFamily

*/
class Clist
{ 
private:
	size_t size;
	Ccooperator** mass;
public:
	/*!
Проверяет a>b;

*/
	static bool sortAsc(const int& a, const int& b);
	/*!
Проверяет a>b;

*/
	static bool sortDesc(const int& a, const int& b);
	/*!
Добавляет новый элемент
\param[in] el Ссылка на элемент
*/
	Ccooperator** addNewEl(Ccooperator* el);
	/*!
Удаляет элемент
\param[in] n номер элемента
*/
	Ccooperator** delEl(size_t n);
	/*!
Возвращает элемент
\param[in] n номер элемента
*/
	Ccooperator* getEl(size_t n);
	/*!
Создает элемент типа CcoopK
*/
	Ccooperator* creatElK();
	/*!
Создает элемент типа CcoopFamily
*/
	Ccooperator* creatElF();
	/*!
Возвращает количество элементов
*/
	int getSize();
	/*!
Добавляет элемент в масив и заполняет его данными с клавиатуры
\param[in] a передает тип элемента
*/
	void addWhithStr(char a);
	/*!
Сортирует масив по заданым параметрам
\param[in] sprz по какому полю сортировать
\param[in] s функция сортировки
*/
	void sortMass(string sprz, Fun s);
	/*!
	Очищает все данные масива
	*/
	void EndEnd();
	/*!
	Выводит на экран все элементы
*/
	void showAll();
	/*!
Создает массив
\param[in] n размер масива
*/
	void creatMass(size_t n);
	/*!
Считывает данные с файла
\param[in] fileName имя файла
*/
	void readFile(string fileName);
	/*!
	Записывает данные в файл 
\param[in] fileName имя файла
*/
	void writeToFile(string fileName);
	/*!
Удаляет данные массива кроме класа Cchpi
*/
	void End();
	/*!
	Конструктор по умолчанию
	*/
	Clist();
	/*!
	Конструктор с параметрами
	*/
	Clist(int n, Ccooperator** m);
	/*!
	Конструктор копирования
	*/
	Clist(Clist& l);
	/*!
	Деструктор
	*/
	virtual ~Clist( )= default;
	/*!
	Пошук елементу 
	*/
	void screachEl();
	/*!
	Средне значення зарплати
	*/
	void sredSal();
};

