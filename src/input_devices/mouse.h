#ifndef MOUSE_H
#define MOUSE_H

#include <lcom/lcf.h>
#include "constants.h"
#include "types.h"
// Mouse IRQ
#define IRQ_MOUSE 12

// Mouse commands
#define ENABLE_DATA_REPORT 0xF4
#define DISABLE_DATA_REPORT 0xF5
#define WRITE_BYTE_TO_MOUSE 0xD4

// Mouse responses
#define ACK 0xFA
#define NACK 0xFE
#define ERROR 0xFC

// I/O Ports
#define STAT_REG 0x64
#define KBC_CMD_REG 0x64
#define OUT_BUF 0x60
#define IN_BUF 0x60

// Status Register Bits
#define OBF BIT(0)
#define IBF BIT(1)
#define AUX BIT(5)
#define TO_ERR BIT(6)
#define PAR_ERR BIT(7)

#define DELAY_US 20000
#define MOUSE_OUT_BUF 0x60


extern Vec_pos cursor_pos;


int mouse_subscribe_int(uint8_t *bit_no);
int mouse_unsubscribe_int(void);
int mouse_disable_data_reporting(void);
void proj_mouse_ih(void);
bool mouse_packet_ready(void);
struct packet get_mouse_packet(void);
int (mouse_write_cmd)(uint8_t cmd);
int(mouse_disable_data_reporting)();
void parse_mouse_packet(uint8_t pack[3], struct packet *pp);


typedef enum {
  INIT,      // Initial state
  DRAW_UP,   // Drawing the first line
  VERTEX,    // Between strokes
  DRAW_DOWN, // Drawing the second line
  COMPLETE   // Gesture complete
} gesture_state_t;

#define INIT_STATE INIT
#define COMPLETE_STATE COMPLETE

#endif // MOUSE_H
