/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"

#include "Subsystem/ISubsystem.hpp"
#include "Subsystem/AbstractSubsystem.hpp"
#include "Subsystem/SubsystemId.hpp"

#include "MyApplication/MyAISubsystem.hpp"
#include "MyApplication/MySubsystemId.hpp"

namespace MyGame
{
	using namespace CppEntityComponent;

	MyAISubsystem::MyAISubsystem()
		: AbstractSubsystem(MySubsystemIdAI)
	{
	}

	MyAISubsystem::~MyAISubsystem()
	{
	}

	void MyAISubsystem::update()
	{
	}
}
