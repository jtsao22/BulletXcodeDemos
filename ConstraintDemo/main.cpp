#include "ConstraintDemo.h"
#include "GlutStuff.h"
#include "GLDebugDrawer.h"
#include "BulletDynamics/btBulletDynamicsCommon.h"

int main(int argc,char** argv)
{

	GLDebugDrawer	gDebugDrawer;

    ConstraintDemo* constraintDemo = new ConstraintDemo();
	

    constraintDemo->initPhysics();
	constraintDemo->getDynamicsWorld()->setDebugDrawer(&gDebugDrawer);
	constraintDemo->setDebugMode(btIDebugDraw::DBG_DrawConstraints+btIDebugDraw::DBG_DrawConstraintLimits);
	
	return glutmain(argc, argv,640,480,"Constraint Demo. http://www.continuousphysics.com/Bullet/phpBB2/",constraintDemo);
}

