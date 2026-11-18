// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FDynamicDelayAPF @ 1444a36e0

FDynamicDelayAPF * __thiscall
Audio::FDynamicDelayAPF::FDynamicDelayAPF
          (FDynamicDelayAPF *this,float param_1,int param_2,int param_3,int param_4,float param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar4;
  int *piVar5;
  int *piVar6;
  TUniquePtr<Audio::FLinearInterpFractionalDelay,TDefaultDelete<Audio::FLinearInterpFractionalDelay>_>
  *pTVar7;
  int iVar8;
  FAlignedBlockBuffer *pFVar9;
  FLinearInterpFractionalDelay *this_00;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  FDynamicDelayAPF *pFVar13;
  FAlignedBlockBuffer *pFVar14;
  FLinearInterpFractionalDelay *pFVar15;
  int iVar16;
  int *piVar17;
  longlong local_38;
  undefined8 local_30;
  
  (this->G).StartValue = 0.0;
  (this->G).DeltaValue = 0.0;
  piVar1 = &(this->FractionalDelays).ArrayMax;
  (this->G).DefaultDurationTicks = 0;
  piVar2 = &(this->WorkBufferA).ArrayMax;
  this->NumDelaySamples = param_2 + -1;
  piVar3 = &(this->WorkBufferB).ArrayMax;
  this->MinDelay = param_2;
  pTVar4 = &this->IntegerDelayLine;
  this->MaxDelay = param_3;
  pTVar7 = &this->FractionalDelayLine;
  this->NumInternalBufferSamples = param_4;
  (this->FractionalDelays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EaseTimeInSec = 1.0;
  piVar17 = &(this->FractionalDelays).ArrayNum;
  (this->WorkBufferA).ArrayNum = 0;
  (this->WorkBufferB).ArrayNum = 0;
  (this->G).SampleRate = param_5;
  *piVar17 = 0;
  *piVar1 = 0;
  (this->DelayLineInput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayLineInput).ArrayNum = 0;
  (this->DelayLineInput).ArrayMax = 0;
  (this->WorkBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  (this->WorkBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  pTVar4->Ptr = (FAlignedBlockBuffer *)0x0;
  pTVar7->Ptr = (FLinearInterpFractionalDelay *)0x0;
  (this->G).bIsInit = false;
  (this->G).DurationTicks = 0;
  piVar5 = &(this->WorkBufferA).ArrayNum;
  piVar6 = &(this->WorkBufferB).ArrayNum;
  (this->G).CurrentValue = param_1;
  (this->G).CurrentTick = 0;
  if (this->NumDelaySamples < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumDelaySamples >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicDelayAPF.cpp"
                        ,0x12,L"Minimum delay must be atleast 1");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pFVar13 = (FDynamicDelayAPF *)(*pcVar10)();
      return pFVar13;
    }
  }
  iVar16 = this->NumInternalBufferSamples;
  if (this->NumDelaySamples < param_4) {
    param_4 = this->NumDelaySamples;
  }
  if (param_4 < iVar16) {
    uVar12 = param_4 & 0x80000003;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
    }
    iVar16 = param_4 - uVar12;
    this->NumInternalBufferSamples = iVar16;
  }
  if (iVar16 < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumInternalBufferSamples > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicDelayAPF.cpp"
                        ,0x1c,L"Invalid internal buffer length");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pFVar13 = (FDynamicDelayAPF *)(*pcVar10)();
      return pFVar13;
    }
  }
  if (this->MaxDelay < this->MinDelay) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("MinDelay <= MaxDelay",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicDelayAPF.cpp"
                        ,0x1f,L"invalid delay range");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pFVar13 = (FDynamicDelayAPF *)(*pcVar10)();
      return pFVar13;
    }
  }
  iVar16 = this->MinDelay;
  iVar8 = this->NumInternalBufferSamples;
  pFVar14 = ::operator_new(0x48);
  if (pFVar14 == (FAlignedBlockBuffer *)0x0) {
    pFVar14 = (FAlignedBlockBuffer *)0x0;
  }
  else {
    pFVar14 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar14,iVar8 + iVar16 * 2,iVar8 + iVar16,0x10,0x10);
  }
  if (pTVar4 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_38) {
    if (pFVar14 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar14->InternalBuffer);
      pFVar14->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar14->RolloverBuffer);
      pFVar14->RolloverBuffer = (float *)0x0;
      goto LAB_1444a38e9;
    }
  }
  else {
    pFVar9 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar14;
    if (pFVar9 != (FAlignedBlockBuffer *)0x0) {
      FMemory::Free(pFVar9->InternalBuffer);
      pFVar9->InternalBuffer = (float *)0x0;
      FMemory::Free(pFVar9->RolloverBuffer);
      pFVar9->RolloverBuffer = (float *)0x0;
      pFVar14 = pFVar9;
LAB_1444a38e9:
      ::operator_delete(pFVar14,0x48);
    }
  }
  FAlignedBlockBuffer::AddZeros(pTVar4->Ptr,this->NumDelaySamples);
  iVar16 = this->MaxDelay;
  iVar8 = this->MinDelay;
  pFVar15 = ::operator_new(0x30);
  if (pFVar15 == (FLinearInterpFractionalDelay *)0x0) {
    pFVar15 = (FLinearInterpFractionalDelay *)0x0;
  }
  else {
    pFVar15 = FLinearInterpFractionalDelay::FLinearInterpFractionalDelay
                        (pFVar15,(iVar16 - iVar8) + 1,this->NumInternalBufferSamples);
  }
  if (pTVar7 == (TUniquePtr<Audio::FLinearInterpFractionalDelay,TDefaultDelete<Audio::FLinearInterpFractionalDelay>_>
                 *)&local_30) {
    if (pFVar15 == (FLinearInterpFractionalDelay *)0x0) goto LAB_1444a396e;
    FLinearInterpFractionalDelay::~FLinearInterpFractionalDelay(pFVar15);
  }
  else {
    this_00 = pTVar7->Ptr;
    pTVar7->Ptr = pFVar15;
    if (this_00 == (FLinearInterpFractionalDelay *)0x0) goto LAB_1444a396e;
    FLinearInterpFractionalDelay::~FLinearInterpFractionalDelay(this_00);
    pFVar15 = this_00;
  }
  ::operator_delete(pFVar15,0x30);
