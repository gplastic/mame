#ifndef ES8712_H
#define ES8712_H

/* An interface for the ES8712 ADPCM chip */

void ES8712_play(int which);
void ES8712_set_bank_base(int which, int base);
void ES8712_set_frequency(int which, int frequency);

WRITE8_HANDLER( ES8712_data_0_w );
WRITE8_HANDLER( ES8712_data_1_w );
WRITE8_HANDLER( ES8712_data_2_w );
WRITE16_HANDLER( ES8712_data_0_lsb_w );
WRITE16_HANDLER( ES8712_data_1_lsb_w );
WRITE16_HANDLER( ES8712_data_2_lsb_w );
WRITE16_HANDLER( ES8712_data_0_msb_w );
WRITE16_HANDLER( ES8712_data_1_msb_w );
WRITE16_HANDLER( ES8712_data_2_msb_w );

#endif
