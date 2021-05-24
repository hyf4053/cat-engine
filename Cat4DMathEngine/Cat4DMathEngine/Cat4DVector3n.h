//
// Cat4DVector3n.h
// Cat4DMathEngine
//
// Created by Yufei Han on 5/25/2021
// Copyright © 2021 Yufei Han. All right reserved
//

namespace Cat4DEngine {
	class Cat4DVector3n {
	private:

	public:

		//x,y和z 三个维度
		float x;
		float y;
		float z;

		//Constructors
		Cat4DVector3n();
		Cat4DVector3n(float uX, float uY, float uZ);

		//Destructors
		~Cat4DVector3n();

		//Copy Constructors
		Cat4DVector3n(const Cat4DVector3n& v);
		Cat4DVector3n& operator=(const Cat4DVector3n& v);
	};
}