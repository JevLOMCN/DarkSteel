// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// Decode @ 14f046e60

void __thiscall
ResonanceAudio::FDecoder::Decode
          (FDecoder *this,FSoundfieldDecoderInputData *param_1,FSoundfieldDecoderOutputData *param_2
          )

{
                    /* WARNING: Could not recover jumptable at 0x00014f046e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// DecodeAndMixIn @ 14f046e70

void __thiscall
ResonanceAudio::FDecoder::DecodeAndMixIn
          (FDecoder *this,FSoundfieldDecoderInputData *param_1,FSoundfieldDecoderOutputData *param_2
          )

{
  int iVar1;
  ISoundfieldAudioPacket *pIVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  ISoundfieldAudioPacket IVar4;
  code *pcVar5;
  bool bVar6;
  
  if (this->bShouldOutputAudio != false) {
    pIVar2 = param_1->SoundfieldBuffer;
    iVar1 = param_1->PositionalData->NumChannels;
    if ((pIVar2 == (ISoundfieldAudioPacket *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("&InRef != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                           ,0x5c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = param_2->AudioBuffer;
    pTVar3->ArrayNum = 0;
    if (pTVar3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (param_2->AudioBuffer,iVar1 * param_1->NumFrames);
    IVar4 = pIVar2[1];
    if (IVar4 != (ISoundfieldAudioPacket)0x0) {
      (**(code **)(*(longlong *)IVar4 + 0x10))
                (IVar4,(longlong)iVar1,(longlong)param_1->NumFrames,
                 (param_2->AudioBuffer->AllocatorInstance).Data);
    }
  }
  return;
}

