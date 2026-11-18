// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FAllPassFractionalDelay @ 1444a1c40

FAllPassFractionalDelay * __thiscall
Audio::FAllPassFractionalDelay::FAllPassFractionalDelay
          (FAllPassFractionalDelay *this,int param_1,int param_2)

{
  TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  FAlignedBlockBuffer *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FAllPassFractionalDelay *pFVar12;
  FAlignedBlockBuffer *pFVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong local_40;
  
  this->MaxDelay = param_1;
  pTVar1 = &this->DelayLine;
  this->NumInternalBufferSamples = param_2;
  (this->Coefficients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Z1 = 0.0;
  piVar2 = &(this->IntegerDelayOffsets).ArrayNum;
  piVar14 = &(this->Coefficients).ArrayNum;
  (this->FractionalDelays).ArrayNum = 0;
  piVar3 = &(this->IntegerDelayOffsets).ArrayMax;
  (this->IntegerDelays).ArrayNum = 0;
  pTVar1->Ptr = (FAlignedBlockBuffer *)0x0;
  *piVar14 = 0;
  (this->Coefficients).ArrayMax = 0;
  (this->FractionalDelays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FractionalDelays).ArrayMax = 0;
  (this->IntegerDelays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegerDelays).ArrayMax = 0;
  (this->IntegerDelayOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  if (this->MaxDelay < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("MaxDelay > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                        ,0xf,L"Maximum delay must be greater than zero");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar12 = (FAllPassFractionalDelay *)(*pcVar9)();
      return pFVar12;
    }
  }
  if (param_2 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InNumInternalBufferSamples > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                        ,0x10,L"Internal buffer length must be greater than zero");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar12 = (FAllPassFractionalDelay *)(*pcVar9)();
      return pFVar12;
    }
  }
  iVar17 = this->MaxDelay;
  if (iVar17 < 1) {
    iVar17 = 1;
    this->MaxDelay = 1;
  }
  iVar16 = 0x20;
  if (0 < param_2) {
    iVar16 = param_2;
  }
  iVar7 = this->NumInternalBufferSamples;
  pFVar13 = ::operator_new(0x48);
  if (pFVar13 == (FAlignedBlockBuffer *)0x0) {
    pFVar13 = (FAlignedBlockBuffer *)0x0;
  }
  else {
    pFVar13 = FAlignedBlockBuffer::FAlignedBlockBuffer
                        (pFVar13,iVar7 + iVar17 * 2,iVar7 + iVar17,0x10,0x10);
  }
  if (pTVar1 == (TUniquePtr<Audio::FAlignedBlockBuffer,TDefaultDelete<Audio::FAlignedBlockBuffer>_>
                 *)&local_40) {
    if (pFVar13 == (FAlignedBlockBuffer *)0x0) goto LAB_1444a1dcb;
    FMemory::Free(pFVar13->InternalBuffer);
    pFVar13->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar13->RolloverBuffer);
    pFVar13->RolloverBuffer = (float *)0x0;
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar13;
    if (pFVar8 == (FAlignedBlockBuffer *)0x0) goto LAB_1444a1dcb;
    FMemory::Free(pFVar8->InternalBuffer);
    pFVar8->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar8->RolloverBuffer);
    pFVar8->RolloverBuffer = (float *)0x0;
    pFVar13 = pFVar8;
  }
  ::operator_delete(pFVar13,0x48);
LAB_1444a1dcb:
  FAlignedBlockBuffer::AddZeros(pTVar1->Ptr,this->MaxDelay);
  uVar15 = this->NumInternalBufferSamples;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar4 = &(this->Coefficients).ArrayMax;
  (this->Coefficients).ArrayNum = 0;
  if ((this->Coefficients).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar15,&(this->Coefficients).AllocatorInstance,0,piVar4);
  }
  uVar15 = this->NumInternalBufferSamples;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar5 = &(this->FractionalDelays).ArrayMax;
  (this->FractionalDelays).ArrayNum = 0;
  if ((this->FractionalDelays).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar15,&(this->FractionalDelays).AllocatorInstance,0,piVar5);
  }
  uVar15 = this->NumInternalBufferSamples;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar6 = &(this->IntegerDelays).ArrayMax;
  (this->IntegerDelays).ArrayNum = 0;
  if ((this->IntegerDelays).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar15,&(this->IntegerDelays).AllocatorInstance,0,piVar6);
  }
  uVar15 = this->NumInternalBufferSamples;
  if (-1 < (int)uVar15) {
    *piVar2 = 0;
    if (*piVar3 < (int)uVar15) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar15,&(this->IntegerDelayOffsets).AllocatorInstance,0,piVar3);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumInternalBufferSamples,&(this->Coefficients).AllocatorInstance,piVar14,
               piVar4);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumInternalBufferSamples,&(this->FractionalDelays).AllocatorInstance,
               &(this->FractionalDelays).ArrayNum,piVar5);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumInternalBufferSamples,&(this->IntegerDelays).AllocatorInstance,
               &(this->IntegerDelays).ArrayNum,piVar6);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumInternalBufferSamples,&(this->IntegerDelayOffsets).AllocatorInstance,
               piVar2,piVar3);
    uVar15 = 0;
    if (0 < iVar16) {
      lVar18 = 0;
      do {
        iVar17 = this->MaxDelay + uVar15;
        uVar11 = 0;
        if ((int)uVar15 < *piVar2) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            pFVar12 = (FAllPassFractionalDelay *)(*pcVar9)();
            return pFVar12;
          }
        }
        uVar15 = uVar15 + 1;
        *(int *)((this->IntegerDelayOffsets).AllocatorInstance.Data + lVar18 * 4) = iVar17;
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar16);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
}

