#include "Arduino.h"
#include "Studente.h"
//Costruttore
Studente::Studente(String name,String surname,String code) {
	nome = name;
	cognome = surname;
	nfc = code;
}
//getter
String Studente::getNome() {return nome;}
String Studente::getCognome() {return cognome;}
String Studente::getNfc() {return nfc;}
//setter
void Studente::setNome(String name) {nome = name;}
void Studente::setCognome(String surname) {cognome = surname;}
void Studente::setNfc(String code) {nfc = code;}
//confronta gli studenti per codice nfc
int Studente::confrontaStudente( Studente s2) {
	
	int res = nfc.compareTo(s2.getNfc());
	if(res == 0) {
		return 0;
	} else return res;
}
