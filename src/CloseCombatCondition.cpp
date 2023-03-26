#include "CloseCombatCondition.h"

CloseCombatCondition::CloseCombatCondition(bool within_combat_range)
{
	m_name = "close Combat condition";
	SetIsWithinCombatRange(within_combat_range);
}

CloseCombatCondition::~CloseCombatCondition()
= default;


void CloseCombatCondition::SetIsWithinCombatRange(bool state)
{
	m_isWithinCombatRange = state;
}

bool CloseCombatCondition::Condition() {
	return m_isWithinCombatRange;
}
