// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// FMeterAnalyzer @ 14d7f79d0

FMeterAnalyzer * __thiscall
Audio::FMeterAnalyzer::FMeterAnalyzer
          (FMeterAnalyzer *this,float param_1,int param_2,FMeterAnalyzerSettings *param_3)

{
  TArray<Audio::FMeterAnalyzer::FEnvelopeData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FMeterAnalyzer *pFVar10;
  FEnvelopeFollowerInitParams local_58;
  
  local_58.AttackTimeMsec = (float)param_3->MeterAttackTime;
  local_58.ReleaseTimeMsec = (float)param_3->MeterReleaseTime;
  local_58.Mode = param_3->MeterPeakMode;
  local_58.bIsAnalog = true;
  local_58.AnalysisWindowMsec = 5.0;
  local_58.SampleRate = param_1;
  local_58.NumChannels = param_2;
  FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower,&local_58);
  pTVar1 = &this->EnvelopeDataPerChannel;
  (this->EnvelopeDataPerChannel).ArrayNum = 0;
  (this->EnvelopeBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ClippingDataPerChannel).ArrayNum;
  (this->EnvelopeBuffer).ArrayNum = 0;
  (this->EnvelopeBuffer).ArrayMax = 0;
  piVar3 = &(this->ClippingDataPerChannel).ArrayMax;
  (this->ClippingDataPerChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->EnvelopeDataPerChannel).ArrayMax = 0;
  iVar9 = param_3->MeterAttackTime;
  iVar8 = param_3->MeterReleaseTime;
  iVar6 = param_3->PeakHoldTime;
  (this->Settings).MeterPeakMode = param_3->MeterPeakMode;
  (this->Settings).MeterAttackTime = iVar9;
  (this->Settings).MeterReleaseTime = iVar8;
  (this->Settings).PeakHoldTime = iVar6;
  fVar4 = param_3->ClippingThreshold;
  this->SampleRate = param_1;
  (this->Settings).ClippingThreshold = fVar4;
  this->NumChannels = param_2;
  this->PeakHoldFrames = 0;
  this->FrameCounter = 0;
  if (param_2 < 1) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2013297114347470863>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\MeterAnalyzer.cpp"
                       ,0xf,"NumChannels > 0");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FMeterAnalyzer *)(*pcVar5)();
      return pFVar10;
    }
    this->NumChannels = 1;
  }
  if (this->SampleRate <= 0.0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2013297114347470867>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\MeterAnalyzer.cpp"
                       ,0x13,"SampleRate > 0.f");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FMeterAnalyzer *)(*pcVar5)();
      return pFVar10;
    }
    this->SampleRate = 48000.0;
  }
  iVar9 = this->NumChannels;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar9,&pTVar1->AllocatorInstance,
                     &(this->EnvelopeDataPerChannel).ArrayNum,
                     &(this->EnvelopeDataPerChannel).ArrayMax);
  DefaultConstructItems<Audio::FMeterAnalyzer::FEnvelopeData,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x14,iVar9);
  iVar9 = this->NumChannels;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar9,&(this->ClippingDataPerChannel).AllocatorInstance,piVar2,piVar3);
  DefaultConstructItems<Audio::FMeterAnalyzer::FClippingData,int>
            ((this->ClippingDataPerChannel).AllocatorInstance.Data + (longlong)iVar8 * 8,iVar9);
  iVar9 = (int)ROUND((float)param_3->PeakHoldTime * this->SampleRate * __real_3b03126f +
                     __real_3f000000) >> 1;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  this->PeakHoldFrames = iVar9;
  return this;
}

// GetSettings @ 14d807a90

FMeterAnalyzerSettings * __thiscall Audio::FMeterAnalyzer::GetSettings(FMeterAnalyzer *this)

{
  return &this->Settings;
}

// ProcessAudio @ 14d8087b0

