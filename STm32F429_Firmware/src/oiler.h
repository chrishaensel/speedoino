/*
 * oiler.h
 *
 *  Created on: 18.09.2011
 *      Author: kolja
 */

#ifndef OILER_H_
#define OILER_H_

class oiler{

#define OILER_PIN PL1
#define OILER_PORT PORTL
#define OILER_DIRC DDRL

public:
	oiler();
	~oiler();
	void init();
	void clear_vars();
	bool check_vars();
	int send_impulse();
	void check_value();
	int16_t grenze;
private:
};

#endif /* OILER_H_ */
