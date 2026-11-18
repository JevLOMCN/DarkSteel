// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FMeanSquaredFIR @ 1444a4da0

FMeanSquaredFIR * __thiscall
Audio::FMeanSquaredFIR::FMeanSquaredFIR
          (FMeanSquaredFIR *this,float param_1,int param_2,float param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  FMeanSquaredFIR *pFVar8;
  
  this->SampleRate = param_1;
  piVar1 = &(this->HistorySquared).InternalBuffer.ArrayNum;
  this->NumChannels = param_2;
  piVar2 = &(this->HistorySquared).InternalBuffer.ArrayMax;
  this->WindowTimeSamples = 0x100;
  this->NormFactor = 1.0;
  (this->ChannelValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelValues).ArrayNum = 0;
  (this->ChannelValues).ArrayMax = 0;
  (this->HistorySquared).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->HistorySquared).ReadCounter.Counter = 0;
  (this->HistorySquared).WriteCounter.Counter = 0;
  (this->HistorySquared).Capacity = 1;
  LOCK();
  (this->HistorySquared).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->HistorySquared).WriteCounter.Counter = 0;
  UNLOCK();
  iVar7 = *piVar2;
  *piVar1 = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->HistorySquared,0,piVar2);
  }
  uVar3 = (this->HistorySquared).Capacity;
  iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)&this->HistorySquared,piVar1,piVar2);
  memset((this->HistorySquared).InternalBuffer.AllocatorInstance.Data + (longlong)iVar7 * 4,0,
         (longlong)(int)uVar3 << 2);
  (this->SquaredHistoryBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SquaredHistoryBuffer).ArrayNum = 0;
  (this->SquaredHistoryBuffer).ArrayMax = 0;
  (this->SquaredInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SquaredInputBuffer).ArrayNum = 0;
  (this->SquaredInputBuffer).ArrayMax = 0;
  if (this->SampleRate <= 0.0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901228>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0xac,"SampleRate > 0.f");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMeanSquaredFIR *)(*pcVar4)();
      return pFVar8;
    }
    this->SampleRate = 48000.0;
  }
  if (this->NumChannels < 1) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901233>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0xb1,"NumChannels > 0");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMeanSquaredFIR *)(*pcVar4)();
      return pFVar8;
    }
  }
  else {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ChannelValues,this->NumChannels);
  }
  fVar5 = __real_3f800000;
  if (0.0 < param_3) {
    iVar7 = (int)ROUND((param_3 * __real_447a0000 + param_3 * __real_447a0000) / this->SampleRate +
                       __real_3f000000) >> 1;
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    this->WindowTimeFrames = iVar7;
    this->WindowTimeSamples = iVar7 * this->NumChannels;
    this->NormFactor = fVar5 / (float)iVar7;
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901243>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0xbb,"InWindowTimeMsec > 0.f");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMeanSquaredFIR *)(*pcVar4)();
      return pFVar8;
    }
  }
  Reset(this);
  return this;
}

// ProcessAudio @ 1444d9ec0

