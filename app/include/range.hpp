#pragma once

/**
 * @struct Range
 * @brief Simple range structure for easier range checking
 */
template<typename T>
struct Range {
    Range() {}
    Range(const T& min, const T& max) : min(min), max(max) {}
    T min;
    T max;

    /**
     * @brief Checks if value is in range
     * @param value value to be checked if in range (including min and max)
     */
    bool isInRange(T value) {
        if(value > max) return false;
        if (value < min) return false;
        return true;
    }
};