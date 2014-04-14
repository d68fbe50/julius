#ifndef DATA_KEYBOARDINPUT_H
#define DATA_KEYBOARDINPUT_H

#include "Types.h"

struct Data_KeyboardInputLine {
	int cursorPosition;
	int length;
	int allowPunctuation;
	int maxLength;
	int boxWidth;
	char *text;
	Font font;
};

extern struct Data_KeyboardInput {
	struct Data_KeyboardInputLine lines[6];
	int current;
	int isInsert;
	int accepted;
	int positionType;
} Data_KeyboardInput;

#endif
