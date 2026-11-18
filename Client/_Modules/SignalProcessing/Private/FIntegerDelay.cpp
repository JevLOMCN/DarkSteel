// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FIntegerDelay @ 1444ef680

FIntegerDelay * __thiscall
Audio::FIntegerDelay::FIntegerDelay(FIntegerDelay *this,int param_1,int param_2,int param_3)

{
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar1;
  FAlignedBlockBuffer *pFVar2;
  FAlignedBlockBuffer *this_00;
  undefined8 local_28 [2];
  
  this_00 = (FAlignedBlockBuffer *)0x0;
  this->MaxNumDelaySamples = param_1;
  pTVar1 = &this->DelayLine;
  this->NumDelaySamples = 0;
  this->NumDelayLineOffsetSamples = 0;
  this->NumBufferOffsetSamples = 0;
  this->NumInternalBufferSamples = param_3;
  pTVar1->Ptr = (FAlignedBlockBuffer *)0x0;
  pFVar2 = ::operator_new(0x48);
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    this_00 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar2,param_3 + param_1 * 2,param_1 + param_3,4,0x10);
  }
  if (pTVar1 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)local_28) {
    if (this_00 == (FAlignedBlockBuffer *)0x0) goto LAB_1444ef734;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(this_00);
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar2 == (FAlignedBlockBuffer *)0x0) goto LAB_1444ef734;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar2);
    this_00 = pFVar2;
  }
  ::operator_delete(this_00,0x48);
LAB_1444ef734:
  FAlignedBlockBuffer::AddZeros(pTVar1->Ptr,this->MaxNumDelaySamples);
  SetDelayLengthSamples(this,param_2);
  return this;
}

// ~FIntegerDelay @ 1444f39e0

void __thiscall Audio::FIntegerDelay::~FIntegerDelay(FIntegerDelay *this)

{
  FAlignedBlockBuffer *this_00;
  
  this_00 = (this->DelayLine).Ptr;
  if (this_00 != (FAlignedBlockBuffer *)0x0) {
    FAlignedBlockBuffer::~FAlignedBlockBuffer(this_00);
    ::operator_delete(this_00,0x48);
    return;
  }
  return;
}

// GetNumDelaySamples @ 1445041d0

int __thiscall Audio::FIntegerDelay::GetNumDelaySamples(FIntegerDelay *this)

{
  return this->NumDelaySamples;
}

// PeekDelayLine @ 14450b3d0

void __thiscall
Audio::FIntegerDelay::PeekDelayLine
          (FIntegerDelay *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  uint uVar1;
  float *_Src;
  uint uVar2;
  
  uVar2 = this->NumDelaySamples;
  uVar1 = FAlignedBlockBuffer::GetNumAvailable((this->DelayLine).Ptr);
  if ((int)uVar1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  if (param_1 < (int)uVar2) {
    uVar2 = param_1;
  }
  _Src = FAlignedBlockBuffer::InspectSamples((this->DelayLine).Ptr,uVar2,0);
  if (_Src == (float *)0x0) {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar2,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)(int)uVar2 << 2);
  }
  return;
}

// ProcessAudio @ 14450ced0

void __thiscall
Audio::FIntegerDelay::ProcessAudio
          (FIntegerDelay *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_2->ArrayNum;
  iVar10 = 0;
  *piVar1 = 0;
  if (param_2->ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar2,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  iVar9 = *piVar1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((iVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar8 = param_1->ArrayNum;
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar8 != iVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSamples.Num() == OutSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\IntegerDelay.cpp"
                         ,0x54,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  for (; 0 < iVar8; iVar8 = iVar8 - iVar9) {
    iVar9 = this->NumInternalBufferSamples;
    if (iVar8 < this->NumInternalBufferSamples) {
      iVar9 = iVar8;
    }
    FAlignedBlockBuffer::AddSamples
              ((this->DelayLine).Ptr,(float *)(pFVar4 + (longlong)iVar10 * 4),iVar9);
    pfVar7 = FAlignedBlockBuffer::InspectSamples
                       ((this->DelayLine).Ptr,this->NumBufferOffsetSamples + iVar9,
                        this->NumDelayLineOffsetSamples);
    memcpy(pFVar3 + (longlong)iVar10 * 4,pfVar7 + this->NumBufferOffsetSamples,(longlong)iVar9 << 2)
    ;
    FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,iVar9);
    iVar10 = iVar10 + iVar9;
  }
  return;
}

// ProcessAudio @ 14450d080

void __thiscall
Audio::FIntegerDelay::ProcessAudio
          (FIntegerDelay *this,TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSamples.Num() == OutSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\IntegerDelay.cpp"
                         ,0x54,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar1 = param_1->DataPtr;
  iVar8 = 0;
  pfVar2 = param_2->DataPtr;
  for (iVar6 = param_1->ArrayNum; 0 < iVar6; iVar6 = iVar6 - iVar7) {
    iVar7 = this->NumInternalBufferSamples;
    if (iVar6 < this->NumInternalBufferSamples) {
      iVar7 = iVar6;
    }
    FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,pfVar1 + iVar8,iVar7);
    pfVar5 = FAlignedBlockBuffer::InspectSamples
                       ((this->DelayLine).Ptr,this->NumBufferOffsetSamples + iVar7,
                        this->NumDelayLineOffsetSamples);
    memcpy(pfVar2 + iVar8,pfVar5 + this->NumBufferOffsetSamples,(longlong)iVar7 << 2);
    FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,iVar7);
    iVar8 = iVar8 + iVar7;
  }
  return;
}

// ProcessAudioBlock @ 14450ee80

void __thiscall
Audio::FIntegerDelay::ProcessAudioBlock
          (FIntegerDelay *this,float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  
  FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,param_1,param_2);
  pfVar1 = FAlignedBlockBuffer::InspectSamples
                     ((this->DelayLine).Ptr,this->NumBufferOffsetSamples + param_2,
                      this->NumDelayLineOffsetSamples);
  memcpy(param_3,pfVar1 + this->NumBufferOffsetSamples,(longlong)param_2 << 2);
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,param_2);
  return;
}

// Reset @ 1445170e0

void __thiscall Audio::FIntegerDelay::Reset(FIntegerDelay *this)

{
  FAlignedBlockBuffer::ClearSamples((this->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((this->DelayLine).Ptr,this->MaxNumDelaySamples);
  return;
}

// SetDelayLengthSamples @ 144519cf0

void __thiscall Audio::FIntegerDelay::SetDelayLengthSamples(FIntegerDelay *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((this->MaxNumDelaySamples < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumDelaySamples <= MaxNumDelaySamples",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\IntegerDelay.cpp"
                         ,0x22,L"InNumDelaySamples must be less than or equal to MaxNumDelaySamples"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumDelaySamples >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\IntegerDelay.cpp"
                         ,0x23,L"InNumDelaySamples must be greater than or equal to 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = this->MaxNumDelaySamples;
  iVar6 = 0;
  iVar7 = iVar1;
  if ((param_1 <= iVar1) && (iVar7 = param_1, param_1 < 0)) {
    iVar7 = 0;
  }
  uVar5 = iVar1 - iVar7;
  this->NumDelaySamples = iVar7;
  this->NumDelayLineOffsetSamples = uVar5;
  this->NumBufferOffsetSamples = 0;
  uVar4 = uVar5 & 0x80000003;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
  }
  if (uVar4 != 0) {
    do {
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 1;
      uVar4 = uVar5 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
    } while (uVar4 != 0);
    this->NumDelayLineOffsetSamples = uVar5;
    this->NumBufferOffsetSamples = iVar6;
  }
  return;
}

