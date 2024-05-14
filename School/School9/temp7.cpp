#include <iostream>
#include <string>
using namespace std;

class BasePrinter {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	BasePrinter(string model, string manufacturer, int totalPapers);
protected:
	bool print(int pages = 1);
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void show();
};

BasePrinter::BasePrinter(string model,
	string manufacturer, int totalPapers) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = 0;
	this->availableCount = totalPapers;
}
bool BasePrinter::print(int pages) {
	if (availableCount < pages) {
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return false;
	}
	printedCount += pages;
	availableCount -= pages;
	return true;
}
void BasePrinter::show() {
	cout << model + " ," << manufacturer << " ,���� ���� " << availableCount << "��" << " ,";
}

class InkJetPrinter : public BasePrinter {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int totalPapers, int totalInk);
	bool printInkJet(int pages = 1);
	void showState();
};

InkJetPrinter::InkJetPrinter(string model, string manufacturer, int totalPapers, int totalInk)
	: BasePrinter(model, manufacturer, totalPapers) {
	this->availableInk = totalInk;
}
bool InkJetPrinter::printInkJet(int pages) {
	if (!print(pages)) return false; // ���� ���� // BasePrinter::print() ȣ��
	if (availableInk < pages) {
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return false;
	}
	availableInk -= pages;
	cout << "����Ʈ�Ͽ����ϴ�. " << endl;
	return true;
}
void InkJetPrinter::showState() {
	show(); // BasePrinter::show() ȣ��
	cout << "���� ��ũ " << availableInk;
}

class LaserPrinter :public BasePrinter {
	int availableInk;
public:
	LaserPrinter(string model, string manufacturer, int totalPapers, int totalInk) :BasePrinter(model, manufacturer, totalPapers) {
		this->availableInk = totalInk;
	}
	bool printLaser(int pages = 1);
	void showState();
};
bool LaserPrinter::printLaser(int pages) {
	if (!print(pages)) return false; 
	if (availableInk < pages) {
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return false;
	}
	availableInk -= pages;
	cout << "����Ʈ�Ͽ����ϴ�. " << endl;
	return true;
}
void LaserPrinter::showState() {
	show(); 
	cout << "���� ��ũ " << availableInk;
}

int main() {
	InkJetPrinter* ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* lp = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";  ip->showState();
	cout << endl;       cout << "������ : ";
	lp->showState();   cout << endl;  int printer, pages;   char conti;
	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;
		switch (printer) {
		case 1:  ip->printInkJet(pages); break; // ��ũ��
		case 2:  lp->printLaser(pages); break; // ������
		default:  cout << "�߸��� �Է��Դϴ�." << endl;  continue;
		}
		ip->showState();     cout << endl;
		lp->showState();     cout << endl;
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";   cin >> conti;
		if (conti == 'y') continue;
		else  break;
	}
	delete  ip;
	delete  lp;
}
