#include "StateMachine.h"

StateMachine::StateMachine(): m_currentOuterState(FIGHT), m_currentInnerState(PATROL)
{
}

StateMachine::~StateMachine()
= default;

void StateMachine::Update(DisplayObject* object)
{
	switch (m_currentOuterState)
	{
	case FIGHT:
		switch (m_currentInnerState)
		{
		case PATROL:
			//Patrol Action
			break;
		case MELEE_ATTACK:
			//Melee Attack Action
			break;
		case RANGED_ATTACK:
			//Ranged Attack Action
			m_meleeAttack(object);
			break;
		case MOVE_TO_LOS:
			//Move To LOS Action
			m_moveToLOS(object);
			break;
		case MOVE_TO_MELEE:
			//Move To Melee Range Action
			break;
		case MOVE_TO_RANGED:
			//Move To Ranged Action
			break;
		case MOVE_TO_COVER:
			//Move To Cover Action
			break;
		case WAIT_IN_COVER:
			//Wait In Cover Action
			break;
		}

		break;
	case FLIGHT:
		//Flee Action
		m_flee(object);
		break;
	}
}\

BehaviourState StateMachine::GetOuterState()
{
	return m_currentOuterState;
}

BehaviourState StateMachine::GetInnerState()
{
	return m_currentInnerState;
}

void StateMachine::SetOuterState(BehaviourState new_state)
{
	m_currentOuterState = new_state;
}

void StateMachine::SetInnerState(BehaviourState new_state)
{
	m_currentInnerState = new_state;
}

void StateMachine::m_moveToLOS(DisplayObject* object)
{
	//get nearest node with LOS
}

void StateMachine::m_meleeAttack(DisplayObject* object)
{
	//Perform Melee Attack
}

void StateMachine::m_flee(DisplayObject* object)
{
	//Perform Flee
}