FMeterAnalyzerResults * __thiscall
Audio::FMeterAnalyzer::ProcessAudio
          (FMeterAnalyzer *this,FMeterAnalyzerResults *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  float *pfVar6;
  float *pfVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  FScriptContainerElement FVar11;
  FScriptContainerElement FVar12;
  int iVar13;
  int iVar14;
  FMeterAnalyzerResults *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong local_res8;
  longlong local_res18;
  
  uVar25 = param_1->ArrayNum;
  pfVar7 = param_1->DataPtr;
  iVar13 = (int)uVar25 / this->NumChannels;
  if (((int)uVar25 % this->NumChannels != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(NumSamples % NumChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\MeterAnalyzer.cpp"
                          ,0x24,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
    return pFVar15;
  }
  iVar20 = 0;
  uVar17 = 0;
  if (0 < this->NumChannels) {
    lVar26 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar17 < (this->ClippingDataPerChannel).ArrayNum) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      *(undefined4 *)((this->ClippingDataPerChannel).AllocatorInstance.Data + lVar26 + 4) = 0;
      uVar21 = 0;
      if ((int)uVar17 < (this->ClippingDataPerChannel).ArrayNum) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      uVar17 = uVar17 + 1;
      *(undefined4 *)((this->ClippingDataPerChannel).AllocatorInstance.Data + lVar26) = 0;
      lVar26 = lVar26 + 8;
    } while ((int)uVar17 < this->NumChannels);
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (0 < (int)uVar25) {
    lVar26 = 0;
    do {
      pfVar6 = &(this->Settings).ClippingThreshold;
      if (*pfVar6 <= (float)((uint)pfVar7[lVar26] & uVar17) &&
          (float)((uint)pfVar7[lVar26] & uVar17) != *pfVar6) {
        uVar16 = iVar20 % this->NumChannels;
        lVar23 = (longlong)(int)uVar16;
        uVar21 = 0;
        if ((int)uVar16 < (this->ClippingDataPerChannel).ArrayNum) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
          return pFVar15;
        }
        pFVar8 = (this->ClippingDataPerChannel).AllocatorInstance.Data;
        *(int *)(pFVar8 + lVar23 * 8) = *(int *)(pFVar8 + lVar23 * 8) + 1;
        fVar27 = pfVar7[lVar26];
        if (pfVar7[lVar26] <= *(float *)(pFVar8 + lVar23 * 8 + 4)) {
          fVar27 = *(float *)(pFVar8 + lVar23 * 8 + 4);
        }
        *(float *)(pFVar8 + lVar23 * 8 + 4) = fVar27;
      }
      iVar20 = iVar20 + 1;
      lVar26 = lVar26 + 1;
    } while (lVar26 < (int)uVar25);
  }
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  piVar1 = &(this->EnvelopeBuffer).ArrayMax;
  (this->EnvelopeBuffer).ArrayNum = 0;
  if ((this->EnvelopeBuffer).ArrayMax < (int)uVar25) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar25,&(this->EnvelopeBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar25,&(this->EnvelopeBuffer).AllocatorInstance,&(this->EnvelopeBuffer).ArrayNum,
             piVar1);
  FEnvelopeFollower::ProcessAudio
            (&this->EnvelopeFollower,pfVar7,iVar13,
             (float *)(this->EnvelopeBuffer).AllocatorInstance.Data);
  pFVar8 = (this->EnvelopeBuffer).AllocatorInstance.Data;
  uVar18 = 0;
  uVar22 = uVar18;
  if (0 < this->NumChannels) {
    do {
      uVar21 = (uint)uVar22;
      uVar17 = 0;
      if ((int)uVar21 < (this->EnvelopeDataPerChannel).ArrayNum) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      pFVar19 = (this->EnvelopeDataPerChannel).AllocatorInstance.Data;
      *(undefined4 *)(pFVar19 + uVar18) = 0;
      if (*(int *)(pFVar19 + uVar18 + 8) < 1) {
        *(undefined4 *)(pFVar19 + uVar18 + 4) = 0;
      }
      fVar27 = *(float *)(pFVar19 + uVar18 + 0xc);
      FVar12 = pFVar19[uVar18 + 0x10];
      if ((int)uVar21 < (int)uVar25) {
        fVar29 = 0.0;
        FVar11 = FVar12;
        do {
          iVar20 = (int)uVar22;
          lVar26 = (longlong)iVar20;
          fVar28 = *(float *)(pFVar8 + lVar26 * 4);
          if (*(float *)(pFVar8 + lVar26 * 4) <= fVar29) {
            fVar28 = fVar29;
          }
          *(float *)(pFVar19 + uVar18) = fVar28;
          fVar29 = *(float *)(pFVar8 + lVar26 * 4);
          FVar12 = (FScriptContainerElement)(fVar29 - fVar27 < 0.0);
          if (((!(bool)FVar12) && (FVar11 != (FScriptContainerElement)0x0)) &&
             ((iVar14 = iVar20 / this->NumChannels,
              *(float *)(pFVar19 + uVar18 + 4) <= fVar29 &&
              fVar29 != *(float *)(pFVar19 + uVar18 + 4) ||
              (*(int *)(pFVar19 + uVar18 + 8) < iVar14)))) {
            *(float *)(pFVar19 + uVar18 + 4) = fVar29;
            *(int *)(pFVar19 + uVar18 + 8) = iVar14 + this->PeakHoldFrames;
          }
          uVar17 = iVar20 + this->NumChannels;
          uVar22 = (ulonglong)uVar17;
          fVar27 = *(float *)(pFVar8 + lVar26 * 4);
          fVar29 = fVar28;
          FVar11 = FVar12;
        } while ((int)uVar17 < (int)uVar25);
      }
      pFVar19[uVar18 + 0x10] = FVar12;
      *(float *)(pFVar19 + uVar18 + 0xc) = fVar27;
      if (0 < *(int *)(pFVar19 + uVar18 + 8)) {
        *(int *)(pFVar19 + uVar18 + 8) = *(int *)(pFVar19 + uVar18 + 8) - iVar13;
      }
      uVar18 = uVar18 + 0x14;
      uVar22 = (ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < this->NumChannels);
  }
  uVar25 = 0;
  (__return_storage_ptr__->MeterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &__return_storage_ptr__->MeterValues;
  (__return_storage_ptr__->MeterValues).ArrayNum = 0;
  (__return_storage_ptr__->MeterValues).ArrayMax = 0;
  pTVar3 = &__return_storage_ptr__->PeakValues;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar4 = &__return_storage_ptr__->ClippingValues;
  __return_storage_ptr__->TimeSec = 0.0;
  pTVar5 = &__return_storage_ptr__->NumSamplesClipping;
  (__return_storage_ptr__->PeakValues).ArrayNum = 0;
  (__return_storage_ptr__->PeakValues).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ClippingValues).ArrayNum = 0;
  (__return_storage_ptr__->ClippingValues).ArrayMax = 0;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NumSamplesClipping).ArrayNum = 0;
  (__return_storage_ptr__->NumSamplesClipping).ArrayMax = 0;
  this->FrameCounter = this->FrameCounter + (longlong)iVar13;
  __return_storage_ptr__->TimeSec = (float)this->FrameCounter / this->SampleRate;
  if (0 < this->NumChannels) {
    local_res18 = 0;
    local_res8 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar25 < (this->ClippingDataPerChannel).ArrayNum) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      pFVar19 = (pTVar4->AllocatorInstance).Data;
      pFVar24 = (this->ClippingDataPerChannel).AllocatorInstance.Data + local_res8;
      pFVar8 = pFVar24 + 4;
      if (((pFVar19 <= pFVar8) &&
          (pFVar8 < pFVar19 + (longlong)(__return_storage_ptr__->ClippingValues).ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = (__return_storage_ptr__->ClippingValues).ArrayNum;
      if (iVar13 == (__return_storage_ptr__->ClippingValues).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar4->AllocatorInstance,
                            &(__return_storage_ptr__->ClippingValues).ArrayMax);
      }
      (__return_storage_ptr__->ClippingValues).ArrayNum = iVar13 + 1;
      *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 4) =
           *(undefined4 *)pFVar8;
      pFVar8 = (pTVar5->AllocatorInstance).Data;
      if (((pFVar8 <= pFVar24) &&
          (pFVar24 < pFVar8 + (longlong)(__return_storage_ptr__->NumSamplesClipping).ArrayMax * 4))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = (__return_storage_ptr__->NumSamplesClipping).ArrayNum;
      if (iVar13 == (__return_storage_ptr__->NumSamplesClipping).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar5->AllocatorInstance,
                            &(__return_storage_ptr__->NumSamplesClipping).ArrayMax);
      }
      (__return_storage_ptr__->NumSamplesClipping).ArrayNum = iVar13 + 1;
      *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar13 * 4) =
           *(undefined4 *)pFVar24;
      uVar17 = 0;
      if ((int)uVar25 < (this->EnvelopeDataPerChannel).ArrayNum) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      pFVar19 = (this->EnvelopeDataPerChannel).AllocatorInstance.Data + local_res18;
      if (((pFVar8 <= pFVar19) &&
          (pFVar19 < pFVar8 + (longlong)(__return_storage_ptr__->MeterValues).ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = (__return_storage_ptr__->MeterValues).ArrayNum;
      if (iVar13 == (__return_storage_ptr__->MeterValues).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,
                            &(__return_storage_ptr__->MeterValues).ArrayMax);
      }
      (__return_storage_ptr__->MeterValues).ArrayNum = iVar13 + 1;
      pFVar24 = pFVar19 + 4;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) =
           *(undefined4 *)pFVar19;
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= pFVar24) &&
          (pFVar24 < pFVar8 + (longlong)(__return_storage_ptr__->PeakValues).ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMeterAnalyzerResults *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = (__return_storage_ptr__->PeakValues).ArrayNum;
      if (iVar13 == (__return_storage_ptr__->PeakValues).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,
                            &(__return_storage_ptr__->PeakValues).ArrayMax);
      }
      (__return_storage_ptr__->PeakValues).ArrayNum = iVar13 + 1;
      local_res18 = local_res18 + 0x14;
      uVar25 = uVar25 + 1;
      local_res8 = local_res8 + 8;
      *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 4) =
           *(undefined4 *)pFVar24;
    } while ((int)uVar25 < this->NumChannels);
  }
  return __return_storage_ptr__;
}

