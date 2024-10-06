#ifndef MAIN_H
#define MAIN_H

// read bit at postion 'pos'
#define READBIT(value,pos)  (((value)>>(pos))&1)
// set bit at postion 'pos'
#define SETBIT(value,pos)   ((value)|= (1<<(pos)))
// reset bit at postion 'pos'
#define RESETBIT(value,pos) ((value)&= ~(1<<(pos)))

#endif