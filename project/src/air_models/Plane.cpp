#include "../src/air_models/Plane.hpp"
#include "../src/air_models/AbstractAirObject.hpp"

#include <iostream>

Plane::Plane(Vec3 start_pos, Vec3 v, Vec3 a) : AbstractAirObject{start_pos, v, a} {} 

Plane::~Plane() {}

void Plane::Update(double dt)
{
    velocity += acceleration * dt;
    position +=  velocity * dt + acceleration * dt * dt / 2.; 
}
