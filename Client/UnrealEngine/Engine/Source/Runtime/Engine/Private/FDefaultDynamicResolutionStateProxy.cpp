// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// BeginFrame @ 147b482e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDefaultDynamicResolutionStateProxy::BeginFrame
          (FDefaultDynamicResolutionStateProxy *this,float param_1)

{
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar1;
  wchar_t *pwVar2;
  FBudget *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  EResult EVar10;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar11;
  ulonglong uVar12;
  ForElementType<DynamicRenderScaling::TMap<bool>::FItem> FVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auStackY_188 [32];
  ulonglong local_158;
  TArray<DynamicRenderScaling::TMap<bool>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x23c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((GRHIGlobals.SupportsFrameCyclesBubblesRemoval == false) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3347058066628543037>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x23d,"GRHIGlobals.SupportsFrameCyclesBubblesRemoval"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = DynamicRenderScaling::IsSupported();
  if (bVar6) {
    DynamicRenderScaling::UpdateHeuristicsSettings();
    local_150.AllocatorInstance.SecondaryData =
         (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0x10;
    iVar8 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    TArray<DynamicRenderScaling::TMap<bool>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum(&local_150,iVar8,Default);
    ppTVar11 = DynamicRenderScaling::FBudget::GetGlobalList();
    for (pTVar1 = *ppTVar11; pTVar1 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
        pTVar1 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar1->_padding_) {
      uVar14 = pTVar1->Element->BudgetId;
      pwVar2 = pTVar1->Element->Name;
      uVar9 = 0;
      if ((int)uVar14 < local_150.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)&local_150;
      if (local_150.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
        FVar13 = local_150.AllocatorInstance.SecondaryData;
      }
      *(wchar_t **)((longlong)FVar13 + (longlong)(int)uVar14 * 0x10) = pwVar2;
    }
    iVar8 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    TArray<DynamicRenderScaling::TMap<bool>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
    ::SetNum(&local_150,iVar8,Default);
    uVar14 = 0;
    if (0 < local_150.ArrayNum) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < local_150.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)&local_150;
        if (local_150.AllocatorInstance.SecondaryData !=
            (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
          FVar13 = local_150.AllocatorInstance.SecondaryData;
        }
        uVar14 = uVar14 + 1;
        *(undefined1 *)(lVar15 + 8 + (longlong)FVar13) = 0;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar14 < local_150.ArrayNum);
    }
    ppTVar11 = DynamicRenderScaling::FBudget::GetGlobalList();
    for (pTVar1 = *ppTVar11; pTVar1 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
        pTVar1 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar1->_padding_) {
      pFVar3 = pTVar1->Element;
      bVar6 = DynamicRenderScaling::FHeuristicSettings::IsEnabled(&pFVar3->CachedSettings);
      iVar8 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      if ((local_150.ArrayNum != iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Array.Num() == FBudget::GetGlobalListSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                             ,0xd5,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = pFVar3->BudgetId;
      uVar9 = 0;
      if ((int)uVar14 < local_150.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar13 = (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)&local_150;
      if (local_150.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
        FVar13 = local_150.AllocatorInstance.SecondaryData;
      }
      ((uchar *)((longlong)FVar13 + 8))[(longlong)(int)uVar14 * 0x10] = bVar6;
    }
    DynamicRenderScaling::BeginFrame((TMap<bool> *)&local_150);
    if (local_150.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<bool>::FItem>)0x0) {
      FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
    }
  }
  dVar5 = __real_408f400000000000;
  uVar12 = (ulonglong)GRenderThreadTime;
  dVar16 = FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000;
  EVar10 = FRHIGPUFrameTimeHistory::FState::PopFrameCycles(&this->GPUFrameTimeState,&local_158);
  while (EVar10 != Empty) {
    FDynamicResolutionHeuristicProxy::CreateNewPreviousFrameTimings_RenderThread
              (&this->Heuristic,param_1,(float)(dVar16 * (double)uVar12),
               (float)((double)local_158 * FGenericPlatformTime::SecondsPerCycle64 * dVar5));
    FDynamicResolutionHeuristicProxy::RefreshCurrentFrameResolutionFraction_RenderThread
              (&this->Heuristic);
    EVar10 = FRHIGPUFrameTimeHistory::FState::PopFrameCycles(&this->GPUFrameTimeState,&local_158);
  }
  return;
}