void __thiscall
Audio::FMeanSquaredFIR::ProcessAudio
          (FMeanSquaredFIR *this,float *param_1,int param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined4 uStack_7c;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  
  uVar17 = param_2 * this->NumChannels;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &(this->SquaredHistoryBuffer).ArrayMax;
  piVar2 = &(this->SquaredHistoryBuffer).ArrayNum;
  iVar18 = 0;
  *piVar2 = 0;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar17,&(this->SquaredHistoryBuffer).AllocatorInstance,0,piVar1);
  }
  piVar3 = &(this->SquaredInputBuffer).ArrayMax;
  (this->SquaredInputBuffer).ArrayNum = 0;
  piVar4 = &(this->SquaredInputBuffer).ArrayNum;
  if ((this->SquaredInputBuffer).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar17,&(this->SquaredInputBuffer).AllocatorInstance,0,piVar3);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar17,&(this->SquaredInputBuffer).AllocatorInstance,piVar4,piVar3);
    local_58.DataPtr = (float *)(this->SquaredInputBuffer).AllocatorInstance.Data;
    iVar15 = *piVar4;
    if ((iVar15 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iVar15;
    local_48._12_4_ = uStack_7c;
    local_48.ArrayNum = uVar17;
    local_48.DataPtr = param_1;
    ArraySquare(&local_48,&local_58);
    pFVar8 = (this->SquaredInputBuffer).AllocatorInstance.Data;
    iVar15 = *piVar4;
    if ((iVar15 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = (this->HistorySquared).InternalBuffer.AllocatorInstance.Data;
    uVar5 = (this->HistorySquared).WriteCounter.Counter;
    iVar6 = (this->HistorySquared).ReadCounter.Counter;
    iVar7 = (this->HistorySquared).WriteCounter.Counter;
    uVar13 = iVar7 - iVar6;
    if (iVar7 < iVar6) {
      uVar13 = uVar13 + (this->HistorySquared).Capacity;
    }
    uVar16 = (this->HistorySquared).Capacity;
    iVar6 = ~uVar13 + uVar16;
    if (iVar15 < iVar6) {
      iVar6 = iVar15;
    }
    iVar15 = uVar16 - uVar5;
    if (iVar6 < iVar15) {
      iVar15 = iVar6;
    }
    memcpy(pFVar9 + (ulonglong)uVar5 * 4,pFVar8,(longlong)iVar15 * 4);
    memcpy(pFVar9,pFVar8 + (longlong)iVar15 * 4,(longlong)(iVar6 - iVar15) << 2);
    LOCK();
    (this->HistorySquared).WriteCounter.Counter = (uVar5 + iVar6) % (this->HistorySquared).Capacity;
    UNLOCK();
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar17,&(this->SquaredHistoryBuffer).AllocatorInstance,piVar2,piVar1);
    uVar5 = (this->HistorySquared).ReadCounter.Counter;
    pFVar8 = (this->SquaredHistoryBuffer).AllocatorInstance.Data;
    pFVar9 = (this->HistorySquared).InternalBuffer.AllocatorInstance.Data;
    iVar15 = (this->HistorySquared).ReadCounter.Counter;
    iVar6 = (this->HistorySquared).WriteCounter.Counter;
    uVar13 = iVar6 - iVar15;
    if (iVar6 < iVar15) {
      uVar13 = uVar13 + (this->HistorySquared).Capacity;
    }
    if ((int)uVar17 < (int)uVar13) {
      uVar13 = uVar17;
    }
    uVar16 = (this->HistorySquared).Capacity - uVar5;
    if ((int)uVar13 < (int)uVar16) {
      uVar16 = uVar13;
    }
    memcpy(pFVar8,pFVar9 + (ulonglong)uVar5 * 4,(longlong)(int)uVar16 * 4);
    memcpy(pFVar8 + (longlong)(int)uVar16 * 4,pFVar9,(longlong)(int)(uVar13 - uVar16) << 2);
    if (0x7ffffffe < uVar17) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                          ,0x3f7,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                          ,0x426,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    LOCK();
    (this->HistorySquared).ReadCounter.Counter =
         ((this->HistorySquared).ReadCounter.Counter + uVar13) % (this->HistorySquared).Capacity;
    UNLOCK();
  }
  pFVar8 = (this->SquaredHistoryBuffer).AllocatorInstance.Data;
  pFVar9 = (this->SquaredInputBuffer).AllocatorInstance.Data;
  pFVar14 = (this->ChannelValues).AllocatorInstance.Data;
  if (0 < this->NumChannels) {
    do {
      fVar19 = *(float *)pFVar14;
      for (iVar15 = iVar18; iVar15 < (int)uVar17; iVar15 = iVar15 + this->NumChannels) {
        lVar12 = (longlong)iVar15;
        fVar19 = (fVar19 - *(float *)(pFVar8 + lVar12 * 4)) + *(float *)(pFVar9 + lVar12 * 4);
        param_3[lVar12] = fVar19 * this->NormFactor;
      }
      *(float *)pFVar14 = fVar19;
      iVar18 = iVar18 + 1;
      pFVar14 = pFVar14 + 4;
    } while (iVar18 < this->NumChannels);
  }
  return;
}

// Reset @ 1444e19a0

void __thiscall Audio::FMeanSquaredFIR::Reset(FMeanSquaredFIR *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  uint uVar6;
  
  if (0 < this->NumChannels) {
    (this->ChannelValues).ArrayNum = 0;
    if ((this->ChannelValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ChannelValues).AllocatorInstance,0,&(this->ChannelValues).ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ChannelValues,this->NumChannels);
    iVar5 = this->WindowTimeFrames * this->NumChannels;
    this->WindowTimeSamples = iVar5;
    uVar1 = iVar5 * 2;
    uVar6 = 0x4000;
    if (0x4000 < (int)uVar1) {
      uVar6 = uVar1;
    }
    TCircularAudioBuffer<float,16>::SetCapacity(&this->HistorySquared,uVar6);
    iVar5 = this->WindowTimeSamples;
    if (0 < iVar5) {
      _Dst = (this->HistorySquared).InternalBuffer.AllocatorInstance.Data;
      uVar1 = (this->HistorySquared).WriteCounter.Counter;
      iVar2 = (this->HistorySquared).ReadCounter.Counter;
      iVar3 = (this->HistorySquared).WriteCounter.Counter;
      uVar6 = iVar3 - iVar2;
      if (iVar3 < iVar2) {
        uVar6 = uVar6 + (this->HistorySquared).Capacity;
      }
      uVar4 = (this->HistorySquared).Capacity;
      iVar2 = ~uVar6 + uVar4;
      if (iVar5 < iVar2) {
        iVar2 = iVar5;
      }
      iVar5 = uVar4 - uVar1;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      memset(_Dst + (ulonglong)uVar1 * 4,0,(longlong)iVar5 << 2);
      memset(_Dst,0,(longlong)(iVar2 - iVar5) << 2);
      LOCK();
      (this->HistorySquared).WriteCounter.Counter =
           (iVar2 + uVar1) % (this->HistorySquared).Capacity;
      UNLOCK();
    }
  }
  return;
}

// SetNumChannels @ 1444e49e0

void __thiscall Audio::FMeanSquaredFIR::SetNumChannels(FMeanSquaredFIR *this,int param_1)

{
  if (this->NumChannels != param_1) {
    this->NumChannels = param_1;
    Reset(this);
    return;
  }
  return;
}

// SetWindowSize @ 1444e5c30

void __thiscall Audio::FMeanSquaredFIR::SetWindowSize(FMeanSquaredFIR *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  
  fVar2 = __real_3f800000;
  if (0.0 < param_1) {
    iVar4 = (int)ROUND((param_1 * __real_447a0000 + param_1 * __real_447a0000) / this->SampleRate +
                       __real_3f000000) >> 1;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    this->WindowTimeFrames = iVar4;
    this->WindowTimeSamples = iVar4 * this->NumChannels;
    this->NormFactor = fVar2 / (float)iVar4;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901243>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0xbb,"InWindowTimeMsec > 0.f");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Reset(this);
  return;
}

