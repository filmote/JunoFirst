#pragma once



// ------------------------------------------------------------------------------------------------------------------------------------
//  Character images ..

// ------------------------------------------------------------------------------------------------------------------------------------
//  Spaceship ..

const uint8_t PROGMEM spaceship_neutral[] = {
15, 16,
0x00, 0x00, 0x00, 0xe0, 0x10, 0xe8, 0x34, 0x1a, 0x34, 0xe8, 0x10, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x03, 0x06, 0x03, 0x01, 0x03, 0x03, 0x03, 0x01, 0x03, 0x06, 0x03, 0x02, 0x00, 
};

const uint8_t PROGMEM spaceship_neutral_mask[] = {
0x00, 0x00, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 
0x02, 0x07, 0x07, 0x0f, 0x07, 0x03, 0x07, 0x07, 0x07, 0x03, 0x07, 0x0f, 0x07, 0x07, 0x02, 
};

const uint8_t PROGMEM spaceship_advance_1[] = {
15, 16,
0x00, 0x00, 0x00, 0xe0, 0x10, 0xe8, 0x34, 0x1a, 0x34, 0xe8, 0x10, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x03, 0x06, 0x0b, 0x15, 0x2b, 0x47, 0x2b, 0x15, 0x0b, 0x06, 0x03, 0x02, 0x00, 
};

const uint8_t PROGMEM spaceship_advance_1_mask[] = {
0x00, 0x00, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 
0x02, 0x07, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x07, 0x02, 
};

const uint8_t PROGMEM spaceship_advance_2[] = {
15, 16,
0x00, 0x00, 0x00, 0xe0, 0x10, 0xe8, 0x34, 0x1a, 0x34, 0xe8, 0x10, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x02, 0x03, 0x06, 0x03, 0x05, 0x0b, 0x17, 0x0b, 0x05, 0x03, 0x06, 0x03, 0x02, 0x00, 
};

const uint8_t PROGMEM spaceship_advance_2_mask[] = {
0x00, 0x00, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 
0x02, 0x07, 0x07, 0x0f, 0x07, 0x0b, 0x1f, 0x3f, 0x1f, 0x0b, 0x07, 0x0f, 0x07, 0x07, 0x02, 
};

const uint8_t PROGMEM spaceship_backwards_1[] = {
15, 16,
0x00, 0x00, 0x00, 0x20, 0x50, 0xa8, 0x54, 0xaa, 0x54, 0xa8, 0x50, 0x20, 0x00, 0x00, 0x00, 
0x00, 0x20, 0x30, 0x6e, 0x31, 0x1e, 0x33, 0x31, 0x33, 0x1e, 0x31, 0x6e, 0x30, 0x20, 0x00, 
};

const uint8_t PROGMEM spaceship_backwards_1_mask[] = {
0x00, 0x00, 0x20, 0x70, 0xb8, 0xdc, 0xee, 0xff, 0xfe, 0xfc, 0xf8, 0x70, 0x20, 0x00, 0x00, 
0x20, 0x70, 0x7e, 0xff, 0x7f, 0x3f, 0x7f, 0x7f, 0x7f, 0x3f, 0x7f, 0xff, 0x7e, 0x70, 0x20, 
};

const uint8_t PROGMEM spaceship_backwards_2[] = {
15, 16,
0x00, 0x00, 0x00, 0x00, 0x40, 0xa0, 0x50, 0xa8, 0x50, 0xa0, 0x40, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x20, 0x30, 0x6e, 0x31, 0x1e, 0x33, 0x31, 0x33, 0x1e, 0x31, 0x6e, 0x30, 0x20, 0x00, 
};

const uint8_t PROGMEM spaceship_backwards_2_mask[] = {
0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 
0x20, 0x70, 0x7e, 0xff, 0x7f, 0x3f, 0x7f, 0x7f, 0x7f, 0x3f, 0x7f, 0xff, 0x7e, 0x70, 0x20, 
};



// ------------------------------------------------------------------------------------------------------------------------------------
//  Aliens ..

