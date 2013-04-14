/*
 * automata.h
 *
 *  Created on: Apr 14, 2013
 *      Author: ivo
 */

#ifndef AUTOMATA_H_
#define AUTOMATA_H_

struct entry {
	int source;
	int ch;
	int dest;
	int offset;
};

struct transition {
	int start;
	int ch;
	int dest;
};

struct state {
	int start;
	int first_ch;
	bool isFinal;
};

#endif /* AUTOMATA_H_ */