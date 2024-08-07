#include "CodeReaderMetaData.h"

Core::CodeReaderMetaData::CodeReaderMetaData(
    COMMTIMEOUTS& timeouts,
    DCB& params,
    DWORD& mode,
    DWORD& bytesRead,
    DWORD& maxBytes,
    unsigned int& maxBuffer
) :
    mode{ mode },
    params{ params },
    timeouts{ timeouts },
    bytesRead{ bytesRead },
    maxBytesRead{ maxBytes },
    maxSizeBuffer{ maxBuffer }
{
    buffer = (char*)malloc(sizeof(char) * maxSizeBuffer);
}
