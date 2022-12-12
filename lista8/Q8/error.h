#ifndef ERROR_H
#define ERROR_H
#include "Pilha.h"
#include <stdexcept>

class cheio : public std::runtime_error {
public:
	cheio(const char *e = "A pilha que você tentou adicionar esta cheia")
		: runtime_error(e){};

};

class vazia: public std::runtime_error{
public:
	vazia(const char *e = "A pilha que você tentou retirar esta vazia")
		: runtime_error(e){};
};
#endif
