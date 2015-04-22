// STM32 CR95HF chibios driver
#include "stdint.h"
#include "hal.h"

struct pin {
  ioportid_t port;
  uint16_t pin;
};

void cr95hf_init(struct pin *IRQ_IN, struct pin *IRQ_OUT, ioportid_t, uint16_t);
void echo(void);
void setProtocol(void);
void rfidREQA(void);
void idle(void);
void sendRecv(uint8_t);
extern void cr95hfInterrupt(EXTDriver *extp, expchannel_t channel);

