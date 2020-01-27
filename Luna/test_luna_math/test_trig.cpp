#include "pch.h"
#include "../luna_math/trig.hpp"
#include "../luna_math/math.hpp"

TEST(TestTrig, DegreeToRadian)
{
	float radian = luna::math::DegreeToRadian(360);
	EXPECT_EQ(radian, 6.28318548f);
}

TEST(TestTrig, RadianToDegree)
{
	float degree = luna::math::RadianToDegree(6.28319f);
	EXPECT_EQ(degree, 360.000244f);
}

TEST(TestTrig, ArcLengthRadians)
{
	float arcLength = luna::math::ArcLengthRadians(2, luna::math::M_PI);
	EXPECT_EQ(arcLength, 2 * luna::math::M_PI);
	float arcLength2 = luna::math::ArcLengthRadians(7 * luna::math::M_PI / 4, 20);
	EXPECT_EQ(arcLength2, 109.955750f);
	float arcLength3 = luna::math::ArcLengthRadians(3, luna::math::DegreeToRadian(180));
	EXPECT_EQ(arcLength3, 3 * luna::math::M_PI);
}

TEST(TestTrig, ArcLengthDegrees)
{
	float arcLength = luna::math::ArcLengthDegrees(3, 75);
	EXPECT_EQ(arcLength, 3.92699075f);
}

TEST(TestTrig, SecantIsCorrect)
{
	float val = luna::math::Sec(5);
	EXPECT_EQ(val, 3.52531981f);
}

TEST(TestTrig, CosecantIsCorrect)
{
	float val = luna::math::Csc(3);
	EXPECT_EQ(val, 7.08616781f);
}

TEST(TestTrig, CotangetIsCorrect)
{
	float val = luna::math::Cot(1);
	EXPECT_EQ(val, 0.642092586f);
}