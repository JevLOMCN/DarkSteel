// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 2

// operator-> @ 148d43260

IAudioClient2 * __thiscall TComPtr<IAudioClient2>::operator->(TComPtr<IAudioClient2> *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioClient2 *pIVar3;
  
  if (this->RawPointer != (IAudioClient2 *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioClient2 *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

// operator-> @ 148d432b0

IAudioRenderClient * __thiscall
TComPtr<IAudioRenderClient>::operator->(TComPtr<IAudioRenderClient> *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioRenderClient *pIVar3;
  
  if (this->RawPointer != (IAudioRenderClient *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioRenderClient *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

