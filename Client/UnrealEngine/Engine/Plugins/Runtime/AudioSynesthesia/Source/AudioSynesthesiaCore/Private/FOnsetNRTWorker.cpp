// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 7

// FOnsetNRTWorker @ 14d7f7fb0

FOnsetNRTWorker * __thiscall
Audio::FOnsetNRTWorker::FOnsetNRTWorker
          (FOnsetNRTWorker *this,FAnalyzerNRTParameters *param_1,FOnsetNRTSettings *param_2)

{
  FOnsetStrengthSettings *pFVar1;
  TArray<TUniquePtr<Audio::FOnsetStrengthAnalyzer,TDefaultDelete<Audio::FOnsetStrengthAnalyzer>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  int *piVar4;
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  undefined3 uVar9;
  float fVar10;
  float fVar11;
  EMelNormalization EVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FOnsetNRTWorker *pFVar16;
  FOnsetStrengthAnalyzer *pFVar17;
  FOnsetStrengthAnalyzer *this_00;
  FOnsetStrengthAnalyzer *pFVar18;
  TSlidingBuffer<float> *pTVar19;
  TSlidingBuffer<float> *pTVar20;
  uint uVar21;
  undefined8 local_38 [2];
  
  pFVar1 = &param_2->OnsetStrengthSettings;
  this->_padding_ = (longlong)&___7FOnsetNRTWorker_Audio__6B_;
  (this->Settings)._padding_ = (longlong)&___7FOnsetNRTSettings_Audio__6B_;
  iVar15 = pFVar1->NumWindowFrames;
  iVar14 = (param_2->OnsetStrengthSettings).ComparisonLag;
  iVar8 = (param_2->OnsetStrengthSettings).FFTSize;
  pTVar2 = &this->OnsetStrengthAnalyzers;
  piVar3 = &(this->MonoBuffer).ArrayNum;
  (this->Settings).OnsetStrengthSettings.NumHopFrames = pFVar1->NumHopFrames;
  (this->Settings).OnsetStrengthSettings.NumWindowFrames = iVar15;
  (this->Settings).OnsetStrengthSettings.ComparisonLag = iVar14;
  (this->Settings).OnsetStrengthSettings.FFTSize = iVar8;
  piVar4 = &(this->MonoBuffer).ArrayMax;
  uVar9 = *(undefined3 *)&(param_2->OnsetStrengthSettings).field_0x11;
  fVar10 = (param_2->OnsetStrengthSettings).NoiseFloorDb;
  iVar15 = (param_2->OnsetStrengthSettings).MelSettings.NumBands;
  fVar11 = (param_2->OnsetStrengthSettings).MelSettings.KernelMinCenterFreq;
  pTVar5 = &this->SlidingBuffer;
  (this->Settings).OnsetStrengthSettings.WindowType = (param_2->OnsetStrengthSettings).WindowType;
  *(undefined3 *)&(this->Settings).OnsetStrengthSettings.field_0x11 = uVar9;
  (this->Settings).OnsetStrengthSettings.NoiseFloorDb = fVar10;
  (this->Settings).OnsetStrengthSettings.MelSettings.NumBands = iVar15;
  (this->Settings).OnsetStrengthSettings.MelSettings.KernelMinCenterFreq = fVar11;
  EVar12 = (param_2->OnsetStrengthSettings).MelSettings.Normalization;
  uVar9 = *(undefined3 *)&(param_2->OnsetStrengthSettings).MelSettings.field_0xd;
  (this->Settings).OnsetStrengthSettings.MelSettings.KernelMaxCenterFreq =
       (param_2->OnsetStrengthSettings).MelSettings.KernelMaxCenterFreq;
  (this->Settings).OnsetStrengthSettings.MelSettings.Normalization = EVar12;
  *(undefined3 *)&(this->Settings).OnsetStrengthSettings.MelSettings.field_0xd = uVar9;
  (this->Settings).OnsetStrengthSettings.MelSettings.BandWidthStretch =
       (param_2->OnsetStrengthSettings).MelSettings.BandWidthStretch;
  iVar15 = (param_2->PeakPickerSettings).NumPostMax;
  iVar14 = (param_2->PeakPickerSettings).NumPreMean;
  iVar8 = (param_2->PeakPickerSettings).NumPostMean;
  (this->Settings).PeakPickerSettings.NumPreMax = (param_2->PeakPickerSettings).NumPreMax;
  (this->Settings).PeakPickerSettings.NumPostMax = iVar15;
  (this->Settings).PeakPickerSettings.NumPreMean = iVar14;
  (this->Settings).PeakPickerSettings.NumPostMean = iVar8;
  fVar10 = (param_2->PeakPickerSettings).MeanDelta;
  (this->Settings).PeakPickerSettings.NumWait = (param_2->PeakPickerSettings).NumWait;
  (this->Settings).PeakPickerSettings.MeanDelta = fVar10;
  (this->Settings).bDownmixToMono = param_2->bDownmixToMono;
  this->NumFrames = 0;
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->NumWindowFrames = 0x1000;
  this->NumWindowSamples = 0;
  this->MonoScaling = 1.0;
  (this->HopBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HopBuffer).ArrayNum = 0;
  (this->HopBuffer).ArrayMax = 0;
  (this->ChannelBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelBuffer).ArrayNum = 0;
  (this->ChannelBuffer).ArrayMax = 0;
  (this->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  pTVar5->Ptr = (TSlidingBuffer<float> *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OnsetStrengthAnalyzers).ArrayNum = 0;
  (this->OnsetStrengthAnalyzers).ArrayMax = 0;
  (this->OnsetStrengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnsetStrengths).ArrayNum = 0;
  (this->OnsetStrengths).ArrayMax = 0;
  if ((this->NumChannels < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetNRTFactory.cpp"
                          ,0x7f,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FOnsetNRTWorker *)(*pcVar7)();
    return pFVar16;
  }
  if ((this->SampleRate <= 0.0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SampleRate > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetNRTFactory.cpp"
                          ,0x80,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FOnsetNRTWorker *)(*pcVar7)();
    return pFVar16;
  }
  if ((this->Settings).bDownmixToMono == false) {
    iVar15 = this->NumChannels;
    pFVar17 = (FOnsetStrengthAnalyzer *)0x0;
    if (0 < iVar15) {
      do {
        this_00 = ::operator_new(0xf8);
        pFVar18 = (FOnsetStrengthAnalyzer *)0x0;
        if (this_00 != (FOnsetStrengthAnalyzer *)0x0) {
          pFVar18 = FOnsetStrengthAnalyzer::FOnsetStrengthAnalyzer(this_00,pFVar1,this->SampleRate);
        }
        iVar15 = (this->OnsetStrengthAnalyzers).ArrayNum;
        if (iVar15 == (this->OnsetStrengthAnalyzers).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,
                              &(this->OnsetStrengthAnalyzers).ArrayMax);
        }
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        uVar21 = (int)pFVar17 + 1;
        pFVar17 = (FOnsetStrengthAnalyzer *)(ulonglong)uVar21;
        (this->OnsetStrengthAnalyzers).ArrayNum = iVar15 + 1;
        *(FOnsetStrengthAnalyzer **)(pFVar6 + (longlong)iVar15 * 8) = pFVar18;
        iVar15 = this->NumChannels;
      } while ((int)uVar21 < iVar15);
    }
  }
  else {
    uVar21 = this->NumWindowFrames;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    *piVar3 = 0;
    if (*piVar4 < (int)uVar21) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar21,&(this->MonoBuffer).AllocatorInstance,0,piVar4);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumWindowFrames,&(this->MonoBuffer).AllocatorInstance,piVar3,piVar4);
    this->MonoScaling = __real_3f800000 / SQRT((float)this->NumChannels);
    pFVar17 = ::operator_new(0xf8);
    if (pFVar17 == (FOnsetStrengthAnalyzer *)0x0) {
      pFVar17 = (FOnsetStrengthAnalyzer *)0x0;
    }
    else {
      pFVar17 = FOnsetStrengthAnalyzer::FOnsetStrengthAnalyzer(pFVar17,pFVar1,this->SampleRate);
    }
    iVar14 = (this->OnsetStrengthAnalyzers).ArrayNum;
    if (iVar14 == (this->OnsetStrengthAnalyzers).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->OnsetStrengthAnalyzers).ArrayMax)
      ;
    }
    iVar15 = 1;
    (this->OnsetStrengthAnalyzers).ArrayNum = iVar14 + 1;
    *(FOnsetStrengthAnalyzer **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = pFVar17;
  }
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
            (&this->OnsetStrengths,iVar15);
  this->NumWindowSamples = this->NumChannels * this->NumWindowFrames;
  pTVar19 = ::operator_new(0x20);
  if (pTVar19 == (TSlidingBuffer<float> *)0x0) {
    pTVar19 = (TSlidingBuffer<float> *)0x0;
  }
  else {
    iVar15 = this->NumWindowSamples;
    pTVar19->NumHopSamples = iVar15;
    (pTVar19->StorageBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar19->StorageBuffer).ArrayNum = 0;
    (pTVar19->StorageBuffer).ArrayMax = 0;
    pTVar19->NumWindowSamples = iVar15;
    pTVar19->NumUnderflowSamples = 0;
    if ((iVar15 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumWindowSamples >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                            ,0x27,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FOnsetNRTWorker *)(*pcVar7)();
      return pFVar16;
    }
    if ((pTVar19->NumHopSamples < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumHopSamples >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                            ,0x28,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FOnsetNRTWorker *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar5 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)local_38) {
    if (pTVar19 == (TSlidingBuffer<float> *)0x0) {
      return this;
    }
    pFVar6 = (pTVar19->StorageBuffer).AllocatorInstance.Data;
    pTVar20 = pTVar19;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pTVar20 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar19;
    if (pTVar20 == (TSlidingBuffer<float> *)0x0) {
      return this;
    }
    pFVar6 = (pTVar20->StorageBuffer).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pTVar20,0x20);
  return this;
}

