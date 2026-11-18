// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 8

// FLKFSNRTWorker @ 14d7f63c0

FLKFSNRTWorker * __thiscall
Audio::FLKFSNRTWorker::FLKFSNRTWorker
          (FLKFSNRTWorker *this,FAnalyzerNRTParameters *param_1,FLKFSNRTSettings *param_2)

{
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar1;
  TUniquePtr<Audio::FMultichannelLoudnessAnalyzer,TDefaultDelete<Audio::FMultichannelLoudnessAnalyzer>_>
  *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  FLKFSNRTWorker *pFVar15;
  FMultichannelLoudnessAnalyzer *pFVar16;
  TSlidingBuffer<float> *this_00;
  FMultichannelLoudnessAnalyzer *pFVar17;
  FMultichannelLoudnessAnalyzer *pFVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  longlong local_68;
  undefined8 local_60 [4];
  
  pFVar17 = (FMultichannelLoudnessAnalyzer *)0x0;
  this->_padding_ = (longlong)&___7FLKFSNRTWorker_Audio__6B_;
  pTVar1 = &this->InternalBuffer;
  pTVar2 = &this->Analyzer;
  this->NumChannels = param_1->NumChannels;
  this->NumAnalyzedBuffers = 0;
  this->NumSlidingWindowHopFrames = 0;
  this->NumFrames = 0;
  this->SampleRate = param_1->SampleRate;
  this->ShortTermLoudnessDuration = param_2->ShortTermLoudnessDuration;
  this->NumAnalysisWindows = 1;
  (this->OverallPerceptualEnergy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NumAnalysisHopWindows = 1;
  piVar3 = &(this->OverallPerceptualEnergy).ArrayNum;
  piVar13 = &(this->OverallPerceptualEnergy).ArrayMax;
  *piVar3 = 0;
  (this->InternalWindow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar13 = 0;
  piVar4 = &(this->InternalWindow).ArrayNum;
  (this->ChannelPerceptualEnergy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar14 = &(this->InternalWindow).ArrayMax;
  (this->ChannelPerceptualEnergy).ArrayNum = 0;
  (this->ChannelPerceptualEnergy).ArrayMax = 0;
  *piVar4 = 0;
  pTVar1->Ptr = (TSlidingBuffer<float> *)0x0;
  pTVar2->Ptr = (FMultichannelLoudnessAnalyzer *)0x0;
  *piVar14 = 0;
  if ((this->NumChannels < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                          ,0xf5,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar15 = (FLKFSNRTWorker *)(*pcVar10)();
    return pFVar15;
  }
  if ((this->SampleRate <= 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SampleRate > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                          ,0xf6,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar15 = (FLKFSNRTWorker *)(*pcVar10)();
    return pFVar15;
  }
  if ((this->ShortTermLoudnessDuration <= 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShortTermLoudnessDuration > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                          ,0xf7,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar15 = (FLKFSNRTWorker *)(*pcVar10)();
    return pFVar15;
  }
  pFVar16 = ::operator_new(0xa8);
  pFVar18 = pFVar17;
  if (pFVar16 != (FMultichannelLoudnessAnalyzer *)0x0) {
    fVar21 = param_1->SampleRate;
    piVar5 = &(pFVar16->MonoBuffer).ArrayMax;
    piVar6 = &(pFVar16->MonoBuffer).ArrayNum;
    *piVar6 = 0;
    (pFVar16->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar5 = 0;
    (pFVar16->ChannelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar16->ChannelWeights).ArrayNum = 0;
    (pFVar16->ChannelWeights).ArrayMax = 0;
    FLoudnessAnalyzer::FLoudnessAnalyzer
              (&pFVar16->Analyzer,fVar21,&param_2->LoudnessAnalyzerSettings);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(pFVar16->Analyzer).Settings.WindowSize,(ForAnyElementType *)pFVar16,piVar6,
               piVar5);
    pFVar18 = pFVar16;
  }
  if (pTVar2 == (TUniquePtr<Audio::FMultichannelLoudnessAnalyzer,TDefaultDelete<Audio::FMultichannelLoudnessAnalyzer>_>
                 *)&local_68) {
    if (pFVar18 != (FMultichannelLoudnessAnalyzer *)0x0) {
      FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar18->Analyzer);
      pFVar8 = (pFVar18->ChannelWeights).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      pFVar8 = (pFVar18->MonoBuffer).AllocatorInstance.Data;
      pFVar16 = pFVar18;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      goto LAB_14d7f65d1;
    }
  }
  else {
    pFVar16 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar18;
    if (pFVar16 != (FMultichannelLoudnessAnalyzer *)0x0) {
      FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar16->Analyzer);
      pFVar8 = (pFVar16->ChannelWeights).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      pFVar8 = (pFVar16->MonoBuffer).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
LAB_14d7f65d1:
      ::operator_delete(pFVar16,0xa8);
    }
  }
  fVar22 = param_1->SampleRate + param_1->SampleRate;
  iVar20 = (pTVar2->Ptr->Analyzer).Settings.WindowSize;
  fVar21 = __real_bf000000 - fVar22 * param_2->AnalysisWindowDuration;
  LKFSPrivate::TuneSlidingWindwoHopSize
            (-((int)ROUND(__real_bf000000 - fVar22 * param_2->AnalysisPeriod) >> 1),iVar20,
             &this->NumSlidingWindowHopFrames,&this->NumAnalysisHopWindows);
  iVar19 = this->NumSlidingWindowHopFrames;
  iVar7 = this->NumChannels;
  iVar12 = (-(iVar20 / 2) - ((int)ROUND(fVar21) >> 1)) / iVar19 + 1;
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  this->NumAnalysisWindows = iVar12;
  iVar20 = iVar20 * iVar7;
  this_00 = ::operator_new(0x20);
  if (this_00 != (TSlidingBuffer<float> *)0x0) {
    pFVar17 = (FMultichannelLoudnessAnalyzer *)
              TSlidingBuffer<float>::TSlidingBuffer<float>(this_00,iVar20,iVar19 * iVar7);
  }
  if (pTVar1 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)local_60) {
    if (pFVar17 == (FMultichannelLoudnessAnalyzer *)0x0) goto LAB_14d7f66c7;
    pvVar9 = *(void **)&(pFVar17->MonoBuffer).ArrayNum;
    pFVar18 = pFVar17;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
  }
  else {
    pFVar18 = (FMultichannelLoudnessAnalyzer *)pTVar1->Ptr;
    pTVar1->Ptr = (TSlidingBuffer<float> *)pFVar17;
    if (pFVar18 == (FMultichannelLoudnessAnalyzer *)0x0) goto LAB_14d7f66c7;
    pvVar9 = *(void **)&(pFVar18->MonoBuffer).ArrayNum;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
  }
  ::operator_delete(pFVar18,0x20);
LAB_14d7f66c7:
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar20,&(this->InternalWindow).AllocatorInstance,piVar4,piVar14);
  iVar19 = this->NumChannels * this->NumAnalysisWindows;
  iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar19,&(this->ChannelPerceptualEnergy).AllocatorInstance,
                      &(this->ChannelPerceptualEnergy).ArrayNum,
                      &(this->ChannelPerceptualEnergy).ArrayMax);
  memset((this->ChannelPerceptualEnergy).AllocatorInstance.Data + (longlong)iVar20 * 4,0,
         (longlong)iVar19 << 2);
  iVar20 = this->NumAnalysisWindows;
  iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar20,&(this->OverallPerceptualEnergy).AllocatorInstance,piVar3,piVar13);
  memset((this->OverallPerceptualEnergy).AllocatorInstance.Data + (longlong)iVar19 * 4,0,
         (longlong)iVar20 << 2);
  return this;
}

