/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_COMPONENTS_ABSTRACTCOMPONENT_HPP
#define CPPENTITYFRAMEWORK_COMPONENTS_ABSTRACTCOMPONENT_HPP

namespace CppEntityComponent
{
	class IComponent;
	class Entity;

	class AbstractComponent : public IComponent
	{
	public:
		/**
		 * Initializes a new instance of this class.
		 */
		AbstractComponent();

		/**
		 * Cleans up all the resources used by this class.
		 */
		virtual ~AbstractComponent();

		/**
		 * Checks if this component is interested in the subsystem with the given id.
		 *
		 * @param[in] id The id of the subsystem.
		 * @return Returns true when the component is interested; false otherwise.
		 */
		virtual bool acceptsSubsystem(int id) const;

		/**
		 * Binds this component to the given entity.
		 *
		 * @param[in] entity The entity to bind to.
		 */
		virtual void bind(Entity* entity);

		/**
		 * Unbinds this component from the currently bound entity.
		 */
		virtual void unbind();

		/**
		 * Updates this component.
		 */
		virtual void update();

		template <class T>
		T* getComponent() const
		{
			return m_entity->getComponent<T>();
		}
	private:
		/**
		 * The entity to which the component belongs.
		 */
		Entity* m_entity;
	};
}

#endif
