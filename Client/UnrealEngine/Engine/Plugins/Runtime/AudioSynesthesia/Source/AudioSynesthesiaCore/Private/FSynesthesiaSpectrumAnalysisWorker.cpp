// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// FSynesthesiaSpectrumAnalysisWorker @ 14d7f8950

FSynesthesiaSpectrumAnalysisWorker * __thiscall
Audio::FSynesthesiaSpectrumAnalysisWorker::FSynesthesiaSpectrumAnalysisWorker
          (FSynesthesiaSpectrumAnalysisWorker *this,FAnalyzerParameters *param_1,
          FSynesthesiaSpectrumAnalysisSettings *param_2)

{
  int *piVar1;
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar2;
  TUniquePtr<Audio::FSynesthesiaSpectrumAnalyzer,TDefaultDelete<Audio::FSynesthesiaSpectrumAnalyzer>_>
  *pTVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  IFFTAlgorithm *pIVar9;
  code *pcVar10;
  float fVar11;
  bool bVar12;
  FSynesthesiaSpectrumAnalysisWorker *pFVar13;
  TSlidingBuffer<float> *pTVar14;
  FSynesthesiaSpectrumAnalyzer *pFVar15;
  FSynesthesiaSpectrumAnalyzer *pFVar16;
  TSlidingBuffer<float> *pTVar17;
  int iVar18;
  undefined8 local_48;
  longlong local_40;
  
  pFVar16 = (FSynesthesiaSpectrumAnalyzer *)0x0;
  this->_padding_ = (longlong)&___7FSynesthesiaSpectrumAnalysisWorker_Audio__6B_;
  piVar1 = &(this->MonoBuffer).ArrayMax;
  pTVar2 = &this->InternalBuffer;
  this->NumChannels = param_1->NumChannels;
  pTVar3 = &this->SpectrumAnalyzer;
  this->bDownmixToMono = true;
  this->NumOutputFrames = 0;
  this->NumWindowFrames = 0;
  this->NumWindowSamples = 0;
  this->NumHopFrames = 0;
  this->SampleRate = param_1->SampleRate;
  (this->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MonoBuffer).ArrayNum = 0;
  *piVar1 = 0;
  (this->ChannelBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelBuffer).ArrayNum = 0;
  (this->ChannelBuffer).ArrayMax = 0;
  (this->InternalWindow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalWindow).ArrayNum = 0;
  (this->InternalWindow).ArrayMax = 0;
  pTVar2->Ptr = (TSlidingBuffer<float> *)0x0;
  pTVar3->Ptr = (FSynesthesiaSpectrumAnalyzer *)0x0;
  this->FrameCounter = 0;
  if ((this->NumChannels < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalysisFactory.cpp"
                          ,0x1f,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FSynesthesiaSpectrumAnalysisWorker *)(*pcVar10)();
    return pFVar13;
  }
  if ((this->SampleRate < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SampleRate > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalysisFactory.cpp"
                          ,0x20,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FSynesthesiaSpectrumAnalysisWorker *)(*pcVar10)();
    return pFVar13;
  }
  uVar5 = (uint)param_2->_padding_;
  plVar4 = &param_2->_padding_;
  if (((uVar5 & uVar5 - 1) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(InAnalyzerSettings.FFTSize)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalysisFactory.cpp"
                          ,0x21,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FSynesthesiaSpectrumAnalysisWorker *)(*pcVar10)();
    return pFVar13;
  }
  fVar11 = __real_bf000000;
  this->NumOutputFrames = (int)*plVar4 / 2 + 1;
  uVar5 = (uint)*plVar4;
  this->NumWindowFrames = uVar5;
  this->NumWindowSamples = param_1->NumChannels * (int)*plVar4;
  iVar18 = -((int)ROUND(fVar11 - ((float)param_1->SampleRate + (float)param_1->SampleRate) *
                                 param_2->AnalysisPeriod) >> 1);
  if (iVar18 < 1) {
    iVar18 = 1;
  }
  this->NumHopFrames = iVar18;
  iVar6 = this->NumChannels;
  bVar12 = *(bool *)((longlong)&param_2->_padding_ + 6);
  this->bDownmixToMono = bVar12;
  if (bVar12 != false) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    (this->MonoBuffer).ArrayNum = 0;
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,&(this->MonoBuffer).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumWindowFrames,&(this->MonoBuffer).AllocatorInstance,
               &(this->MonoBuffer).ArrayNum,piVar1);
  }
  pTVar14 = ::operator_new(0x20);
  if (pTVar14 == (TSlidingBuffer<float> *)0x0) {
    pTVar14 = (TSlidingBuffer<float> *)0x0;
  }
  else {
    iVar7 = this->NumWindowSamples;
    pTVar14->NumHopSamples = iVar18 * iVar6;
    (pTVar14->StorageBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar14->StorageBuffer).ArrayNum = 0;
    (pTVar14->StorageBuffer).ArrayMax = 0;
    pTVar14->NumWindowSamples = iVar7;
    pTVar14->NumUnderflowSamples = 0;
    if ((iVar7 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumWindowSamples >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                            ,0x27,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      pFVar13 = (FSynesthesiaSpectrumAnalysisWorker *)(*pcVar10)();
      return pFVar13;
    }
    if ((pTVar14->NumHopSamples < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumHopSamples >= 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                            ,0x28,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      pFVar13 = (FSynesthesiaSpectrumAnalysisWorker *)(*pcVar10)();
      return pFVar13;
    }
  }
  if (pTVar2 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)&local_48) {
    if (pTVar14 == (TSlidingBuffer<float> *)0x0) goto LAB_14d7f8bd8;
    pFVar8 = (pTVar14->StorageBuffer).AllocatorInstance.Data;
    pTVar17 = pTVar14;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
  }
  else {
    pTVar17 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar14;
    if (pTVar17 == (TSlidingBuffer<float> *)0x0) goto LAB_14d7f8bd8;
    pFVar8 = (pTVar17->StorageBuffer).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
  }
  ::operator_delete(pTVar17,0x20);
LAB_14d7f8bd8:
  pFVar15 = ::operator_new(0x58);
  if (pFVar15 != (FSynesthesiaSpectrumAnalyzer *)0x0) {
    pFVar16 = FSynesthesiaSpectrumAnalyzer::FSynesthesiaSpectrumAnalyzer
                        (pFVar15,(float)param_1->SampleRate,
                         (FSynesthesiaSpectrumAnalyzerSettings *)plVar4);
  }
  if (pTVar3 == (TUniquePtr<Audio::FSynesthesiaSpectrumAnalyzer,TDefaultDelete<Audio::FSynesthesiaSpectrumAnalyzer>_>
                 *)&local_40) {
    if (pFVar16 == (FSynesthesiaSpectrumAnalyzer *)0x0) {
      return this;
    }
    pIVar9 = (pFVar16->FFT).Ptr;
    if (pIVar9 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar9)(pIVar9,1);
    }
    pFVar8 = (pFVar16->FFTOutput).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar8 = (pFVar16->WindowedBuffer).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar8 = (pFVar16->Window).WindowBuffer.AllocatorInstance.Data;
    pFVar15 = pFVar16;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
  }
  else {
    pFVar15 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar16;
    if (pFVar15 == (FSynesthesiaSpectrumAnalyzer *)0x0) {
      return this;
    }
    pIVar9 = (pFVar15->FFT).Ptr;
    if (pIVar9 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar9)(pIVar9,1);
    }
    pFVar8 = (pFVar15->FFTOutput).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar8 = (pFVar15->WindowedBuffer).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    pFVar8 = (pFVar15->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
  }
  ::operator_delete(pFVar15,0x58);
  return this;
}

