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

		/**
		 * Checks if this component is interested in the subsystem with the given id.
		 *
		 * @param[in] id The id of the subsystem.
		 * @return Returns true when the component is interested; false otherwise.
		 */
		virtual bool acceptsSubsystem(int id) const;
	};
}

#endif
