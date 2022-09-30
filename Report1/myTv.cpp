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
		cout << "전원 켜짐" << endl;
		cout << "현재 채널:" << channel << endl;
	}
	else {
		cout << "전원 꺼짐" << endl;
	}
}

void Remocon::changechannel(int c) {
	cout << "채널변경:" << c << endl;
}
void Remocon::setVolume(int volume) {
	cout << "볼륨:" << volume << endl;
}
void Remocon::onNetflix() {
	cout << "넷플릭스를 실행합니다." << endl;
}

void Remocon::searchYoutube() {
	char search[20];
	cout << "유튜브에 검색하기:" << endl;
	cin >> search;
	cout << "유튜브에 " << search << " 을(를) 검색합니다. " << endl;
}
int main() {
	Remocon myTv(52, 29); // cm
	int s;
	s = myTv.size();
	cout << "TV 크기: " << s << "인치" << endl;
	myTv.power(1);
	myTv.changechannel(10);
	myTv.changechannel(30);
	myTv.power(0);
	myTv.setVolume(20);
	myTv.onNetflix();
	myTv.searchYoutube();
}