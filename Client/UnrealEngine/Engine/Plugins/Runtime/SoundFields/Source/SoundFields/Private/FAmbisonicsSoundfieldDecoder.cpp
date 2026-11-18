// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 3

// ~FAmbisonicsSoundfieldDecoder @ 14f09c760

void __thiscall
FAmbisonicsSoundfieldDecoder::~FAmbisonicsSoundfieldDecoder(FAmbisonicsSoundfieldDecoder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsSoundfieldDecoder__6B_;
  pFVar1 = (this->DecoderOutputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RotatedAudio)._padding_ = (longlong)&___7FAmbisonicsSoundfieldBuffer__6B_;
  pFVar1 = (this->RotatedAudio).AudioBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RotatedAudio)._padding_ = (longlong)&___7ISoundfieldAudioPacket__6B_;
  FSoundFieldDecoder::~FSoundFieldDecoder(&this->Decoder);
  this->_padding_ = (longlong)&___7ISoundfieldDecoderStream__6B_;
  return;
}

// Decode @ 14f09cfb0

void __thiscall
FAmbisonicsSoundfieldDecoder::Decode
          (FAmbisonicsSoundfieldDecoder *this,FSoundfieldDecoderInputData *param_1,
          FSoundfieldDecoderOutputData *param_2)

{
  FAmbisonicsSoundfieldBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (FAmbisonicsSoundfieldBuffer *)param_1->SoundfieldBuffer;
  if (pFVar1 == (FAmbisonicsSoundfieldBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (VirtualIntermediateChannelsCvar == 0) {
    FSoundFieldDecoder::DecodeAudioDirectlyToDeviceOutputPositions
              (&this->Decoder,pFVar1,param_1->PositionalData,param_2->AudioBuffer);
  }
  else {
    FSoundFieldDecoder::DecodeAudioToSevenOneAndDownmixToDevice
              (&this->Decoder,pFVar1,param_1->PositionalData,param_2->AudioBuffer);
  }
  return;
}

// DecodeAndMixIn @ 14f09d040

void __thiscall
FAmbisonicsSoundfieldDecoder::DecodeAndMixIn
          (FAmbisonicsSoundfieldDecoder *this,FSoundfieldDecoderInputData *param_1,
          FSoundfieldDecoderOutputData *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  int iVar4;
  int iVar5;
  FAmbisonicsSoundfieldBuffer *pFVar6;
  FSoundfieldSpeakerPositionalData *pFVar7;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  pFVar6 = (FAmbisonicsSoundfieldBuffer *)param_1->SoundfieldBuffer;
  if (pFVar6 == (FAmbisonicsSoundfieldBuffer *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("&InRef != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                        ,0x5c,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar7 = param_1->PositionalData;
  pTVar8 = param_2->AudioBuffer;
  pTVar3 = &this->DecoderOutputBuffer;
  piVar1 = &(this->DecoderOutputBuffer).ArrayMax;
  (this->DecoderOutputBuffer).ArrayNum = 0;
  piVar2 = &(this->DecoderOutputBuffer).ArrayNum;
  if ((this->DecoderOutputBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2->AudioBuffer->ArrayNum,&pTVar3->AllocatorInstance,piVar2,piVar1);
  if (VirtualIntermediateChannelsCvar == 0) {
    FSoundFieldDecoder::DecodeAudioDirectlyToDeviceOutputPositions
              (&this->Decoder,pFVar6,pFVar7,pTVar3);
  }
  else {
    FSoundFieldDecoder::DecodeAudioToSevenOneAndDownmixToDevice(&this->Decoder,pFVar6,pFVar7,pTVar3)
    ;
  }
  pFVar9 = (pTVar8->AllocatorInstance).Data;
  iVar4 = pTVar8->ArrayNum;
  if (iVar4 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (pTVar3->AllocatorInstance).Data;
  iVar5 = *piVar2;
  if (iVar5 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_48._12_4_ = uStack_5c;
  local_48.ArrayNum = iVar4;
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iVar5;
  local_48.DataPtr = (float *)pFVar9;
  local_38.DataPtr = (float *)pFVar10;
  Audio::ArrayMixIn(&local_38,&local_48);
  return;
}

