/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_COMPONENTS_AUDIOLISTENER_HPP
#define CPPENTITYFRAMEWORK_COMPONENTS_AUDIOLISTENER_HPP

namespace CppEntityComponent
{
	class AbstractComponent;

	class AudioListener : public AbstractComponent
	{
	public:
		AudioListener();
		virtual ~AudioListener();
	};
}

#endif
