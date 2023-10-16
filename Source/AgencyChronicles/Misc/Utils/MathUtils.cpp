// Fill out your copyright notice in the Description page of Project Settings.


#include "MathUtils.h"

/**
 * 
 * @param in The base vector.
 * @return A copy of in on XY axis, normalized.
 */
FVector UMathUtils::ClearZAndNormalize(const FVector& in) {
	FVector out = FVector(in.X, in.Y, 0.f);
	out.Normalize();
	return out;
}
