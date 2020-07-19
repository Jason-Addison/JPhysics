#include "PhysicsObject.h"
#include "Physics.h"
PhysicsObject::PhysicsObject()
{
	type = OBJECT;
}

PhysicsObject::~PhysicsObject()
{
}

void PhysicsObject::getBoundsAABB(double& x, double& y, double& z)
{
	x = this->xBounds;
	y = this->yBounds;
	z = this->zBounds;
}

void PhysicsObject::updateAABB()
{
	this->xBounds = 1;
	this->yBounds = 1;
	this->zBounds = 1;
}

bool PhysicsObject::checkCollision(PhysicsObject* object)
{
	
	switch (object->type)
	{
		case(OBJECT): 
		{
			Physics::messagePhysics("Object collision with no type.");
			return false;
		}
		case(PRISM):
		{
			return prismCollision(object);
		}
		case(SPHERE):
		{
			return sphereCollision(object);
		}
		case(TRIANGLES):
		{
			return trianglesCollision(object);
		}
	}
	return false;
}

void PhysicsObject::setPosition(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

double PhysicsObject::getX()
{
	return x;
}

double PhysicsObject::getY()
{
	return y;
}

double PhysicsObject::getZ()
{
	return z;
}

bool PhysicsObject::sphereCollision(PhysicsObject* sphere)
{
	Physics::messagePhysics("Sphere collision using base class.");
	return false;
}

bool PhysicsObject::prismCollision(PhysicsObject* prism)
{
	Physics::messagePhysics("Prism collision using base class.");
	return false;
}

bool PhysicsObject::trianglesCollision(PhysicsObject* triangles)
{
	Physics::messagePhysics("Triangles collision using base class.");
	return false;
}