LAB_1444a396e:
  uVar12 = this->NumInternalBufferSamples;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  *piVar17 = 0;
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar12,&(this->FractionalDelays).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->FractionalDelays).AllocatorInstance,piVar17,
             piVar1);
  uVar12 = this->NumInternalBufferSamples;
  if (-1 < (int)uVar12) {
    *piVar5 = 0;
    if (*piVar2 < (int)uVar12) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar12,&(this->WorkBufferA).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumInternalBufferSamples,&(this->WorkBufferA).AllocatorInstance,piVar5,
               piVar2);
    uVar12 = this->NumInternalBufferSamples;
    if (-1 < (int)uVar12) {
      *piVar6 = 0;
      if (*piVar3 < (int)uVar12) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar12,&(this->WorkBufferB).AllocatorInstance,0,piVar3);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,this->NumInternalBufferSamples,&(this->WorkBufferB).AllocatorInstance,piVar6,
                 piVar3);
      return this;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// ~FDynamicDelayAPF @ 1444a61f0

void __thiscall Audio::FDynamicDelayAPF::~FDynamicDelayAPF(FDynamicDelayAPF *this)

{
  FLinearInterpFractionalDelay *this_00;
  FAlignedBlockBuffer *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->FractionalDelayLine).Ptr;
  if (this_00 != (FLinearInterpFractionalDelay *)0x0) {
    FLinearInterpFractionalDelay::~FLinearInterpFractionalDelay(this_00);
    ::operator_delete(this_00,0x30);
  }
  pFVar1 = (this->IntegerDelayLine).Ptr;
  if (pFVar1 != (FAlignedBlockBuffer *)0x0) {
    FMemory::Free(pFVar1->InternalBuffer);
    pFVar1->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar1->RolloverBuffer);
    pFVar1->RolloverBuffer = (float *)0x0;
    ::operator_delete(pFVar1,0x48);
  }
  pFVar2 = (this->WorkBufferB).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorkBufferA).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DelayLineInput).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FractionalDelays).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ProcessAudio @ 1444d7920

