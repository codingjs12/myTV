#include <iostream>
using namespace std;
#include <math.h>
#include <cstring>

class Remocon {
	int w, h;
	int channel;
public:
	Remocon() {
		w = 30; h = 15;
		channel = 19;
	}
	Remocon(int w, int h, int c = 19) {
		this->w = w; this->h = h;
		channel = c;
	}
	int size();
	void power(int);
	void changechannel(int);
	void setVolume(int);
	void onNetflix();
	void searchYoutube();
};

int Remocon::size() {
	int s;
	s = (int)(sqrt(w * w + h * h) / 2.54);
	return s;
}
void Remocon::power(int onoff) {
	if (onoff) {
		cout << "���� ����" << endl;
		cout << "���� ä��:" << channel << endl;
	}
	else {
		cout << "���� ����" << endl;
	}
}

void Remocon::changechannel(int c) {
	cout << "ä�κ���:" << c << endl;
}
void Remocon::setVolume(int volume) {
	cout << "����:" << volume << endl;
}
void Remocon::onNetflix() {
	cout << "���ø����� �����մϴ�." << endl;
}

void Remocon::searchYoutube() {
	char search[20];
	cout << "��Ʃ�꿡 �˻��ϱ�:" << endl;
	cin >> search;
	cout << "��Ʃ�꿡 " << search << " ��(��) �˻��մϴ�. " << endl;
}
int main() {
	Remocon myTv(52, 29); // cm
	int s;
	s = myTv.size();
	cout << "TV ũ��: " << s << "��ġ" << endl;
	myTv.power(1);
	myTv.changechannel(10);
	myTv.changechannel(30);
	myTv.power(0);
	myTv.setVolume(20);
	myTv.onNetflix();
	myTv.searchYoutube();
}