// ~FAllPassFractionalDelay @ 1444a5e40

void __thiscall
Audio::FAllPassFractionalDelay::~FAllPassFractionalDelay(FAllPassFractionalDelay *this)

{
  FScriptContainerElement *pFVar1;
  FAlignedBlockBuffer *pFVar2;
  
  pFVar1 = (this->IntegerDelayOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntegerDelays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FractionalDelays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Coefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->DelayLine).Ptr;
  if (pFVar2 != (FAlignedBlockBuffer *)0x0) {
    FMemory::Free(pFVar2->InternalBuffer);
    pFVar2->InternalBuffer = (float *)0x0;
    FMemory::Free(pFVar2->RolloverBuffer);
    pFVar2->RolloverBuffer = (float *)0x0;
    ::operator_delete(pFVar2,0x48);
    return;
  }
  return;
}

// ProcessAudio @ 1444d5750

void __thiscall
Audio::FAllPassFractionalDelay::ProcessAudio
          (FAllPassFractionalDelay *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = param_1->ArrayNum;
  uVar11 = (ulonglong)uVar10;
  if ((uVar10 != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum == InDelays.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                         ,0x42,L"Input buffers must be equal length."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (-1 < (int)uVar10) {
    iVar8 = 0;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar10,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar10,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    pFVar1 = (param_3->AllocatorInstance).Data;
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar3 = (param_2->AllocatorInstance).Data;
    while (0 < (int)uVar10) {
      iVar9 = (int)uVar11;
      lVar6 = (longlong)iVar8;
      iVar7 = this->NumInternalBufferSamples;
      if (iVar9 < this->NumInternalBufferSamples) {
        iVar7 = iVar9;
      }
      ProcessAudioBlock(this,(float *)(pFVar2 + lVar6 * 4),(float *)(pFVar3 + lVar6 * 4),iVar7,
                        (float *)(pFVar1 + lVar6 * 4));
      iVar8 = iVar8 + iVar7;
      uVar10 = iVar9 - iVar7;
      uVar11 = (ulonglong)uVar10;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// ProcessAudioBlock @ 1444dbfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FAllPassFractionalDelay::ProcessAudioBlock
          (FAllPassFractionalDelay *this,float *param_1,float *param_2,int param_3,float *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *_Dst;
  FAlignedBlockBuffer *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 unaff_XMM7 [16];
  float fVar31;
  
  uVar12 = param_3 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar12 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 == (InNum % 4)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                          ,0x5a,L"Array length must be multiple of 4"), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar15 = (this->IntegerDelayOffsets).AllocatorInstance.Data;
  pFVar3 = (this->Coefficients).AllocatorInstance.Data;
  pFVar4 = (this->IntegerDelays).AllocatorInstance.Data;
  _Dst = (this->FractionalDelays).AllocatorInstance.Data;
  memcpy(_Dst,param_2,(longlong)param_3 << 2);
  fVar10 = _UNK_150d5663c;
  fVar9 = _UNK_150d56638;
  fVar8 = _UNK_150d56634;
  fVar23 = ___xmm_40200000402000004020000040200000;
  uVar12 = 0;
  fVar31 = (float)this->MaxDelay;
  if (0 < param_3) {
    pFVar16 = _Dst + 8;
    do {
      if (((float)this->MaxDelay < *(float *)(pFVar16 + -8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FractionalDelayData[i] <= MaxDelay",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                              ,0x69,L"Delay exceeds maximum"), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((float)this->MaxDelay < *(float *)(pFVar16 + -4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FractionalDelayData[i + 1] <= MaxDelay",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                              ,0x6a,L"Delay exceeds maximum"), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((float)this->MaxDelay < *(float *)pFVar16) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FractionalDelayData[i + 2] <= MaxDelay",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                              ,0x6b,L"Delay exceeds maximum"), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((float)this->MaxDelay < *(float *)(pFVar16 + 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FractionalDelayData[i + 3] <= MaxDelay",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AllPassFractionalDelay.cpp"
                              ,0x6c,L"Delay exceeds maximum"), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auVar25 = maxps(*(undefined1 (*) [16])(pFVar16 + -8),
                      (undefined1  [16])GlobalVectorConstants::FloatOneHalf);
      uVar13 = 0;
      if ((int)uVar12 < (this->Coefficients).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      auVar7._4_4_ = fVar31;
      auVar7._0_4_ = fVar31;
      auVar7._8_4_ = fVar31;
      auVar7._12_4_ = fVar31;
      auVar25 = minps(auVar25,auVar7);
      auVar26._0_4_ = auVar25._0_4_ + GlobalVectorConstants::FloatOneHalf.m128_f32[0];
      auVar26._4_4_ = auVar25._4_4_ + GlobalVectorConstants::FloatOneHalf.m128_f32[1];
      auVar26._8_4_ = auVar25._8_4_ + GlobalVectorConstants::FloatOneHalf.m128_f32[2];
      auVar26._12_4_ = auVar25._12_4_ + GlobalVectorConstants::FloatOneHalf.m128_f32[3];
      unaff_XMM7 = roundps(unaff_XMM7,auVar26,1);
      fVar24 = auVar26._0_4_ - unaff_XMM7._0_4_;
      fVar28 = auVar26._4_4_ - unaff_XMM7._4_4_;
      fVar29 = auVar26._8_4_ - unaff_XMM7._8_4_;
      fVar30 = auVar26._12_4_ - unaff_XMM7._12_4_;
      auVar25._0_4_ = fVar23 - fVar24;
      auVar25._4_4_ = fVar8 - fVar28;
      auVar25._8_4_ = fVar9 - fVar29;
      auVar25._12_4_ = fVar10 - fVar30;
      auVar27._0_4_ = fVar24 - GlobalVectorConstants::FloatOneHalf.m128_f32[0];
      auVar27._4_4_ = fVar28 - GlobalVectorConstants::FloatOneHalf.m128_f32[1];
      auVar27._8_4_ = fVar29 - GlobalVectorConstants::FloatOneHalf.m128_f32[2];
      auVar27._12_4_ = fVar30 - GlobalVectorConstants::FloatOneHalf.m128_f32[3];
      auVar25 = divps(auVar27,auVar25);
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = uVar12 + 4;
      *(undefined1 (*) [16])
       (pFVar16 + (longlong)((this->Coefficients).AllocatorInstance.Data + (-8 - (longlong)_Dst))) =
           auVar25;
      pFVar1 = pFVar16 + (longlong)(pFVar15 + (-8 - (longlong)_Dst));
      iVar21 = *(int *)(pFVar1 + 4);
      iVar17 = *(int *)(pFVar1 + 8);
      iVar22 = *(int *)(pFVar1 + 0xc);
      pFVar2 = pFVar4 + (-8 - (longlong)_Dst) + (longlong)pFVar16;
      *(int *)pFVar2 = *(int *)pFVar1 - (int)unaff_XMM7._0_4_;
      *(int *)(pFVar2 + 4) = iVar21 - (int)unaff_XMM7._4_4_;
      *(int *)(pFVar2 + 8) = iVar17 - (int)unaff_XMM7._8_4_;
      *(int *)(pFVar2 + 0xc) = iVar22 - (int)unaff_XMM7._12_4_;
      pFVar16 = pFVar16 + 0x10;
    } while ((int)uVar12 < param_3);
  }
  pFVar5 = (this->DelayLine).Ptr;
  if (param_1 == (float *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("nullptr != InSamples",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                        ,0x8a,L"Null pointer");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((pFVar5->SampleCapacity < param_3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNum <= SampleCapacity",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                            ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = pFVar5->SampleCapacity;
    iVar17 = param_3;
    if (iVar21 <= param_3) {
      iVar17 = iVar21;
    }
    pFVar5->WriteCount = pFVar5->WriteCount + iVar17;
    if ((iVar21 < pFVar5->WriteCount) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("WriteCount <= SampleCapacity",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                            ,0x5e,L"Buffer overflow"), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = pFVar5->SampleCapacity;
    iVar22 = pFVar5->WriteCount;
    if (iVar21 < iVar22) {
      pFVar5->WriteCount = iVar21;
      iVar17 = iVar17 + (iVar21 - iVar22);
    }
    iVar21 = iVar21 - pFVar5->WritePos;
    iVar22 = iVar21 - iVar17;
    if (iVar22 < 1) {
      if (0 < iVar21) {
        memcpy(pFVar5->WritePointer,param_1,(longlong)(iVar21 * 4));
      }
      pFVar5->WritePointer = pFVar5->InternalBuffer;
      pFVar5->WritePos = -iVar22;
      if (0 < -iVar22) {
        memcpy(pFVar5->InternalBuffer,param_1 + iVar21,(longlong)(iVar22 * -4));
      }
      lVar18 = -(longlong)iVar22;
    }
    else {
      if (0 < iVar17) {
        memcpy(pFVar5->WritePointer,param_1,(longlong)(iVar17 * 4));
      }
      pFVar5->WritePos = pFVar5->WritePos + iVar17;
      lVar18 = (longlong)iVar17;
    }
    pFVar5->WritePointer = pFVar5->WritePointer + lVar18;
  }
  pfVar14 = FAlignedBlockBuffer::InspectSamples((this->DelayLine).Ptr,this->MaxDelay + param_3,0);
  if (param_3 < 1) goto LAB_1444dc54e;
  iVar21 = 1;
  *param_4 = (*(float *)pFVar3 * pfVar14[*(int *)pFVar4] + pfVar14[(longlong)*(int *)pFVar4 + -1]) -
             *(float *)pFVar3 * this->Z1;
  if (1 < param_3) {
    if (param_3 + -1 < 4) {
      lVar18 = 4;
    }
    else {
      lVar18 = (longlong)param_4 - (longlong)pFVar4;
      pFVar15 = pFVar4 + 8;
      lVar19 = (longlong)pFVar3 - (longlong)pFVar4;
      uVar12 = (param_3 - 5U >> 2) + 1;
      uVar20 = (ulonglong)uVar12;
      iVar21 = uVar12 * 4 + 1;
      do {
        fVar23 = (*(float *)(pFVar15 + lVar19 + -4) * pfVar14[*(int *)(pFVar15 + -4)] +
                 pfVar14[(longlong)*(int *)(pFVar15 + -4) + -1]) -
                 *(float *)(pFVar15 + lVar19 + -4) * *(float *)(pFVar15 + lVar18 + -8);
        *(float *)(pFVar15 + lVar18 + -4) = fVar23;
        fVar23 = (*(float *)(pFVar15 + lVar19) * pfVar14[*(int *)pFVar15] +
                 pfVar14[(longlong)*(int *)pFVar15 + -1]) - fVar23 * *(float *)(pFVar15 + lVar19);
        *(float *)(pFVar15 + lVar18) = fVar23;
        fVar23 = (*(float *)(pFVar15 + lVar19 + 4) * pfVar14[*(int *)(pFVar15 + 4)] +
                 pfVar14[(longlong)*(int *)(pFVar15 + 4) + -1]) -
                 fVar23 * *(float *)(pFVar15 + lVar19 + 4);
        *(float *)(pFVar15 + lVar18 + 4) = fVar23;
        *(float *)(pFVar15 + lVar18 + 8) =
             (*(float *)(pFVar15 + lVar19 + 8) * pfVar14[*(int *)(pFVar15 + 8)] +
             pfVar14[(longlong)*(int *)(pFVar15 + 8) + -1]) -
             *(float *)(pFVar15 + lVar19 + 8) * fVar23;
        pFVar15 = pFVar15 + 0x10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      if (param_3 <= iVar21) goto LAB_1444dc547;
      lVar18 = (ulonglong)uVar12 * 0x10 + 4;
    }
    pFVar15 = pFVar4 + lVar18;
    uVar20 = (ulonglong)(uint)(param_3 - iVar21);
    do {
      *(float *)(pFVar15 + ((longlong)param_4 - (longlong)pFVar4)) =
           (*(float *)(pFVar15 + ((longlong)pFVar3 - (longlong)pFVar4)) * pfVar14[*(int *)pFVar15] +
           pfVar14[(longlong)*(int *)pFVar15 + -1]) -
           *(float *)(pFVar15 + ((longlong)pFVar3 - (longlong)pFVar4)) *
           *(float *)(pFVar15 + ((longlong)param_4 - (longlong)pFVar4) + -4);
      pFVar15 = pFVar15 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_1444dc547:
  this->Z1 = param_4[(longlong)param_3 + -1];
LAB_1444dc54e:
  FAlignedBlockBuffer::RemoveSamples((this->DelayLine).Ptr,param_3);
  return;
}

// Reset @ 1444e1540

void __thiscall Audio::FAllPassFractionalDelay::Reset(FAllPassFractionalDelay *this)

{
  FAlignedBlockBuffer::ClearSamples((this->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((this->DelayLine).Ptr,this->MaxDelay);
  this->Z1 = 0.0;
  return;
}