// AddCurrentLoudnessDataToResult @ 14d7fb980

void __thiscall
Audio::FLKFSNRTWorker::AddCurrentLoudnessDataToResult(FLKFSNRTWorker *this,FLKFSNRTResult *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FLKFSNRTResults local_88;
  FLKFSNRTResults local_74 [5];
  
  fVar3 = __real_3f30e560;
  fVar2 = __real_41200000;
  uVar7 = 0;
  fVar10 = 0.0;
  fVar11 = (float)(((this->NumAnalyzedBuffers * 2 - this->NumAnalysisWindows) *
                    this->NumSlidingWindowHopFrames +
                   (((this->Analyzer).Ptr)->Analyzer).Settings.WindowSize) / 2) / this->SampleRate;
  if (0 < this->NumChannels) {
    do {
      fVar9 = 0.0;
      uVar5 = uVar7;
      if ((int)uVar7 < (this->ChannelPerceptualEnergy).ArrayNum) {
        do {
          uVar6 = 0;
          if ((int)uVar5 < (this->ChannelPerceptualEnergy).ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar6 = uVar5 + this->NumChannels;
          fVar9 = fVar9 + *(float *)((this->ChannelPerceptualEnergy).AllocatorInstance.Data +
                                    (longlong)(int)uVar5 * 4);
          uVar5 = uVar6;
        } while ((int)uVar6 < (this->ChannelPerceptualEnergy).ArrayNum);
      }
      local_88.Energy = fVar9 / (float)this->NumAnalysisWindows;
      local_88.Channel = uVar7;
      local_88.Timestamp = fVar11;
      fVar9 = logf(local_88.Energy);
      local_88.ShortTermLoudness = 0.0;
      local_88.Loudness = fVar9 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar3;
      FLKFSNRTResult::Add(param_1,&local_88);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < this->NumChannels);
  }
  uVar7 = 0;
  if (0 < (this->OverallPerceptualEnergy).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->OverallPerceptualEnergy).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      fVar10 = fVar10 + *(float *)((this->OverallPerceptualEnergy).AllocatorInstance.Data + lVar8);
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < (this->OverallPerceptualEnergy).ArrayNum);
  }
  local_74[0].Channel = -1;
  local_74[0].Energy = fVar10 / (float)this->NumAnalysisWindows;
  local_74[0].Timestamp = fVar11;
  fVar10 = logf(local_74[0].Energy);
  local_74[0].ShortTermLoudness = 0.0;
  local_74[0].Loudness = fVar10 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar3;
  FLKFSNRTResult::Add(param_1,local_74);
  return;
}

