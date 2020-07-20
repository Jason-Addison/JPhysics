# JPhysics
C++ collision detection / resolution library using Seperation Axis Theorem.

PhysicsObjects in a PhysicsWorld will interact with one another. Modifiers such as gravity and airresistance can be set in each world.

Object Types
----------------

**Non-rotatable**

AABB - Axis aligned bounding box collision, modifiable by width, height and depth.

Sphere - Modifiable by radius.

**Rotatable**

Prism - Modifiable by width, height and depth.

Triangles (Soup) - List of unordered triangles, modifiable by width, height and depth.

Plane - Infinitely stretches on 2 axises

Ellipses - TODO
