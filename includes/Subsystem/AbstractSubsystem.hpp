/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_SUBSYSTEM_ABSTRACTSUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_SUBSYSTEM_ABSTRACTSUBSYSTEM_HPP

namespace CppEntityComponent
{
	class IComponent;
	class ISubsystem;

	/**
	 * An abstract implementation of a subsystem.
	 */
	class AbstractSubsystem : public ISubsystem
	{
	public:
		typedef std::vector<IComponent*> ComponentCollection;

		/**
		 * Initializes the subsystem.
		 *
		 * @param[in] id The id of the subsystem.
		 */
		AbstractSubsystem(int id);

		/**
		 * Cleans up all the resources used by this class.
		 */
		virtual ~AbstractSubsystem();

		/**
		 * Adds the given component to this subsystem.
		 *
		 * @param[in] component The component that needs to be managed.
		 */
		virtual void addComponent(IComponent* component);

		/**
		 * Removes the given component from this subsystem.
		 *
		 * @param[in] component The component that needs to be removed.
		 */
		virtual void removeComponent(IComponent* component);

		/**
		 * Gets the collection with components.
		 *
		 * @return Returns a list with components.
		 */
		ComponentCollection getComponents() const;

		/**
		 * Gets the id of this subsystem.
		 */
		virtual int getId() const;

	private:
		/** The id of the subsystem. */
		int m_id;

		/** The list with components that are updated by this subsystem. */
		ComponentCollection m_components;
	};
}

#endif
