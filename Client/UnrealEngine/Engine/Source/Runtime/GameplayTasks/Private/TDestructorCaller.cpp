// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 3

// Destruct @ 146cf10c0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  if ((*(int *)((longlong)param_1 + 8) != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(param_1,0,0,0x10);
    *(undefined4 *)((longlong)param_1 + 8) = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 146cf1120

void __cdecl
UE::Core::Private::TDestructorCaller<TFunction<void___cdecl(void)>_>::Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000146cf1138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 146cf1150

void __cdecl UE::Core::Private::TDestructorCaller<FTimerDynamicDelegate>::Destruct(void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> FVar12;
  longlong lVar13;
  uint uVar14;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar15;
  undefined8 uStackX_10;
  longlong lStackX_18;
  void *pvStackX_20;
  void *pvStack_58;
  undefined8 *puStack_50;
  
  uVar14 = 0;
  uStackX_10 = 0;
  pTVar5 = FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  if (pTVar5->ArrayNum != 0) {
    lVar13 = 0;
    lStackX_18 = 0;
    do {
      FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
              FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
      uVar11 = 0;
      if ((int)uVar14 < *(int *)((longlong)FVar6 + 0x28)) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar6 + 0x20) !=
          (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
        FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                 ((longlong)FVar6 + 0x20);
      }
      piVar1 = *(int **)(lVar13 + (longlong)FVar6);
      if (*(void **)(piVar1 + 2) == param_1) {
        *(undefined1 *)(piVar1 + 4) = 1;
        if (*piVar1 == 0) {
          uStackX_10 = CONCAT44(uStackX_10._4_4_,
                                (uint)uStackX_10 + 1 & 0xfffff | (uint)uStackX_10 & 0xfff00000);
          FVar7 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                  FMRSWRecursiveAccessDetector::GetReadersTls();
          FVar8 = FVar7;
          if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)((longlong)FVar7 + 0x40)
              != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
            FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                     ((longlong)FVar7 + 0x40);
          }
          for (FVar12 = FVar8;
              FVar12 != (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                        ((longlong)*(int *)((longlong)FVar7 + 0x48) * 0x10 + (longlong)FVar8);
              FVar12 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                       ((longlong)FVar12 + 0x10)) {
            if (*(void **)FVar12 == param_1) {
              uVar11 = (uint)((longlong)FVar12 - (longlong)FVar8 >> 4);
              if (uVar11 != 0xffffffff) {
                FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                        FMRSWRecursiveAccessDetector::GetReadersTls();
                uVar9 = 0;
                if ((int)uVar11 < *(int *)((longlong)FVar8 + 0x48)) {
                  uVar9 = ~uVar11 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                     ((longlong)FVar8 + 0x40) !=
                    (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
                  FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                           ((longlong)FVar8 + 0x40);
                }
                piVar1 = (int *)((longlong)(int)uVar11 * 0x10 + 8 + (longlong)FVar8);
                *piVar1 = *piVar1 + -1;
                lVar13 = lStackX_18;
                if (*piVar1 == 0) {
                  FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)
                          FMRSWRecursiveAccessDetector::GetReadersTls();
                  uVar9 = 0;
                  if ((int)uVar11 < *(int *)((longlong)FVar8 + 0x48)) {
                    uVar9 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FVar7 = FVar8;
                  if (*(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                       ((longlong)FVar8 + 0x40) !=
                      (ForElementType<FMRSWRecursiveAccessDetector::FReaderNum>)0x0) {
                    FVar7 = *(ForElementType<FMRSWRecursiveAccessDetector::FReaderNum> *)
                             ((longlong)FVar8 + 0x40);
                  }
                  iVar10 = ~uVar11 + *(int *)((longlong)FVar8 + 0x48);
                  if (1 < iVar10) {
                    iVar10 = 1;
                  }
                  if (iVar10 != 0) {
                    memmove((void *)((longlong)(int)uVar11 * 0x10 + (longlong)FVar7),
                            (void *)((longlong)(*(int *)((longlong)FVar8 + 0x48) - iVar10) * 0x10 +
                                    (longlong)FVar7),(longlong)iVar10 << 4);
                  }
                  *(int *)((longlong)FVar8 + 0x48) = *(int *)((longlong)FVar8 + 0x48) + -1;
                  lVar13 = lStackX_18;
                }
                goto LAB_1414811ce;
              }
              break;
            }
          }
          pvStackX_20 = param_1;
          `FMRSWRecursiveAccessDetector::RemoveReaderFromTls'::__l2::<lambda_2>::operator()
                    (&pvStackX_20);
        }
        else {
          uStackX_10 = CONCAT44(uStackX_10._4_4_,
                                ((uint)uStackX_10 & 0xfff00000) + 0x100000 |
                                (uint)uStackX_10 & 0xfffff);
          DVar4 = GetCurrentThreadId();
          uStackX_10 = CONCAT44(DVar4 + 1,(uint)uStackX_10);
        }
LAB_1414811ce:
        FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
                FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
        uVar11 = 0;
        if ((int)uVar14 < *(int *)((longlong)FVar6 + 0x28)) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar15 = FVar6;
        if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar6 + 0x20) !=
            (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
          FVar15 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
                    ((longlong)FVar6 + 0x20);
        }
        iVar10 = ~uVar14 + *(int *)((longlong)FVar6 + 0x28);
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove((void *)((longlong)FVar15 + (longlong)(int)uVar14 * 8),
                  (void *)((longlong)FVar15 +
                          (longlong)(*(int *)((longlong)FVar6 + 0x28) - iVar10) * 8),
                  (longlong)iVar10 << 3);
        }
        iVar10 = *(int *)((longlong)FVar6 + 0x28) + -1;
        *(int *)((longlong)FVar6 + 0x28) = iVar10;
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                  (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)FVar6
                   ,iVar10,(int *)((longlong)FVar6 + 0x2c));
        uVar14 = uVar14 - 1;
        lVar13 = lVar13 + -8;
      }
      lVar13 = lVar13 + 8;
      uVar14 = uVar14 + 1;
      lStackX_18 = lVar13;
      pTVar5 = FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
    } while (uVar14 != pTVar5->ArrayNum);
  }
  if ((*(longlong *)param_1 != uStackX_10) &&
     (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
    puStack_50 = &uStackX_10;
    pvStack_58 = param_1;
    `FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector'::__l15::<lambda_1>::operator()
              (&pvStack_58);
  }
  return;
}

