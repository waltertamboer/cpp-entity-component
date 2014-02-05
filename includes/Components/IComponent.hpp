/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_COMPONENTS_ICOMPONENT_HPP
#define CPPENTITYFRAMEWORK_COMPONENTS_ICOMPONENT_HPP

namespace CppEntityComponent
{
	class Entity;

	class IComponent
	{
	public:
		/**
		 * Cleans up all the resources used by this class.
		 */
		virtual ~IComponent() { }

		/**
		 * Checks if this component is interested in the subsystem with the given id.
		 *
		 * @param[in] id The id of the subsystem.
		 * @return Returns true when the component is interested; false otherwise.
		 */
		virtual bool acceptsSubsystem(int id) const = 0;

		/**
		 * Binds this component to the given entity.
		 *
		 * @param[in] entity The entity to bind to.
		 */
		virtual void bind(Entity* entity) = 0;

		/**
		 * Unbinds this component from the currently bound entity.
		 */
		virtual void unbind() = 0;

		/**
		 * Updates this component.
		 */
		virtual void update() = 0;
	};
}

#endif
