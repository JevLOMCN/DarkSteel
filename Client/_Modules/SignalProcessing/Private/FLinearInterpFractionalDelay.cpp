// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FLinearInterpFractionalDelay @ 1444f0d30

FLinearInterpFractionalDelay * __thiscall
Audio::FLinearInterpFractionalDelay::FLinearInterpFractionalDelay
          (FLinearInterpFractionalDelay *this,int param_1,int param_2)

{
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLinearInterpFractionalDelay *pFVar6;
  FAlignedBlockBuffer *pFVar7;
  FAlignedBlockBuffer *pFVar8;
  int *piVar9;
  uint uVar10;
  FAlignedBlockBuffer *pFVar11;
  int iVar12;
  undefined8 local_38 [2];
  
  pFVar11 = (FAlignedBlockBuffer *)0x0;
  this->MaxDelay = param_1;
  this->NumInternalBufferSamples = param_2;
  pTVar1 = &this->DelayLine;
  pTVar1->Ptr = (FAlignedBlockBuffer *)0x0;
  piVar9 = &(this->IntegerDelayOffsets).ArrayNum;
  (this->IntegerDelayOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IntegerDelayOffsets).ArrayMax;
  *piVar9 = 0;
  *piVar2 = 0;
  this->UpperDelayPos = (int *)0x0;
  this->LowerDelayPos = (int *)0x0;
  if ((this->MaxDelay < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxDelay > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinearInterpFractionalDelay.cpp"
                         ,0x10,L"InMaxDelay must be greater than zero"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FLinearInterpFractionalDelay *)(*pcVar3)();
    return pFVar6;
  }
  iVar12 = this->MaxDelay;
  if (iVar12 < 1) {
    iVar12 = 1;
    this->MaxDelay = 1;
  }
  uVar10 = this->NumInternalBufferSamples;
  uVar5 = uVar10 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  if (uVar5 != 0) {
    do {
      uVar10 = uVar10 - 1;
      uVar5 = uVar10 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
    } while (uVar5 != 0);
    iVar12 = this->MaxDelay;
    this->NumInternalBufferSamples = uVar10;
  }
  if ((int)uVar10 < 1) {
    this->NumInternalBufferSamples = 4;
    uVar10 = 4;
  }
  pFVar7 = ::operator_new(0x48);
  pFVar8 = pFVar11;
  if (pFVar7 != (FAlignedBlockBuffer *)0x0) {
    pFVar8 = FAlignedBlockBuffer::FAlignedBlockBuffer
                       (pFVar7,uVar10 + 2 + iVar12 * 2,uVar10 + 1 + iVar12,0x10,0x10);
  }
  if (pTVar1 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)local_38) {
    if (pFVar8 == (FAlignedBlockBuffer *)0x0) goto LAB_1444f0e72;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar8);
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar8;
    if (pFVar7 == (FAlignedBlockBuffer *)0x0) goto LAB_1444f0e72;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar7);
    pFVar8 = pFVar7;
  }
  ::operator_delete(pFVar8,0x48);
LAB_1444f0e72:
  FAlignedBlockBuffer::AddZeros(pTVar1->Ptr,this->MaxDelay + 1);
  uVar10 = this->NumInternalBufferSamples;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  *piVar9 = 0;
  if (*piVar2 < (int)uVar10) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar10,&(this->IntegerDelayOffsets).AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->IntegerDelayOffsets).AllocatorInstance,
             piVar9,piVar2);
  pFVar8 = pFVar11;
  if (0 < this->NumInternalBufferSamples) {
    do {
      iVar12 = this->MaxDelay;
      uVar5 = (uint)pFVar11;
      uVar10 = 0;
      if ((int)uVar5 < *piVar9) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FLinearInterpFractionalDelay *)(*pcVar3)();
        return pFVar6;
      }
      pFVar11 = (FAlignedBlockBuffer *)(ulonglong)(uVar5 + 1);
      *(uint *)((longlong)&pFVar8->AllocByteAlignment +
               (longlong)(this->IntegerDelayOffsets).AllocatorInstance.Data) = iVar12 + uVar5;
      pFVar8 = (FAlignedBlockBuffer *)&pFVar8->ByteAlignment;
    } while ((int)(uVar5 + 1) < this->NumInternalBufferSamples);
  }
  piVar9 = FMemory::Malloc(0x10,0x10);
  this->UpperDelayPos = piVar9;
  piVar9 = FMemory::Malloc(0x10,0x10);
  this->LowerDelayPos = piVar9;
  return this;
}