// Analyze @ 14d7fd030

void __thiscall
Audio::FOnsetNRTWorker::Analyze
          (FOnsetNRTWorker *this,TArrayView<float_const_,int> *param_1,IAnalyzerNRTResult *param_2)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AnalyzeMultichannel(this,&local_18,param_2,false);
  return;
}

// AnalyzeMultichannel @ 14d7ff480

void __thiscall
Audio::FOnsetNRTWorker::AnalyzeMultichannel
          (FOnsetNRTWorker *this,TArrayView<float_const_,int> *param_1,IAnalyzerNRTResult *param_2,
          bool param_3)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  int iVar21;
  int local_1a8;
  int local_198;
  int local_158;
  int local_148;
  TScopedSlidingWindow<float> local_138;
  TArray<float,TAlignedHeapAllocator<16>_> *local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [3];
  
  this->NumFrames = this->NumFrames + param_1->ArrayNum / this->NumChannels;
  if ((param_2 == (IAnalyzerNRTResult *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != OnsetResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetNRTFactory.cpp"
                         ,0xb0,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.ArrayNum = param_1->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TScopedSlidingWindow<float>::TScopedSlidingWindow<float>
            (&local_138,(this->SlidingBuffer).Ptr,&local_a8,param_3);
  fVar7 = __real_3f800000;
  pTVar1 = &this->HopBuffer;
  local_138._padding_ =
       (longlong)&___7__TAutoSlidingWindow_MV__TAlignedHeapAllocator__0BA____Audio__6B_;
  local_f8 = pTVar1;
  if ((this->Settings).bDownmixToMono == false) {
    if ((int)local_138._padding_ == -1) {
      local_158 = -1;
      local_148 = -1;
    }
    else {
      local_158 = (int)local_138._padding_;
      local_148 = local_138._padding_._4_4_;
      if ((int)local_138._padding_ < local_138._padding_._4_4_) {
        local_148 = -1;
      }
    }
    while (local_148 != -1) {
      if ((int)(uint)local_138._padding_ < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_138._padding_);
      }
      piVar2 = &(this->HopBuffer).ArrayMax;
      piVar3 = &(this->HopBuffer).ArrayNum;
      *piVar3 = 0;
      if ((this->HopBuffer).ArrayMax < (int)(uint)local_138._padding_) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,piVar3,piVar2);
      iVar15 = 0;
      if (local_148 < (int)local_138._padding_) {
        iVar15 = (int)local_138._padding_ - local_148;
        memcpy((pTVar1->AllocatorInstance).Data,
               (void *)(local_138._padding_ + (longlong)local_148 * 4),(longlong)iVar15 << 2);
      }
      if (iVar15 < (int)(uint)local_138._padding_) {
        iVar11 = (local_148 - (int)local_138._padding_) + iVar15;
        iVar17 = (int)local_138._padding_ - iVar11;
        if ((int)((uint)local_138._padding_ - iVar15) < iVar17) {
          iVar17 = (uint)local_138._padding_ - iVar15;
        }
        if (0 < iVar17) {
          memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,
                 (void *)(CONCAT44(local_138._padding_._4_4_,(undefined4)local_138._padding_) +
                         (longlong)iVar11 * 4),(longlong)iVar17 << 2);
          iVar15 = iVar15 + iVar17;
        }
        if (iVar15 < (int)(uint)local_138._padding_) {
          memset((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
                 (longlong)(int)((uint)local_138._padding_ - iVar15) << 2);
        }
      }
      iVar15 = *piVar3;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      iVar17 = this->NumChannels;
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((iVar15 % iVar17 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterleavedArray.Num() % NumChannels == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                             ,0x91,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = &this->ChannelBuffer;
      if (0 < iVar17) {
        iVar11 = 0;
        do {
          iVar16 = (int)((longlong)iVar15 / (longlong)iVar17);
          if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((longlong)iVar15 / (longlong)iVar17 & 0xffffffff);
          }
          piVar2 = &(this->ChannelBuffer).ArrayMax;
          piVar3 = &(this->ChannelBuffer).ArrayNum;
          *piVar3 = 0;
          if ((this->ChannelBuffer).ArrayMax < iVar16) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,0,piVar2);
          }
          if (0 < iVar16) {
            UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,piVar3,piVar2);
          }
          pFVar19 = (pTVar4->AllocatorInstance).Data;
          iVar21 = 0;
          lVar10 = 0;
          iVar14 = iVar11;
          if (3 < iVar16) {
            uVar9 = (iVar16 - 4U >> 2) + 1;
            uVar20 = (ulonglong)uVar9;
            iVar21 = uVar9 * 4;
            lVar10 = (ulonglong)uVar9 * 4;
            pFVar18 = pFVar19 + 8;
            do {
              iVar12 = iVar14 + iVar17 + iVar17;
              *(undefined4 *)(pFVar18 + -8) = *(undefined4 *)(pFVar5 + (longlong)iVar14 * 4);
              iVar13 = iVar12 + iVar17;
              *(undefined4 *)(pFVar18 + -4) =
                   *(undefined4 *)(pFVar5 + (longlong)(iVar14 + iVar17) * 4);
              iVar14 = iVar13 + iVar17;
              *(undefined4 *)pFVar18 = *(undefined4 *)(pFVar5 + (longlong)iVar12 * 4);
              *(undefined4 *)(pFVar18 + 4) = *(undefined4 *)(pFVar5 + (longlong)iVar13 * 4);
              uVar20 = uVar20 - 1;
              pFVar18 = pFVar18 + 0x10;
            } while (uVar20 != 0);
          }
          if (iVar21 < iVar16) {
            uVar20 = (ulonglong)(uint)(iVar16 - iVar21);
            pFVar19 = pFVar19 + lVar10 * 4;
            do {
              lVar10 = (longlong)iVar14;
              iVar14 = iVar14 + iVar17;
              *(undefined4 *)pFVar19 = *(undefined4 *)(pFVar5 + lVar10 * 4);
              uVar20 = uVar20 - 1;
              pFVar19 = pFVar19 + 4;
            } while (uVar20 != 0);
          }
          AnalyzeWindow(this,pTVar4,iVar11,(FOnsetNRTResult *)param_2);
          iVar11 = iVar11 + 1;
        } while ((iVar11 < iVar17) && (iVar11 != -1));
      }
      local_148 = local_148 + local_138._padding_._4_4_;
      if (local_158 < local_148) {
        local_148 = -1;
      }
    }
  }
  else {
    if ((int)local_138._padding_ == -1) {
      local_1a8 = -1;
      local_198 = -1;
    }
    else {
      local_1a8 = (int)local_138._padding_;
      local_198 = local_138._padding_._4_4_;
      if ((int)local_138._padding_ < local_138._padding_._4_4_) {
        local_198 = -1;
      }
    }
    while (local_198 != -1) {
      if ((int)(uint)local_138._padding_ < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_138._padding_);
      }
      piVar2 = &(this->HopBuffer).ArrayMax;
      (this->HopBuffer).ArrayNum = 0;
      if (*piVar2 < (int)(uint)local_138._padding_) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,
                 &(this->HopBuffer).ArrayNum,piVar2);
      iVar15 = 0;
      if (local_198 < (int)local_138._padding_) {
        iVar15 = (int)local_138._padding_ - local_198;
        memcpy((pTVar1->AllocatorInstance).Data,
               (void *)(local_138._padding_ + (longlong)local_198 * 4),(longlong)iVar15 << 2);
      }
      if (iVar15 < (int)(uint)local_138._padding_) {
        iVar11 = (local_198 - (int)local_138._padding_) + iVar15;
        iVar17 = (int)local_138._padding_ - iVar11;
        if ((int)((uint)local_138._padding_ - iVar15) < iVar17) {
          iVar17 = (uint)local_138._padding_ - iVar15;
        }
        if (0 < iVar17) {
          memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,
                 (void *)(CONCAT44(local_138._padding_._4_4_,(undefined4)local_138._padding_) +
                         (longlong)iVar11 * 4),(longlong)iVar17 << 2);
          iVar15 = iVar15 + iVar17;
        }
        if (iVar15 < (int)(uint)local_138._padding_) {
          memset((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
                 (longlong)(int)((uint)local_138._padding_ - iVar15) << 2);
        }
      }
      memset((this->MonoBuffer).AllocatorInstance.Data,0,(longlong)this->NumWindowFrames << 2);
      iVar15 = (this->HopBuffer).ArrayNum;
      iVar17 = this->NumChannels;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((iVar15 % iVar17 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterleavedArray.Num() % NumChannels == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                             ,0x91,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = &this->ChannelBuffer;
      iVar11 = (0 < iVar17) - 1;
      if (0 < iVar17) {
        piVar2 = &(this->ChannelBuffer).ArrayNum;
        iVar16 = (int)((longlong)iVar15 / (longlong)iVar17);
        if (iVar11 != -1) goto LAB_14d7ff7b4;
        if (iVar16 < 0) {
LAB_14d7ffddf:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((longlong)iVar15 / (longlong)iVar17 & 0xffffffff);
        }
        *piVar2 = 0;
        if ((this->ChannelBuffer).ArrayMax < iVar16) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar16,&pTVar4->AllocatorInstance,0,&(this->ChannelBuffer).ArrayMax);
        }
        while( true ) {
          local_e8 = (this->MonoBuffer).AllocatorInstance.Data;
          iVar14 = (this->MonoBuffer).ArrayNum;
          if ((iVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_d8 = (pTVar4->AllocatorInstance).Data;
          iVar21 = *piVar2;
          iStack_e0 = iVar14;
          if ((iVar21 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_98._12_4_ = uStack_dc;
          local_98.ArrayNum = iStack_e0;
          local_88._12_4_ = uStack_cc;
          local_88.ArrayNum = iVar21;
          local_88.DataPtr = (float *)local_d8;
          local_98.DataPtr = (float *)local_e8;
          iStack_d0 = iVar21;
          ArrayMixIn(&local_88,&local_98);
          if (((iVar11 == -1) || (iVar11 = iVar11 + 1, iVar17 <= iVar11)) || (iVar11 == -1)) break;
LAB_14d7ff7b4:
          if (iVar16 < 0) goto LAB_14d7ffddf;
          piVar3 = &(this->ChannelBuffer).ArrayMax;
          *piVar2 = 0;
          if ((this->ChannelBuffer).ArrayMax < iVar16) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,0,piVar3);
          }
          if (0 < iVar16) {
            UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,piVar2,piVar3);
          }
          lVar10 = 0;
          pFVar19 = (pTVar4->AllocatorInstance).Data;
          iVar21 = 0;
          iVar14 = iVar11;
          if (3 < iVar16) {
            uVar9 = (iVar16 - 4U >> 2) + 1;
            uVar20 = (ulonglong)uVar9;
            iVar21 = uVar9 * 4;
            lVar10 = (ulonglong)uVar9 * 4;
            pFVar18 = pFVar19 + 8;
            do {
              iVar12 = iVar14 + iVar17 + iVar17;
              *(undefined4 *)(pFVar18 + -8) = *(undefined4 *)(pFVar5 + (longlong)iVar14 * 4);
              iVar13 = iVar12 + iVar17;
              *(undefined4 *)(pFVar18 + -4) =
                   *(undefined4 *)(pFVar5 + (longlong)(iVar14 + iVar17) * 4);
              iVar14 = iVar13 + iVar17;
              *(undefined4 *)pFVar18 = *(undefined4 *)(pFVar5 + (longlong)iVar12 * 4);
              *(undefined4 *)(pFVar18 + 4) = *(undefined4 *)(pFVar5 + (longlong)iVar13 * 4);
              uVar20 = uVar20 - 1;
              pFVar18 = pFVar18 + 0x10;
            } while (uVar20 != 0);
          }
          if (iVar21 < iVar16) {
            uVar20 = (ulonglong)(uint)(iVar16 - iVar21);
            pFVar19 = pFVar19 + lVar10 * 4;
            do {
              lVar10 = (longlong)iVar14;
              iVar14 = iVar14 + iVar17;
              *(undefined4 *)pFVar19 = *(undefined4 *)(pFVar5 + lVar10 * 4);
              uVar20 = uVar20 - 1;
              pFVar19 = pFVar19 + 4;
            } while (uVar20 != 0);
          }
        }
      }
      iVar15 = this->NumChannels;
      local_c8 = (this->MonoBuffer).AllocatorInstance.Data;
      iVar17 = (this->MonoBuffer).ArrayNum;
      if ((iVar17 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iVar17;
      local_78.DataPtr = (float *)local_c8;
      iStack_c0 = iVar17;
      ArrayMultiplyByConstantInPlace(&local_78,fVar7 / SQRT((float)iVar15));
      AnalyzeWindow(this,&this->MonoBuffer,0,(FOnsetNRTResult *)param_2);
      local_198 = local_198 + local_138._padding_._4_4_;
      if (local_1a8 < local_198) {
        local_198 = -1;
      }
    }
  }
  TSlidingBuffer<float>::StoreForFutureWindows
            ((TSlidingBuffer<float> *)
             CONCAT44(local_138.SlidingBuffer._4_4_,local_138.SlidingBuffer._0_4_),local_68);
  return;
}

