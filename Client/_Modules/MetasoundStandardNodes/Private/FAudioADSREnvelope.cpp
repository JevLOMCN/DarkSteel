// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// GetNextEnvelopeOutput @ 14b025370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope::GetNextEnvelopeOutput
          (FEnvState *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,FAudioBuffer *param_7)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_78;
  int local_74;
  int local_70 [2];
  FScriptContainerElement *local_68;
  
  lVar12 = (longlong)param_3;
  if (param_1->CurrentSampleIndex == -1) {
    iVar6 = (param_7->Buffer).ArrayNum;
    if (0 < iVar6) {
      memset((param_7->Buffer).AllocatorInstance.Data,0,(longlong)iVar6 << 2);
      return;
    }
  }
  else {
    if ((param_1->bIsInRelease != false) &&
       (iVar6 = param_1->DecaySampleCount + param_1->AttackSampleCount,
       param_1->CurrentSampleIndex <= iVar6)) {
      param_1->EnvelopeValueAtReleaseStart = param_1->CurrentEnvelopeValue;
      param_1->CurrentSampleIndex = iVar6;
    }
    local_78 = param_2;
    local_74 = param_2;
    if ((1 < (byte)LogMetaSound._0_1_) && (param_7->InitialNum != (param_7->Buffer).ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    fVar15 = __real_3f800000;
    local_68 = (param_7->Buffer).AllocatorInstance.Data;
    iVar6 = param_1->AttackSampleCount - param_1->CurrentSampleIndex;
    if (0 < iVar6) {
      iVar6 = iVar6 + param_2;
      local_78 = param_3;
      if (iVar6 < param_3) {
        local_78 = iVar6;
      }
      if (local_78 < 1) {
        local_78 = 1;
      }
      if (param_2 < local_78) {
        pFVar7 = local_68 + (longlong)param_2 * 4;
        iVar6 = param_2;
        do {
          param_1->CurrentSampleIndex = param_1->CurrentSampleIndex + 1;
          fVar13 = powf((float)param_1->CurrentSampleIndex / (float)param_1->AttackSampleCount,
                        param_1->AttackCurveFactor);
          iVar6 = iVar6 + 1;
          *(float *)pFVar7 =
               fVar13 * (fVar15 - param_1->StartingEnvelopeValue) + param_1->StartingEnvelopeValue;
          pFVar7 = pFVar7 + 4;
        } while (iVar6 < local_78);
      }
      fVar13 = *(float *)(local_68 + (longlong)(local_78 + -1) * 4);
      param_1->CurrentEnvelopeValue = fVar13;
      (param_1->EnvEase).TargetValue = fVar13;
      (param_1->EnvEase).CurrentValue = fVar13;
      (param_1->EnvEase).EaseTimesTarget = fVar13 * (param_1->EnvEase).EaseFactor;
      if (param_1->CurrentSampleIndex == param_1->AttackSampleCount) {
        pFVar7 = (param_4->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar7 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_78;
        if (param_1->DecaySampleCount == 0) {
          pFVar7 = (param_5->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < pFVar7 + (longlong)param_5->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar6 = param_5->ArrayNum;
          if (iVar6 == param_5->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar6 + 1;
          *(int *)((param_5->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_78;
        }
      }
    }
    uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar9 = (ulonglong)local_78;
    if (local_78 < param_3) {
      iVar6 = param_1->AttackSampleCount + param_1->DecaySampleCount;
      iVar4 = iVar6 - param_1->CurrentSampleIndex;
      if (0 < iVar4) {
        iVar4 = local_78 + iVar4 + param_2;
        local_74 = param_3;
        if (iVar4 < param_3) {
          local_74 = iVar4;
        }
        if (local_78 < local_74) {
          pFVar7 = local_68 + uVar9 * 4;
          do {
            iVar4 = param_1->CurrentSampleIndex;
            param_1->CurrentSampleIndex = iVar4 + 1;
            fVar13 = powf((float)(iVar4 - param_1->AttackSampleCount) /
                          (float)param_1->DecaySampleCount,param_1->DecayCurveFactor);
            fVar16 = fVar15 - fVar13 * (fVar15 - param_1->SustainLevel);
            (param_1->EnvEase).TargetValue = fVar16;
            fVar14 = fVar16 * (param_1->EnvEase).EaseFactor;
            (param_1->EnvEase).EaseTimesTarget = fVar14;
            fVar13 = (param_1->EnvEase).CurrentValue;
            if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar16 - fVar13) & uVar2)) {
              fVar13 = fVar13 * (param_1->EnvEase).OneMinusEase + fVar14;
              (param_1->EnvEase).CurrentValue = fVar13;
            }
            param_1->CurrentEnvelopeValue = fVar13;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            *(float *)pFVar7 = fVar13;
            pFVar7 = pFVar7 + 4;
          } while ((int)uVar8 < local_74);
        }
        if (param_1->CurrentSampleIndex == iVar6) {
          pFVar7 = (param_5->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_74) &&
              ((FScriptContainerElement *)&local_74 < pFVar7 + (longlong)param_5->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar6 = param_5->ArrayNum;
          if (iVar6 == param_5->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar6 + 1;
          *(int *)((param_5->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_74;
        }
      }
      pFVar7 = local_68;
      lVar5 = (longlong)local_74;
      if (local_74 < param_3) {
        if (param_1->bIsInRelease == false) {
          if (lVar5 < lVar12) {
            if (3 < lVar12 - lVar5) {
              pFVar7 = local_68 + lVar5 * 4 + 8;
              lVar11 = ((lVar12 - lVar5) - 4U >> 2) + 1;
              lVar5 = lVar5 + lVar11 * 4;
              do {
                pfVar10 = &(param_1->EnvEase).OneMinusEase;
                fVar15 = param_1->SustainLevel;
                (param_1->EnvEase).TargetValue = fVar15;
                fVar14 = fVar15 * (param_1->EnvEase).EaseFactor;
                (param_1->EnvEase).EaseTimesTarget = fVar14;
                fVar13 = (param_1->EnvEase).CurrentValue;
                if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar15 - fVar13) & uVar2)) {
                  fVar13 = fVar13 * *pfVar10 + fVar14;
                  (param_1->EnvEase).CurrentValue = fVar13;
                }
                param_1->CurrentEnvelopeValue = fVar13;
                param_1->EnvelopeValueAtReleaseStart = fVar13;
                *(float *)(pFVar7 + -8) = fVar13;
                fVar15 = param_1->SustainLevel;
                (param_1->EnvEase).TargetValue = fVar15;
                fVar14 = fVar15 * (param_1->EnvEase).EaseFactor;
                (param_1->EnvEase).EaseTimesTarget = fVar14;
                fVar13 = (param_1->EnvEase).CurrentValue;
                if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar15 - fVar13) & uVar2)) {
                  fVar13 = fVar13 * *pfVar10 + fVar14;
                  (param_1->EnvEase).CurrentValue = fVar13;
                }
                param_1->CurrentEnvelopeValue = fVar13;
                param_1->EnvelopeValueAtReleaseStart = fVar13;
                *(float *)(pFVar7 + -4) = fVar13;
                fVar15 = param_1->SustainLevel;
                (param_1->EnvEase).TargetValue = fVar15;
                fVar14 = fVar15 * (param_1->EnvEase).EaseFactor;
                (param_1->EnvEase).EaseTimesTarget = fVar14;
                fVar13 = (param_1->EnvEase).CurrentValue;
                if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar15 - fVar13) & uVar2)) {
                  fVar13 = fVar13 * *pfVar10 + fVar14;
                  (param_1->EnvEase).CurrentValue = fVar13;
                }
                param_1->CurrentEnvelopeValue = fVar13;
                param_1->EnvelopeValueAtReleaseStart = fVar13;
                *(float *)pFVar7 = fVar13;
                fVar15 = param_1->SustainLevel;
                (param_1->EnvEase).TargetValue = fVar15;
                fVar14 = fVar15 * (param_1->EnvEase).EaseFactor;
                (param_1->EnvEase).EaseTimesTarget = fVar14;
                fVar13 = (param_1->EnvEase).CurrentValue;
                if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar15 - fVar13) & uVar2)) {
                  fVar13 = fVar13 * *pfVar10 + fVar14;
                  (param_1->EnvEase).CurrentValue = fVar13;
                }
                param_1->CurrentEnvelopeValue = fVar13;
                param_1->EnvelopeValueAtReleaseStart = fVar13;
                *(float *)(pFVar7 + 4) = fVar13;
                pFVar7 = pFVar7 + 0x10;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              if (lVar12 <= lVar5) {
                return;
              }
            }
            do {
              fVar15 = param_1->SustainLevel;
              (param_1->EnvEase).TargetValue = fVar15;
              fVar14 = fVar15 * (param_1->EnvEase).EaseFactor;
              (param_1->EnvEase).EaseTimesTarget = fVar14;
              fVar13 = (param_1->EnvEase).CurrentValue;
              if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar15 - fVar13) & uVar2)) {
                fVar13 = fVar13 * (param_1->EnvEase).OneMinusEase + fVar14;
                (param_1->EnvEase).CurrentValue = fVar13;
              }
              param_1->CurrentEnvelopeValue = fVar13;
              param_1->EnvelopeValueAtReleaseStart = fVar13;
              *(float *)(local_68 + lVar5 * 4) = fVar13;
              lVar5 = lVar5 + 1;
            } while (lVar5 < lVar12);
          }
        }
        else {
          lVar12 = (longlong)local_74;
          iVar4 = (param_1->AttackSampleCount - param_1->CurrentSampleIndex) +
                  param_1->DecaySampleCount + param_1->ReleaseSampleCount + param_2;
          iVar6 = param_3;
          if (iVar4 < param_3) {
            iVar6 = iVar4;
          }
          for (; lVar12 < iVar6; lVar12 = lVar12 + 1) {
            iVar4 = param_1->CurrentSampleIndex;
            param_1->CurrentSampleIndex = iVar4 + 1;
            fVar13 = powf((float)((iVar4 - param_1->DecaySampleCount) - param_1->AttackSampleCount)
                          / (float)param_1->ReleaseSampleCount,param_1->ReleaseCurveFactor);
            fVar14 = (fVar15 - fVar13) * param_1->EnvelopeValueAtReleaseStart;
            (param_1->EnvEase).TargetValue = fVar14;
            fVar16 = fVar14 * (param_1->EnvEase).EaseFactor;
            (param_1->EnvEase).EaseTimesTarget = fVar16;
            fVar13 = (param_1->EnvEase).CurrentValue;
            if ((param_1->EnvEase).Threshold <= (float)((uint)(fVar14 - fVar13) & uVar2)) {
              fVar13 = fVar13 * (param_1->EnvEase).OneMinusEase + fVar16;
              (param_1->EnvEase).CurrentValue = fVar13;
            }
            param_1->CurrentEnvelopeValue = fVar13;
            *(float *)(pFVar7 + lVar12 * 4) = fVar13;
          }
          if (iVar6 < param_3) {
            (param_1->EnvEase).TargetValue = 0.0;
            (param_1->EnvEase).EaseTimesTarget = 0.0;
            do {
              fVar15 = (param_1->EnvEase).CurrentValue;
              if ((param_1->EnvEase).Threshold <=
                  (float)((uint)((param_1->EnvEase).TargetValue - fVar15) & uVar2)) {
                fVar15 = fVar15 * (param_1->EnvEase).OneMinusEase +
                         (param_1->EnvEase).EaseTimesTarget;
                (param_1->EnvEase).CurrentValue = fVar15;
              }
              param_1->CurrentEnvelopeValue = fVar15;
              *(float *)(local_68 + (longlong)iVar6 * 4) = fVar15;
              if ((float)((uint)((param_1->EnvEase).TargetValue - (param_1->EnvEase).CurrentValue) &
                         uVar2) < (param_1->EnvEase).Threshold) {
                iVar4 = (param_3 - iVar6) + -1;
                local_70[0] = iVar6;
                if (0 < iVar4) {
                  memset(local_68 + (longlong)(iVar6 + 1) * 4,0,(longlong)iVar4 << 2);
                }
                param_1->CurrentSampleIndex = -1;
                pFVar7 = (param_6->AllocatorInstance).Data;
                if (((pFVar7 <= (FScriptContainerElement *)local_70) &&
                    ((FScriptContainerElement *)local_70 < pFVar7 + (longlong)param_6->ArrayMax * 4)
                    ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar3)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar6 = param_6->ArrayNum;
                if (iVar6 == param_6->ArrayMax) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&param_6->AllocatorInstance,&param_6->ArrayMax);
                }
                param_6->ArrayNum = iVar6 + 1;
                *(int *)((param_6->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_70[0];
                return;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < param_3);
          }
        }
      }
    }
  }
  return;
}

