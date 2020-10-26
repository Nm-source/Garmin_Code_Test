//Header file for Nathan_May_Garmin_Code_Test.c
//Created by Nathan May
//Date October 25 2020


#ifndef COMPRESSION
#define COMPRESSION

#include <stdio.h>


/* REQUIRES:
 *  data_ptr points to an array of unsigned char
 *  and, data_size is the correct length of the array.
 
 * PROMISES:
 * To go through the array of data, replace any data that repeats more then twice with a decompressible  
 * bit patern and return the new size of the array. The decompressible bit patern consists of two bytes.
 * the first byte will be 1***_**** in binary where ***_**** will be the count and the 1 will be used as a flag for the decompression algorythm. 
 * The second byte will be just be the data that is repeated  
 */
int compress_bytes(unsigned char * data_ptr, int data_size);

#endif
