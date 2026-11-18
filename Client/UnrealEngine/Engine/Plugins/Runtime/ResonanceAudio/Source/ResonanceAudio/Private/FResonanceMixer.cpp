// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// MixTogether @ 14f04a2a0

void __thiscall
ResonanceAudio::FResonanceMixer::MixTogether
          (FResonanceMixer *this,FSoundfieldMixerInputData *param_1,ISoundfieldAudioPacket *param_2)

{
  ISoundfieldAudioPacket *pIVar1;
  ISoundfieldAudioPacket IVar2;
  code *pcVar3;
  bool bVar4;
  
  pIVar1 = param_1->InputPacket;
  if (pIVar1 == (ISoundfieldAudioPacket *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 == (ISoundfieldAudioPacket *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = pIVar1[1];
  if (IVar2 == (ISoundfieldAudioPacket)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResonanceSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.h"
                       ,0x25,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_2[1] = IVar2;
  return;
}

