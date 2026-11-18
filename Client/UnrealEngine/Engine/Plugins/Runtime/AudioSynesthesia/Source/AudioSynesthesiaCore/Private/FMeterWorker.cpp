// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// FMeterWorker @ 14d7f7c00

FMeterWorker * __thiscall
Audio::FMeterWorker::FMeterWorker
          (FMeterWorker *this,FAnalyzerParameters *param_1,FMeterSettings *param_2)

{
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar1;
  TUniquePtr<Audio::FMeterAnalyzer,TDefaultDelete<Audio::FMeterAnalyzer>_> *pTVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FMeterWorker *pFVar9;
  TSlidingBuffer<float> *this_00;
  FMeterAnalyzer *pFVar10;
  FMeterAnalyzer *pFVar11;
  FMeterAnalyzer *pFVar12;
  int iVar13;
  longlong local_38;
  longlong local_30;
  
  pFVar11 = (FMeterAnalyzer *)0x0;
  this->_padding_ = (longlong)&___7FMeterWorker_Audio__6B_;
  pTVar1 = &this->InternalBuffer;
  pTVar2 = &this->MeterAnalyzer;
  this->NumChannels = param_1->NumChannels;
  this->NumAnalyzedBuffers = 0;
  this->NumHopFrames = 0;
  this->SampleRate = param_1->SampleRate;
  (this->InternalWindow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalWindow).ArrayNum = 0;
  (this->InternalWindow).ArrayMax = 0;
  pTVar1->Ptr = (TSlidingBuffer<float> *)0x0;
  pTVar2->Ptr = (FMeterAnalyzer *)0x0;
  if ((this->NumChannels < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\MeterFactory.cpp"
                         ,0x2b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FMeterWorker *)(*pcVar7)();
    return pFVar9;
  }
  if ((this->SampleRate < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\MeterFactory.cpp"
                         ,0x2c,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FMeterWorker *)(*pcVar7)();
    return pFVar9;
  }
  iVar4 = this->NumChannels;
  iVar5 = this->SampleRate;
  iVar13 = -((int)ROUND(__real_bf000000 -
                        ((float)param_1->SampleRate + (float)param_1->SampleRate) *
                        param_2->AnalysisPeriod) >> 1);
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  this->NumHopFrames = iVar13;
  fVar3 = param_2->AnalysisPeriod;
  this_00 = ::operator_new(0x20);
  pFVar10 = pFVar11;
  if (this_00 != (TSlidingBuffer<float> *)0x0) {
    pFVar10 = (FMeterAnalyzer *)
              TSlidingBuffer<float>::TSlidingBuffer<float>
                        (this_00,(int)((float)iVar5 * fVar3 * (float)iVar4),iVar4 * iVar13);
  }
  if (pTVar1 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)&local_38) {
    if (pFVar10 == (FMeterAnalyzer *)0x0) goto LAB_14d7f7d75;
    pFVar6 = (((TArray<float,TSizedDefaultAllocator<32>_> *)
              &(pFVar10->EnvelopeFollower).WorkBuffer.ArrayNum)->AllocatorInstance).Data;
    pFVar12 = pFVar10;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar12 = (FMeterAnalyzer *)pTVar1->Ptr;
    pTVar1->Ptr = (TSlidingBuffer<float> *)pFVar10;
    if (pFVar12 == (FMeterAnalyzer *)0x0) goto LAB_14d7f7d75;
    pFVar6 = (((TArray<float,TSizedDefaultAllocator<32>_> *)
              &(pFVar12->EnvelopeFollower).WorkBuffer.ArrayNum)->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pFVar12,0x20);
LAB_14d7f7d75:
  pFVar10 = ::operator_new(0xc0);
  if (pFVar10 != (FMeterAnalyzer *)0x0) {
    pFVar11 = FMeterAnalyzer::FMeterAnalyzer
                        (pFVar10,(float)param_1->SampleRate,this->NumChannels,
                         (FMeterAnalyzerSettings *)&param_2->_padding_);
  }
  if (pTVar2 == (TUniquePtr<Audio::FMeterAnalyzer,TDefaultDelete<Audio::FMeterAnalyzer>_> *)
                &local_30) {
    if (pFVar11 == (FMeterAnalyzer *)0x0) {
      return this;
    }
    pFVar6 = (pFVar11->EnvelopeDataPerChannel).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar11->ClippingDataPerChannel).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar11->EnvelopeBuffer).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar11->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar11->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar11->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
    pFVar10 = pFVar11;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar10 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar11;
    if (pFVar10 == (FMeterAnalyzer *)0x0) {
      return this;
    }
    pFVar6 = (pFVar10->EnvelopeDataPerChannel).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar10->ClippingDataPerChannel).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar10->EnvelopeBuffer).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar10->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar10->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar10->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pFVar10,0xc0);
  return this;
}

