#pragma once
#include <wtypes.h>

namespace Core {
    using
	  System::String;

    public ref class CodeReaderMetaData {
    public:
	  char* buffer;
	  bool running;
	  String^ port;
	  DCB& params;
	  HANDLE handle;
	  DWORD mode;
	  DWORD& bytesRead;
	  DWORD maxBytesRead;
	  COMMTIMEOUTS& timeouts;
	  unsigned int maxSizeBuffer;

    public:
	  CodeReaderMetaData(
		COMMTIMEOUTS& timeouts,
		DCB& params,
		DWORD& mode,
		DWORD& bytesRead,
		DWORD& maxBytes,
		unsigned int& maxBuffer
	  );
    };
}