// Analyze @ 14d7fd060

void __thiscall
Audio::FSynesthesiaSpectrumAnalysisWorker::Analyze
          (FSynesthesiaSpectrumAnalysisWorker *this,TArrayView<float_const_,int> *param_1,
          IAnalyzerResult *param_2)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  TSlidingBuffer<float> *pTVar7;
  FSynesthesiaSpectrumAnalyzer *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  float *pfVar11;
  undefined8 uVar12;
  float fVar13;
  float *pfVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  int iVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar33;
  ulonglong uVar34;
  int *local_res8;
  int local_res20;
  int local_224;
  int local_218;
  FSynesthesiaSpectrumEntry local_1f8;
  FSynesthesiaSpectrumEntry local_1e0;
  FSynesthesiaSpectrumEntry local_1c8;
  FScriptContainerElement *local_1b0;
  int *local_1a8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1a0;
  float *local_198;
  TSlidingBuffer<float> *local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<float,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88 [4];
  ulonglong uVar27;
  
  if ((param_2 == (IAnalyzerResult *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpectrumResult != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalysisFactory.cpp"
                          ,0x3b,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar7 = (this->InternalBuffer).Ptr;
  pfVar11 = param_1->DataPtr;
  uVar12._0_4_ = param_1->ArrayNum;
  uVar12._4_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar4 = (pTVar7->StorageBuffer).ArrayNum;
  local_1b0 = (pTVar7->StorageBuffer).AllocatorInstance.Data;
  local_188 = pTVar7;
  if ((iVar4 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar13 = __real_3f800000;
  iVar5 = pTVar7->NumHopSamples;
  local_1a8 = &this->NumChannels;
  uVar6 = pTVar7->NumWindowSamples;
  pTVar33 = &this->InternalWindow;
  local_res20 = pTVar7->NumUnderflowSamples;
  local_224 = (iVar4 - uVar6) + (int)uVar12;
  if (local_224 < 0) {
    local_224 = -1;
  }
  local_1a0 = pTVar33;
  if (*local_1a8 == 1) {
    if (local_224 == -1) {
      local_224 = -1;
      local_res20 = -1;
    }
    else if (local_224 < local_res20) {
      local_res20 = -1;
    }
    if (local_res20 != -1) {
      do {
        if (local_res20 == -1) {
          (this->InternalWindow).ArrayNum = 0;
          if ((this->InternalWindow).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&pTVar33->AllocatorInstance,0,&(this->InternalWindow).ArrayMax);
          }
        }
        else {
          if ((int)uVar6 < 0) goto LAB_14d7fde0f;
          piVar2 = &(this->InternalWindow).ArrayMax;
          (this->InternalWindow).ArrayNum = 0;
          if (*piVar2 < (int)uVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar6,&pTVar33->AllocatorInstance,0,piVar2);
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&pTVar33->AllocatorInstance,&(this->InternalWindow).ArrayNum,piVar2);
          iVar23 = 0;
          if (local_res20 < iVar4) {
            iVar23 = iVar4 - local_res20;
            memcpy((pTVar33->AllocatorInstance).Data,local_1b0 + (longlong)local_res20 * 4,
                   (longlong)iVar23 << 2);
          }
          if (iVar23 < (int)uVar6) {
            iVar19 = (local_res20 - iVar4) + iVar23;
            iVar28 = (int)uVar12 - iVar19;
            if ((int)(uVar6 - iVar23) < iVar28) {
              iVar28 = uVar6 - iVar23;
            }
            if (0 < iVar28) {
              memcpy((pTVar33->AllocatorInstance).Data + (longlong)iVar23 * 4,pfVar11 + iVar19,
                     (longlong)iVar28 << 2);
              iVar23 = iVar23 + iVar28;
            }
            if (iVar23 < (int)uVar6) {
              memset((pTVar33->AllocatorInstance).Data + (longlong)iVar23 * 4,0,
                     (longlong)(int)(uVar6 - iVar23) << 2);
            }
          }
        }
        iVar23 = this->NumOutputFrames;
        local_1f8.SpectrumValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f8.SpectrumValues.ArrayNum = 0;
        local_1f8.SpectrumValues.ArrayMax = 0;
        local_1f8.Channel = 0;
        local_1f8.Timestamp = (float)this->FrameCounter / (float)this->SampleRate;
        iVar28 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar23,&local_1f8.SpectrumValues.AllocatorInstance,
                            &local_1f8.SpectrumValues.ArrayNum,&local_1f8.SpectrumValues.ArrayMax);
        memset(local_1f8.SpectrumValues.AllocatorInstance.Data + (longlong)iVar28 * 4,0,
               (longlong)iVar23 << 2);
        iVar23 = local_1f8.SpectrumValues.ArrayNum;
        pFVar8 = (this->SpectrumAnalyzer).Ptr;
        local_178 = local_1f8.SpectrumValues.AllocatorInstance.Data;
        if ((local_1f8.SpectrumValues.ArrayNum < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_168 = (pTVar33->AllocatorInstance).Data;
        iStack_170 = iVar23;
        iVar23 = (this->InternalWindow).ArrayNum;
        if ((iVar23 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_f8._12_4_ = uStack_16c;
        local_f8.ArrayNum = iStack_170;
        local_e8._12_4_ = uStack_15c;
        local_e8.ArrayNum = iVar23;
        local_e8.DataPtr = (float *)local_168;
        local_f8.DataPtr = (float *)local_178;
        iStack_160 = iVar23;
        FSynesthesiaSpectrumAnalyzer::ProcessAudio(pFVar8,&local_e8,&local_f8);
        FSynesthesiaSpectrumResult::Add((FSynesthesiaSpectrumResult *)param_2,&local_1f8);
        this->FrameCounter = this->FrameCounter + (longlong)this->NumHopFrames;
        if (local_1f8.SpectrumValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.SpectrumValues.AllocatorInstance.Data);
        }
        if (local_res20 == -1) break;
        local_res20 = local_res20 + iVar5;
        if (local_224 < local_res20) {
          local_res20 = -1;
        }
      } while (local_res20 != -1);
    }
  }
  else if (this->bDownmixToMono == false) {
    if ((local_224 == -1) || (local_224 < local_res20)) {
      local_res20 = -1;
    }
    local_1a8 = &this->NumChannels;
    if (local_res20 != -1) {
      local_198 = pfVar11;
      do {
        pfVar14 = local_198;
        if (local_res20 == -1) {
          pTVar33->ArrayNum = 0;
          if (pTVar33->ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&pTVar33->AllocatorInstance,0,&pTVar33->ArrayMax);
          }
        }
        else {
          if ((int)uVar6 < 0) {
LAB_14d7fde0f:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
          }
          pTVar33->ArrayNum = 0;
          if (pTVar33->ArrayMax < (int)uVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar6,&pTVar33->AllocatorInstance,0,&pTVar33->ArrayMax);
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&pTVar33->AllocatorInstance,&pTVar33->ArrayNum,&pTVar33->ArrayMax);
          iVar23 = 0;
          if (local_res20 < iVar4) {
            iVar23 = iVar4 - local_res20;
            memcpy((pTVar33->AllocatorInstance).Data,local_1b0 + (longlong)local_res20 * 4,
                   (longlong)iVar23 << 2);
          }
          if (iVar23 < (int)uVar6) {
            iVar19 = (iVar23 - iVar4) + local_res20;
            iVar28 = (int)uVar12 - iVar19;
            if ((int)(uVar6 - iVar23) < iVar28) {
              iVar28 = uVar6 - iVar23;
            }
            if (0 < iVar28) {
              memcpy((pTVar33->AllocatorInstance).Data + (longlong)iVar23 * 4,pfVar14 + iVar19,
                     (longlong)iVar28 << 2);
              iVar23 = iVar23 + iVar28;
            }
            if (iVar23 < (int)uVar6) {
              memset((pTVar33->AllocatorInstance).Data + (longlong)iVar23 * 4,0,
                     (longlong)(int)(uVar6 - iVar23) << 2);
            }
          }
        }
        iVar23 = pTVar33->ArrayNum;
        pFVar9 = (pTVar33->AllocatorInstance).Data;
        local_218 = 0;
        iVar28 = *local_1a8;
        if ((iVar23 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((iVar23 % iVar28 != 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InterleavedArray.Num() % NumChannels == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                                ,0x91,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar1 = &this->ChannelBuffer;
        iVar19 = (0 < iVar28) - 1;
        if (0 < iVar28) {
          iVar29 = (int)((longlong)iVar23 / (longlong)iVar28);
          if (iVar19 != -1) goto LAB_14d7fdb03;
          if (iVar29 < 0) {
LAB_14d7fde06:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((longlong)iVar23 / (longlong)iVar28 & 0xffffffff);
          }
          (this->ChannelBuffer).ArrayNum = 0;
          if ((this->ChannelBuffer).ArrayMax < iVar29) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar29,&pTVar1->AllocatorInstance,0,&(this->ChannelBuffer).ArrayMax);
          }
          while( true ) {
            local_1c8.Channel = local_218;
            local_1c8.SpectrumValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1c8.SpectrumValues.ArrayNum = 0;
            local_1c8.SpectrumValues.ArrayMax = 0;
            iVar22 = this->NumOutputFrames;
            local_1c8.Timestamp = (float)this->FrameCounter / (float)this->SampleRate;
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar22,&local_1c8.SpectrumValues.AllocatorInstance,
                                &local_1c8.SpectrumValues.ArrayNum,
                                &local_1c8.SpectrumValues.ArrayMax);
            memset(local_1c8.SpectrumValues.AllocatorInstance.Data + (longlong)iVar17 * 4,0,
                   (longlong)iVar22 << 2);
            iVar22 = local_1c8.SpectrumValues.ArrayNum;
            pFVar8 = (this->SpectrumAnalyzer).Ptr;
            local_128 = local_1c8.SpectrumValues.AllocatorInstance.Data;
            if ((local_1c8.SpectrumValues.ArrayNum < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iStack_120 = iVar22;
            local_118 = (this->ChannelBuffer).AllocatorInstance.Data;
            iVar22 = (this->ChannelBuffer).ArrayNum;
            if ((iVar22 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_a8._12_4_ = uStack_11c;
            local_a8.ArrayNum = iStack_120;
            local_98._12_4_ = uStack_10c;
            local_98.ArrayNum = iVar22;
            local_98.DataPtr = (float *)local_118;
            local_a8.DataPtr = (float *)local_128;
            iStack_110 = iVar22;
            FSynesthesiaSpectrumAnalyzer::ProcessAudio(pFVar8,&local_98,&local_a8);
            FSynesthesiaSpectrumResult::Add((FSynesthesiaSpectrumResult *)param_2,&local_1c8);
            local_218 = local_218 + 1;
            if (local_1c8.SpectrumValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.SpectrumValues.AllocatorInstance.Data);
            }
            pTVar33 = local_1a0;
            if (((iVar19 == -1) || (iVar19 = iVar19 + 1, iVar28 <= iVar19)) || (iVar19 == -1))
            break;
LAB_14d7fdb03:
            if (iVar29 < 0) goto LAB_14d7fde06;
            piVar2 = &(this->ChannelBuffer).ArrayMax;
            piVar25 = &(this->ChannelBuffer).ArrayNum;
            *piVar25 = 0;
            if (*piVar2 < iVar29) {
              UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar29,&pTVar1->AllocatorInstance,0,piVar2);
            }
            if (0 < iVar29) {
              UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar29,&pTVar1->AllocatorInstance,piVar25,piVar2);
            }
            pFVar31 = (this->ChannelBuffer).AllocatorInstance.Data;
            lVar18 = 0;
            iVar17 = 0;
            iVar22 = iVar19;
            if (3 < iVar29) {
              uVar16 = (iVar29 - 4U >> 2) + 1;
              uVar32 = (ulonglong)uVar16;
              iVar17 = uVar16 * 4;
              lVar18 = (ulonglong)uVar16 * 4;
              pFVar30 = pFVar31 + 8;
              do {
                iVar20 = iVar22 + iVar28 + iVar28;
                *(undefined4 *)(pFVar30 + -8) = *(undefined4 *)(pFVar9 + (longlong)iVar22 * 4);
                iVar21 = iVar20 + iVar28;
                *(undefined4 *)(pFVar30 + -4) =
                     *(undefined4 *)(pFVar9 + (longlong)(iVar22 + iVar28) * 4);
                iVar22 = iVar21 + iVar28;
                *(undefined4 *)pFVar30 = *(undefined4 *)(pFVar9 + (longlong)iVar20 * 4);
                *(undefined4 *)(pFVar30 + 4) = *(undefined4 *)(pFVar9 + (longlong)iVar21 * 4);
                uVar32 = uVar32 - 1;
                pFVar30 = pFVar30 + 0x10;
              } while (uVar32 != 0);
            }
            if (iVar17 < iVar29) {
              uVar32 = (ulonglong)(uint)(iVar29 - iVar17);
              pFVar31 = pFVar31 + lVar18 * 4;
              do {
                lVar18 = (longlong)iVar22;
                iVar22 = iVar22 + iVar28;
                *(undefined4 *)pFVar31 = *(undefined4 *)(pFVar9 + lVar18 * 4);
                uVar32 = uVar32 - 1;
                pFVar31 = pFVar31 + 4;
              } while (uVar32 != 0);
            }
          }
        }
        this->FrameCounter = this->FrameCounter + (longlong)this->NumHopFrames;
        if (local_res20 == -1) break;
        local_res20 = local_res20 + iVar5;
        if (local_224 < local_res20) {
          local_res20 = -1;
        }
      } while (local_res20 != -1);
    }
  }
  else {
    if (local_224 == -1) {
      local_res20 = -1;
    }
    else if (local_224 < local_res20) {
      local_res20 = -1;
    }
    if (local_res20 != -1) {
      uVar32 = 0;
      do {
        pTVar33 = &this->InternalWindow;
        if (local_res20 == -1) {
          (this->InternalWindow).ArrayNum = 0;
          if ((this->InternalWindow).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&pTVar33->AllocatorInstance,0,&(this->InternalWindow).ArrayMax);
          }
        }
        else {
          if ((int)uVar6 < 0) goto LAB_14d7fde0f;
          piVar2 = &(this->InternalWindow).ArrayNum;
          piVar25 = &(this->InternalWindow).ArrayMax;
          *piVar2 = 0;
          if ((this->InternalWindow).ArrayMax < (int)uVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar6,&pTVar33->AllocatorInstance,0,piVar25);
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&pTVar33->AllocatorInstance,piVar2,piVar25);
          iVar23 = 0;
          if (local_res20 < iVar4) {
            iVar23 = iVar4 - local_res20;
            memcpy((pTVar33->AllocatorInstance).Data,local_1b0 + (longlong)local_res20 * 4,
                   (longlong)iVar23 << 2);
          }
          if (iVar23 < (int)uVar6) {
            iVar19 = (iVar23 - iVar4) + local_res20;
            iVar28 = (int)uVar12 - iVar19;
            if ((int)(uVar6 - iVar23) < iVar28) {
              iVar28 = uVar6 - iVar23;
            }
            if (0 < iVar28) {
              memcpy((pTVar33->AllocatorInstance).Data + (longlong)iVar23 * 4,pfVar11 + iVar19,
                     (longlong)iVar28 << 2);
              iVar23 = iVar23 + iVar28;
            }
            if (iVar23 < (int)uVar6) {
              memset((pTVar33->AllocatorInstance).Data + (longlong)iVar23 * 4,0,
                     (longlong)(int)(uVar6 - iVar23) << 2);
            }
          }
        }
        local_res8 = &(this->InternalWindow).ArrayNum;
        memset((this->MonoBuffer).AllocatorInstance.Data,0,(longlong)this->NumWindowFrames << 2);
        uVar27 = uVar32;
        uVar34 = uVar32;
        if (0 < (this->MonoBuffer).ArrayNum) {
          do {
            iVar23 = this->NumChannels;
            uVar16 = (uint)uVar27;
            if (0 < iVar23) {
              uVar27 = uVar32;
              do {
                uVar24 = iVar23 * uVar16 + (int)uVar27;
                uVar26 = 0;
                if ((int)uVar24 < *local_res8) {
                  uVar26 = ~uVar24 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                fVar3 = *(float *)((this->InternalWindow).AllocatorInstance.Data +
                                  (longlong)(int)uVar24 * 4);
                uVar26 = 0;
                if ((int)uVar16 < (this->MonoBuffer).ArrayNum) {
                  uVar26 = ~uVar16 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar9 = (this->MonoBuffer).AllocatorInstance.Data;
                uVar26 = (int)uVar27 + 1;
                uVar27 = (ulonglong)uVar26;
                *(float *)(pFVar9 + uVar34) = fVar3 + *(float *)(pFVar9 + uVar34);
                iVar23 = this->NumChannels;
              } while ((int)uVar26 < iVar23);
            }
            uVar27 = (ulonglong)(uVar16 + 1);
            uVar34 = uVar34 + 4;
          } while ((int)(uVar16 + 1) < (this->MonoBuffer).ArrayNum);
        }
        iVar23 = this->NumChannels;
        local_158 = (this->MonoBuffer).AllocatorInstance.Data;
        iVar28 = (this->MonoBuffer).ArrayNum;
        if ((iVar28 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_d8._12_4_ = uStack_14c;
        local_d8.ArrayNum = iVar28;
        local_d8.DataPtr = (float *)local_158;
        iStack_150 = iVar28;
        ArrayMultiplyByConstantInPlace(&local_d8,fVar13 / SQRT((float)iVar23));
        iVar23 = this->NumOutputFrames;
        local_1e0.SpectrumValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e0.SpectrumValues.ArrayNum = 0;
        local_1e0.SpectrumValues.ArrayMax = 0;
        local_1e0.Channel = 0;
        local_1e0.Timestamp = (float)this->FrameCounter / (float)this->SampleRate;
        iVar28 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar23,&local_1e0.SpectrumValues.AllocatorInstance,
                            &local_1e0.SpectrumValues.ArrayNum,&local_1e0.SpectrumValues.ArrayMax);
        memset(local_1e0.SpectrumValues.AllocatorInstance.Data + (longlong)iVar28 * 4,0,
               (longlong)iVar23 << 2);
        iVar23 = local_1e0.SpectrumValues.ArrayNum;
        pFVar8 = (this->SpectrumAnalyzer).Ptr;
        local_148 = local_1e0.SpectrumValues.AllocatorInstance.Data;
        if ((local_1e0.SpectrumValues.ArrayNum < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_138 = (this->MonoBuffer).AllocatorInstance.Data;
        iStack_140 = iVar23;
        iVar23 = (this->MonoBuffer).ArrayNum;
        if ((iVar23 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_c8._12_4_ = uStack_13c;
        local_c8.ArrayNum = iStack_140;
        local_b8._12_4_ = uStack_12c;
        local_b8.ArrayNum = iVar23;
        local_b8.DataPtr = (float *)local_138;
        local_c8.DataPtr = (float *)local_148;
        iStack_130 = iVar23;
        FSynesthesiaSpectrumAnalyzer::ProcessAudio(pFVar8,&local_b8,&local_c8);
        FSynesthesiaSpectrumResult::Add((FSynesthesiaSpectrumResult *)param_2,&local_1e0);
        this->FrameCounter = this->FrameCounter + (longlong)this->NumHopFrames;
        if (local_1e0.SpectrumValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.SpectrumValues.AllocatorInstance.Data);
        }
        if (local_res20 == -1) break;
        local_res20 = local_res20 + iVar5;
        if (local_224 < local_res20) {
          local_res20 = -1;
        }
      } while (local_res20 != -1);
    }
  }
  local_88[0].DataPtr = pfVar11;
  local_88[0]._8_8_ = uVar12;
  TSlidingBuffer<float>::StoreForFutureWindows(local_188,local_88);
  return;
}

