// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// GetNextEnvelopeOutput @ 14b024d60

void __cdecl
Metasound::ADEnvelopeNodePrivate::TADEnvelope<float>::GetNextEnvelopeOutput
          (FEnvState *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,float *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_res18 [4];
  
  fVar6 = __real_3f800000;
  if ((0 < param_2) || (iVar5 = param_1->CurrentSampleIndex, iVar5 == -1)) {
    *param_5 = 0.0;
    return;
  }
  iVar1 = param_1->AttackSampleCount;
  local_res18[0] = param_3;
  if (iVar1 <= iVar5) {
    if (iVar5 < param_1->DecaySampleCount + iVar1) {
      param_1->CurrentSampleIndex = iVar5 + 1;
      fVar6 = powf((float)(iVar5 - iVar1) / (float)param_1->DecaySampleCount,
                   param_1->DecayCurveFactor);
      *param_5 = __real_3f800000 - fVar6;
      return;
    }
    if (param_1->bLooping == false) {
      param_1->CurrentSampleIndex = -1;
      *param_5 = 0.0;
    }
    else {
      param_1->CurrentSampleIndex = 0;
    }
    pFVar2 = (param_4->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)param_4->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar5 + 1;
    *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res18[0];
    return;
  }
  if (1 < iVar1) {
    fVar6 = powf((float)iVar5 / (float)iVar1,param_1->AttackCurveFactor);
    fVar7 = __real_3f800000 - param_1->StartingEnvelopeValue;
    param_1->CurrentSampleIndex = iVar5 + 1;
    *param_5 = fVar6 * fVar7 + param_1->StartingEnvelopeValue;
    return;
  }
  param_1->CurrentSampleIndex = iVar5 + 1;
  *param_5 = fVar6;
  return;
}

// GetNextEnvelopeOutput @ 14b024f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::ADEnvelopeNodePrivate::TADEnvelope<Metasound::FAudioBuffer>::GetNextEnvelopeOutput
          (FEnvState *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,FAudioBuffer *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_78 [20];
  
  if (param_1->CurrentSampleIndex == -1) {
    iVar8 = (param_5->Buffer).ArrayNum;
    if (0 < iVar8) {
      memset((param_5->Buffer).AllocatorInstance.Data,0,(longlong)iVar8 << 2);
      return;
    }
  }
  else {
    if ((1 < (byte)LogMetaSound._0_1_) && (param_5->InitialNum != (param_5->Buffer).ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar5 = __real_3f800000;
    pFVar2 = (param_5->Buffer).AllocatorInstance.Data;
    while (param_2 < param_3) {
      iVar8 = param_1->AttackSampleCount;
      iVar1 = param_1->CurrentSampleIndex;
      local_78[0] = param_2;
      if (iVar1 < iVar8) {
        param_1->CurrentSampleIndex = iVar1 + 1;
        fVar9 = powf((float)iVar1 / (float)iVar8,param_1->AttackCurveFactor);
        fVar10 = fVar9 * (fVar5 - param_1->StartingEnvelopeValue) + param_1->StartingEnvelopeValue;
        (param_1->EnvEase).TargetValue = fVar10;
        fVar11 = fVar10 * (param_1->EnvEase).EaseFactor;
        (param_1->EnvEase).EaseTimesTarget = fVar11;
        fVar9 = (param_1->EnvEase).CurrentValue;
        if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar10 - fVar9) & uVar6)) {
          fVar9 = fVar9 * (param_1->EnvEase).OneMinusEase + fVar11;
          (param_1->EnvEase).CurrentValue = fVar9;
        }
        param_1->CurrentEnvelopeValue = fVar9;
        *(float *)(pFVar2 + (longlong)param_2 * 4) = fVar9;
      }
      else if (iVar1 < param_1->DecaySampleCount + iVar8) {
        param_1->CurrentSampleIndex = iVar1 + 1;
        fVar10 = powf((float)(iVar1 - iVar8) / (float)param_1->DecaySampleCount,
                      param_1->DecayCurveFactor);
        fVar10 = fVar5 - fVar10;
        (param_1->EnvEase).TargetValue = fVar10;
        fVar11 = fVar10 * (param_1->EnvEase).EaseFactor;
        (param_1->EnvEase).EaseTimesTarget = fVar11;
        fVar9 = (param_1->EnvEase).CurrentValue;
        if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar10 - fVar9) & uVar6)) {
          fVar9 = fVar9 * (param_1->EnvEase).OneMinusEase + fVar11;
          (param_1->EnvEase).CurrentValue = fVar9;
        }
        param_1->CurrentEnvelopeValue = fVar9;
        *(float *)(pFVar2 + (longlong)param_2 * 4) = fVar9;
      }
      else if (param_1->bLooping == false) {
        fVar9 = (param_1->EnvEase).CurrentValue;
        if ((param_1->EnvEase).Threshold <=
            (float)((uint)((param_1->EnvEase).TargetValue - fVar9) & uVar6)) {
          fVar9 = fVar9 * (param_1->EnvEase).OneMinusEase + (param_1->EnvEase).EaseTimesTarget;
          (param_1->EnvEase).CurrentValue = fVar9;
        }
        param_1->CurrentEnvelopeValue = fVar9;
        *(float *)(pFVar2 + (longlong)param_2 * 4) = fVar9;
        if ((float)((uint)((param_1->EnvEase).TargetValue - (param_1->EnvEase).CurrentValue) & uVar6
                   ) < (param_1->EnvEase).Threshold) {
          iVar8 = (param_3 - param_2) + -1;
          if (0 < iVar8) {
            memset(pFVar2 + (longlong)(param_2 + 1) * 4,0,(longlong)iVar8 << 2);
          }
          param_1->CurrentSampleIndex = -1;
          pFVar2 = (param_4->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_78) &&
              ((FScriptContainerElement *)local_78 < pFVar2 + (longlong)param_4->ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = param_4->ArrayNum;
          if (iVar8 == param_4->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar8 + 1;
          *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_78[0];
          return;
        }
      }
      else {
        param_1->StartingEnvelopeValue = 0.0;
        fVar9 = fVar5;
        if (iVar8 != 0) {
          fVar9 = 0.0;
        }
        param_1->CurrentEnvelopeValue = fVar9;
        param_1->CurrentSampleIndex = 0;
        pFVar3 = (param_4->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 < pFVar3 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = param_4->ArrayNum;
        if (iVar8 == param_4->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar8 + 1;
        *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_78[0];
      }
      param_2 = local_78[0] + 1;
    }
  }
  return;
}

