/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_COMPONENTS_AUDIOSOURCE_HPPP
#define CPPENTITYFRAMEWORK_COMPONENTS_AUDIOSOURCE_HPPP

namespace CppEntityComponent
{
	class AbstractComponent;
	class AudioClip;

	class AudioSource : public AbstractComponent
	{
	public:
		AudioSource();
		virtual ~AudioSource();

		/**
		 * Checks if this component is interested in the subsystem with the given id.
		 *
		 * @param[in] id The id of the subsystem.
		 * @return Returns true when the component is interested; false otherwise.
		 */
		virtual bool acceptsSubsystem(int id) const;

		AudioClip* getClip() const;
		void setClip(AudioClip* clip);

		bool isMuted() const;
		void setMuted(bool muted);

		float getVolume() const;
		void setVolume(float volume);

		bool isLooping() const;
		void setLooping(bool looping);

	private:
		AudioClip* m_clip;

		bool m_muted;
		float m_volume;
		bool m_looping;
	};
}

#endif
