#include "arithmetic_coding.h"

static void bit_plus_follow();

static code_value low, high;
static long bits_to_follow;

void start_encoding()
{
	low = 0;
	high = Top_value;
	bits_to_follow = 0;
}

void encode_symbol(symbol, cum_freq)
{
	long range;
	range = (long)(high - low) + 1;
	high = low + (range * cum_freq[symbol]
}