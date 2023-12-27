#pragma once
template <typename Type>
class List {
private:
	struct Node {
		Type data;
		struct List* prev;
		struct List* next;
	};
	Node* head;
	int Size;
public:
	// Конструктор
	List(Type data);

	// Методы добавления элементов
	void push_back(const Type& _data);         // добавление элемента в конец
	void push_front(const Type& _data);        // добавление элемента в начало
	void insert(const Type& _data, int index); // добавление элемента по индексу

	// Методы удаления элементов
	void pop_back();                           // удаление элемента с конца
	void pop_front();                          // удаление элемента с начала
	void erase(int index);                     // удаление элемента по индексу
	void remove(const Type& _data);            // удаление элемента по данным

	// Методы доступа к элементам
	Type& at(int index);                      // получение элемента по индексу
	Type& front();                            // получение первого элемента
	Type& back();                             // получение последнего элемента

	// Методы получения информации о списке
	int getSize();                            // получение размера списка
	bool empty();                             // проверка на пустоту
};