void __thiscall
Audio::FDynamicDelayAPF::ProcessAudio
          (FDynamicDelayAPF *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *_Dst;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulong64 uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar14 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)uVar14;
  if ((uVar14 != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum == InSampleDelays.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicDelayAPF.cpp"
                         ,0x37,L"InSamples [%d], InSampleDelays [%d] length mismatch"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar14,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar14,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  if (uVar14 == param_2->ArrayNum) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar4 = (param_3->AllocatorInstance).Data;
    iVar13 = 0;
    while (uVar14 != 0) {
      uVar12 = (ulong64)(uint)this->NumInternalBufferSamples;
      if ((int)uVar15 < this->NumInternalBufferSamples) {
        uVar12 = uVar15 & 0xffffffff;
      }
      uVar14 = (uint)uVar12;
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar12);
      }
      piVar1 = &(this->FractionalDelays).ArrayMax;
      (this->FractionalDelays).ArrayNum = 0;
      if ((this->FractionalDelays).ArrayMax < (int)uVar14) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar14,&(this->FractionalDelays).AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar14,&(this->FractionalDelays).AllocatorInstance,
                 &(this->FractionalDelays).ArrayNum,piVar1);
      _Dst = (this->FractionalDelays).AllocatorInstance.Data;
      lVar16 = (longlong)iVar13;
      lVar11 = (longlong)(int)uVar14;
      memcpy(_Dst,(param_2->AllocatorInstance).Data + lVar16 * 4,lVar11 * 4);
      lVar10 = 0;
      if ((0 < (int)uVar14) && (0xf < uVar14)) {
        iVar2 = this->NumDelaySamples;
        if ((&this->NumDelaySamples < _Dst) ||
           (_Dst + (longlong)(int)(uVar14 - 1) * 4 < &this->NumDelaySamples)) {
          uVar8 = uVar14 & 0x8000000f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
          }
          pFVar7 = _Dst + 0x20;
          fVar17 = (float)iVar2;
          fVar18 = (float)iVar2;
          fVar19 = (float)iVar2;
          fVar20 = (float)iVar2;
          do {
            lVar10 = lVar10 + 0x10;
            *(float *)(pFVar7 + -0x20) = *(float *)(pFVar7 + -0x20) - fVar17;
            *(float *)(pFVar7 + -0x1c) = *(float *)(pFVar7 + -0x1c) - fVar18;
            *(float *)(pFVar7 + -0x18) = *(float *)(pFVar7 + -0x18) - fVar19;
            *(float *)(pFVar7 + -0x14) = *(float *)(pFVar7 + -0x14) - fVar20;
            *(float *)(pFVar7 + -0x10) = *(float *)(pFVar7 + -0x10) - fVar17;
            *(float *)(pFVar7 + -0xc) = *(float *)(pFVar7 + -0xc) - fVar18;
            *(float *)(pFVar7 + -8) = *(float *)(pFVar7 + -8) - fVar19;
            *(float *)(pFVar7 + -4) = *(float *)(pFVar7 + -4) - fVar20;
            *(float *)pFVar7 = *(float *)pFVar7 - fVar17;
            *(float *)(pFVar7 + 4) = *(float *)(pFVar7 + 4) - fVar18;
            *(float *)(pFVar7 + 8) = *(float *)(pFVar7 + 8) - fVar19;
            *(float *)(pFVar7 + 0xc) = *(float *)(pFVar7 + 0xc) - fVar20;
            *(float *)(pFVar7 + 0x10) = *(float *)(pFVar7 + 0x10) - fVar17;
            *(float *)(pFVar7 + 0x14) = *(float *)(pFVar7 + 0x14) - fVar18;
            *(float *)(pFVar7 + 0x18) = *(float *)(pFVar7 + 0x18) - fVar19;
            *(float *)(pFVar7 + 0x1c) = *(float *)(pFVar7 + 0x1c) - fVar20;
            pFVar7 = pFVar7 + 0x40;
          } while (lVar10 < (int)(uVar14 - uVar8));
        }
      }
      if (lVar10 < lVar11) {
        if (3 < lVar11 - lVar10) {
          pFVar7 = _Dst + lVar10 * 4 + 8;
          lVar9 = ((lVar11 - lVar10) - 4U >> 2) + 1;
          lVar10 = lVar10 + lVar9 * 4;
          do {
            *(float *)(pFVar7 + -8) = *(float *)(pFVar7 + -8) - (float)this->NumDelaySamples;
            *(float *)(pFVar7 + -4) = *(float *)(pFVar7 + -4) - (float)this->NumDelaySamples;
            *(float *)pFVar7 = *(float *)pFVar7 - (float)this->NumDelaySamples;
            *(float *)(pFVar7 + 4) = *(float *)(pFVar7 + 4) - (float)this->NumDelaySamples;
            pFVar7 = pFVar7 + 0x10;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        for (; lVar10 < lVar11; lVar10 = lVar10 + 1) {
          *(float *)(_Dst + lVar10 * 4) =
               *(float *)(_Dst + lVar10 * 4) - (float)this->NumDelaySamples;
        }
      }
      ProcessAudioBlock(this,(float *)(pFVar3 + lVar16 * 4),&this->FractionalDelays,uVar14,
                        (float *)(pFVar4 + lVar16 * 4));
      iVar13 = iVar13 + uVar14;
      uVar14 = (int)uVar15 - uVar14;
      uVar15 = (ulonglong)uVar14;
    }
  }
  else {
    memset((param_3->AllocatorInstance).Data,0,uVar15 << 2);
  }
  return;
}

