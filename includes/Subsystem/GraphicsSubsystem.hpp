/**
* This file is part of Walter Tamboer's conceptual entity component framework.
*
* @copyright Walter Tamnboer http://waltertamboer.nl
*/

#ifndef CPPENTITYFRAMEWORK_SUBSYSTEM_GRAPHICSSUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_SUBSYSTEM_GRAPHICSSUBSYSTEM_HPP

namespace CppEntityComponent
{
	class AbstractSubsystem;

	class GraphicsSubsystem : public AbstractSubsystem
	{
	public:
		GraphicsSubsystem();
		virtual ~GraphicsSubsystem();
		virtual void update();
	};
}

#endif
