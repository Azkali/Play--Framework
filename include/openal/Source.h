#ifndef _OPENAL_SOURCE_H_
#define _OPENAL_SOURCE_H_

#include <al.h>

namespace OpenAl
{
	class CSource
	{
	public:
						CSource();
		virtual			~CSource();

						operator ALuint() const;

		void			Play();
		void			Stop();

		void			QueueBuffer(ALuint);
		int				GetBuffersProcessed() const;

	private:
		ALuint			m_name;
	};
};

#endif