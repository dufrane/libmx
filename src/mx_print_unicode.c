#include "libmx.h"

void mx_print_unicode(wchar_t c) {
    int len = 0;
    char out[4];
    
	if (c < 0x80) {
		len = 1; 
		out[0] = (c >> 0 & 0x7F) | 0x00;
	} else if (c < 0x0800) {
		len = 2; 
		out[0] = (c >> 6 & 0x1F) | 0xC0;
		out[1] = (c >> 0 & 0x3F) | 0x80;
	} else if (c < 0x010000) {
		len = 3;
		out[0] = (c >> 12 & 0x0F) | 0xE0;
		out[1] = (c >> 6 & 0x3F) | 0x80;
		out[2] = (c >> 0 & 0x3F) | 0x80;
	} else if (c < 0x110000) {
		len = 4;
		out[0] = (c >> 18 & 0x07) | 0xF0;
		out[1] = (c >> 12 & 0x3F) | 0x80;
		out[2] = (c >> 6 & 0x3F) | 0x80;
		out[3] = (c >> 0 & 0x3F) | 0x80;
	}
    write(1, &out, len);
}
