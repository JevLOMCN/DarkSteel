// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 8

// EnsureRealtimeTaskCompletion @ 1464fdb60

void __thiscall FSoundBuffer::EnsureRealtimeTaskCompletion(FSoundBuffer *this)

{
  return;
}

// GetCurrentChunkIndex @ 146501a80

int __thiscall FSoundBuffer::GetCurrentChunkIndex(FSoundBuffer *this)

{
  return -1;
}

// GetCurrentChunkOffset @ 146501ab0

int __thiscall FSoundBuffer::GetCurrentChunkOffset(FSoundBuffer *this)

{
  return -1;
}

// GetSize @ 146505910

int __thiscall FSoundBuffer::GetSize(FSoundBuffer *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Audio.h",0x234,
             L"Pure virtual not implemented (%s)");
  return 0;
}

// IsRealTimeSourceReady @ 14650f130

bool __thiscall FSoundBuffer::IsRealTimeSourceReady(FSoundBuffer *this)

{
  return true;
}

// ReadCompressedData @ 146516c70

bool __thiscall
FSoundBuffer::ReadCompressedData(FSoundBuffer *this,uchar *param_1,int param_2,bool param_3)

{
  return true;
}

// ReadCompressedInfo @ 146516e40

bool __thiscall FSoundBuffer::ReadCompressedInfo(FSoundBuffer *this,USoundWave *param_1)

{
  return true;
}

// Seek @ 14651ed10

void __thiscall FSoundBuffer::Seek(FSoundBuffer *this,float param_1)

{
  return;
}

