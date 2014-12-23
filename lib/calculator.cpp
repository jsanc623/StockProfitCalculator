#include "calculator.h"

float calculate(int pre_quantity, float pre_price, int post_quantity, float post_price){
    return (post_quantity * post_price) - (pre_quantity * pre_price);
}