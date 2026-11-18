// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 3

// ~FAmbisonicsSoundfieldEncoder @ 14f09c7d0

void __thiscall
FAmbisonicsSoundfieldEncoder::~FAmbisonicsSoundfieldEncoder(FAmbisonicsSoundfieldEncoder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsSoundfieldEncoder__6B_;
  pFVar1 = (this->Encoder).MixdownGainsMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Encoder).SpeakerGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Encoder).VirtualSpeakerScratchBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISoundfieldEncoderStream__6B_;
  return;
}

// Encode @ 14f09d1f0

void __thiscall
FAmbisonicsSoundfieldEncoder::Encode
          (FAmbisonicsSoundfieldEncoder *this,FSoundfieldEncoderInputData *param_1,
          ISoundfieldAudioPacket *param_2)

{
  (**(code **)((longlong)*param_2 + 0x18))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014f09d22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
  return;
}

// EncodeAndMixIn @ 14f09d240

void __thiscall
FAmbisonicsSoundfieldEncoder::EncodeAndMixIn
          (FAmbisonicsSoundfieldEncoder *this,FSoundfieldEncoderInputData *param_1,
          ISoundfieldAudioPacket *param_2)

{
  FAmbisonicsSoundfieldSettings *pFVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FSoundfieldSpeakerPositionalData *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar1 = (FAmbisonicsSoundfieldSettings *)param_1->InputSettings;
  pTVar2 = param_1->AudioBuffer;
  pFVar3 = param_1->PositionalData;
  if (pFVar1 == (FAmbisonicsSoundfieldSettings *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 == (ISoundfieldAudioPacket *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FSoundFieldEncoder::EncodeAudioDirectlyFromOutputPositions
            (&this->Encoder,pTVar2,pFVar3,pFVar1,(FAmbisonicsSoundfieldBuffer *)param_2);
  return;
}

