#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a, Rect *b){
	double xpo = min(a->x+a->w,b->x+b->w) - max(a->x,b->x);
	double ypo = min(a->y,b->y) - max(a->y-a->h,b->y-b->h);
	if(xpo < 0 || ypo < 0) return 0;
	else return xpo*ypo;
}
