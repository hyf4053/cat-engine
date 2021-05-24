//
// Cat4DVector3n.cpp
// Cat4DMathEngine
//
// Created by Yufei Han on 5/25/2021
// Copyright © 2021 Yufei Han. All right reserved
//
#include <iostream>
#include "Cat4DVector3n.h"

namespace Cat4DEngine {

	Cat4DVector3n::Cat4DVector3n() :x(0.0), y(0.0), z(0.0) {};
	Cat4DVector3n::Cat4DVector3n(float uX, float uY, float uZ) :x(uX), y(uY), z(uZ) {}

	Cat4DVector3n::~Cat4DVector3n(){}
	
	Cat4DVector3n::Cat4DVector3n(const Cat4DVector3n& v) : x(v.x), y(v.y), z(v.z) {}
	Cat4DVector3n& Cat4DVector3n::operator=(const Cat4DVector3n& v) {
		x = v.x;
		y = v.y;
		z = v.z;

		return *this;
	}

}