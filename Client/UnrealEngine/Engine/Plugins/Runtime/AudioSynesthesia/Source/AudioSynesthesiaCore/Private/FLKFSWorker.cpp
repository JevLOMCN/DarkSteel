// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 8

// FLKFSWorker @ 14d7f67a0

FLKFSWorker * __thiscall
Audio::FLKFSWorker::FLKFSWorker
          (FLKFSWorker *this,FAnalyzerParameters *param_1,FLKFSSettings *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FLKFSWorker *pFVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int local_res8 [2];
  FAnalyzerParameters *local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  ForAnyElementType local_d0;
  int local_c8 [4];
  ForAnyElementType local_b8;
  int local_b0 [2];
  TSlidingBuffer<float> local_a8;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  
  this->_padding_ = (longlong)&___7FLKFSWorker_Audio__6B_;
  this->NumChannels = param_1->NumChannels;
  this->NumSlidingWindowHopFrames = 0;
  this->NumAnalyzedBuffers = 0;
  this->NumEnergyHistory = 0;
  iVar9 = param_1->SampleRate;
  piVar2 = &(this->ChannelEnergyHistory).Elements.ArrayMax;
  this->NumAnalysisHopWindows = 1;
  this->NumAnalysisWindows = 1;
  this->NumShortTermHistoryResults = 1;
  this->NumIntegratedHistoryResults = 1;
  this->NumIntegratedHopHistoryResults = 1;
  this->SampleRate = (float)iVar9;
  local_70 = &(this->ChannelPerceptualEnergy).ArrayNum;
  (this->ChannelPerceptualEnergy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78 = &(this->ChannelPerceptualEnergy).ArrayMax;
  *local_70 = 0;
  *local_78 = 0;
  local_60 = &(this->OverallPerceptualEnergy).ArrayNum;
  (this->OverallPerceptualEnergy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68 = &(this->OverallPerceptualEnergy).ArrayMax;
  *local_60 = 0;
  (this->InternalWindow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_68 = 0;
  local_80 = &(this->InternalWindow).ArrayNum;
  local_88 = &(this->InternalWindow).ArrayMax;
  *local_80 = 0;
  for (lVar6 = 0x3f; 1UL >> lVar6 == 0; lVar6 = lVar6 + -1) {
  }
  *piVar2 = 0;
  iVar11 = 1 << ((byte)lVar6 & 0x1f);
  *local_88 = 0;
  piVar3 = &(this->ChannelEnergyHistory).Elements.ArrayNum;
  local_res18 = (undefined4)lVar6;
  (this->AggregateLoudnessStats).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggregateLoudnessStats).Pairs.ArrayNum = 0;
  (this->AggregateLoudnessStats).Pairs.ArrayMax = 0;
  (this->ChannelEnergyHistory).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  local_res10 = param_1;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar11,&(this->ChannelEnergyHistory).Elements.AllocatorInstance,piVar3,
                     piVar2);
  memset((this->ChannelEnergyHistory).Elements.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)iVar11 << 2);
  piVar2 = &(this->OverallEnergyHistory).Elements.ArrayMax;
  (this->ChannelEnergyHistory).IndexMask = (this->ChannelEnergyHistory).Elements.ArrayNum - 1;
  for (lVar6 = 0x3f; 1UL >> lVar6 == 0; lVar6 = lVar6 + -1) {
  }
  piVar3 = &(this->OverallEnergyHistory).Elements.ArrayNum;
  (this->OverallEnergyHistory).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res20 = (undefined4)lVar6;
  iVar11 = 1 << ((byte)lVar6 & 0x1f);
  *piVar3 = 0;
  *piVar2 = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar11,&(this->OverallEnergyHistory).Elements.AllocatorInstance,piVar3,
                     piVar2);
  memset((this->OverallEnergyHistory).Elements.AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)iVar11 << 2);
  (this->OverallEnergyHistory).IndexMask = (this->OverallEnergyHistory).Elements.ArrayNum - 1;
  (this->InternalBuffer).NumHopSamples = 1;
  (this->InternalBuffer).StorageBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalBuffer).StorageBuffer.ArrayNum = 0;
  (this->InternalBuffer).StorageBuffer.ArrayMax = 0;
  (this->InternalBuffer).NumWindowSamples = 1;
  (this->InternalBuffer).NumUnderflowSamples = 0;
  if (((this->InternalBuffer).NumHopSamples < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumHopSamples >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                         ,0x28,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  piVar2 = &(this->Analyzer).MonoBuffer.ArrayNum;
  piVar3 = &(this->Analyzer).MonoBuffer.ArrayMax;
  iVar9 = local_res10->SampleRate;
  (this->Analyzer).MonoBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  (this->Analyzer).ChannelWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Analyzer).ChannelWeights.ArrayNum = 0;
  (this->Analyzer).ChannelWeights.ArrayMax = 0;
  FLoudnessAnalyzer::FLoudnessAnalyzer
            (&(this->Analyzer).Analyzer,(float)iVar9,&param_2->LoudnessAnalyzerSettings);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,(this->Analyzer).Analyzer.Settings.WindowSize,(ForAnyElementType *)&this->Analyzer,
             piVar2,piVar3);
  if ((this->NumChannels < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                         ,0x82,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  if ((this->SampleRate <= 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                         ,0x83,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  if ((param_2->ShortTermLoudnessDuration <= 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAnalyzerSettings.ShortTermLoudnessDuration > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                         ,0x84,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  if ((param_2->IntegratedLoudnessDuration <= 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAnalyzerSettings.IntegratedLoudnessDuration > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                         ,0x85,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  if ((param_2->IntegratedLoudnessAnalysisPeriod <= 0.0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAnalyzerSettings.IntegratedLoudnessAnalysisPeriod> 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                         ,0x86,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  iVar9 = (this->Analyzer).Analyzer.Settings.WindowSize;
  fVar14 = (float)local_res10->SampleRate + (float)local_res10->SampleRate;
  fVar13 = __real_bf000000 - fVar14 * param_2->AnalysisWindowDuration;
  LKFSPrivate::TuneSlidingWindwoHopSize
            (-((int)ROUND(__real_bf000000 - fVar14 * param_2->AnalysisPeriod) >> 1),iVar9,
             &this->NumSlidingWindowHopFrames,&this->NumAnalysisHopWindows);
  iVar11 = (-(iVar9 / 2) - ((int)ROUND(fVar13) >> 1)) / this->NumSlidingWindowHopFrames + 1;
  if (iVar11 < 1) {
    iVar11 = 1;
  }
  iVar9 = iVar9 * this->NumChannels;
  iVar12 = this->NumSlidingWindowHopFrames * this->NumChannels;
  this->NumAnalysisWindows = iVar11;
  local_a8.StorageBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StorageBuffer.ArrayNum = 0;
  local_a8.StorageBuffer.ArrayMax = 0;
  local_a8.NumUnderflowSamples = 0;
  local_a8.NumWindowSamples = iVar9;
  local_a8.NumHopSamples = iVar12;
  if ((iVar9 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumWindowSamples >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                         ,0x27,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  if ((iVar12 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumHopSamples >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                         ,0x28,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLKFSWorker *)(*pcVar7)();
    return pFVar10;
  }
  TSlidingBuffer<float>::operator=(&this->InternalBuffer,&local_a8);
  if (local_a8.StorageBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StorageBuffer.AllocatorInstance.Data);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar9,&(this->InternalWindow).AllocatorInstance,local_80,local_88);
  iVar11 = this->NumAnalysisWindows * this->NumChannels;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar11,&(this->ChannelPerceptualEnergy).AllocatorInstance,local_70,local_78
                    );
  memset((this->ChannelPerceptualEnergy).AllocatorInstance.Data + (longlong)iVar9 * 4,0,
         (longlong)iVar11 << 2);
  iVar9 = this->NumAnalysisWindows;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar9,&(this->OverallPerceptualEnergy).AllocatorInstance,local_60,local_68
                     );
  memset((this->OverallPerceptualEnergy).AllocatorInstance.Data + (longlong)iVar11 * 4,0,
         (longlong)iVar9 << 2);
  fVar13 = this->SampleRate;
  iVar11 = this->NumAnalysisHopWindows * this->NumSlidingWindowHopFrames;
  iVar9 = ((int)(fVar13 * param_2->ShortTermLoudnessDuration) + -1 + iVar11) / iVar11;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  this->NumShortTermHistoryResults = iVar9;
  iVar12 = (iVar11 + -1 + (int)(fVar13 * param_2->IntegratedLoudnessDuration)) / iVar11;
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  this->NumIntegratedHistoryResults = iVar12;
  iVar11 = ((int)(fVar13 * param_2->IntegratedLoudnessAnalysisPeriod) + -1 + iVar11) / iVar11;
  if (iVar11 < 1) {
    iVar11 = 1;
  }
  this->NumIntegratedHopHistoryResults = iVar11;
  if (iVar9 < iVar12) {
    iVar9 = iVar12;
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  iVar12 = iVar9 * this->NumChannels;
  iVar11 = 1;
  if (iVar12 != 0) {
    iVar11 = iVar12;
  }
  uVar4 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar6 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  iVar12 = 1 << ((byte)lVar6 & 0x1f);
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar12,&local_d0,local_c8,local_c8 + 1);
  memset(local_d0.Data + (longlong)iVar11 * 4,0,(longlong)iVar12 << 2);
  pTVar1 = &(this->ChannelEnergyHistory).Elements;
  (this->ChannelEnergyHistory).IndexMask = local_c8[0] - 1;
  if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_d0) {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    iVar11 = local_c8[0];
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
      iVar11 = local_c8[0];
    }
    (pTVar1->AllocatorInstance).Data = local_d0.Data;
    (this->ChannelEnergyHistory).Elements.ArrayMax = local_c8[1];
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_d0.Data = (FScriptContainerElement *)0x0;
    (this->ChannelEnergyHistory).Elements.ArrayNum = iVar11;
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  iVar11 = 1;
  if (iVar9 != 0) {
    iVar11 = iVar9;
  }
  uVar4 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar6 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  iVar11 = 1 << ((byte)lVar6 & 0x1f);
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar11,&local_b8,local_b0,local_b0 + 1);
  memset(local_b8.Data + (longlong)iVar9 * 4,0,(longlong)iVar11 << 2);
  pTVar1 = &(this->OverallEnergyHistory).Elements;
  local_c8[2] = local_b0[0] - 1;
  (this->OverallEnergyHistory).IndexMask = local_c8[2];
  if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_b8) {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    iVar9 = local_b0[0];
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
      iVar9 = local_b0[0];
    }
    (pTVar1->AllocatorInstance).Data = local_b8.Data;
    (this->OverallEnergyHistory).Elements.ArrayMax = local_b0[1];
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    (this->OverallEnergyHistory).Elements.ArrayNum = iVar9;
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_res8[0] = 0;
  if (0 < this->NumChannels) {
    do {
      TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
      ::Emplace<int_const_&>(&this->AggregateLoudnessStats,local_res8);
      local_res8[0] = local_res8[0] + 1;
    } while (local_res8[0] < this->NumChannels);
  }
  TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  ::Emplace<int_const_&>(&this->AggregateLoudnessStats,&FLKFSAnalyzerResult::ChannelIndexOverall);
  return this;
}

// AddCurrentLoudnessDataToHistory @ 14d7fb740

void __thiscall Audio::FLKFSWorker::AddCurrentLoudnessDataToHistory(FLKFSWorker *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = 0.0;
  uVar7 = 0;
  iVar5 = this->NumChannels;
  uVar4 = 0;
  uVar9 = uVar7;
  if (0 < iVar5) {
    do {
      fVar11 = 0.0;
      iVar10 = (int)uVar9;
      if (iVar10 < (this->ChannelPerceptualEnergy).ArrayNum) {
        do {
          uVar6 = (uint)uVar9;
          uVar8 = 0;
          if ((int)uVar6 < (this->ChannelPerceptualEnergy).ArrayNum) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = this->NumChannels;
          uVar9 = (ulonglong)(uVar6 + iVar5);
          fVar11 = fVar11 + *(float *)((this->ChannelPerceptualEnergy).AllocatorInstance.Data +
                                      (longlong)(int)uVar6 * 4);
        } while ((int)(uVar6 + iVar5) < (this->ChannelPerceptualEnergy).ArrayNum);
      }
      iVar1 = this->NumAnalysisWindows;
      uVar6 = iVar5 * this->NumEnergyHistory + iVar10 & (this->ChannelEnergyHistory).IndexMask;
      uVar8 = uVar4;
      if ((int)uVar6 < (this->ChannelEnergyHistory).Elements.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((this->ChannelEnergyHistory).Elements.AllocatorInstance.Data +
                (longlong)(int)uVar6 * 4) = fVar11 / (float)iVar1;
      iVar5 = this->NumChannels;
      uVar9 = (ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < iVar5);
  }
  uVar9 = uVar7;
  if (0 < (this->OverallPerceptualEnergy).ArrayNum) {
    do {
      uVar6 = (uint)uVar9;
      uVar8 = uVar4;
      if ((int)uVar6 < (this->OverallPerceptualEnergy).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar12 = fVar12 + *(float *)((this->OverallPerceptualEnergy).AllocatorInstance.Data + uVar7);
      uVar7 = uVar7 + 4;
      uVar9 = (ulonglong)(uVar6 + 1);
    } while ((int)(uVar6 + 1) < (this->OverallPerceptualEnergy).ArrayNum);
  }
  iVar5 = this->NumAnalysisWindows;
  uVar8 = this->NumEnergyHistory & (this->OverallEnergyHistory).IndexMask;
  if ((int)uVar8 < (this->OverallEnergyHistory).Elements.ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->OverallEnergyHistory).Elements.AllocatorInstance.Data + (longlong)(int)uVar8 * 4
            ) = fVar12 / (float)iVar5;
  this->NumEnergyHistory = this->NumEnergyHistory + 1;
  return;
}

// AddCurrentLoudnessDataToResult @ 14d7fbbd0

void __thiscall
Audio::FLKFSWorker::AddCurrentLoudnessDataToResult(FLKFSWorker *this,FLKFSAnalyzerResult *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FAggregateLoudnessStats *pFVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  FLKFSResults local_98;
  FLKFSResults local_78 [3];
  
  AddCurrentLoudnessDataToHistory(this);
  UpdateAggregateLoudnessStats(this);
  fVar3 = __real_3f30e560;
  fVar2 = __real_41200000;
  iVar9 = 0;
  iVar5 = this->NumChannels;
  fVar11 = (float)(((this->NumAnalyzedBuffers * 2 - this->NumAnalysisWindows) *
                    this->NumSlidingWindowHopFrames + (this->Analyzer).Analyzer.Settings.WindowSize)
                  / 2) / this->SampleRate;
  if (0 < iVar5) {
    do {
      uVar8 = (this->NumEnergyHistory + -1) * iVar5 + iVar9 & (this->ChannelEnergyHistory).IndexMask
      ;
      uVar6 = 0;
      if ((int)uVar8 < (this->ChannelEnergyHistory).Elements.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar10 = *(float *)((this->ChannelEnergyHistory).Elements.AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 4);
      pFVar7 = TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               ::FindChecked(&this->AggregateLoudnessStats,iVar9);
      local_98.Channel = iVar9;
      local_98.Timestamp = fVar11;
      local_98.Energy = fVar10;
      fVar10 = logf(fVar10);
      local_98.IntegratedLoudness = pFVar7->IntegratedLoudness;
      local_98.Loudness = fVar10 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar3;
      local_98.ShortTermLoudness = pFVar7->ShortTermLoudness;
      local_98.GatedLoudness = pFVar7->GatedLoudness;
      FLKFSAnalyzerResult::Add(param_1,&local_98);
      iVar5 = this->NumChannels;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  uVar8 = this->NumEnergyHistory - 1U & (this->OverallEnergyHistory).IndexMask;
  uVar6 = 0;
  if ((int)uVar8 < (this->OverallEnergyHistory).Elements.ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar10 = *(float *)((this->OverallEnergyHistory).Elements.AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 4);
  pFVar7 = TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::FindChecked(&this->AggregateLoudnessStats,-1);
  local_78[0].Channel = -1;
  local_78[0].Timestamp = fVar11;
  local_78[0].Energy = fVar10;
  fVar11 = logf(fVar10);
  local_78[0].IntegratedLoudness = pFVar7->IntegratedLoudness;
  local_78[0].Loudness = fVar11 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar3;
  local_78[0].ShortTermLoudness = pFVar7->ShortTermLoudness;
  local_78[0].GatedLoudness = pFVar7->GatedLoudness;
  FLKFSAnalyzerResult::Add(param_1,local_78);
  return;
}

// Analyze @ 14d7fc270

void __thiscall
Audio::FLKFSWorker::Analyze
          (FLKFSWorker *this,TArrayView<float_const_,int> *param_1,IAnalyzerResult *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  TArrayView<float_const_,int> local_68;
  TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_> local_58;
  
  if ((param_2 == (IAnalyzerResult *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != LoudnessResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                         ,0xb8,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *(undefined4 *)&param_1->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iVar5 = param_1->ArrayNum;
  uVar6 = *(undefined4 *)&param_1->field_0xc;
  local_58._padding_ = (longlong)(this->InternalBuffer).StorageBuffer.AllocatorInstance.Data;
  iVar1 = (this->InternalBuffer).StorageBuffer.ArrayNum;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58._padding_._0_4_ = (this->InternalBuffer).NumWindowSamples;
  local_58._padding_._4_4_ = (this->InternalBuffer).NumHopSamples;
  local_58._padding_._4_4_ = (this->InternalBuffer).NumUnderflowSamples;
  local_58._padding_._0_4_ = (iVar5 - (int)local_58._padding_) + iVar1;
  if ((int)local_58._padding_ < 0) {
    local_58._padding_._0_4_ = -1;
  }
  local_58._padding_ =
       (longlong)&___7__TAutoSlidingWindow_MV__TSizedDefaultAllocator__0CA____Audio__6B_;
  local_58.WindowBuffer = &this->InternalWindow;
  local_58._padding_._0_4_ = iVar1;
  local_58._padding_._0_4_ = uVar3;
  local_58._padding_._4_4_ = uVar4;
  local_58._padding_._0_4_ = iVar5;
  local_58._padding_._4_4_ = uVar6;
  local_58._padding_ = (longlong)&this->InternalBuffer;
  AnalyzeSlidingWindow(this,&local_58,(FLKFSAnalyzerResult *)param_2);
  local_68.DataPtr = (float *)CONCAT44(local_58._padding_._4_4_,(undefined4)local_58._padding_);
  local_68._12_4_ = local_58._padding_._4_4_;
  local_68.ArrayNum = (int)local_58._padding_;
  TSlidingBuffer<float>::StoreForFutureWindows
            ((TSlidingBuffer<float> *)local_58._padding_,&local_68);
  return;
}

// AnalyzeSlidingWindow @ 14d800180

void __thiscall
Audio::FLKFSWorker::AnalyzeSlidingWindow
          (FLKFSWorker *this,TAutoSlidingWindow<float,TSizedDefaultAllocator<32>_> *param_1,
          FLKFSAnalyzerResult *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
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
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                          ,0xc1,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->NumAnalysisHopWindows < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumAnalysisHopWindows > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LKFSFactory.cpp"
                          ,0xc2,L""), bVar12)) {
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
                       (&this->Analyzer,local_58,this->NumChannels,&local_68);
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

// AnalyzeWindow @ 14d8008d0

void __thiscall
Audio::FLKFSWorker::AnalyzeWindow(FLKFSWorker *this,TArrayView<float_const_,int> *param_1)

{
  int iVar1;
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
                    (&this->Analyzer,local_28,this->NumChannels,&local_38);
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

// UpdateAggregateLoudnessStats @ 14d80b580

void __thiscall Audio::FLKFSWorker::UpdateAggregateLoudnessStats(FLKFSWorker *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FAggregateLoudnessStats *pFVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  float fVar11;
  
  fVar5 = __real_3f30e560;
  fVar4 = __real_33fbc8f3;
  fVar3 = __real_3dcccccd;
  fVar2 = __real_41200000;
  if ((this->NumEnergyHistory == 1) ||
     (this->NumEnergyHistory % this->NumIntegratedHopHistoryResults == 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  iVar6 = 0;
  if (0 < this->NumChannels) {
    do {
      pFVar7 = TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               ::FindChecked(&this->AggregateLoudnessStats,iVar6);
      iVar1 = this->NumChannels;
      iVar8 = (this->NumEnergyHistory - this->NumShortTermHistoryResults) * iVar1;
      iVar10 = this->NumEnergyHistory * iVar1 + iVar6;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      fVar11 = LKFSFactoryPrivate::CalculateAverageFromHistory
                         (&this->ChannelEnergyHistory,iVar8 + iVar6,iVar10,iVar1);
      fVar11 = logf(fVar11);
      pFVar7->ShortTermLoudness = fVar11 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar5;
      if (bVar9 != false) {
        iVar8 = this->NumEnergyHistory - iVar1 * this->NumIntegratedHistoryResults;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar8 = iVar8 + iVar6;
        fVar11 = LKFSFactoryPrivate::CalculateAverageFromHistory
                           (&this->ChannelEnergyHistory,iVar8,iVar10,iVar1);
        fVar11 = logf(fVar11);
        pFVar7->IntegratedLoudness = fVar11 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar5;
        fVar11 = LKFSFactoryPrivate::CalculateGatedAverageFromHistory
                           (&this->ChannelEnergyHistory,iVar8,iVar10,iVar1,fVar4);
        fVar11 = LKFSFactoryPrivate::CalculateGatedAverageFromHistory
                           (&this->ChannelEnergyHistory,iVar8,iVar10,iVar1,fVar11 * fVar3);
        fVar11 = logf(fVar11);
        pFVar7->GatedLoudness = fVar11 * fVar2 * LoudnessAnalyzerPrivate::Log10Scale - fVar5;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < this->NumChannels);
  }
  pFVar7 = TSortedMap<int,Audio::FLKFSWorker::FAggregateLoudnessStats,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::FindChecked(&this->AggregateLoudnessStats,-1);
  UpdateAggregateLoudnessStats(this,&this->OverallEnergyHistory,0,1,bVar9,pFVar7);
  return;
}

// UpdateAggregateLoudnessStats @ 14d80b790

void __thiscall
Audio::FLKFSWorker::UpdateAggregateLoudnessStats
          (FLKFSWorker *this,TCircularBuffer<float> *param_1,int param_2,int param_3,bool param_4,
          FAggregateLoudnessStats *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = (this->NumEnergyHistory - this->NumShortTermHistoryResults) * param_3;
  iVar2 = this->NumEnergyHistory * param_3 + param_2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  fVar3 = LKFSFactoryPrivate::CalculateAverageFromHistory(param_1,iVar1 + param_2,iVar2,param_3);
  fVar3 = logf(fVar3);
  param_5->ShortTermLoudness =
       fVar3 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
  if (param_4) {
    iVar1 = this->NumEnergyHistory - param_3 * this->NumIntegratedHistoryResults;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = iVar1 + param_2;
    fVar3 = LKFSFactoryPrivate::CalculateAverageFromHistory(param_1,iVar1,iVar2,param_3);
    fVar3 = logf(fVar3);
    param_5->IntegratedLoudness =
         fVar3 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
    fVar3 = LKFSFactoryPrivate::CalculateGatedAverageFromHistory
                      (param_1,iVar1,iVar2,param_3,__real_33fbc8f3);
    fVar3 = LKFSFactoryPrivate::CalculateGatedAverageFromHistory
                      (param_1,iVar1,iVar2,param_3,fVar3 * __real_3dcccccd);
    fVar3 = logf(fVar3);
    param_5->GatedLoudness =
         fVar3 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
  }
  return;
}

