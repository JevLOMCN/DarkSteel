// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 2

// operator-> @ 148d3bc30

FAudioPlatformDeviceInfo * __thiscall
TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
          (TOptional<Audio::FAudioPlatformDeviceInfo> *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioPlatformDeviceInfo *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAudioPlatformDeviceInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 148d3bcd0

FAudioPlatformDeviceInfo * __thiscall
TOptional<Audio::FAudioPlatformDeviceInfo>::operator*
          (TOptional<Audio::FAudioPlatformDeviceInfo> *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioPlatformDeviceInfo *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAudioPlatformDeviceInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

