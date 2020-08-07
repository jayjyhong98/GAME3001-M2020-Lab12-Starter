#pragma once
#ifndef __BEHAVIOUR_STATE__
#define __BEHAVIOUR_STATE__

enum BehaviourState
{
	FLIGHT,
	FIGHT,
	MELEE_ATTACK,
	RANGED_ATTACK,
	MOVE_TO_LOS,
	MOVE_TO_MELEE,
	MOVE_TO_RANGED,
	MOVE_TO_COVER,
	PATROL,
	WAIT_IN_COVER, // wait behind cover
	NUM_OF_BEHAVIOUR_STATES
};


#endif /*defined (__BEHAVIOUR_STATES__)*/