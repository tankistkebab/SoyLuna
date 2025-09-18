#ifndef UTILS_H
#define UTILS_H

#include "raylib.h"

typedef struct Text {

	const char* text;
	Color color;
	
	int size;
	int x, y;

} Text;

typedef struct question
{
	char question[500], ans;
}Question;

typedef struct Button {

	const char* text;
	int fontSize;
	Color textColorDefault, textColorHover;

	Rectangle rectangle;
	float roundness;
	Color rectColorDefault, rectColorHover;

} Button;

int MouseOver(Rectangle r);

Button MakeButton(Rectangle r, float roundness, const char* text, int fontSize);
int ButtonClicked(Button b);

void DrawTextS(Text t);
void DrawButton(Button b);

#endif