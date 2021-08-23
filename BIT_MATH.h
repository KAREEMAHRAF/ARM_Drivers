/*
 * BIT_MATH.h
 *
 *  Created on: Jan 10, 2021
 *      Author: kareem ashraf
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_



#define SET_BIT(PORT,PIN) (|= 1<<1) ;
#define CLE_BIT(PORT,PIN) (&=~ 1<<1) ;
#define TOGGEL_BIT(PORT,PIN) (^= 1<<1) ;
#define READ_BIT(PORT,PIN)  & 1<<1 ;


#endif /* BIT_MATH_H_ */
