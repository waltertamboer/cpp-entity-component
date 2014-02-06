/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Components/AudioSource.hpp"
#include "Subsystem/SubsystemId.hpp"

namespace CppEntityComponent
{
	AudioSource::AudioSource()
		: m_clip(nullptr), m_muted(false), m_looping(false), m_volume(1.0f)
	{
	}

	AudioSource::~AudioSource()
	{
	}

	bool AudioSource::acceptsSubsystem(int id) const
	{
		return id == SubsystemIdAudio;
	}

	AudioClip* AudioSource::getClip() const
	{
		return m_clip;
	}

	void AudioSource::setClip(AudioClip* clip)
	{
		m_clip = clip;
	}

	bool AudioSource::isMuted() const
	{
		return m_muted;
	}

	void AudioSource::setMuted(bool muted)
	{
		m_muted = muted;
	}

	float AudioSource::getVolume() const
	{
		return m_volume;
	}

	void AudioSource::setVolume(float volume)
	{
		m_volume = volume;
	}

	bool AudioSource::isLooping() const
	{
		return m_looping;
	}

	void AudioSource::setLooping(bool looping)
	{
		m_looping = looping;
	}
}
