// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 2

// operator-> @ 146bf3f00

IMediaAudioSample * __thiscall
TSharedPtr<IMediaAudioSample,1>::operator->(TSharedPtr<IMediaAudioSample,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IMediaAudioSample *pIVar3;
  
  if (this->Object != (IMediaAudioSample *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMediaAudioSample *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 146bf3f50

IMediaPlayer * __thiscall TSharedPtr<IMediaPlayer,1>::operator->(TSharedPtr<IMediaPlayer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IMediaPlayer *pIVar3;
  
  if (this->Object != (IMediaPlayer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMediaPlayer *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

