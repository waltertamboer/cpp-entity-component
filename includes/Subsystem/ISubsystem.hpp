/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_SUBSYSTEM_ISUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_SUBSYSTEM_ISUBSYSTEM_HPP

namespace CppEntityComponent
{
	class IComponent;

	/**
	 * The interface that should be implemented by all subsystems.
	 */
	class ISubsystem
	{
	public:
		/**
		 * Cleans up all the resources used by this class.
		 */
		virtual ~ISubsystem() { }

		/**
		 * Adds the given component to this subsystem.
		 *
		 * @param[in] component The component that needs to be managed.
		 */
		virtual void addComponent(IComponent* component) = 0;

		/**
		 * Removes the given component from this subsystem.
		 *
		 * @param[in] component The component that needs to be removed.
		 */
		virtual void removeComponent(IComponent* component) = 0;

		/**
		 * Gets the id of this subsystem.
		 */
		virtual int getId() const = 0;

		/**
		 * Updates the subsystem.
		 */
		virtual void update() = 0;
	};
}

#endif
