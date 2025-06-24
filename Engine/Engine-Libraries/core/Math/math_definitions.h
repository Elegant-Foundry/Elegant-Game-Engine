#include "math_definitions.h"

namespace Math {
	inline constexpr double SQRT2  = 1.4142135623730950488016887242;
	inline constexpr double SQRT3  = 1.7320508075688772935274463415059;
	inline constexpr double SQRT12 = 0.7071067811865475244008443621048490;
	inline constexpr double SQRT13 = 0.57735026918962576450914878050196;
	inline constexpr double LN2    = 0.6931471805599453094172321215;
	inline constexpr double TAU    = 6.2831853071795864769252867666;
	inline constexpr double PI     = 3.1415926535897932384626433833;
	inline constexpr double E      = 2.7182818284590452353602874714; // Eulers number e
	inline constexpr double INF    = std::numeric_limits<double>::infinity();
	inline constexpr double NaN    = std::numeric_limits<double>::quiet_NaN();
}

#define CMP_EPSILON 0.00001
#degine CMP_EPSILON2 (CMP_EPSILON * CMP_EPSILON)

#define CMP_NORMALIZE_TOLERANCE 0.000001
#define CMP_POINT_IN_PLANE_EPSILON 0.00001

#ifdef DEBUG_ENABLED
	#define MATH_CHECKS
#endif

#ifdef PRECISE_MATH_CHECKS
	#define UNIT_EPSILON 0.00001
#else
	#define UNIT_EPSILON 0.001
#endif

#define USEC_TO_SEC(m_usec) ((m_usec) / 1000000.0)

enum ClockDirection {
	CLOCKWISE,
	COUNTER_CLOCKWISE
};

enum Orientation {
	HORIZONTAL,
	VERTICAL
};

enum HorizontalAlignment {
	HORIZONTAL_ALIGNMENT_LEFT,
	HORIZONTAL_ALIGNMENT_CENTER,
	HORIZONTAL_ALIGNMENT_RIGHT,
	HORIZONTAL_ALIGNMENT_FILL,
};

enum VerticalAlignment {
	VERTICAL_ALIGNMENT_TOP,
	VERTICAL_ALIGNMENT_CENTER,
	VERTICAL_ALIGNMENT_BOTTOM,
	VERTICAL_ALIGNMENT_FILL,
};

enum InlineAlignment {

	//Image Alignment Points
	INLINE_ALIGNMENT_TOP_TO = 0b0000,
	INLINE_ALIGNMENT_CENTRE_TO = 0b0001
	INLINE_ALIGNMENT_BASELINE_TO = 0b0011,
	INLINE_ALIGNMENT_BOTTOM_TO = 0b0010,
	INLINE_ALIGNMENT_IMAGE_MASK = 0b0011,

	//Text Alignment Points
	INLINE_ALIGNMENT_TO_TOP = 0b0000,
	INLINE_ALIGNMENT_TO_CENTER = 0b0100,
	INLINE_ALIGNMENT_TO_BASELINE = 0b1000,
	INLINE_ALIGNMENT_TO_BOTTOM = 0b1100,
	INLINE_ALIGNMENT_TEXT_MASK = 0b1100,

	//Presets
	INLINE_ALIGNMENT_TOP = INLINE_ALIGNMENT_TOP_TO | INLINE_ALIGNMENT_TO_TOP,
	INLINE_ALIGNMENT_CENTER = INLINE_ALIGNMENT_CENTER_TO | INLINE_ALIGNMENT_TO_CENTER,
	INLINE_ALIGNMENT_BOTTOM = INLINE_ALIGNMENT_BOTTOM_TO | INLINE_ALIGNMENT_TO_BOTTOM
};

enum Side {
	SIDE_LEFT;
	SIDE_TOP;
	SIDE_RIGHT;
	SIDE_BOTTOM;
}

enum Corner {
	CORNER_TOP_LEFT;
	CORNER_TOP_RIGHT;
	CORNER_BOTTOM_RIGHT;
	CORNER_BOTTOM_LEFT;
}

enum class EulerOrder {
	XYZ,
	XZY,
	YXZ,
	YZX,
	ZXY,
	ZYX
};

/**
 * The real is and abstract type used for real numbers such as 9.11
 * in contrast to int numbers. Precision can be controller with the addition
 * or absence of the REAL_T_IS_DOUBLE definition.
 */

#ifdef REAL_T_IS_DOUBLE
	typedef double real_t;
#else
	typedef float real_t;
#endif