// Analyze @ 14d7fc910

void __thiscall
Audio::FMeterWorker::Analyze
          (FMeterWorker *this,TArrayView<float_const_,int> *param_1,IAnalyzerResult *param_2)

{
  int *piVar1;
  TSlidingBuffer<float> *pTVar2;
  FMeterAnalyzer *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> *pTVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_res20;
  uint local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  int iStack_1a4;
  int local_1a0;
  uint local_198;
  int local_194;
  int local_190;
  int local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  int iStack_174;
  TArray<float,TSizedDefaultAllocator<32>_> *local_170;
  FScriptContainerElement *local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  TSlidingBuffer<float> *local_148;
  FMeterAnalyzerResults local_138;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8 [8];
  
  if ((param_2 == (IAnalyzerResult *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeterResult != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\MeterFactory.cpp"
                          ,0x3c,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = (this->InternalBuffer).Ptr;
  uVar6 = *(undefined4 *)&param_1->DataPtr;
  uVar7 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iVar8 = param_1->ArrayNum;
  uVar9 = *(undefined4 *)&param_1->field_0xc;
  iVar22 = (pTVar2->StorageBuffer).ArrayNum;
  local_168 = (pTVar2->StorageBuffer).AllocatorInstance.Data;
  local_190 = iVar22;
  local_148 = pTVar2;
  if ((iVar22 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar12 = __real_3f800000;
  local_194 = pTVar2->NumHopSamples;
  uVar24 = pTVar2->NumWindowSamples;
  iVar25 = pTVar2->NumUnderflowSamples;
  pTVar26 = &this->InternalWindow;
  local_res20 = (iVar8 - uVar24) + iVar22;
  local_198 = uVar24;
  local_170 = pTVar26;
  uVar14 = uVar6;
  uVar15 = uVar7;
  local_1a0 = iVar8;
  uVar10 = local_158;
  uVar11 = uStack_154;
  if (local_res20 < 0) {
    iVar25 = -1;
    local_res20 = -1;
  }
  else if (local_res20 < iVar25) {
    iVar25 = -1;
  }
  do {
    uStack_154 = uVar15;
    local_158 = uVar14;
    if (iVar25 == -1) {
      local_158 = uVar10;
      uStack_154 = uVar11;
      local_c8[0].DataPtr._0_4_ = uVar6;
      local_c8[0].DataPtr._4_4_ = uVar7;
      local_c8[0].ArrayNum = iVar8;
      local_c8[0]._12_4_ = uVar9;
      TSlidingBuffer<float>::StoreForFutureWindows(local_148,local_c8);
      return;
    }
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    piVar1 = &pTVar26->ArrayMax;
    pTVar26->ArrayNum = 0;
    if (*piVar1 < (int)uVar24) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar24,&pTVar26->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar24,&pTVar26->AllocatorInstance,&pTVar26->ArrayNum,piVar1);
    iVar19 = 0;
    if (iVar25 < iVar22) {
      iVar19 = iVar22 - iVar25;
      memcpy((pTVar26->AllocatorInstance).Data,local_168 + (longlong)iVar25 * 4,
             (longlong)iVar19 << 2);
    }
    if (iVar19 < (int)uVar24) {
      iVar18 = (iVar25 - iVar22) + iVar19;
      iVar22 = local_1a0 - iVar18;
      if ((int)(uVar24 - iVar19) < iVar22) {
        iVar22 = uVar24 - iVar19;
      }
      if (0 < iVar22) {
        memcpy((pTVar26->AllocatorInstance).Data + (longlong)iVar19 * 4,
               (void *)(CONCAT44(uStack_154,local_158) + (longlong)iVar18 * 4),(longlong)iVar22 << 2
              );
        iVar19 = iVar19 + iVar22;
      }
      if (iVar19 < (int)uVar24) {
        memset((pTVar26->AllocatorInstance).Data + (longlong)iVar19 * 4,0,
               (longlong)(int)(uVar24 - iVar19) << 2);
      }
    }
    local_e8 = (pTVar26->AllocatorInstance).Data;
    iVar22 = pTVar26->ArrayNum;
    this_00 = (this->MeterAnalyzer).Ptr;
    if ((iVar22 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_d8._12_4_ = uStack_dc;
    local_d8.ArrayNum = iVar22;
    local_d8.DataPtr = (float *)local_e8;
    iStack_e0 = iVar22;
    FMeterAnalyzer::ProcessAudio(this_00,&local_138,&local_d8);
    iVar19 = 0;
    iVar22 = this->NumChannels;
    uVar20 = 0;
    fVar29 = 0.0;
    fVar28 = 0.0;
    fVar27 = 0.0;
    fVar30 = 0.0;
    if (0 < iVar22) {
      lVar21 = 0;
      iVar19 = 0;
      do {
        fStack_1b4 = local_138.TimeSec;
        uVar23 = ~uVar20 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar20 < local_138.MeterValues.ArrayNum) {
          uVar24 = uVar23;
        }
        local_1b8 = uVar20;
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fStack_1b0 = *(float *)(local_138.MeterValues.AllocatorInstance.Data + lVar21);
        uVar24 = 0;
        if ((int)uVar20 < local_138.PeakValues.ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fStack_1ac = *(float *)(local_138.PeakValues.AllocatorInstance.Data + lVar21);
        uVar24 = 0;
        if ((int)uVar20 < local_138.ClippingValues.ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1a8 = *(float *)(local_138.ClippingValues.AllocatorInstance.Data + lVar21);
        uVar24 = 0;
        if ((int)uVar20 < local_138.NumSamplesClipping.ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar27 = local_138.TimeSec;
        fVar13 = local_1a8;
        if (local_1a8 <= fVar30) {
          fVar13 = fVar30;
        }
        fVar30 = fVar13;
        fVar29 = fVar29 + fStack_1b0;
        iStack_1a4 = *(int *)(local_138.NumSamplesClipping.AllocatorInstance.Data + lVar21);
        fVar28 = fVar28 + fStack_1ac;
        iVar22 = iStack_1a4;
        if (iStack_1a4 < iVar19) {
          iVar22 = iVar19;
        }
        iVar19 = iVar22;
        pTVar17 = TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
                              *)(param_2 + 2),local_1b8,(int *)&local_1b8);
        pFVar3 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_1b8) &&
            ((FScriptContainerElement *)&local_1b8 < pFVar3 + (longlong)pTVar17->ArrayMax * 0x18))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = pTVar17->ArrayNum;
        if (iVar22 == pTVar17->ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
        }
        uVar20 = uVar20 + 1;
        pTVar17->ArrayNum = iVar22 + 1;
        lVar21 = lVar21 + 4;
        pFVar4 = (pTVar17->AllocatorInstance).Data;
        pFVar3 = pFVar4 + (longlong)iVar22 * 0x18;
        *(ulonglong *)pFVar3 = CONCAT44(fStack_1b4,local_1b8);
        *(ulonglong *)(pFVar3 + 8) = CONCAT44(fStack_1ac,fStack_1b0);
        *(ulonglong *)(pFVar4 + (longlong)iVar22 * 0x18 + 0x10) = CONCAT44(iStack_1a4,local_1a8);
        iVar22 = this->NumChannels;
        pTVar26 = local_170;
        uVar24 = local_198;
      } while ((int)uVar20 < iVar22);
    }
    local_188 = -1;
    fStack_17c = fVar28 * (fVar12 / (float)iVar22);
    fStack_180 = (fVar12 / (float)iVar22) * fVar29;
    fStack_184 = fVar27;
    local_178 = fVar30;
    iStack_174 = iVar19;
    pTVar17 = TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)(param_2 + 2),0xffffffff,&local_188);
    pFVar3 = (pTVar17->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_188) &&
        ((FScriptContainerElement *)&local_188 < pFVar3 + (longlong)pTVar17->ArrayMax * 0x18)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar22 = pTVar17->ArrayNum;
    if (iVar22 == pTVar17->ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
    }
    pTVar17->ArrayNum = iVar22 + 1;
    pFVar4 = (pTVar17->AllocatorInstance).Data;
    pFVar3 = pFVar4 + (longlong)iVar22 * 0x18;
    *(ulonglong *)pFVar3 = CONCAT44(fStack_184,local_188);
    *(ulonglong *)(pFVar3 + 8) = CONCAT44(fStack_17c,fStack_180);
    *(ulonglong *)(pFVar4 + (longlong)iVar22 * 0x18 + 0x10) = CONCAT44(iStack_174,local_178);
    if (local_138.NumSamplesClipping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.NumSamplesClipping.AllocatorInstance.Data);
    }
    if (local_138.ClippingValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.ClippingValues.AllocatorInstance.Data);
    }
    if (local_138.PeakValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.PeakValues.AllocatorInstance.Data);
    }
    if (local_138.MeterValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.MeterValues.AllocatorInstance.Data);
    }
    iVar25 = iVar25 + local_194;
    iVar22 = local_190;
    uVar14 = local_158;
    uVar15 = uStack_154;
    uVar10 = local_158;
    uVar11 = uStack_154;
    if (local_res20 < iVar25) {
      iVar25 = -1;
    }
  } while( true );
}

