// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMMDeviceEnumeration
// Functions: 2

// operator-> @ 148d30ab0

IAudioSessionControl * __thiscall
TComPtr<IAudioSessionControl>::operator->(TComPtr<IAudioSessionControl> *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioSessionControl *pIVar3;
  
  if (this->RawPointer != (IAudioSessionControl *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioSessionControl *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

// operator-> @ 148d30b00

IMMDeviceEnumerator * __thiscall
TComPtr<IMMDeviceEnumerator>::operator->(TComPtr<IMMDeviceEnumerator> *this)

{
  code *pcVar1;
  bool bVar2;
  IMMDeviceEnumerator *pIVar3;
  
  if (this->RawPointer != (IMMDeviceEnumerator *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMMDeviceEnumerator *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

