// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 2

// GetStreamingSoundWave @ 146bc5b40

TSharedPtr<FSoundWaveProxy,1> * __thiscall
ICompressedAudioInfo::GetStreamingSoundWave(ICompressedAudioInfo *this)

{
  return &this->StreamingSoundWave;
}

// ReleaseStreamChunk @ 146bc5d70

bool __thiscall ICompressedAudioInfo::ReleaseStreamChunk(ICompressedAudioInfo *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDecompress.h"
                     ,0x7a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

