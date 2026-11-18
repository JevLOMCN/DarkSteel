// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// FLoudnessNRTWorker @ 14d7f7470

FLoudnessNRTWorker * __thiscall
Audio::FLoudnessNRTWorker::FLoudnessNRTWorker
          (FLoudnessNRTWorker *this,FAnalyzerNRTParameters *param_1,FLoudnessNRTSettings *param_2)

{
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar1;
  TUniquePtr<Audio::FMultichannelLoudnessAnalyzer,TDefaultDelete<Audio::FMultichannelLoudnessAnalyzer>_>
  *pTVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  FLoudnessNRTWorker *pFVar11;
  TSlidingBuffer<float> *pTVar12;
  FMultichannelLoudnessAnalyzer *pFVar13;
  TSlidingBuffer<float> *pTVar14;
  FMultichannelLoudnessAnalyzer *pFVar15;
  int iVar16;
  longlong local_38;
  longlong local_30;
  
  this->_padding_ = (longlong)&___7FLoudnessNRTWorker_Audio__6B_;
  pTVar1 = &this->InternalBuffer;
  pTVar2 = &this->Analyzer;
  this->NumChannels = param_1->NumChannels;
  this->NumAnalyzedBuffers = 0;
  this->NumHopFrames = 0;
  this->NumFrames = 0;
  this->SampleRate = param_1->SampleRate;
  (this->InternalWindow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalWindow).ArrayNum = 0;
  (this->InternalWindow).ArrayMax = 0;
  pTVar1->Ptr = (TSlidingBuffer<float> *)0x0;
  pTVar2->Ptr = (FMultichannelLoudnessAnalyzer *)0x0;
  if ((this->NumChannels < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessNRTFactory.cpp"
                          ,0x8c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar11 = (FLoudnessNRTWorker *)(*pcVar8)();
    return pFVar11;
  }
  if ((this->SampleRate <= 0.0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SampleRate > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessNRTFactory.cpp"
                          ,0x8d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar11 = (FLoudnessNRTWorker *)(*pcVar8)();
    return pFVar11;
  }
  iVar6 = this->NumChannels;
  lVar9 = param_2->_padding_;
  iVar16 = -((int)ROUND(__real_bf000000 -
                        (param_1->SampleRate + param_1->SampleRate) * param_2->AnalysisPeriod) >> 1)
  ;
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  this->NumHopFrames = iVar16;
  pTVar12 = ::operator_new(0x20);
  if (pTVar12 == (TSlidingBuffer<float> *)0x0) {
    pTVar12 = (TSlidingBuffer<float> *)0x0;
  }
  else {
    pTVar12 = TSlidingBuffer<float>::TSlidingBuffer<float>
                        (pTVar12,iVar6 * (int)lVar9,iVar6 * iVar16);
  }
  pFVar15 = (FMultichannelLoudnessAnalyzer *)0x0;
  if (pTVar1 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)&local_38) {
    if (pTVar12 == (TSlidingBuffer<float> *)0x0) goto LAB_14d7f75dd;
    pFVar7 = (pTVar12->StorageBuffer).AllocatorInstance.Data;
    pTVar14 = pTVar12;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  else {
    pTVar14 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar12;
    if (pTVar14 == (TSlidingBuffer<float> *)0x0) goto LAB_14d7f75dd;
    pFVar7 = (pTVar14->StorageBuffer).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  ::operator_delete(pTVar14,0x20);
LAB_14d7f75dd:
  pFVar13 = ::operator_new(0xa8);
  if (pFVar13 != (FMultichannelLoudnessAnalyzer *)0x0) {
    fVar5 = param_1->SampleRate;
    piVar3 = &(pFVar13->MonoBuffer).ArrayNum;
    piVar4 = &(pFVar13->MonoBuffer).ArrayMax;
    *piVar3 = 0;
    *piVar4 = 0;
    (pFVar13->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->ChannelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->ChannelWeights).ArrayNum = 0;
    (pFVar13->ChannelWeights).ArrayMax = 0;
    FLoudnessAnalyzer::FLoudnessAnalyzer
              (&pFVar13->Analyzer,fVar5,(FLoudnessAnalyzerSettings *)&param_2->_padding_);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(pFVar13->Analyzer).Settings.WindowSize,(ForAnyElementType *)pFVar13,piVar3,
               piVar4);
    pFVar15 = pFVar13;
  }
  if (pTVar2 == (TUniquePtr<Audio::FMultichannelLoudnessAnalyzer,TDefaultDelete<Audio::FMultichannelLoudnessAnalyzer>_>
                 *)&local_30) {
    if (pFVar15 == (FMultichannelLoudnessAnalyzer *)0x0) {
      return this;
    }
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar15->Analyzer);
    pFVar7 = (pFVar15->ChannelWeights).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar15->MonoBuffer).AllocatorInstance.Data;
    pFVar13 = pFVar15;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  else {
    pFVar13 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar15;
    if (pFVar13 == (FMultichannelLoudnessAnalyzer *)0x0) {
      return this;
    }
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar13->Analyzer);
    pFVar7 = (pFVar13->ChannelWeights).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar13->MonoBuffer).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  ::operator_delete(pFVar13,0xa8);
  return this;
}

