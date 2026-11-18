// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FLongDelayAPF @ 1444f1030

FLongDelayAPF * __thiscall
Audio::FLongDelayAPF::FLongDelayAPF(FLongDelayAPF *this,float param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FLongDelayAPF *pFVar9;
  FAlignedBlockBuffer *pFVar10;
  FAlignedBlockBuffer *this_00;
  int iVar11;
  undefined8 local_38 [2];
  
  this->NumDelaySamples = param_2;
  piVar1 = &(this->WorkBuffer).ArrayNum;
  this_00 = (FAlignedBlockBuffer *)0x0;
  this->NumInternalBufferSamples = param_3;
  piVar2 = &(this->WorkBuffer).ArrayMax;
  (this->DelayLine).Ptr = (FAlignedBlockBuffer *)0x0;
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  uVar4 = this->NumDelaySamples;
  pTVar3 = &this->DelayLine;
  this->G = param_1;
  iVar11 = this->NumInternalBufferSamples;
  if ((int)uVar4 < iVar11) {
    uVar8 = uVar4 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    iVar11 = uVar4 - uVar8;
    this->NumInternalBufferSamples = iVar11;
  }
  if ((iVar11 < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInternalBufferSamples > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LongDelayAPF.cpp"
                         ,0x18,L"Invalid internal buffer length"), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FLongDelayAPF *)(*pcVar6)();
    return pFVar9;
  }
  iVar11 = this->NumInternalBufferSamples;
  iVar5 = this->NumDelaySamples;
  pFVar10 = ::operator_new(0x48);
  if (pFVar10 != (FAlignedBlockBuffer *)0x0) {
    this_00 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar10,iVar5 + iVar11 * 2,this->NumInternalBufferSamples,0x10,0x10);
  }
  if (pTVar3 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)local_38) {
    if (this_00 == (FAlignedBlockBuffer *)0x0) goto LAB_1444f1140;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(this_00);
  }
  else {
    pFVar10 = pTVar3->Ptr;
    pTVar3->Ptr = this_00;
    if (pFVar10 == (FAlignedBlockBuffer *)0x0) goto LAB_1444f1140;
    FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar10);
    this_00 = pFVar10;
  }
  ::operator_delete(this_00,0x48);
LAB_1444f1140:
  FAlignedBlockBuffer::AddZeros(pTVar3->Ptr,this->NumDelaySamples);
  uVar4 = this->NumInternalBufferSamples;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  *piVar1 = 0;
  if (*piVar2 < (int)uVar4) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar4,&(this->WorkBuffer).AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->WorkBuffer).AllocatorInstance,piVar1,piVar2)
  ;
  return this;
}

// ~FLongDelayAPF @ 1444f4020

void __thiscall Audio::FLongDelayAPF::~FLongDelayAPF(FLongDelayAPF *this)

{
  FAlignedBlockBuffer *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->DelayLine).Ptr;
  if (this_00 != (FAlignedBlockBuffer *)0x0) {
    FAlignedBlockBuffer::~FAlignedBlockBuffer(this_00);
    ::operator_delete(this_00,0x48);
  }
  pFVar1 = (this->WorkBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetNumInternalBufferSamples @ 144504360

int __thiscall Audio::FLongDelayAPF::GetNumInternalBufferSamples(FLongDelayAPF *this)

{
  return this->NumInternalBufferSamples;
}

// ProcessAudio @ 14450d890

void __thiscall
Audio::FLongDelayAPF::ProcessAudio
          (FLongDelayAPF *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = (this->WorkBuffer).AllocatorInstance.Data;
  for (iVar7 = param_1->ArrayNum; iVar7 != 0; iVar7 = iVar7 - iVar4) {
    iVar4 = iVar7;
    if (this->NumInternalBufferSamples < iVar7) {
      iVar4 = this->NumInternalBufferSamples;
    }
    pfVar5 = FAlignedBlockBuffer::InspectSamples((this->DelayLine).Ptr,iVar4,0);
    pFVar1 = pFVar2 + (longlong)iVar6 * 4;
    ArrayAPFLongDelayProcess((float *)pFVar1,pfVar5,iVar4,(float *)pFVar1,(float *)pFVar3,this->G);
    FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,iVar4);
    FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,(float *)pFVar3,iVar4);
    iVar6 = iVar6 + iVar4;
  }
  return;
}

// ProcessAudio @ 14450d940

void __thiscall
Audio::FLongDelayAPF::ProcessAudio
          (FLongDelayAPF *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar9 = param_1->ArrayNum;
  uVar10 = (ulonglong)uVar9;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (-1 < (int)uVar9) {
    iVar7 = 0;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar9,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar9,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar9,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar9,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar4 = (param_3->AllocatorInstance).Data;
    while (uVar9 != 0) {
      iVar8 = (int)uVar10;
      iVar11 = iVar8;
      if (this->NumInternalBufferSamples < iVar8) {
        iVar11 = this->NumInternalBufferSamples;
      }
      pfVar5 = FAlignedBlockBuffer::InspectSamples((this->DelayLine).Ptr,iVar11,0);
      lVar6 = (longlong)iVar7;
      pFVar1 = pFVar4 + lVar6 * 4;
      ArrayAPFLongDelayProcess
                ((float *)(pFVar2 + lVar6 * 4),pfVar5,iVar11,(float *)(pFVar3 + lVar6 * 4),
                 (float *)pFVar1,this->G);
      FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,iVar11);
      FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,(float *)pFVar1,iVar11);
      iVar7 = iVar7 + iVar11;
      uVar9 = iVar8 - iVar11;
      uVar10 = (ulonglong)uVar9;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// ProcessAudio @ 14450dac0

void __thiscall
Audio::FLongDelayAPF::ProcessAudio
          (FLongDelayAPF *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = param_1->ArrayNum;
  uVar9 = (ulonglong)uVar8;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar2 = (this->WorkBuffer).AllocatorInstance.Data;
  if (-1 < (int)uVar8) {
    iVar6 = 0;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar8,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar8,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    pFVar3 = (param_2->AllocatorInstance).Data;
    while (uVar8 != 0) {
      iVar7 = (int)uVar9;
      iVar5 = iVar7;
      if (this->NumInternalBufferSamples < iVar7) {
        iVar5 = this->NumInternalBufferSamples;
      }
      pfVar4 = FAlignedBlockBuffer::InspectSamples((this->DelayLine).Ptr,iVar5,0);
      ArrayAPFLongDelayProcess
                ((float *)(pFVar1 + (longlong)iVar6 * 4),pfVar4,iVar5,
                 (float *)(pFVar3 + (longlong)iVar6 * 4),(float *)pFVar2,this->G);
      FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,iVar5);
      FAlignedBlockBuffer::AddSamples((this->DelayLine).Ptr,(float *)pFVar2,iVar5);
      iVar6 = iVar6 + iVar5;
      uVar8 = iVar7 - iVar5;
      uVar9 = (ulonglong)uVar8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// ProcessAudioBlock @ 14450efe0

void __thiscall
Audio::FLongDelayAPF::ProcessAudioBlock
          (FLongDelayAPF *this,float *param_1,float *param_2,int param_3,float *param_4,
          float *param_5)

{
  ArrayAPFLongDelayProcess(param_1,param_2,param_3,param_4,param_5,this->G);
  return;
}

// Reset @ 144517460

void __thiscall Audio::FLongDelayAPF::Reset(FLongDelayAPF *this)

{
  FAlignedBlockBuffer::ClearSamples((this->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((this->DelayLine).Ptr,this->NumDelaySamples);
  return;
}

