// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetNextEnvelopeOutput @ 14b025be0

void __cdecl
Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope::GetNextEnvelopeOutput
          (FEnvState *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,float *param_7)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int local_res18 [4];
  undefined4 local_18;
  int local_14;
  int local_10 [2];
  
  if (0 < param_2) {
    return;
  }
  iVar6 = param_1->CurrentSampleIndex;
  if (iVar6 == -1) {
    *param_7 = 0.0;
    return;
  }
  if ((param_1->bIsInRelease != false) &&
     (iVar8 = param_1->DecaySampleCount + param_1->AttackSampleCount, iVar6 < iVar8)) {
    param_1->EnvelopeValueAtReleaseStart = param_1->CurrentEnvelopeValue;
    param_1->CurrentSampleIndex = iVar8;
    iVar6 = iVar8;
  }
  iVar8 = param_1->AttackSampleCount;
  local_res18[0] = param_3;
  if (iVar6 < iVar8) {
    param_1->CurrentSampleIndex = iVar6 + 1;
    fVar9 = powf((float)(iVar6 + 1) / (float)iVar8,param_1->AttackCurveFactor);
    fVar10 = fVar9 * (__real_3f800000 - param_1->StartingEnvelopeValue) +
             param_1->StartingEnvelopeValue;
    (param_1->EnvEase).TargetValue = fVar10;
    fVar9 = fVar10 * (param_1->EnvEase).EaseFactor;
    (param_1->EnvEase).CurrentValue = fVar10;
    (param_1->EnvEase).EaseTimesTarget = fVar9;
    if ((param_1->EnvEase).Threshold <= 0.0) {
      fVar10 = fVar10 * (param_1->EnvEase).OneMinusEase + fVar9;
      (param_1->EnvEase).CurrentValue = fVar10;
    }
    param_1->CurrentEnvelopeValue = fVar10;
    *param_7 = fVar10;
    if (param_1->CurrentSampleIndex != param_1->AttackSampleCount) {
      return;
    }
    pFVar3 = (param_4->AllocatorInstance).Data;
    local_18 = 0;
    if (((pFVar3 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)param_4->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_4->ArrayNum;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar6 + 1;
    *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18;
    if (param_1->DecaySampleCount != 0) {
      return;
    }
    local_14 = 0;
    pFVar3 = (param_5->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_14) &&
        ((FScriptContainerElement *)&local_14 < pFVar3 + (longlong)param_5->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_5->ArrayNum;
    if (iVar6 == param_5->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    iVar8 = iVar6 + 1;
    lVar7 = (longlong)iVar6;
  }
  else {
    iVar2 = param_1->DecaySampleCount;
    iVar1 = iVar2 + iVar8;
    if (iVar6 < iVar1) {
      param_1->CurrentSampleIndex = iVar6 + 1;
      fVar9 = powf((float)(iVar6 - iVar8) / (float)iVar2,param_1->DecayCurveFactor);
      fVar9 = __real_3f800000 - fVar9 * (__real_3f800000 - param_1->SustainLevel);
      (param_1->EnvEase).TargetValue = fVar9;
      (param_1->EnvEase).EaseTimesTarget = fVar9 * (param_1->EnvEase).EaseFactor;
      fVar9 = Audio::FExponentialEase::GetNextValue(&param_1->EnvEase);
      param_1->CurrentEnvelopeValue = fVar9;
      *param_7 = fVar9;
      if (param_1->CurrentSampleIndex != iVar1) {
        return;
      }
      local_10[0] = 0;
      pFVar3 = (param_5->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_10) &&
          ((FScriptContainerElement *)local_10 < pFVar3 + (longlong)param_5->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = param_5->ArrayNum;
      if (iVar6 == param_5->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      iVar8 = iVar6 + 1;
      lVar7 = (longlong)iVar6;
      local_14 = local_10[0];
    }
    else {
      if (param_1->bIsInRelease == false) {
        fVar9 = param_1->SustainLevel;
        (param_1->EnvEase).TargetValue = fVar9;
        (param_1->EnvEase).EaseTimesTarget = fVar9 * (param_1->EnvEase).EaseFactor;
        fVar9 = Audio::FExponentialEase::GetNextValue(&param_1->EnvEase);
        param_1->CurrentEnvelopeValue = fVar9;
        *param_7 = fVar9;
        param_1->EnvelopeValueAtReleaseStart = fVar9;
        return;
      }
      if (iVar6 < param_1->ReleaseSampleCount + iVar1) {
        param_1->CurrentSampleIndex = iVar6 + 1;
        fVar9 = powf((float)((iVar6 - iVar8) - iVar2) / (float)param_1->ReleaseSampleCount,
                     param_1->ReleaseCurveFactor);
        fVar9 = (__real_3f800000 - fVar9) * param_1->EnvelopeValueAtReleaseStart;
        (param_1->EnvEase).TargetValue = fVar9;
        (param_1->EnvEase).EaseTimesTarget = fVar9 * (param_1->EnvEase).EaseFactor;
        fVar9 = Audio::FExponentialEase::GetNextValue(&param_1->EnvEase);
        param_1->CurrentEnvelopeValue = fVar9;
        *param_7 = fVar9;
        return;
      }
      param_1->CurrentSampleIndex = -1;
      *param_7 = 0.0;
      pFVar3 = (param_6->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 < pFVar3 + (longlong)param_6->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = param_6->ArrayNum;
      if (iVar6 == param_6->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      iVar8 = iVar6 + 1;
      lVar7 = (longlong)iVar6;
      param_5 = param_6;
      local_14 = local_res18[0];
    }
  }
  param_5->ArrayNum = iVar8;
  *(int *)((param_5->AllocatorInstance).Data + lVar7 * 4) = local_14;
  return;
}