// ProcessAudioBlock @ 1444dc570

void __thiscall
Audio::FDynamicDelayAPF::ProcessAudioBlock
          (FDynamicDelayAPF *this,float *param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          int param_3,float *param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  FScriptContainerElement *_Src;
  FScriptContainerElement *_Src_00;
  FAlignedBlockBuffer *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  float *_Src_01;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  TArrayView<float_const_,int> local_148;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  float *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  piVar1 = &(this->WorkBufferA).ArrayMax;
  piVar2 = &(this->WorkBufferA).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < param_3) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_3,&(this->WorkBufferA).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_3,&(this->WorkBufferA).AllocatorInstance,piVar2,piVar1);
  _Src_01 = FAlignedBlockBuffer::InspectSamples((this->IntegerDelayLine).Ptr,param_3,0);
  memcpy((this->WorkBufferA).AllocatorInstance.Data,_Src_01,(longlong)param_3 << 2);
  FLinearInterpFractionalDelay::ProcessAudio
            ((this->FractionalDelayLine).Ptr,&this->WorkBufferA,param_2,&this->WorkBufferB);
  pTVar3 = &this->DelayLineInput;
  piVar1 = &(this->DelayLineInput).ArrayMax;
  (this->DelayLineInput).ArrayNum = 0;
  if ((this->DelayLineInput).ArrayMax < param_3) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_3,&pTVar3->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_3,&pTVar3->AllocatorInstance,&(this->DelayLineInput).ArrayNum,piVar1);
  local_138 = (pTVar3->AllocatorInstance).Data;
  iVar10 = (this->G).DurationTicks;
  local_108 = (this->WorkBufferA).AllocatorInstance.Data;
  _Src = (this->WorkBufferB).AllocatorInstance.Data;
  local_f8 = param_4;
  iVar11 = (this->G).CurrentTick;
  local_148.ArrayNum = param_3;
  if (iVar11 < iVar10) {
    (this->G).CurrentTick = iVar11 + 1;
    fVar13 = ((float)iVar11 * (this->G).DeltaValue) / (float)iVar10 + (this->G).StartValue;
    (this->G).CurrentValue = fVar13;
    fVar14 = fVar13;
    if (iVar11 + 1 < iVar10) {
      iVar12 = iVar10;
      if (iVar11 + param_3 < iVar10) {
        iVar12 = iVar11 + param_3;
      }
      (this->G).CurrentTick = iVar12;
      fVar14 = ((float)iVar12 * (this->G).DeltaValue) / (float)iVar10 + (this->G).StartValue;
      (this->G).CurrentValue = fVar14;
    }
  }
  else {
    fVar13 = (this->G).CurrentValue;
    fVar14 = fVar13;
  }
  local_148.DataPtr = param_1;
  local_128 = local_108;
  iStack_120 = param_3;
  local_118 = local_138;
  iStack_110 = param_3;
  iStack_f0 = param_3;
  memcpy(local_108,_Src,(longlong)param_3 << 2);
  local_c8._12_4_ = uStack_11c;
  local_c8.ArrayNum = iStack_120;
  local_c8.DataPtr = (float *)local_128;
  ArrayFade(&local_c8,fVar13,fVar14);
  pFVar7 = local_118;
  uVar6._4_4_ = uStack_10c;
  uVar6._0_4_ = iStack_110;
  local_a8._12_4_ = uStack_fc;
  local_a8.ArrayNum = param_3;
  local_b8.DataPtr = (float *)local_118;
  iStack_100 = param_3;
  local_b8._8_8_ = uVar6;
  local_a8.DataPtr = (float *)local_108;
  ArraySum(&local_148,&local_a8,&local_b8);
  FAlignedBlockBuffer::RemoveSamples((this->IntegerDelayLine).Ptr,param_3);
  _Src_00 = (pTVar3->AllocatorInstance).Data;
  pFVar4 = (this->IntegerDelayLine).Ptr;
  if (_Src_00 == (FScriptContainerElement *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InSamples",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                       ,0x8a,L"Null pointer");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((pFVar4->SampleCapacity < param_3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = pFVar4->SampleCapacity;
    iVar11 = param_3;
    if (iVar10 <= param_3) {
      iVar11 = iVar10;
    }
    pFVar4->WriteCount = pFVar4->WriteCount + iVar11;
    if ((iVar10 < pFVar4->WriteCount) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WriteCount <= SampleCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                           ,0x5e,L"Buffer overflow"), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = pFVar4->SampleCapacity;
    iVar12 = pFVar4->WriteCount;
    if (iVar10 < iVar12) {
      pFVar4->WriteCount = iVar10;
      iVar11 = iVar11 + (iVar10 - iVar12);
    }
    iVar10 = iVar10 - pFVar4->WritePos;
    iVar12 = iVar10 - iVar11;
    if (iVar12 < 1) {
      if (0 < iVar10) {
        memcpy(pFVar4->WritePointer,_Src_00,(longlong)(iVar10 * 4));
      }
      pFVar4->WritePointer = pFVar4->InternalBuffer;
      pFVar4->WritePos = -iVar12;
      if (0 < -iVar12) {
        memcpy(pFVar4->InternalBuffer,_Src_00 + (longlong)iVar10 * 4,(longlong)(iVar12 * -4));
      }
      lVar9 = -(longlong)iVar12;
    }
    else {
      if (0 < iVar11) {
        memcpy(pFVar4->WritePointer,_Src_00,(longlong)(iVar11 * 4));
      }
      pFVar4->WritePos = pFVar4->WritePos + iVar11;
      lVar9 = (longlong)iVar11;
    }
    pFVar4->WritePointer = pFVar4->WritePointer + lVar9;
  }
  local_98.DataPtr = (float *)pFVar7;
  local_98._8_8_ = uVar6;
  ArrayFade(&local_98,(float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000),
            (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000));
  local_88._12_4_ = uStack_ec;
  local_88.ArrayNum = iStack_f0;
  local_d8 = local_138;
  local_88.DataPtr = local_f8;
  local_78._12_4_ = uStack_dc;
  local_78.ArrayNum = param_3;
  local_68[0]._12_4_ = uStack_cc;
  local_68[0].ArrayNum = param_3;
  local_68[0].DataPtr = (float *)local_138;
  local_e8 = _Src;
  iStack_e0 = param_3;
  iStack_d0 = param_3;
  local_78.DataPtr = (float *)_Src;
  ArraySum(local_68,&local_78,&local_88);
  return;
}

// Reset @ 1444e1820

void __thiscall Audio::FDynamicDelayAPF::Reset(FDynamicDelayAPF *this)

{
  FAlignedBlockBuffer::ClearSamples((this->IntegerDelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((this->IntegerDelayLine).Ptr,this->MinDelay + -1);
  FLinearInterpFractionalDelay::Reset((this->FractionalDelayLine).Ptr);
  return;
}