// Analyze @ 14d7fc3b0

void __thiscall
Audio::FLoudnessNRTWorker::Analyze
          (FLoudnessNRTWorker *this,TArrayView<float_const_,int> *param_1,
          IAnalyzerNRTResult *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  TSlidingBuffer<float> *this_00;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_res8;
  undefined4 uStack_7c;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68 [2];
  
  this->NumFrames = this->NumFrames + param_1->ArrayNum / this->NumChannels;
  if ((param_2 == (IAnalyzerNRTResult *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("nullptr != LoudnessResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessNRTFactory.cpp"
                          ,0xa5,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = (this->InternalBuffer).Ptr;
  uVar9 = *(undefined4 *)&param_1->DataPtr;
  uVar10 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  pfVar13 = param_1->DataPtr;
  iVar11 = param_1->ArrayNum;
  uVar12 = *(undefined4 *)&param_1->field_0xc;
  pFVar6 = (this_00->StorageBuffer).AllocatorInstance.Data;
  iVar3 = (this_00->StorageBuffer).ArrayNum;
  if ((iVar3 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar4 = this_00->NumHopSamples;
  uVar5 = this_00->NumWindowSamples;
  pTVar1 = &this->InternalWindow;
  local_res8 = (iVar11 - uVar5) + iVar3;
  if (local_res8 < 0) {
    local_res8 = -1;
    iVar17 = -1;
  }
  else {
    iVar17 = this_00->NumUnderflowSamples;
    if (local_res8 < this_00->NumUnderflowSamples) {
      iVar17 = -1;
    }
  }
  while( true ) {
    if (iVar17 == -1) {
      local_68[0].DataPtr._0_4_ = uVar9;
      local_68[0].DataPtr._4_4_ = uVar10;
      local_68[0].ArrayNum = iVar11;
      local_68[0]._12_4_ = uVar12;
      TSlidingBuffer<float>::StoreForFutureWindows(this_00,local_68);
      return;
    }
    if ((int)uVar5 < 0) break;
    piVar2 = &(this->InternalWindow).ArrayMax;
    (this->InternalWindow).ArrayNum = 0;
    if (*piVar2 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&pTVar1->AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&pTVar1->AllocatorInstance,&(this->InternalWindow).ArrayNum,piVar2);
    iVar16 = 0;
    if (iVar17 < iVar3) {
      iVar16 = iVar3 - iVar17;
      memcpy((pTVar1->AllocatorInstance).Data,pFVar6 + (longlong)iVar17 * 4,(longlong)iVar16 << 2);
    }
    if (iVar16 < (int)uVar5) {
      iVar15 = (iVar17 - iVar3) + iVar16;
      iVar18 = iVar11 - iVar15;
      if ((int)(uVar5 - iVar16) < iVar18) {
        iVar18 = uVar5 - iVar16;
      }
      if (0 < iVar18) {
        memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 4,pfVar13 + iVar15,
               (longlong)iVar18 << 2);
        iVar16 = iVar16 + iVar18;
      }
      if (iVar16 < (int)uVar5) {
        memset((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 4,0,
               (longlong)(int)(uVar5 - iVar16) << 2);
      }
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    iVar16 = (this->InternalWindow).ArrayNum;
    if ((iVar16 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar16;
    local_78.DataPtr = (float *)pFVar7;
    AnalyzeWindow(this,&local_78,(FLoudnessNRTResult *)param_2);
    iVar17 = iVar17 + iVar4;
    if (local_res8 < iVar17) {
      iVar17 = -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// AnalyzeWindow @ 14d8009e0

void __thiscall
Audio::FLoudnessNRTWorker::AnalyzeWindow
          (FLoudnessNRTWorker *this,TArrayView<float_const_,int> *param_1,
          FLoudnessNRTResult *param_2)

{
  FScriptContainerElement *pFVar1;
  FMultichannelLoudnessAnalyzer *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  float _X;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  float local_d8 [2];
  ForAnyElementType local_d0;
  uint local_c8;
  uint local_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FLoudnessDatum local_b0;
  FLoudnessDatum local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  uVar9 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,this->NumChannels,&local_c0,(int *)&local_b8,(int *)((longlong)&local_b8 + 4));
  iStack_80 = (int)local_b8;
  this_00 = (this->Analyzer).Ptr;
  local_88 = local_c0.Data;
  if (((int)local_b8 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68[0].DataPtr = param_1->DataPtr;
  local_68[0].ArrayNum = param_1->ArrayNum;
  local_68[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iStack_80;
  local_78.DataPtr = (float *)local_88;
  _X = FMultichannelLoudnessAnalyzer::CalculatePerceptualEnergy
                 (this_00,local_68,this->NumChannels,&local_78);
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c4 = 0;
  fVar11 = logf(_X);
  fVar13 = __real_41200000;
  iVar3 = (int)local_b8;
  uVar6 = (ulonglong)(int)local_b8;
  pFVar1 = local_c0.Data + uVar6 * 4;
  fVar11 = fVar11 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale;
  uVar8 = uVar9;
  FVar10.Data = local_c0.Data;
  while( true ) {
    uVar5 = (uint)uVar8;
    if ((int)uVar6 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      uVar5 = local_c8;
    }
    if (FVar10.Data == pFVar1) break;
    fVar12 = logf(*(float *)FVar10.Data);
    local_d8[0] = fVar12 * fVar13 * LoudnessAnalyzerPrivate::Log10Scale;
    if (((local_d0.Data <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 < local_d0.Data + (longlong)(int)local_c4 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar5 = local_c8, bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 == local_c4) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_d0,(int *)&local_c4);
    }
    local_c8 = uVar5 + 1;
    FVar10.Data = FVar10.Data + 4;
    *(float *)(local_d0.Data + (longlong)(int)uVar5 * 4) = local_d8[0];
    uVar6 = local_b8 & 0xffffffff;
    uVar8 = (ulonglong)local_c8;
  }
  local_b0.Channel = -1;
  fVar13 = ((float)(this->NumHopFrames * this->NumAnalyzedBuffers) +
           (float)(((this->Analyzer).Ptr)->Analyzer).Settings.FFTSize * __real_3f000000) /
           this->SampleRate;
  local_b0.Timestamp = fVar13;
  local_b0.Energy = _X;
  local_b0.Loudness = fVar11;
  FLoudnessNRTResult::Add(param_2,&local_b0);
  uVar8 = uVar9;
  if (0 < this->NumChannels) {
    do {
      uVar7 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar7 < (int)local_b8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      local_a0.Channel = uVar7;
      local_a0.Timestamp = fVar13;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a0.Energy = *(float *)(local_c0.Data + uVar8);
      uVar5 = 0;
      if ((int)uVar7 < (int)local_c8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a0.Loudness = *(float *)(local_d0.Data + uVar8);
      FLoudnessNRTResult::Add(param_2,&local_a0);
      uVar9 = (ulonglong)(uVar7 + 1);
      uVar8 = uVar8 + 4;
    } while ((int)(uVar7 + 1) < this->NumChannels);
  }
  this->NumAnalyzedBuffers = this->NumAnalyzedBuffers + 1;
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

// Finalize @ 14d8055b0

void __thiscall
Audio::FLoudnessNRTWorker::Finalize(FLoudnessNRTWorker *this,IAnalyzerNRTResult *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TSlidingBuffer<float> *this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TSlidingBuffer<float> *pTVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_7c;
  uint uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  
  if ((param_1 == (IAnalyzerNRTResult *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("nullptr != LoudnessResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessNRTFactory.cpp"
                          ,0xb5,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = (this->InternalBuffer).Ptr;
  pFVar8 = (this_00->StorageBuffer).AllocatorInstance.Data;
  iVar4 = (this_00->StorageBuffer).ArrayNum;
  if ((iVar4 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar5 = this_00->NumWindowSamples;
  iVar6 = this_00->NumHopSamples;
  iVar15 = this_00->NumUnderflowSamples;
  iVar16 = iVar4;
  if (0 < iVar4) {
    iVar16 = 0;
    if (iVar4 < (int)uVar5) {
      iVar16 = uVar5 - iVar4;
    }
    else {
      iVar14 = (iVar4 - uVar5) - iVar15;
      iVar14 = ((iVar14 % iVar6 - iVar14) - iVar6) + iVar4;
      if (0 < iVar14) {
        iVar16 = uVar5 - iVar14;
      }
    }
    iVar16 = iVar4 + iVar16;
  }
  iVar16 = iVar16 - uVar5;
  pTVar1 = &this->InternalWindow;
  if (iVar16 < 0) {
    iVar15 = -1;
    iVar16 = -1;
  }
  else if (iVar16 < iVar15) {
    iVar15 = -1;
  }
  while( true ) {
    if (iVar15 == -1) {
      FLoudnessNRTResult::SortChronologically((FLoudnessNRTResult *)param_1);
      *(float *)(param_1 + 1) = (float)this->NumFrames / this->SampleRate;
      pTVar10 = (this->InternalBuffer).Ptr;
      this->NumAnalyzedBuffers = 0;
      this->NumFrames = 0;
      (pTVar10->StorageBuffer).ArrayNum = 0;
      if ((pTVar10->StorageBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(pTVar10->StorageBuffer).AllocatorInstance,0,
                   &(pTVar10->StorageBuffer).ArrayMax);
      }
      local_58._8_8_ = (ulonglong)uStack_6c << 0x20;
      local_58.DataPtr = (float *)0x0;
      pTVar10->NumUnderflowSamples = 0;
      TSlidingBuffer<float>::StoreForFutureWindows(this_00,&local_58);
      return;
    }
    if ((int)uVar5 < 0) break;
    uVar7 = (this->InternalWindow).ArrayMax;
    piVar2 = &(this->InternalWindow).ArrayMax;
    piVar3 = &(this->InternalWindow).ArrayNum;
    if ((int)uVar7 < (int)uVar5) {
      *piVar3 = 0;
      if (uVar7 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      *piVar3 = 0;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&pTVar1->AllocatorInstance,piVar3,piVar2);
    iVar14 = 0;
    if (iVar15 < iVar4) {
      iVar14 = iVar4 - iVar15;
      memcpy((pTVar1->AllocatorInstance).Data,pFVar8 + (longlong)iVar15 * 4,(longlong)iVar14 << 2);
    }
    if (iVar14 < (int)uVar5) {
      iVar13 = (iVar15 - iVar4) + iVar14;
      iVar17 = -iVar13;
      if ((int)(uVar5 - iVar14) < iVar17) {
        iVar17 = uVar5 - iVar14;
      }
      if (0 < iVar17) {
        memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 4,
               (void *)((longlong)iVar13 << 2),(longlong)iVar17 << 2);
        iVar14 = iVar14 + iVar17;
      }
      if (iVar14 < (int)uVar5) {
        memset((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 4,0,
               (longlong)(int)(uVar5 - iVar14) << 2);
      }
    }
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    iVar14 = (this->InternalWindow).ArrayNum;
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = iVar14;
    local_68.DataPtr = (float *)pFVar9;
    AnalyzeWindow(this,&local_68,(FLoudnessNRTResult *)param_1);
    iVar15 = iVar15 + iVar6;
    if (iVar16 < iVar15) {
      iVar15 = -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

