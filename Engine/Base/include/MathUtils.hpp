//
// Created by Admin on 27/05/2025.
//


#include "BaseConfig.h"

namespace Engine::Base::Math {
    constexpr float PI = 3.14159265358979323846f;
    constexpr float TWO_PI = PI * 2.0f;
    constexpr float HALF_PI = PI * 0.5f;
    constexpr float DEG2RAD = PI / 180.0f;
    constexpr float RAD2DEG = 180.0f / PI;

    template <typename T>
    constexpr T Clamp(T v, T lo, T hi) {
        return (v < lo) ? lo : (hi < v) ? hi : v;
    }

    template <typename T>
    constexpr T Lerp(T a, T b, T t) {
        return a + (b - a) * Clamp(t, T(0), T(1));
    }

    inline float SmoothStep(float edge0, float edge1, float x) {
        x = Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
        return x * x * (3 - 2 * x);
    }

    inline float Smootherstep(float edge0, float edge1, float x) {
        x = Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
        return x * x * x * (x * (x * 6 - 15) + 10);
    }

    template <typename T>
    bool AlmostEqual(T a, T b, T eps = std::numeric_limits<float>::epsilon()) {
        return std::fabs(a - b) <= eps;
    }

    inline float DegToRad(float deg) { return deg * DEG2RAD; }
    inline float RadToDeg(float rad) { return rad * RAD2DEG; }

    inline float WrapAngle(float radians) {
        radians = std::fmod(radians, TWO_PI);
        return radians < 0.0f ? radians + TWO_PI : radians;
    }

    constexpr bool IsPowerOfTwo(uint32_t x) {
        return x && !(x & (x - 1));
    }

    constexpr uint32_t NextPowerOfTwo(uint32_t v) {
        v--;
        v |= v >> 1;
        v |= v >> 2;
        v |= v >> 4;
        v |= v >> 8;
        v |= v >> 16;
        return v++;
    }

    inline int FloorLog2(uint32_t v) {
        return 31 - __builtin_clz(v);
    }
    inline int ceilingLog2(uint32_t v) {
        return (IsPowerOfTwo(v) ? FloorLog2(v) : FloorLog2(v) + 1);
    }

    inline float Sin(float r) { return std::sin(r); }
    inline float Cos(float r) { return std::cos(r); }
    inline float Tan(float r) { return std::tan(r); }

    inline float FastSin(float x) {
        x = WrapAngle(x);
        bool neg = x > PI;
        if (neg) x -= PI;

        float num = 16.0f * x * (PI - x);
        float den = 5.0f * PI * PI - 4.0f * x * (PI - x);
        float res = num / den;
        return neg ? -res : res;
    }

    inline float FastCos(float x) {
        return FastSin(x + HALF_PI);
    }
}