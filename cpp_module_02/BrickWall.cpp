#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Target Practice Dummy") {}

BrickWall::~BrickWall() {}

const BrickWall* BrickWall::clone(void) const {
	return (this);
}
