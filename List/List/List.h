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
	// �����������
	List(Type data);

	// ������ ���������� ���������
	void push_back(const Type& _data);         // ���������� �������� � �����
	void push_front(const Type& _data);        // ���������� �������� � ������
	void insert(const Type& _data, int index); // ���������� �������� �� �������

	// ������ �������� ���������
	void pop_back();                           // �������� �������� � �����
	void pop_front();                          // �������� �������� � ������
	void erase(int index);                     // �������� �������� �� �������
	void remove(const Type& _data);            // �������� �������� �� ������

	// ������ ������� � ���������
	Type& at(int index);                      // ��������� �������� �� �������
	Type& front();                            // ��������� ������� ��������
	Type& back();                             // ��������� ���������� ��������

	// ������ ��������� ���������� � ������
	int getSize();                            // ��������� ������� ������
	bool empty();                             // �������� �� �������
};