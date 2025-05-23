#ifndef __REPORT_H__
#define __REPORT_H__
#include <stdio.h>

/**
 * @brief Convert temperature in Celsius to Fahrenheit
 * 
 * @param celsius
 * @return float
 */
float celsius_to_fahrenheit(float celsius);

/**
 * @brief Convert temperature in Fahrenheit to Celsius
 * 
 * @param fahrenheit
 * @return float
 */
float fahrenheit_to_celsius(float fahrenheit);

/**
 * @brief Convert temperature in Celsius to Kelvin
 * 
 * @param celsius
 * @return float
 */
float celsius_to_kelvin(float celsius);

/**
 * @brief Convert temperature in Kelvin to Celsius
 * 
 * @param celsius
 * @return float
 */
float kelvin_to_celsius(float celsius);

#endif /* __REPORT_H__ */