// AnalyzeWindow @ 14d801250

void __thiscall
Audio::FOnsetNRTWorker::AnalyzeWindow
          (FOnsetNRTWorker *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          FOnsetNRTResult *param_3)

{
  FOnsetStrengthAnalyzer *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  uVar3 = 0;
  if (param_2 < (this->OnsetStrengthAnalyzers).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(FOnsetStrengthAnalyzer **)
             ((this->OnsetStrengthAnalyzers).AllocatorInstance.Data + (longlong)param_2 * 8);
  local_38 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar4;
  local_28.DataPtr = (float *)local_38;
  iStack_30 = iVar4;
  FOnsetStrengthAnalyzer::AnalyzeAudio(this_00,&local_28,&local_48,false);
  uVar3 = 0;
  if (param_2 < (this->OnsetStrengths).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)
           ((this->OnsetStrengths).AllocatorInstance.Data + (longlong)param_2 * 0x10);
  if (pTVar5 == &local_48) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar6 = (longlong)local_48.ArrayNum;
  if (local_48.ArrayNum != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_48.ArrayNum,(ForAnyElementType *)pTVar5,&pTVar5->ArrayNum,
                       &pTVar5->ArrayMax);
    memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 4,local_48.AllocatorInstance.Data,
           lVar6 << 2);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ExtractOnsetsFromOnsetStrengths @ 14d804d10

void __thiscall
Audio::FOnsetNRTWorker::ExtractOnsetsFromOnsetStrengths
          (FOnsetNRTWorker *this,FOnsetNRTResult *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  TMap<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
  *this_01;
  bool bVar15;
  uint uVar16;
  int iVar17;
  TArray<Audio::FOnset,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong lVar19;
  FFloatInterval *pFVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 local_res8 [8];
  FOnsetNRTResult *local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  FPeakPicker local_128;
  uint local_110;
  longlong local_108;
  TArray<float,TSizedDefaultAllocator<32>_> local_100;
  TMap<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
  *local_f0;
  TMap<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
  *local_e8;
  FScriptContainerElement *local_e0;
  float *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8 [6];
  
  fVar13 = __real_7f800000;
  fVar12 = __real_358637bd;
  uVar24 = 0;
  if (0 < (this->OnsetStrengths).ArrayNum) {
    local_f0 = &param_1->ChannelOnsets;
    local_e8 = &param_1->ChannelOnsetStrengthIntervals;
    local_108 = 0;
    uVar21 = uVar24;
    local_res10 = param_1;
    do {
      this_01 = local_e8;
      this_00 = local_f0;
      uVar25 = (uint)uVar21;
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar23 = ~uVar25 >> 0x1f;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      uVar16 = 0;
      if ((int)uVar25 < (this->OnsetStrengths).ArrayNum) {
        uVar16 = uVar23;
      }
      local_110 = uVar23;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->OnsetStrengths).AllocatorInstance.Data;
      local_d8 = *(float **)(pFVar9 + uVar24);
      iVar3 = *(int *)(pFVar9 + uVar24 + 8);
      if ((iVar3 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar14 = local_138._8_8_;
      iVar5 = local_138.ArrayMax;
      local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
      iStack_d0 = iVar3;
      if (((longlong)uVar14 < 0) && (iVar5 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
      }
      if (0 < iVar3) {
        local_b8._12_4_ = uStack_cc;
        local_b8.ArrayNum = iStack_d0;
        local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.DataPtr = local_d8;
        local_100.ArrayNum = 0;
        local_100.ArrayMax = 0;
        ArrayMinMaxNormalize(&local_b8,&local_100);
        local_128.Settings.NumPreMax = (this->Settings).PeakPickerSettings.NumPreMax;
        local_128.Settings.NumPostMax = (this->Settings).PeakPickerSettings.NumPostMax;
        local_128.Settings.NumPreMean = (this->Settings).PeakPickerSettings.NumPreMean;
        local_128.Settings.NumPostMean = (this->Settings).PeakPickerSettings.NumPostMean;
        iVar5 = local_100.ArrayNum;
        iVar3 = (this->Settings).PeakPickerSettings.NumWait;
        uVar4 = (this->Settings).PeakPickerSettings.MeanDelta;
        local_128.Settings.MeanDelta = (float)uVar4;
        if (fVar13 <= (float)uVar4) {
          local_128.Settings.MeanDelta = fVar13;
        }
        if (local_128.Settings.NumPreMax < 1) {
          local_128.Settings.NumPreMax = 1;
        }
        if (local_128.Settings.MeanDelta <= fVar12) {
          local_128.Settings.MeanDelta = fVar12;
        }
        if (local_128.Settings.NumPostMax < 1) {
          local_128.Settings.NumPostMax = 1;
        }
        if (local_128.Settings.NumPreMean < 1) {
          local_128.Settings.NumPreMean = 1;
        }
        if (local_128.Settings.NumPostMean < 1) {
          local_128.Settings.NumPostMean = 1;
        }
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        local_128.Settings.NumWait = iVar3;
        local_c8 = local_100.AllocatorInstance.Data;
        if ((local_100.ArrayNum < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iStack_c0 = iVar5;
        local_a8[0]._12_4_ = uStack_bc;
        local_a8[0].ArrayNum = iVar5;
        local_a8[0].DataPtr = (float *)local_c8;
        FPeakPicker::PickPeaks(&local_128,local_a8,&local_138);
        if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.AllocatorInstance.Data);
        }
      }
      local_res20[0] = uVar25;
      TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
      ::FindOrAddImpl<int_const_&>
                ((TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
                  *)this_00,uVar25,(int *)local_res20);
      TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
      ::FindOrAddImpl<int_const_&>
                ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                  *)this_01,local_res20[0],(int *)local_res20);
      iVar3 = local_138.ArrayNum;
      uVar21 = (ulonglong)local_138.ArrayNum;
      local_e0 = local_138.AllocatorInstance.Data + uVar21 * 4;
      FVar22.Data = local_138.AllocatorInstance.Data;
      while( true ) {
        pFVar9 = local_e0;
        if ((int)uVar21 != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar22.Data == pFVar9) break;
        fVar1 = this->SampleRate;
        uVar16 = *(uint *)FVar22.Data;
        if ((fVar1 <= 0.0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InSampleRate > 0.f",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                                ,0x5a,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar5 = (this->Settings).OnsetStrengthSettings.NumWindowFrames;
        iVar6 = (this->Settings).OnsetStrengthSettings.ComparisonLag;
        iVar7 = (this->Settings).OnsetStrengthSettings.NumHopFrames;
        iVar8 = (this->Settings).OnsetStrengthSettings.NumWindowFrames;
        uVar11 = 0;
        if ((int)uVar25 < (this->OnsetStrengths).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (this->OnsetStrengths).AllocatorInstance.Data;
        uVar23 = 0;
        if ((int)uVar16 < *(int *)(pFVar9 + uVar24 + 8)) {
          uVar23 = ~uVar16 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar2 = *(float *)(*(longlong *)(pFVar9 + uVar24) + (longlong)(int)uVar16 * 4);
        local_res18[0] = uVar25;
        pTVar18 = TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FOnset,TSizedDefaultAllocator<32>_>,0>_>
                              *)local_f0,uVar25,(int *)local_res18);
        iVar17 = pTVar18->ArrayNum;
        if (iVar17 == pTVar18->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
        }
        lVar19 = (longlong)iVar17;
        pTVar18->ArrayNum = iVar17 + 1;
        pFVar9 = (pTVar18->AllocatorInstance).Data;
        *(float *)(pFVar9 + lVar19 * 0xc + 4) =
             (float)((int)(iVar5 / 2 + (uVar16 * 2 - iVar6) * iVar7 + iVar8) / 2) / fVar1;
        *(float *)(pFVar9 + lVar19 * 0xc + 8) = fVar2;
        *(uint *)(pFVar9 + lVar19 * 0xc) = local_res18[0];
        pFVar20 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                              *)local_e8,local_res18[0],(int *)local_res18);
        if (*(float *)pFVar20 <= *(float *)&pFVar20->field_0x4) {
          if (fVar2 < *(float *)pFVar20) {
            *(float *)pFVar20 = fVar2;
          }
          if (*(float *)&pFVar20->field_0x4 < fVar2) goto LAB_14d805170;
        }
        else {
          *(float *)pFVar20 = fVar2;
LAB_14d805170:
          *(float *)&pFVar20->field_0x4 = fVar2;
        }
        FVar22.Data = FVar22.Data + 4;
        uVar21 = local_138._8_8_ & 0xffffffff;
        local_res10->bIsSortedChronologically = false;
        uVar23 = local_110;
      }
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      local_108 = local_108 + 1;
      uVar21 = (ulonglong)(uVar25 + 1);
      uVar24 = uVar24 + 0x10;
    } while ((int)(uVar25 + 1) < (this->OnsetStrengths).ArrayNum);
  }
  return;
}

// Finalize @ 14d805da0

void __thiscall Audio::FOnsetNRTWorker::Finalize(FOnsetNRTWorker *this,IAnalyzerNRTResult *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  uVar6 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48._8_8_ = (ulonglong)uStack_5c << 0x20;
  local_48.DataPtr = (float *)0x0;
  AnalyzeMultichannel(this,&local_48,param_1,true);
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (0 < (this->OnsetStrengthAnalyzers).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      uVar3 = 0;
      if ((int)uVar5 < (this->OnsetStrengthAnalyzers).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_58 = 0;
      uStack_50 = 0;
      local_38._8_8_ = (ulonglong)uStack_4c << 0x20;
      local_38.DataPtr = (float *)0x0;
      FOnsetStrengthAnalyzer::AnalyzeAudio
                (*(FOnsetStrengthAnalyzer **)
                  ((this->OnsetStrengthAnalyzers).AllocatorInstance.Data + uVar8),&local_38,
                 &local_78,true);
      uVar3 = 0;
      if ((int)uVar5 < (this->OnsetStrengths).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar9 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((this->OnsetStrengths).AllocatorInstance.Data + uVar10);
      if ((pTVar9 == &local_78) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = (longlong)local_78.ArrayNum;
      if (local_78.ArrayNum != 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_78.ArrayNum,(ForAnyElementType *)pTVar9,&pTVar9->ArrayNum,
                           &pTVar9->ArrayMax);
        memcpy((pTVar9->AllocatorInstance).Data + (longlong)iVar4 * 4,
               local_78.AllocatorInstance.Data,lVar7 << 2);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar8 = uVar8 + 8;
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar5 + 1) < (this->OnsetStrengthAnalyzers).ArrayNum);
  }
  if (param_1 == (IAnalyzerNRTResult *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != OnsetResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetNRTFactory.cpp"
                       ,0xe9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ExtractOnsetsFromOnsetStrengths(this,(FOnsetNRTResult *)param_1);
    *(float *)(param_1 + 1) = (float)this->NumFrames / this->SampleRate;
    FOnsetNRTResult::SortChronologically((FOnsetNRTResult *)param_1);
  }
  Reset(this);
  return;
}

// Reset @ 14d809e20

void __thiscall Audio::FOnsetNRTWorker::Reset(FOnsetNRTWorker *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  TSlidingBuffer<float> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForAnyElementType *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  uVar16 = 0;
  this->NumFrames = 0;
  pTVar5 = (this->SlidingBuffer).Ptr;
  if (pTVar5 != (TSlidingBuffer<float> *)0x0) {
    (this->SlidingBuffer).Ptr = (TSlidingBuffer<float> *)0x0;
    pFVar14 = (pTVar5->StorageBuffer).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    ::operator_delete(pTVar5,0x20);
  }
  if (0 < (this->OnsetStrengthAnalyzers).ArrayNum) {
    local_res18 = 0;
    do {
      lVar6 = local_res18;
      uVar10 = 0;
      if ((int)uVar16 < (this->OnsetStrengthAnalyzers).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)((this->OnsetStrengthAnalyzers).AllocatorInstance.Data + lVar6);
      iVar3 = *(int *)(lVar6 + 0xa0);
      pFVar11 = *(ForAnyElementType **)(lVar6 + 0x98);
      pFVar15 = pFVar11 + (longlong)iVar3 * 2;
      while( true ) {
        if (*(int *)(lVar6 + 0xa0) != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar15) break;
        piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
        pFVar2 = pFVar11 + 1;
        if (*(int *)((longlong)&pFVar11[1].Data + 4) < 0) {
          *(int *)&pFVar2->Data = 0;
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,pFVar11,0,piVar1);
        }
        else {
          *(int *)&pFVar2->Data = 0;
        }
        iVar4 = *(int *)(lVar6 + 0x18);
        iVar9 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (4,4,iVar4,pFVar11,(int *)pFVar2,piVar1);
        memset(pFVar11->Data + (longlong)iVar9 * 4,0,(longlong)iVar4 << 2);
        pFVar11 = pFVar11 + 2;
      }
      *(undefined4 *)(lVar6 + 0x48) = 0;
      if (*(int *)(lVar6 + 0x4c) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar6 + 0x40),0,(int *)(lVar6 + 0x4c));
      }
      uVar16 = uVar16 + 1;
      local_res18 = local_res18 + 8;
      *(undefined4 *)(lVar6 + 0x50) = 0;
    } while ((int)uVar16 < (this->OnsetStrengthAnalyzers).ArrayNum);
  }
  uVar12 = 0;
  uVar13 = uVar12;
  if (0 < (this->OnsetStrengths).ArrayNum) {
    do {
      uVar10 = (uint)uVar12;
      uVar16 = 0;
      if ((int)uVar10 < (this->OnsetStrengths).ArrayNum) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = (this->OnsetStrengths).AllocatorInstance.Data + uVar13;
      iVar3 = *(int *)(pFVar14 + 0xc);
      *(undefined4 *)&pFVar14[8].field_0x0 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar14,0,(int *)(pFVar14 + 0xc));
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar10 + 1) < (this->OnsetStrengths).ArrayNum);
  }
  return;
}

