#ifndef DEFPRINCIPAIS_H_
#define DEFPRINCIPAIS_H_

// Defini��o para uso de atraso no FreeRTOS
#define MS(tempo)		tempo/portTICK_RATE_MS

//Defini��es de macros para o trabalho com bits

#define bit(x)			1<<x

#define	set_bit(y,bit)	(y|=(1<<bit))	//coloca em 1 o bit x da vari�vel Y
#define	clr_bit(y,bit)	(y&=~(1<<bit))	//coloca em 0 o bit x da vari�vel Y
#define cpl_bit(y,bit) 	(y^=(1<<bit))	//troca o estado l�gico do bit x da vari�vel Y
#define tst_bit(y,bit) 	(y&(1<<bit))	//retorna 0 ou 1 conforme leitura do bit

#define COLISAO_MOVE_FIG 0
#define FORA_TELA_MOVE_FIG -1
#define SUCESSO_MOVE_FIG 1

#endif /* DEFPRINCIPAIS_H_ */
