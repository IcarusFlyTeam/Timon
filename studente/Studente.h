#ifndef STUDENTE_H
#define STUDENTE_H

#include "Arduino.h"

class Studente {
	protected:
		String nome;
		String cognome;
		String nfc;
		
	public:	
		Studente(String name,String surname,String code);
		String getNome();
		String getCognome();
		String getNfc();
		
		void setNome(String name);
		void setCognome(String surname);
		void setNfc(String code);
		
		int confrontaStudente(Studente s2);
};

#endif //STUDENTE_H