const uint8_t PROGMEM alien_close_1[] = {
13, 9,
0x10, 0x28, 0xba, 0x6c, 0x7c, 0x6c, 0x7c, 0x6c, 0x7c, 0x6c, 0xba, 0x28, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x54, 0x28, 0x44, 0x38, 0x6c, 0xd6, 0x6c, 0x38, 0x44, 0x28, 0x28, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x12, 0xaa, 0x72, 0x54, 0x28, 0xa8, 0x28, 0x54, 0x72, 0xaa, 0x12, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x70, 0x0a, 0xda, 0x24, 0x7e, 0x2c, 0x7e, 0x24, 0xda, 0x0a, 0x70, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


const uint8_t PROGMEM alien_close_1_mask[] = {
0x38, 0xfe, 0x7d, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7d, 0xff, 0x2f, 
0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 

0x54, 0xfe, 0x7c, 0xfe, 0x7c, 0xfe, 0xff, 0xfe, 0x7c, 0xfe, 0x7c, 0x7c, 0x28, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x12, 0xbf, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xfc, 0xfe, 0xff, 0xff, 0xbf, 0x12, 
0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 

0x70, 0xfa, 0xff, 0xff, 0xfe, 0xff, 0x7e, 0xff, 0xfe, 0xff, 0xff, 0xfa, 0x70, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM alien_close_2[] = {
13, 9,
0x00, 0x38, 0x28, 0x7c, 0x6c, 0x7c, 0x6c, 0x7c, 0x6c, 0x7c, 0x28, 0x38, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x28, 0x28, 0x44, 0x38, 0x6c, 0xc6, 0x6c, 0x38, 0x44, 0x28, 0x54, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x14, 0x2c, 0xf2, 0x54, 0x28, 0x28, 0x28, 0x54, 0xf2, 0x2c, 0x14, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x30, 0x4c, 0x1a, 0xe4, 0x7e, 0x6c, 0x7e, 0xe4, 0x1a, 0x4c, 0x30, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM alien_close_2_mask[] = {
0x38, 0x7c, 0x7c, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x7c, 0x7c, 0x38, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x28, 0x7c, 0x7c, 0xfe, 0x7c, 0xfe, 0xff, 0xfe, 0x7c, 0xfe, 0x7c, 0xfe, 0x54, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x14, 0x3e, 0xfe, 0xff, 0xfe, 0xfc, 0x7c, 0xfc, 0xfe, 0xff, 0xfe, 0x3e, 0x14, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 

0x30, 0x7c, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0x7c, 0x30, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM alien_close_explosion_1[] = {
13, 9,
0x00, 0x08, 0x20, 0x00, 0x24, 0x88, 0x20, 0x54, 0x20, 0x12, 0x40, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM alien_close_explosion_2[] = {
13, 9,
0x00, 0x08, 0x22, 0x88, 0x00, 0x08, 0x80, 0x04, 0x20, 0x02, 0x90, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM alien_close_explosion_3[] = {
13, 9,
0x01, 0x90, 0x02, 0x08, 0x00, 0x00, 0x04, 0x00, 0x00, 0x80, 0x11, 0x00, 0x08, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
};

const uint8_t PROGMEM alien_close_explosion_4[] = {
13, 9,
0x02, 0x40, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x02, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
};

const uint8_t PROGMEM alien_close_explosion_5[] = {
1, 8,
0x00,
};


const uint8_t PROGMEM alien_medium_1[] = {
7, 8,
0x00, 0x2a, 0x1c, 0x14, 0x1c, 0x2a, 0x00, 

0x00, 0x14, 0x1c, 0x2a, 0x1c, 0x08, 0x00, 

0x00, 0x2a, 0x14, 0x38, 0x14, 0x2a, 0x00, 

0x00, 0x2a, 0x14, 0x38, 0x14, 0x2a, 0x00, 
};

const uint8_t PROGMEM alien_medium_1_mask[] = {
0x2a, 0x5d, 0x3e, 0x3e, 0x3e, 0x5d, 0x2a, 

0x14, 0x3e, 0x3e, 0x7f, 0x3e, 0x1c, 0x08, 

0x2a, 0x7f, 0x3e, 0x7c, 0x3e, 0x7f, 0x2a, 

0x2a, 0x7f, 0x3e, 0x7c, 0x3e, 0x7f, 0x2a, 
};

const uint8_t PROGMEM alien_medium_2[] = {
7, 8,
0x00, 0x08, 0x1c, 0x14, 0x1c, 0x08, 0x00, 

0x00, 0x08, 0x1c, 0x22, 0x1c, 0x14, 0x00,  

0x00, 0x0c, 0x34, 0x18, 0x34, 0x0c, 0x00, 

0x00, 0x1c, 0x34, 0x1a, 0x34, 0x1c, 0x00, 
};

const uint8_t PROGMEM alien_medium_2_mask[] = {
0x08, 0x1c, 0x3e, 0x3e, 0x3e, 0x1c, 0x08, 

0x08, 0x1c, 0x3e, 0x7f, 0x3e, 0x3e, 0x14, 

0x0c, 0x3e, 0x7e, 0x3c, 0x7e, 0x3e, 0x0c, 

0x1c, 0x3e, 0x7e, 0x3f, 0x7e, 0x3e, 0x1c, 
};

const uint8_t PROGMEM alien_far[] = {
5, 5,
0x00, 0x0a, 0x04, 0x0a, 0x00, 
};

const uint8_t PROGMEM alien_far_mask[] = {
0x0a, 0x1f, 0x0e, 0x1f, 0x0a, 
};

const uint8_t PROGMEM alien_horizon[] = {
1, 1,
0x01, 
};

const uint8_t PROGMEM alien_horizon_mask[] = {
0x01, 
};



//---------------------------------------------------------------------------------------------------------------------
// Austronauts ..

const uint8_t PROGMEM austronaut_close[] = {
8, 11,
0x00, 0x40, 0x2c, 0xfa, 0xf2, 0x2c, 0x40, 0x00, 
0x00, 0x02, 0x01, 0x00, 0x00, 0x01, 0x02, 0x00, 
};

const uint8_t PROGMEM austronaut_close_mask[] = {
8, 11,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
};

const uint8_t PROGMEM austronaut_far[] = {
5, 8,
0x00, 0x54, 0x3a, 0x54, 0x00, 
};

const uint8_t PROGMEM austronaut_far_mask[] = {
5, 8,
0xff, 0xff, 0xff, 0xff, 0xff, 
};

const uint8_t PROGMEM austronaut_prison_close[] = {
12, 12,
0x00, 0x60, 0xd8, 0x24, 0x14, 0x0a, 0x0a, 0x04, 0x04, 0x98, 0x60, 0x00, 
0x00, 0x00, 0x01, 0x02, 0x02, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 
};

const uint8_t PROGMEM austronaut_prison_close_mask[] = {
12, 12,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
};

const uint8_t PROGMEM austronaut_prison_far[] = {
8, 8,
0x00, 0x18, 0x24, 0x4a, 0x42, 0x24, 0x18, 0x00, 
};

const uint8_t PROGMEM austronaut_prison_far_mask[] = {
8, 8,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};