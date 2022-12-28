
#ifndef CHAMELEON_MINI_SNIFFISO14443_2B_H
#define CHAMELEON_MINI_SNIFFISO14443_2B_H


#include "Codec.h"
#include "Terminal/CommandLine.h"

/* Codec Interface */
void Sniff14443BCodecInit(void);
void Sniff14443BCodecDeInit(void);
void Sniff14443BCodecTask(void);



#endif //CHAMELEON_MINI_SNIFFISO14443_2B_H