// ~FLinearInterpFractionalDelay @ 1444f3fc0

void __thiscall
Audio::FLinearInterpFractionalDelay::~FLinearInterpFractionalDelay
          (FLinearInterpFractionalDelay *this)

{
  FScriptContainerElement *pFVar1;
  FAlignedBlockBuffer *this_00;
  
  FMemory::Free(this->UpperDelayPos);
  FMemory::Free(this->LowerDelayPos);
  pFVar1 = (this->IntegerDelayOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->DelayLine).Ptr;
  if (this_00 != (FAlignedBlockBuffer *)0x0) {
    FAlignedBlockBuffer::~FAlignedBlockBuffer(this_00);
    ::operator_delete(this_00,0x48);
    return;
  }
  return;
}

// ProcessAudio @ 14450d320

void __thiscall
Audio::FLinearInterpFractionalDelay::ProcessAudio
          (FLinearInterpFractionalDelay *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar9 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar9;
  if ((uVar9 != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum == InDelays.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinearInterpFractionalDelay.cpp"
                         ,0x43,L"Input buffers must be equal length"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  iVar11 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar9,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar9,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  if (uVar9 == param_2->ArrayNum) {
    pFVar2 = (param_3->AllocatorInstance).Data;
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar4 = (param_2->AllocatorInstance).Data;
    while (0 < (int)uVar9) {
      uVar9 = (uint)uVar10;
      lVar13 = (longlong)iVar11;
      uVar12 = this->NumInternalBufferSamples;
      if ((int)uVar9 < this->NumInternalBufferSamples) {
        uVar12 = uVar9;
      }
      pFVar1 = pFVar3 + lVar13 * 4;
      uVar7 = uVar12 & 0x80000003;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
      }
      if ((uVar7 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("0 == (InNum % 4)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinearInterpFractionalDelay.cpp"
                             ,0x66,L"Array length must be multiple of 4"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,(float *)pFVar1,uVar12);
      pfVar8 = FAlignedBlockBuffer::InspectSamples
                         ((this->DelayLine).Ptr,this->MaxDelay + 1 + uVar12,0);
      ArrayLerpFractionalDelay
                ((float *)pFVar1,(float *)(pFVar4 + lVar13 * 4),pfVar8,
                 (int *)(this->IntegerDelayOffsets).AllocatorInstance.Data,this->UpperDelayPos,
                 this->LowerDelayPos,uVar12,(float *)(pFVar2 + lVar13 * 4),(float)this->MaxDelay);
      FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,uVar12);
      iVar11 = iVar11 + uVar12;
      uVar9 = uVar9 - uVar12;
      uVar10 = (ulonglong)uVar9;
    }
  }
  else if (0 < (int)uVar9) {
    memset((param_3->AllocatorInstance).Data,0,uVar10 << 2);
  }
  return;
}

// ProcessAudioBlock @ 14450eef0

void __thiscall
Audio::FLinearInterpFractionalDelay::ProcessAudioBlock
          (FLinearInterpFractionalDelay *this,float *param_1,float *param_2,int param_3,
          float *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = param_3 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  if (uVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 == (InNum % 4)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LinearInterpFractionalDelay.cpp"
                       ,0x66,L"Array length must be multiple of 4");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,param_1,param_3);
  pfVar4 = FAlignedBlockBuffer::InspectSamples((this->DelayLine).Ptr,this->MaxDelay + 1 + param_3,0)
  ;
  ArrayLerpFractionalDelay
            (param_1,param_2,pfVar4,(int *)(this->IntegerDelayOffsets).AllocatorInstance.Data,
             this->UpperDelayPos,this->LowerDelayPos,param_3,param_4,(float)this->MaxDelay);
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,param_3);
  return;
}

// Reset @ 144517390

void __thiscall Audio::FLinearInterpFractionalDelay::Reset(FLinearInterpFractionalDelay *this)

{
  FAlignedBlockBuffer::ClearSamples((this->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((this->DelayLine).Ptr,this->MaxDelay + 1);
  return;
}

