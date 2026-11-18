// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 24

// CalcGain @ 1444b72b0

float __thiscall
Audio::FDynamicStateVariableFilter::CalcGain(FDynamicStateVariableFilter *this,float param_1)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58 [5];
  
  if (param_1 <= __real_322bcc77) {
    param_1 = __real_322bcc77;
  }
  fVar4 = logf(param_1);
  fVar5 = this->HalfKnee;
  fVar4 = fVar4 * __real_410af967;
  fVar7 = this->ThresholdDb - fVar5;
  fVar6 = 0.0;
  if (fVar7 < fVar4) {
    fVar6 = this->SlopeFactor;
    if ((0.0 < fVar5) && (fVar4 < this->ThresholdDb + fVar5)) {
      if (((this->KneePoints).ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
      *(double *)(this->KneePoints).AllocatorInstance.Data = (double)fVar7;
      fVar5 = this->ThresholdDb + this->HalfKnee;
      if (0.0 <= fVar5) {
        fVar5 = 0.0;
      }
      if (((this->KneePoints).ArrayNum < 2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
      *(double *)((this->KneePoints).AllocatorInstance.Data + 0x10) = (double)fVar5;
      if (((this->KneePoints).ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
      *(undefined8 *)((this->KneePoints).AllocatorInstance.Data + 8) = 0;
      if (((this->KneePoints).ArrayNum < 2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
      local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(double *)((this->KneePoints).AllocatorInstance.Data + 0x18) = (double)fVar6;
      local_58[0].ArrayNum = (this->KneePoints).ArrayNum;
      lVar3 = (longlong)local_58[0].ArrayNum;
      _Src = (this->KneePoints).AllocatorInstance.Data;
      if (local_58[0].ArrayNum == 0) {
        local_58[0].ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_58[0].ArrayNum,0,&local_58[0].AllocatorInstance,local_58[0].ArrayNum
                   ,&local_58[0].ArrayMax);
        memcpy(local_58[0].AllocatorInstance.Data,_Src,lVar3 << 4);
      }
      fVar6 = LagrangianInterpolation(local_58,fVar4);
    }
    fVar5 = this->DynamicRangeDb;
    fVar7 = (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff ^
                   __xmm_80000000800000008000000080000000);
    fVar6 = (this->ThresholdDb - fVar4) * fVar6;
    if (0.0 <= fVar6) {
      fVar6 = 0.0;
    }
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = fVar7;
    if ((__real_80000000 <= fVar5) && (fVar6 = 0.0, __real_80000000 < fVar5)) {
      fVar6 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    }
  }
  fVar5 = powf(__real_41200000,(fVar6 + this->GainDb) * __real_3ccccccd);
  return fVar5;
}

// GetGainReduction @ 1444bfda0

float __thiscall
Audio::FDynamicStateVariableFilter::GetGainReduction(FDynamicStateVariableFilter *this)

{
  return this->ScaledGainLinear + this->ScaledGainLinear;
}

// Init @ 1444c2830

void __thiscall
Audio::FDynamicStateVariableFilter::Init
          (FDynamicStateVariableFilter *this,float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<Audio::FDynamicStateVariableFilter::FSVFState,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  float fVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  FInlineEnvelopeFollowerInitParams local_48 [2];
  
  pTVar3 = &this->FilterState;
  piVar1 = &(this->FilterState).ArrayMax;
  fVar9 = __real_3f800000 / param_1;
  piVar2 = &(this->FilterState).ArrayNum;
  this->NumChannels = param_2;
  this->SampleRate = param_1;
  this->OneOverSampleRate = fVar9;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,param_2,&pTVar3->AllocatorInstance,piVar2,piVar1);
  DefaultConstructItems<Audio::FDynamicStateVariableFilter::FSVFState,int>
            ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x14,param_2);
  pTVar4 = &this->KneePoints;
  iVar8 = (this->KneePoints).ArrayMax;
  piVar1 = &(this->KneePoints).ArrayMax;
  (this->KneePoints).ArrayNum = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (iVar8 != 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,&pTVar4->AllocatorInstance,0,piVar1);
    iVar8 = *piVar1;
  }
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)iVar8 * 0x10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->KneePoints).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->KneePoints).ArrayNum = iVar8 + 1;
  pFVar5 = (pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar5 = local_58;
  *(undefined8 *)(pFVar5 + 8) = uStack_50;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  if (pFVar5 <= (FScriptContainerElement *)&local_58) {
    if ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 0x10) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  iVar8 = (this->KneePoints).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->KneePoints).ArrayNum = iVar8 + 1;
  pFVar5 = (pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar5 = local_58;
  *(undefined8 *)(pFVar5 + 8) = uStack_50;
  memset((pTVar3->AllocatorInstance).Data,0,(longlong)this->NumChannels * 0x14);
  (this->KeyFilterState).V1 = 0.0;
  (this->KeyFilterState).V2 = 0.0;
  (this->KeyFilterState).V3 = 0.0;
  (this->KeyFilterState).Z1 = 0.0;
  (this->KeyFilterState).Z2 = 0.0;
  local_48[0].AttackTimeMsec = 10.0;
  local_48[0].ReleaseTimeMsec = 100.0;
  local_48[0].Mode = Peak;
  local_48[0].bIsAnalog = true;
  local_48[0].AnalysisWindowMsec = 5.0;
  local_48[0].SampleRate = param_1;
  FInlineEnvelopeFollower::Init(&this->Envelope,local_48);
  return;
}

// ProcessAudio @ 1444d7c70

void __thiscall
Audio::FDynamicStateVariableFilter::ProcessAudio
          (FDynamicStateVariableFilter *this,float *param_1,float *param_2,float *param_3,
          int param_4)

{
  float fVar1;
  EDynamicFilterType EVar2;
  float fVar3;
  
  if (this->bNeedsUpdate != false) {
    fVar1 = (this->KeyVars).G;
    fVar3 = this->OneOverQ;
    (this->KeyVars).K = fVar3;
    fVar3 = __real_3f800000 / ((fVar1 + fVar3) * fVar1 + __real_3f800000);
    (this->KeyVars).A1 = fVar3;
    fVar3 = fVar3 * fVar1;
    (this->KeyVars).A2 = fVar3;
    (this->KeyVars).A3 = fVar3 * fVar1;
    UpdatePostFilterVariables(this);
    this->bNeedsUpdate = false;
  }
  EVar2 = this->FilterType;
  if (EVar2 != Bell) {
    if (EVar2 == LowShelf) {
      ProcessLowShelf(this,param_1,param_2,param_3,param_4);
      return;
    }
    if (EVar2 == HighShelf) {
      ProcessHighShelf(this,param_1,param_2,param_3,param_4);
      return;
    }
  }
  ProcessBell(this,param_1,param_2,param_3,param_4);
  return;
}

// ProcessAudio @ 1444d7d70

void __thiscall
Audio::FDynamicStateVariableFilter::ProcessAudio
          (FDynamicStateVariableFilter *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  EDynamicFilterType EVar2;
  float fVar3;
  
  if (this->bNeedsUpdate != false) {
    fVar1 = (this->KeyVars).G;
    fVar3 = this->OneOverQ;
    (this->KeyVars).K = fVar3;
    fVar3 = __real_3f800000 / ((fVar1 + fVar3) * fVar1 + __real_3f800000);
    (this->KeyVars).A1 = fVar3;
    fVar3 = fVar3 * fVar1;
    (this->KeyVars).A2 = fVar3;
    (this->KeyVars).A3 = fVar3 * fVar1;
    UpdatePostFilterVariables(this);
    this->bNeedsUpdate = false;
  }
  EVar2 = this->FilterType;
  if (EVar2 != Bell) {
    if (EVar2 == LowShelf) {
      ProcessLowShelf(this,param_1,param_2,param_1,param_3);
      return;
    }
    if (EVar2 == HighShelf) {
      ProcessHighShelf(this,param_1,param_2,param_1,param_3);
      return;
    }
  }
  ProcessBell(this,param_1,param_2,param_1,param_3);
  return;
}

// ProcessBell @ 1444df480

void __thiscall
Audio::FDynamicStateVariableFilter::ProcessBell
          (FDynamicStateVariableFilter *this,float *param_1,float *param_2,float *param_3,
          int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Type TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar3 = this->NumChannels;
  iVar18 = 0;
  if (0 < param_4) {
    do {
      iVar10 = iVar3 * 0x40 + iVar18;
      iVar17 = param_4;
      if (iVar10 < param_4) {
        iVar17 = iVar10;
      }
      iVar15 = iVar18;
      if (iVar18 < iVar17) {
        do {
          uVar16 = this->NumChannels;
          fVar20 = 0.0;
          if (0 < (int)uVar16) {
            pfVar13 = param_3 + iVar15;
            uVar12 = (ulonglong)uVar16;
            do {
              fVar20 = fVar20 + *pfVar13;
              pfVar13 = pfVar13 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          fVar1 = (this->KeyFilterState).Z2;
          fVar2 = (this->KeyFilterState).Z1;
          fVar20 = fVar20 - fVar1;
          TVar4 = (this->Envelope).Mode;
          (this->KeyFilterState).V3 = fVar20;
          fVar19 = (this->KeyVars).A2;
          fVar21 = fVar2 * (this->KeyVars).A1 + fVar19 * fVar20;
          (this->KeyFilterState).V1 = fVar21;
          fVar20 = fVar2 * fVar19 + fVar1 + fVar20 * (this->KeyVars).A3;
          (this->KeyFilterState).V2 = fVar20;
          (this->KeyFilterState).Z1 = (fVar21 + fVar21) - fVar2;
          (this->KeyFilterState).Z2 = (fVar20 + fVar20) - fVar1;
          if (TVar4 == MeanSquared) {
            fVar21 = fVar21 * fVar21 * (this->Envelope).AnalysisFilterBeta +
                     (this->Envelope).AnalysisFilterAlpha * (this->Envelope).AnalysisValue;
            (this->Envelope).AnalysisValue = fVar21;
          }
          else if (TVar4 == RootMeanSquared) {
            fVar21 = fVar21 * fVar21 * (this->Envelope).AnalysisFilterBeta +
                     (this->Envelope).AnalysisFilterAlpha * (this->Envelope).AnalysisValue;
            (this->Envelope).AnalysisValue = fVar21;
            fVar21 = SQRT(fVar21);
          }
          else if (TVar4 == Peak) {
            fVar21 = (float)((uint)fVar21 & uVar8);
          }
          else {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                               ,0x1bf,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar16 = this->NumChannels;
          }
          plVar7 = &(this->Envelope)._padding_;
          fVar20 = (this->Envelope).Value - fVar21;
          if (0.0 < fVar20) {
            plVar7 = &(this->Envelope)._padding_;
          }
          iVar15 = iVar15 + uVar16;
          (this->Envelope).Value = fVar20 * *(float *)((longlong)plVar7 + 4) + fVar21;
        } while (iVar15 < iVar17);
        fVar20 = CalcGain(this,fVar20 * *(float *)((longlong)plVar7 + 4) + fVar21);
        this->ScaledGainLinear = fVar20;
        UpdatePostFilterVariables(this);
        do {
          iVar15 = this->NumChannels;
          uVar16 = 0;
          if (0 < iVar15) {
            lVar14 = 0;
            pfVar13 = param_2 + iVar18;
            do {
              fVar20 = *(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar13);
              uVar11 = 0;
              if ((int)uVar16 < (this->FilterState).ArrayNum) {
                uVar11 = ~uVar16 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar5 = (this->FilterState).AllocatorInstance.Data;
              uVar16 = uVar16 + 1;
              fVar1 = *(float *)(pFVar5 + lVar14 + 0x10);
              fVar2 = *(float *)(pFVar5 + lVar14 + 0xc);
              fVar19 = fVar20 - fVar1;
              *(float *)(pFVar5 + lVar14 + 8) = fVar19;
              fVar21 = fVar2 * (this->OutputVars).A1 + fVar19 * (this->OutputVars).A2;
              *(float *)(pFVar5 + lVar14) = fVar21;
              fVar19 = fVar2 * (this->OutputVars).A2 + fVar1 + fVar19 * (this->OutputVars).A3;
              *(float *)(pFVar5 + lVar14 + 0xc) = (fVar21 + fVar21) - fVar2;
              *(float *)(pFVar5 + lVar14 + 4) = fVar19;
              *(float *)(pFVar5 + lVar14 + 0x10) = (fVar19 + fVar19) - fVar1;
              lVar14 = lVar14 + 0x14;
              *pfVar13 = fVar21 * (this->OutputVars).M1 + fVar20;
              pfVar13 = pfVar13 + 1;
              iVar15 = this->NumChannels;
            } while ((int)uVar16 < iVar15);
          }
          iVar18 = iVar18 + iVar15;
        } while (iVar18 < iVar17);
      }
      else {
        fVar20 = CalcGain(this,0.0);
        this->ScaledGainLinear = fVar20;
        UpdatePostFilterVariables(this);
      }
      iVar18 = iVar10;
    } while (iVar10 < param_4);
  }
  return;
}

// ProcessHighShelf @ 1444df840

void __thiscall
Audio::FDynamicStateVariableFilter::ProcessHighShelf
          (FDynamicStateVariableFilter *this,float *param_1,float *param_2,float *param_3,
          int param_4)

{
  float fVar1;
  int iVar2;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar2 = this->NumChannels;
  iVar17 = 0;
  if (0 < param_4) {
    do {
      iVar9 = iVar2 * 0x40 + iVar17;
      iVar15 = param_4;
      if (iVar9 < param_4) {
        iVar15 = iVar9;
      }
      iVar13 = iVar17;
      if (iVar17 < iVar15) {
        do {
          uVar14 = this->NumChannels;
          fVar19 = 0.0;
          if (0 < (int)uVar14) {
            pfVar12 = param_3 + iVar13;
            uVar11 = (ulonglong)uVar14;
            do {
              fVar19 = fVar19 + *pfVar12;
              pfVar12 = pfVar12 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          fVar1 = (this->KeyFilterState).Z2;
          fVar22 = (this->KeyFilterState).Z1;
          fVar19 = fVar19 - fVar1;
          TVar3 = (this->Envelope).Mode;
          (this->KeyFilterState).V3 = fVar19;
          fVar18 = (this->KeyVars).A2;
          fVar21 = fVar22 * (this->KeyVars).A1 + fVar18 * fVar19;
          (this->KeyFilterState).V1 = fVar21;
          fVar20 = (this->KeyVars).K;
          fVar19 = fVar22 * fVar18 + fVar1 + fVar19 * (this->KeyVars).A3;
          (this->KeyFilterState).V2 = fVar19;
          (this->KeyFilterState).Z1 = (fVar21 + fVar21) - fVar22;
          fVar22 = fVar21 * fVar20 - fVar19;
          (this->KeyFilterState).Z2 = (fVar19 + fVar19) - fVar1;
          if (TVar3 == MeanSquared) {
            fVar22 = fVar22 * fVar22 * (this->Envelope).AnalysisFilterBeta +
                     (this->Envelope).AnalysisFilterAlpha * (this->Envelope).AnalysisValue;
            (this->Envelope).AnalysisValue = fVar22;
          }
          else if (TVar3 == RootMeanSquared) {
            fVar22 = fVar22 * fVar22 * (this->Envelope).AnalysisFilterBeta +
                     (this->Envelope).AnalysisFilterAlpha * (this->Envelope).AnalysisValue;
            (this->Envelope).AnalysisValue = fVar22;
            fVar22 = SQRT(fVar22);
          }
          else if (TVar3 == Peak) {
            fVar22 = (float)((uint)fVar22 & uVar7);
          }
          else {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                               ,0x1bf,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar14 = this->NumChannels;
          }
          plVar6 = &(this->Envelope)._padding_;
          fVar19 = (this->Envelope).Value - fVar22;
          if (0.0 < fVar19) {
            plVar6 = &(this->Envelope)._padding_;
          }
          iVar13 = iVar13 + uVar14;
          (this->Envelope).Value = fVar19 * *(float *)((longlong)plVar6 + 4) + fVar22;
        } while (iVar13 < iVar15);
        fVar19 = CalcGain(this,fVar19 * *(float *)((longlong)plVar6 + 4) + fVar22);
        this->ScaledGainLinear = fVar19;
        UpdatePostFilterVariables(this);
        do {
          iVar13 = this->NumChannels;
          uVar14 = 0;
          if (0 < iVar13) {
            lVar16 = 0;
            pfVar12 = param_2 + iVar17;
            do {
              fVar19 = *(float *)((longlong)pfVar12 + ((longlong)param_1 - (longlong)param_2));
              uVar10 = 0;
              if ((int)uVar14 < (this->FilterState).ArrayNum) {
                uVar10 = ~uVar14 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (this->FilterState).AllocatorInstance.Data;
              uVar14 = uVar14 + 1;
              fVar1 = *(float *)(pFVar4 + lVar16 + 0x10);
              fVar22 = *(float *)(pFVar4 + lVar16 + 0xc);
              fVar18 = fVar19 - fVar1;
              *(float *)(pFVar4 + lVar16 + 8) = fVar18;
              fVar20 = fVar22 * (this->OutputVars).A1 + fVar18 * (this->OutputVars).A2;
              *(float *)(pFVar4 + lVar16) = fVar20;
              fVar18 = fVar22 * (this->OutputVars).A2 + fVar1 + fVar18 * (this->OutputVars).A3;
              *(float *)(pFVar4 + lVar16 + 0xc) = (fVar20 + fVar20) - fVar22;
              *(float *)(pFVar4 + lVar16 + 4) = fVar18;
              *(float *)(pFVar4 + lVar16 + 0x10) = (fVar18 + fVar18) - fVar1;
              lVar16 = lVar16 + 0x14;
              *pfVar12 = fVar19 * (this->OutputVars).M0 + fVar20 * (this->OutputVars).M1 +
                         fVar18 * (this->OutputVars).M2;
              pfVar12 = pfVar12 + 1;
              iVar13 = this->NumChannels;
            } while ((int)uVar14 < iVar13);
          }
          iVar17 = iVar17 + iVar13;
        } while (iVar17 < iVar15);
      }
      else {
        fVar19 = CalcGain(this,0.0);
        this->ScaledGainLinear = fVar19;
        UpdatePostFilterVariables(this);
      }
      iVar17 = iVar9;
    } while (iVar9 < param_4);
  }
  return;
}

// ProcessLowShelf @ 1444e03c0

void __thiscall
Audio::FDynamicStateVariableFilter::ProcessLowShelf
          (FDynamicStateVariableFilter *this,float *param_1,float *param_2,float *param_3,
          int param_4)

{
  float fVar1;
  int iVar2;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar2 = this->NumChannels;
  iVar17 = 0;
  if (0 < param_4) {
    do {
      iVar9 = iVar2 * 0x40 + iVar17;
      iVar16 = param_4;
      if (iVar9 < param_4) {
        iVar16 = iVar9;
      }
      iVar14 = iVar17;
      if (iVar17 < iVar16) {
        do {
          uVar15 = this->NumChannels;
          fVar21 = 0.0;
          if (0 < (int)uVar15) {
            pfVar12 = param_3 + iVar14;
            uVar11 = (ulonglong)uVar15;
            do {
              fVar21 = fVar21 + *pfVar12;
              pfVar12 = pfVar12 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          fVar18 = (this->KeyFilterState).Z2;
          fVar1 = (this->KeyFilterState).Z1;
          fVar21 = fVar21 - fVar18;
          TVar3 = (this->Envelope).Mode;
          (this->KeyFilterState).V3 = fVar21;
          fVar19 = (this->KeyVars).A2;
          fVar20 = fVar1 * (this->KeyVars).A1 + fVar19 * fVar21;
          (this->KeyFilterState).V1 = fVar20;
          fVar21 = fVar1 * fVar19 + fVar18 + fVar21 * (this->KeyVars).A3;
          (this->KeyFilterState).V2 = fVar21;
          (this->KeyFilterState).Z1 = (fVar20 + fVar20) - fVar1;
          (this->KeyFilterState).Z2 = (fVar21 + fVar21) - fVar18;
          if (TVar3 == MeanSquared) {
            fVar21 = fVar21 * fVar21 * (this->Envelope).AnalysisFilterBeta +
                     (this->Envelope).AnalysisFilterAlpha * (this->Envelope).AnalysisValue;
            (this->Envelope).AnalysisValue = fVar21;
          }
          else if (TVar3 == RootMeanSquared) {
            fVar21 = fVar21 * fVar21 * (this->Envelope).AnalysisFilterBeta +
                     (this->Envelope).AnalysisFilterAlpha * (this->Envelope).AnalysisValue;
            (this->Envelope).AnalysisValue = fVar21;
            fVar21 = SQRT(fVar21);
          }
          else if (TVar3 == Peak) {
            fVar21 = (float)((uint)fVar21 & uVar7);
          }
          else {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                               ,0x1bf,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar15 = this->NumChannels;
          }
          plVar6 = &(this->Envelope)._padding_;
          fVar18 = (this->Envelope).Value - fVar21;
          if (0.0 < fVar18) {
            plVar6 = &(this->Envelope)._padding_;
          }
          iVar14 = iVar14 + uVar15;
          (this->Envelope).Value = fVar18 * *(float *)((longlong)plVar6 + 4) + fVar21;
        } while (iVar14 < iVar16);
        fVar21 = CalcGain(this,fVar18 * *(float *)((longlong)plVar6 + 4) + fVar21);
        this->ScaledGainLinear = fVar21;
        UpdatePostFilterVariables(this);
        do {
          iVar14 = this->NumChannels;
          uVar15 = 0;
          if (0 < iVar14) {
            lVar13 = 0;
            pfVar12 = param_2 + iVar17;
            do {
              fVar21 = *(float *)((longlong)pfVar12 + ((longlong)param_1 - (longlong)param_2));
              uVar10 = 0;
              if ((int)uVar15 < (this->FilterState).ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (this->FilterState).AllocatorInstance.Data;
              uVar15 = uVar15 + 1;
              fVar18 = *(float *)(pFVar4 + lVar13 + 0x10);
              fVar1 = *(float *)(pFVar4 + lVar13 + 0xc);
              fVar19 = fVar21 - fVar18;
              *(float *)(pFVar4 + lVar13 + 8) = fVar19;
              fVar20 = fVar1 * (this->OutputVars).A1 + fVar19 * (this->OutputVars).A2;
              *(float *)(pFVar4 + lVar13) = fVar20;
              fVar19 = fVar1 * (this->OutputVars).A2 + fVar18 + fVar19 * (this->OutputVars).A3;
              *(float *)(pFVar4 + lVar13 + 0xc) = (fVar20 + fVar20) - fVar1;
              *(float *)(pFVar4 + lVar13 + 4) = fVar19;
              *(float *)(pFVar4 + lVar13 + 0x10) = (fVar19 + fVar19) - fVar18;
              lVar13 = lVar13 + 0x14;
              *pfVar12 = fVar20 * (this->OutputVars).M1 + fVar21 + fVar19 * (this->OutputVars).M2;
              pfVar12 = pfVar12 + 1;
              iVar14 = this->NumChannels;
            } while ((int)uVar15 < iVar14);
          }
          iVar17 = iVar17 + iVar14;
        } while (iVar17 < iVar16);
      }
      else {
        fVar21 = CalcGain(this,0.0);
        this->ScaledGainLinear = fVar21;
        UpdatePostFilterVariables(this);
      }
      iVar17 = iVar9;
    } while (iVar9 < param_4);
  }
  return;
}

// Reset @ 1444e1860

void __thiscall Audio::FDynamicStateVariableFilter::Reset(FDynamicStateVariableFilter *this)

{
  memset((this->FilterState).AllocatorInstance.Data,0,(longlong)this->NumChannels * 0x14);
  (this->KeyFilterState).V1 = 0.0;
  (this->KeyFilterState).V2 = 0.0;
  (this->KeyFilterState).V3 = 0.0;
  (this->KeyFilterState).Z1 = 0.0;
  (this->KeyFilterState).Z2 = 0.0;
  return;
}

// SetAnalog @ 1444e2500

void __thiscall
Audio::FDynamicStateVariableFilter::SetAnalog(FDynamicStateVariableFilter *this,bool param_1)

{
  FAttackRelease::SetAnalog((FAttackRelease *)&this->Envelope,param_1);
  return;
}

// SetAttackTime @ 1444e2720

void __thiscall
Audio::FDynamicStateVariableFilter::SetAttackTime(FDynamicStateVariableFilter *this,float param_1)

{
  float fVar1;
  
  if (__real_7f7fc99e <= param_1) {
    param_1 = __real_7f7fc99e;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)&(this->Envelope)._padding_ = param_1;
  if (param_1 <= 0.0) {
    *(undefined4 *)((longlong)&(this->Envelope)._padding_ + 4) = 0;
    return;
  }
  fVar1 = __real_c58fe95d;
  if (*(char *)((longlong)&(this->Envelope)._padding_ + 4) != '\0') {
    fVar1 = __real_c47a992f;
  }
  fVar1 = expf(fVar1 / (param_1 * *(float *)&(this->Envelope)._padding_));
  *(float *)((longlong)&(this->Envelope)._padding_ + 4) = fVar1;
  return;
}

// SetDynamicRange @ 1444e3610

void __thiscall
Audio::FDynamicStateVariableFilter::SetDynamicRange(FDynamicStateVariableFilter *this,float param_1)

{
  if (__real_43200000 <= param_1) {
    param_1 = __real_43200000;
  }
  if (param_1 <= __real_c3200000) {
    param_1 = __real_c3200000;
  }
  this->DynamicRangeDb = param_1;
  return;
}

// SetEnvMode @ 1444e3780

void __thiscall
Audio::FDynamicStateVariableFilter::SetEnvMode(FDynamicStateVariableFilter *this,Type param_1)

{
  (this->Envelope).Mode = param_1;
  return;
}

// SetFilterType @ 1444e39e0

void __thiscall
Audio::FDynamicStateVariableFilter::SetFilterType
          (FDynamicStateVariableFilter *this,EDynamicFilterType param_1)

{
  if (this->FilterType != param_1) {
    this->bNeedsUpdate = true;
    this->FilterType = param_1;
  }
  return;
}

// SetFrequency @ 1444e3ae0

void __thiscall
Audio::FDynamicStateVariableFilter::SetFrequency(FDynamicStateVariableFilter *this,float param_1)

{
  float fVar1;
  
  if (__real_322bcc77 <
      (float)((uint)(this->Frequency - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = this->SampleRate * __real_3f000000 - __real_3f800000;
    if (param_1 <= fVar1) {
      fVar1 = param_1;
    }
    if (fVar1 <= __real_41a00000) {
      fVar1 = __real_41a00000;
    }
    this->Frequency = fVar1;
    fVar1 = tanf(fVar1 * __real_40490fdb * this->OneOverSampleRate);
    (this->KeyVars).G = fVar1;
    this->bNeedsUpdate = true;
  }
  return;
}

// SetGain @ 1444e3c00

void __thiscall
Audio::FDynamicStateVariableFilter::SetGain(FDynamicStateVariableFilter *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(this->GainDb - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (__real_43200000 <= param_1) {
      param_1 = __real_43200000;
    }
    this->bNeedsUpdate = true;
    if (param_1 <= __real_c3200000) {
      param_1 = __real_c3200000;
    }
    this->GainDb = param_1;
  }
  return;
}

// SetKnee @ 1444e41b0

void __thiscall
Audio::FDynamicStateVariableFilter::SetKnee(FDynamicStateVariableFilter *this,float param_1)

{
  if (__real_43200000 <= param_1) {
    param_1 = __real_43200000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->Knee = param_1;
  this->HalfKnee = param_1 * __real_3f000000;
  return;
}

// SetQ @ 1444e4fb0

void __thiscall
Audio::FDynamicStateVariableFilter::SetQ(FDynamicStateVariableFilter *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)(param_1 - this->Q) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    if (__real_42480000 <= param_1) {
      param_1 = __real_42480000;
    }
    this->bNeedsUpdate = true;
    if (param_1 <= __real_38d1b717) {
      param_1 = __real_38d1b717;
    }
    this->Q = param_1;
    this->OneOverQ = fVar1 / param_1;
  }
  return;
}

// SetRatio @ 1444e5320

void __thiscall
Audio::FDynamicStateVariableFilter::SetRatio(FDynamicStateVariableFilter *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  if (__real_42c80000 <= param_1) {
    param_1 = __real_42c80000;
  }
  if (param_1 <= __real_3f800347) {
    param_1 = __real_3f800347;
  }
  fVar2 = __real_3f800000 / param_1;
  this->Ratio = param_1;
  this->SlopeFactor = fVar1 - fVar2;
  return;
}

// SetReleaseTime @ 1444e53e0

void __thiscall
Audio::FDynamicStateVariableFilter::SetReleaseTime(FDynamicStateVariableFilter *this,float param_1)

{
  float fVar1;
  
  if (__real_7f7fc99e <= param_1) {
    param_1 = __real_7f7fc99e;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)&(this->Envelope)._padding_ = param_1;
  if (param_1 <= 0.0) {
    *(undefined4 *)((longlong)&(this->Envelope)._padding_ + 4) = 0;
    return;
  }
  fVar1 = __real_c58fe95d;
  if (*(char *)((longlong)&(this->Envelope)._padding_ + 4) != '\0') {
    fVar1 = __real_c47a992f;
  }
  fVar1 = expf(fVar1 / (param_1 * *(float *)&(this->Envelope)._padding_));
  *(float *)((longlong)&(this->Envelope)._padding_ + 4) = fVar1;
  return;
}

// SetThreshold @ 1444e5b70

void __thiscall
Audio::FDynamicStateVariableFilter::SetThreshold(FDynamicStateVariableFilter *this,float param_1)

{
  if (0.0 <= param_1) {
    param_1 = 0.0;
  }
  if (param_1 <= __real_c3200000) {
    param_1 = __real_c3200000;
  }
  this->ThresholdDb = param_1;
  return;
}

// UpdatePostFilterVariables @ 1444e8300

void __thiscall
Audio::FDynamicStateVariableFilter::UpdatePostFilterVariables(FDynamicStateVariableFilter *this)

{
  EDynamicFilterType EVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = this->ScaledGainLinear;
  if (this->ScaledGainLinear <= __real_38d1b717) {
    fVar4 = __real_38d1b717;
  }
  EVar1 = this->FilterType;
  fVar6 = (this->KeyVars).G;
  fVar5 = this->OneOverQ;
  (this->OutputVars).A0 = fVar4;
  if (EVar1 == Bell) {
    fVar5 = fVar5 / fVar4;
  }
  else {
    fVar6 = fVar6 / SQRT(fVar4);
  }
  (this->OutputVars).G = fVar6;
  (this->OutputVars).K = fVar5;
  fVar3 = __real_3f800000;
  fVar2 = __real_3f800000 / ((fVar5 + fVar6) * fVar6 + __real_3f800000);
  (this->OutputVars).A1 = fVar2;
  fVar2 = fVar2 * fVar6;
  (this->OutputVars).A2 = fVar2;
  (this->OutputVars).A3 = fVar2 * fVar6;
  if (EVar1 == Bell) {
LAB_1444e83c6:
    fVar2 = fVar4 * fVar4 - fVar3;
    fVar6 = fVar2;
  }
  else {
    if (EVar1 != LowShelf) {
      if (EVar1 == HighShelf) {
        fVar2 = fVar3 - fVar4 * fVar4;
        fVar6 = (fVar3 - fVar4) * fVar5 * fVar4;
        fVar3 = fVar4 * fVar4;
        goto LAB_1444e83db;
      }
      goto LAB_1444e83c6;
    }
    fVar6 = fVar4 - fVar3;
    fVar2 = fVar4 * fVar4 - fVar3;
  }
  fVar6 = fVar6 * fVar5;
LAB_1444e83db:
  (this->OutputVars).M0 = fVar3;
  (this->OutputVars).M1 = fVar6;
  (this->OutputVars).M2 = fVar2;
  return;
}

// UpdatePreFilterVariables @ 1444e8400

void __thiscall
Audio::FDynamicStateVariableFilter::UpdatePreFilterVariables(FDynamicStateVariableFilter *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->KeyVars).G;
  fVar2 = this->OneOverQ;
  (this->KeyVars).K = fVar2;
  fVar2 = __real_3f800000 / ((fVar1 + fVar2) * fVar1 + __real_3f800000);
  (this->KeyVars).A1 = fVar2;
  fVar2 = fVar2 * fVar1;
  (this->KeyVars).A2 = fVar2;
  (this->KeyVars).A3 = fVar2 * fVar1;
  return;
}

// UpdateSettings @ 1444e8460

void __thiscall
Audio::FDynamicStateVariableFilter::UpdateSettings(FDynamicStateVariableFilter *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->KeyVars).G;
  fVar2 = this->OneOverQ;
  (this->KeyVars).K = fVar2;
  fVar2 = __real_3f800000 / ((fVar1 + fVar2) * fVar1 + __real_3f800000);
  (this->KeyVars).A1 = fVar2;
  fVar2 = fVar2 * fVar1;
  (this->KeyVars).A2 = fVar2;
  (this->KeyVars).A3 = fVar2 * fVar1;
  UpdatePostFilterVariables(this);
  this->bNeedsUpdate = false;
  return;
}

