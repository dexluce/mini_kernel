#include "periferique_lib.h"
#include "../common/types.h"

//Ecrit à l'adresse port la valeur 8-bits data :
void outb(uint16_t port, uint8_t data);
//Ecrit à l'adresse port la valeur 8-bits data :
void outw(uint16_t port, uint16_t data);
//Retourne 8-bits lus à l'adresse port :
uint8_t inb(uint16_t port);
//Retourne 16-bits lus à l'adresse port :
uint16_t inw(uint16_t port);
