//Hej, dette er ikke et dokument.
#include<stdio.h>

void main(){
	Wifi();
	printf("Afstand er :%f\n", Afstand());
	Timer(200);
}

void Wifi(){
	DoWifi(); //Does wifi not
}

float Afstand(){
	Mål_afstand(5);
}

void Timer(int i){
	delay(i);
}