// Analyze @ 14d7fc130

void __thiscall
Audio::FLKFSNRTWorker::Analyze
          (FLKFSNRTWorker *this,TArrayView<float_const_,int> *param_1,IAnalyzerNRTResult *param_2)

{
  int iVar1;
  TSlidingBuffer<float> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  TArrayView<float_const_,int> local_68;
  TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_> local_58;
  
  this->NumFrames = this->NumFrames + param_1->ArrayNum / this->NumChannels;
  if ((param_2 == (IAnalyzerNRTResult *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != LoudnessResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                         ,0x11b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = (this->InternalBuffer).Ptr;
  uVar4 = *(undefined4 *)&param_1->DataPtr;
  uVar5 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iVar6 = param_1->ArrayNum;
  uVar7 = *(undefined4 *)&param_1->field_0xc;
  local_58._padding_ = (longlong)(pTVar2->StorageBuffer).AllocatorInstance.Data;
  iVar1 = (pTVar2->StorageBuffer).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58._padding_._0_4_ = pTVar2->NumWindowSamples;
  local_58._padding_._4_4_ = pTVar2->NumHopSamples;
  local_58._padding_._4_4_ = pTVar2->NumUnderflowSamples;
  local_58._padding_._0_4_ = (iVar6 - (int)local_58._padding_) + iVar1;
  if ((int)local_58._padding_ < 0) {
    local_58._padding_._0_4_ = -1;
  }
  local_58._padding_ =
       (longlong)&___7__TAutoSlidingWindow_MV__TSizedDefaultAllocator__0CA____Audio__6B_;
  local_58.WindowBuffer = &this->InternalWindow;
  local_58._padding_._0_4_ = iVar1;
  local_58._padding_._0_4_ = uVar4;
  local_58._padding_._4_4_ = uVar5;
  local_58._padding_._0_4_ = iVar6;
  local_58._padding_._4_4_ = uVar7;
  local_58._padding_ = (longlong)pTVar2;
  AnalyzeSlidingWindow(this,&local_58,(FLKFSNRTResult *)param_2);
  local_68.DataPtr = (float *)CONCAT44(local_58._padding_._4_4_,(undefined4)local_58._padding_);
  local_68._12_4_ = local_58._padding_._4_4_;
  local_68.ArrayNum = (int)local_58._padding_;
  TSlidingBuffer<float>::StoreForFutureWindows
            ((TSlidingBuffer<float> *)local_58._padding_,&local_68);
  return;
}

// AnalyzeSlidingWindow @ 14d7ffe00

void __thiscall
Audio::FLKFSNRTWorker::AnalyzeSlidingWindow
          (FLKFSNRTWorker *this,TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_> *param_1,
          FLKFSNRTResult *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FMultichannelLoudnessAnalyzer *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  int iStack_c8;
  int iStack_b8;
  int local_a8;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  if ((this->NumAnalysisWindows < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumAnalysisWindows > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                          ,0x154,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->NumAnalysisHopWindows < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumAnalysisHopWindows > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                          ,0x155,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar8 = param_1->_padding_;
  lVar9 = param_1->_padding_;
  pTVar4 = param_1->WindowBuffer;
  lVar10 = param_1->_padding_;
  lVar11 = param_1->_padding_;
  local_a8 = (int)param_1->_padding_;
  uVar2 = (uint)param_1->_padding_;
  iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
  if (local_a8 == -1) {
    local_a8 = -1;
    iVar16 = -1;
  }
  else {
    iVar16 = *(int *)((longlong)&param_1->_padding_ + 4);
    if (local_a8 < iVar16) {
      iVar16 = -1;
    }
  }
  while( true ) {
    if (iVar16 == -1) {
      return;
    }
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &pTVar4->ArrayMax;
    pTVar4->ArrayNum = 0;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,&pTVar4->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,piVar1);
    iStack_c8 = (int)lVar9;
    iVar17 = 0;
    if (iVar16 < iStack_c8) {
      iVar17 = iStack_c8 - iVar16;
      memcpy((pTVar4->AllocatorInstance).Data,(void *)(lVar8 + (longlong)iVar16 * 4),
             (longlong)iVar17 << 2);
    }
    if (iVar17 < (int)uVar2) {
      iStack_b8 = (int)lVar11;
      iVar14 = (iVar16 - iStack_c8) + iVar17;
      iStack_b8 = iStack_b8 - iVar14;
      if ((int)(uVar2 - iVar17) < iStack_b8) {
        iStack_b8 = uVar2 - iVar17;
      }
      if (0 < iStack_b8) {
        memcpy((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 4,
               (void *)(lVar10 + (longlong)iVar14 * 4),(longlong)iStack_b8 << 2);
        iVar17 = iVar17 + iStack_b8;
      }
      if (iVar17 < (int)uVar2) {
        memset((pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 4,0,
               (longlong)(int)(uVar2 - iVar17) << 2);
      }
    }
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    iVar17 = pTVar4->ArrayNum;
    if ((iVar17 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar14 = this->NumChannels;
    uVar15 = this->NumAnalyzedBuffers % this->NumAnalysisWindows;
    this_00 = (this->Analyzer).Ptr;
    pFVar6 = (this->ChannelPerceptualEnergy).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = iVar14;
    local_58[0]._12_4_ = uStack_6c;
    local_58[0].ArrayNum = iVar17;
    local_68.DataPtr = (float *)(pFVar6 + (longlong)(int)(iVar14 * uVar15) * 4);
    local_58[0].DataPtr = (float *)pFVar5;
    fVar18 = FMultichannelLoudnessAnalyzer::CalculatePerceptualEnergy
                       (this_00,local_58,this->NumChannels,&local_68);
    uVar13 = 0;
    if ((int)uVar15 < (this->OverallPerceptualEnergy).ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) break;
    *(float *)((this->OverallPerceptualEnergy).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) =
         fVar18;
    iVar17 = this->NumAnalyzedBuffers + 1;
    this->NumAnalyzedBuffers = iVar17;
    if ((this->NumAnalysisWindows <= iVar17) &&
       ((iVar17 - this->NumAnalysisWindows) % this->NumAnalysisHopWindows == 0)) {
      AddCurrentLoudnessDataToResult(this,param_2);
    }
    iVar16 = iVar16 + iVar3;
    if (local_a8 < iVar16) {
      iVar16 = -1;
    }
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// AnalyzeWindow @ 14d8007b0

void __thiscall
Audio::FLKFSNRTWorker::AnalyzeWindow
          (FLKFSNRTWorker *this,TArrayView<float_const_,int> *param_1,FLKFSNRTResult *param_2)

{
  int iVar1;
  FMultichannelLoudnessAnalyzer *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  iVar1 = this->NumChannels;
  uVar6 = this->NumAnalyzedBuffers % this->NumAnalysisWindows;
  this_00 = (this->Analyzer).Ptr;
  pFVar2 = (this->ChannelPerceptualEnergy).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28[0].DataPtr = param_1->DataPtr;
  local_28[0].ArrayNum = param_1->ArrayNum;
  local_28[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar1;
  local_38.DataPtr = (float *)(pFVar2 + (longlong)(int)(iVar1 * uVar6) * 4);
  fVar7 = FMultichannelLoudnessAnalyzer::CalculatePerceptualEnergy
                    (this_00,local_28,this->NumChannels,&local_38);
  uVar5 = 0;
  if ((int)uVar6 < (this->OverallPerceptualEnergy).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(float *)((this->OverallPerceptualEnergy).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) =
       fVar7;
  this->NumAnalyzedBuffers = this->NumAnalyzedBuffers + 1;
  return;
}

// CalculateAggregateLoudnessStats @ 14d801430

void __thiscall
Audio::FLKFSNRTWorker::CalculateAggregateLoudnessStats(FLKFSNRTWorker *this,FLKFSNRTResult *param_1)

{
  FLKFSNRTResults *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  FLKFSNRTChannelData *pFVar16;
  ulonglong uVar17;
  float *pfVar18;
  int iVar19;
  undefined1 *puVar20;
  FLKFSNRTResults *pFVar21;
  FLKFSNRTResults *pFVar22;
  ForAnyElementType FVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  FLKFSNRTAggregateStats local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  FLKFSNRTResults *local_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  TArrayView<FLKFSNRTResults,int> local_c8 [8];
  
  if (((param_1->Data).bIsSortedChronologically == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOutResult.IsSortedChronologically()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                          ,0x195,L"Results should be presorted in chronological order"), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
              *)&(param_1->Data).ChannelData,&local_e8);
  fVar10 = __real_c28c0000;
  fVar9 = __real_3f30e560;
  fVar8 = __real_00800000;
  fVar7 = __real_41200000;
  iVar12 = local_e8.ArrayNum;
  uVar17 = (ulonglong)local_e8.ArrayNum;
  pFVar2 = local_e8.AllocatorInstance.Data + uVar17 * 4;
  FVar23.Data = local_e8.AllocatorInstance.Data;
  do {
    pFVar22 = (FLKFSNRTResults *)0x0;
    if ((int)uVar17 != iVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar23.Data == pFVar2) {
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return;
    }
    uVar3 = *(uint *)FVar23.Data;
    local_res20.IntegratedLoudness = 1.1754944e-38;
    if (*(int *)&(param_1->Data).ChannelData.field_0x8 !=
        *(int *)&(param_1->Data).ChannelData.field_0x34) {
      puVar4 = *(undefined1 **)&(param_1->Data).ChannelData.field_0x40;
      puVar20 = &(param_1->Data).ChannelData.field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar20 = puVar4;
      }
      uVar14 = *(uint *)(puVar20 +
                        (ulonglong)(*(int *)&(param_1->Data).ChannelData.field_0x48 - 1U & uVar3) *
                        4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar14 * 0x30 +
                            *(longlong *)&(param_1->Data).ChannelData);
          if (*puVar15 == uVar3) {
            pFVar21 = (FLKFSNRTResults *)(puVar15 + 2);
            if (puVar15 == (uint *)0x0) {
              pFVar21 = pFVar22;
            }
            if (pFVar21 != (FLKFSNRTResults *)0x0) {
              pFVar22 = *(FLKFSNRTResults **)&pFVar21->Energy;
              fVar24 = pFVar21->ShortTermLoudness;
              local_d8 = pFVar22;
              if (((int)fVar24 < 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              goto LAB_14d801590;
            }
            break;
          }
          uVar14 = puVar15[10];
        } while (uVar14 != 0xffffffff);
      }
    }
    local_d8 = (FLKFSNRTResults *)0x0;
    fVar24 = 0.0;
LAB_14d801590:
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = (int)fVar24;
    local_c8[0].DataPtr = local_d8;
    fStack_d0 = fVar24;
    LKFSNRTFactoryPrivate::CalculateShortTermAndIntegratedLoudness
              (this->ShortTermLoudnessDuration,local_c8,&local_res20);
    fVar11 = LoudnessAnalyzerPrivate::Log10Scale;
    fVar25 = fVar8;
    if (0 < (int)fVar24) {
      iVar19 = 0;
      fVar6 = 0.0;
      pFVar21 = pFVar22 + (int)fVar24;
      fVar25 = fVar10;
      if (pFVar22 != pFVar21) {
        pfVar18 = &pFVar22->Energy;
        do {
          if (fVar10 < pfVar18[1]) {
            iVar19 = iVar19 + 1;
            fVar6 = fVar6 + *pfVar18;
          }
          pFVar1 = (FLKFSNRTResults *)(pfVar18 + 3);
          pfVar18 = pfVar18 + 5;
        } while (pFVar1 != pFVar21);
        if (0 < iVar19) {
          fVar24 = logf(fVar6 / (float)iVar19);
          fVar25 = fVar24 * fVar7 * fVar11 - fVar9;
        }
      }
      iVar19 = 0;
      fVar25 = fVar25 - fVar7;
      fVar24 = 0.0;
      if (pFVar22 != pFVar21) {
        pfVar18 = &pFVar22->Energy;
        do {
          if (fVar25 < pfVar18[1]) {
            iVar19 = iVar19 + 1;
            fVar24 = fVar24 + *pfVar18;
          }
          pFVar22 = (FLKFSNRTResults *)(pfVar18 + 3);
          pfVar18 = pfVar18 + 5;
        } while (pFVar22 != pFVar21);
        if (0 < iVar19) {
          fVar24 = logf(fVar24 / (float)iVar19);
          fVar25 = fVar24 * fVar7 * fVar11 - fVar9;
        }
      }
    }
    local_res18[0] = uVar3;
    local_res20.GatedLoudness = fVar25;
    if (*(int *)&(param_1->Data).ChannelData.field_0x8 !=
        *(int *)&(param_1->Data).ChannelData.field_0x34) {
      puVar4 = *(undefined1 **)&(param_1->Data).ChannelData.field_0x40;
      puVar20 = &(param_1->Data).ChannelData.field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar20 = puVar4;
      }
      uVar14 = *(uint *)(puVar20 +
                        (ulonglong)(*(int *)&(param_1->Data).ChannelData.field_0x48 - 1U & uVar3) *
                        4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar14 * 0x30 +
                            *(longlong *)&(param_1->Data).ChannelData);
          if (*puVar15 == uVar3) {
            if (puVar15 != (uint *)0x0) {
              pFVar16 = (FLKFSNRTChannelData *)(puVar15 + 2);
              goto LAB_14d80175c;
            }
            break;
          }
          uVar14 = puVar15[10];
        } while (uVar14 != 0xffffffff);
      }
    }
    pFVar16 = TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
              ::EmplaceByHash<int_const_&>
                        ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
                          *)&(param_1->Data).ChannelData,uVar3,(int *)local_res18);
LAB_14d80175c:
    FVar23.Data = FVar23.Data + 4;
    (pFVar16->AggregateStats).IntegratedLoudness = local_res20.IntegratedLoudness;
    (pFVar16->AggregateStats).GatedLoudness = fVar25;
    uVar17 = local_e8._8_8_ & 0xffffffff;
  } while( true );
}

// Finalize @ 14d805400

void __thiscall Audio::FLKFSNRTWorker::Finalize(FLKFSNRTWorker *this,IAnalyzerNRTResult *param_1)

{
  int iVar1;
  TSlidingBuffer<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uStack_6c;
  TArrayView<float_const_,int> local_68;
  TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_> local_58;
  
  if (param_1 == (IAnalyzerNRTResult *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != LoudnessResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSNRTFactory.cpp"
                       ,0x127,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = (this->InternalBuffer).Ptr;
  local_58._padding_ = (longlong)(pTVar2->StorageBuffer).AllocatorInstance.Data;
  iVar1 = (pTVar2->StorageBuffer).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58._padding_._4_4_ = pTVar2->NumHopSamples;
  local_58._padding_._0_4_ = pTVar2->NumWindowSamples;
  local_58._padding_ = (ulonglong)uStack_6c << 0x20;
  local_58._padding_._4_4_ = pTVar2->NumUnderflowSamples;
  local_58._padding_._0_4_ = iVar1 - (int)local_58._padding_;
  if ((int)local_58._padding_ < 0) {
    local_58._padding_._0_4_ = -1;
  }
  local_58._padding_ =
       (longlong)&___7__TAutoSlidingWindow_MV__TSizedDefaultAllocator__0CA____Audio__6B_;
  local_58.WindowBuffer = &this->InternalWindow;
  local_58._padding_ = 0;
  local_58._padding_._0_4_ = iVar1;
  local_58._padding_ = (longlong)pTVar2;
  AnalyzeSlidingWindow(this,&local_58,(FLKFSNRTResult *)param_1);
  FinalizeChannels(this,(FLKFSNRTResult *)param_1);
  FLKFSNRTResult::SortChronologically((FLKFSNRTResult *)param_1);
  *(float *)&param_1[1].field_0x4 = (float)this->NumFrames / this->SampleRate;
  CalculateAggregateLoudnessStats(this,(FLKFSNRTResult *)param_1);
  this->NumAnalyzedBuffers = 0;
  this->NumFrames = 0;
  pTVar2 = (this->InternalBuffer).Ptr;
  (pTVar2->StorageBuffer).ArrayNum = 0;
  if ((pTVar2->StorageBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(pTVar2->StorageBuffer).AllocatorInstance,0,&(pTVar2->StorageBuffer).ArrayMax)
    ;
  }
  pTVar2->NumUnderflowSamples = 0;
  local_68.DataPtr = (float *)local_58._padding_;
  local_68._8_8_ = local_58._padding_;
  TSlidingBuffer<float>::StoreForFutureWindows
            ((TSlidingBuffer<float> *)local_58._padding_,&local_68);
  return;
}

// FinalizeChannels @ 14d806050

void __thiscall
Audio::FLKFSNRTWorker::FinalizeChannels(FLKFSNRTWorker *this,FLKFSNRTResult *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_res8 [2];
  
  uVar5 = 0;
  if (0 < this->NumChannels) {
    do {
      if (*(int *)&(param_1->Data).ChannelData.field_0x8 !=
          *(int *)&(param_1->Data).ChannelData.field_0x34) {
        puVar1 = *(undefined1 **)&(param_1->Data).ChannelData.field_0x40;
        puVar3 = &(param_1->Data).ChannelData.field_0x38;
        puVar4 = puVar3;
        if (puVar1 != (undefined1 *)0x0) {
          puVar4 = puVar1;
        }
        iVar6 = *(int *)(puVar4 + (ulonglong)
                                  (*(int *)&(param_1->Data).ChannelData.field_0x48 - 1U & uVar5) * 4
                        );
        if (iVar6 != -1) {
          lVar2 = *(longlong *)&(param_1->Data).ChannelData;
          do {
            if (*(uint *)(lVar2 + (longlong)iVar6 * 0x30) == uVar5) {
              if (iVar6 != -1) goto LAB_14d806126;
              break;
            }
            iVar6 = *(int *)(lVar2 + 0x28 + (longlong)iVar6 * 0x30);
          } while (iVar6 != -1);
        }
        puVar1 = *(undefined1 **)&(param_1->Data).ChannelData.field_0x40;
        if (puVar1 != (undefined1 *)0x0) {
          puVar3 = puVar1;
        }
        iVar6 = *(int *)(puVar3 + (ulonglong)
                                  (*(int *)&(param_1->Data).ChannelData.field_0x48 - 1U & uVar5) * 4
                        );
        if (iVar6 != -1) {
          lVar2 = *(longlong *)&(param_1->Data).ChannelData;
          do {
            if (*(uint *)(lVar2 + (longlong)iVar6 * 0x30) == uVar5) goto LAB_14d806126;
            iVar6 = *(int *)(lVar2 + 0x28 + (longlong)iVar6 * 0x30);
          } while (iVar6 != -1);
        }
      }
      local_res8[0] = uVar5;
      TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
      ::Emplace<int_const_&>
                ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
                  *)&(param_1->Data).ChannelData,(int *)local_res8);
LAB_14d806126:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < this->NumChannels);
  }
  if (*(int *)&(param_1->Data).ChannelData.field_0x8 !=
      *(int *)&(param_1->Data).ChannelData.field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->Data).ChannelData.field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(param_1->Data).ChannelData.field_0x38;
    }
    iVar6 = *(int *)(puVar3 + (ulonglong)(*(int *)&(param_1->Data).ChannelData.field_0x48 - 1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(param_1->Data).ChannelData;
      do {
        if (*(int *)(lVar2 + (longlong)iVar6 * 0x30) == -1) {
          return;
        }
        iVar6 = *(int *)(lVar2 + 0x28 + (longlong)iVar6 * 0x30);
      } while (iVar6 != -1);
    }
    puVar3 = *(undefined1 **)&(param_1->Data).ChannelData.field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(param_1->Data).ChannelData.field_0x38;
    }
    iVar6 = *(int *)(puVar3 + (ulonglong)(*(int *)&(param_1->Data).ChannelData.field_0x48 - 1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(param_1->Data).ChannelData;
      do {
        if (*(int *)(lVar2 + (longlong)iVar6 * 0x30) == -1) {
          return;
        }
        iVar6 = *(int *)(lVar2 + 0x28 + (longlong)iVar6 * 0x30);
      } while (iVar6 != -1);
    }
  }
  local_res8[0] = 0xffffffff;
  TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
  ::Emplace<int_const_&>
            ((TMapBase<int,FLKFSNRTChannelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLKFSNRTChannelData,0>_>
              *)&(param_1->Data).ChannelData,(int *)local_res8);
  return;
}

