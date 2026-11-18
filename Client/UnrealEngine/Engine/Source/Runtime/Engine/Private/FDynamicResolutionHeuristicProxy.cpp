// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FDynamicResolutionHeuristicProxy @ 147b39280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FDynamicResolutionHeuristicProxy * __thiscall
FDynamicResolutionHeuristicProxy::FDynamicResolutionHeuristicProxy
          (FDynamicResolutionHeuristicProxy *this)

{
  uint uVar1;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar2;
  wchar_t *pwVar3;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar9;
  FDynamicResolutionHeuristicProxy *pFVar10;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar11;
  
  (this->History).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->History).ArrayNum = 0;
  (this->History).ArrayMax = 0;
  DynamicRenderScaling::TMap<float>::TMap<float>(&this->CurrentFrameResolutionFractions);
  DynamicRenderScaling::TMap<float>::TMap<float>(&this->CurrentFrameMaxResolutionFractions);
  (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData =
       (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0;
  (this->BudgetHistorySizes).Array.ArrayNum = 0;
  (this->BudgetHistorySizes).Array.ArrayMax = 0x10;
  iVar7 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  TArray<DynamicRenderScaling::TMap<int>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&(this->BudgetHistorySizes).Array,iVar7,Default);
  ppTVar9 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar2 = *ppTVar9;
  while( true ) {
    if (pTVar2 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      bVar6 = IsInGameThread();
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                             ,0x8f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FDynamicResolutionHeuristicProxy *)(*pcVar5)();
        return pFVar10;
      }
      ResetInternal(this);
      return this;
    }
    uVar1 = pTVar2->Element->BudgetId;
    pwVar3 = pTVar2->Element->Name;
    uVar8 = 0;
    if ((int)uVar1 < (this->BudgetHistorySizes).Array.ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    FVar4 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)&this->BudgetHistorySizes;
    if (FVar4 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
      FVar11 = FVar4;
    }
    *(wchar_t **)((longlong)FVar11 + (longlong)(int)uVar1 * 0x10) = pwVar3;
    pTVar2 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar2->_padding_;
  }
  pcVar5 = (code *)swi(3);
  pFVar10 = (FDynamicResolutionHeuristicProxy *)(*pcVar5)();
  return pFVar10;
}

// FrameHistoryEntry @ 147b3a1e0

FrameHistoryEntry * __thiscall
FDynamicResolutionHeuristicProxy::FrameHistoryEntry::FrameHistoryEntry(FrameHistoryEntry *this)

{
  float local_res8 [2];
  
  this->GameThreadTimeMs = -1.0;
  this->RenderThreadTimeMs = -1.0;
  this->TotalFrameGPUBusyTimeMs = -1.0;
  DynamicRenderScaling::TMap<float>::TMap<float>(&this->BudgetTimingMs);
  DynamicRenderScaling::TMap<float>::TMap<float>(&this->ResolutionFractions);
  local_res8[0] = 1.0;
  DynamicRenderScaling::TMap<float>::SetAll(&this->ResolutionFractions,local_res8);
  local_res8[0] = -1.0;
  DynamicRenderScaling::TMap<float>::SetAll(&this->BudgetTimingMs,local_res8);
  return this;
}

// ~FDynamicResolutionHeuristicProxy @ 147b3ccf0

void __thiscall
FDynamicResolutionHeuristicProxy::~FDynamicResolutionHeuristicProxy
          (FDynamicResolutionHeuristicProxy *this)

{
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar1;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x95,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar1 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->CurrentFrameMaxResolutionFractions).Array.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>
            ((FrameHistoryEntry *)(this->History).AllocatorInstance.Data,(this->History).ArrayNum);
  pFVar3 = (this->History).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// CreateDefaultState @ 147b4df90

TSharedPtr<IDynamicResolutionState,1> * __cdecl
FDynamicResolutionHeuristicProxy::CreateDefaultState
          (TSharedPtr<IDynamicResolutionState,1> *__return_storage_ptr__)

{
  FDefaultDynamicResolutionState *this;
  TRawPtrProxy<FDefaultDynamicResolutionState> local_res8 [4];
  
  this = ::operator_new(0x18);
  local_res8[0].Object = (FDefaultDynamicResolutionState *)0x0;
  if (this != (FDefaultDynamicResolutionState *)0x0) {
    local_res8[0].Object = FDefaultDynamicResolutionState::FDefaultDynamicResolutionState(this);
  }
  TSharedPtr<IDynamicResolutionState,1>::
  TSharedPtr<IDynamicResolutionState,1><FDefaultDynamicResolutionState>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// CreateNewPreviousFrameTimings_RenderThread @ 147b4e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicResolutionHeuristicProxy::CreateNewPreviousFrameTimings_RenderThread
          (FDynamicResolutionHeuristicProxy *this,float param_1,float param_2,float param_3)

{
  FBudget *pFVar1;
  ulonglong uVar2;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar10;
  float *pfVar11;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar12;
  uint uVar13;
  ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> FVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar16;
  uint uVar17;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar18;
  longlong lVar19;
  FScriptContainerElement *this_00;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  float local_2a8;
  float local_2a4;
  FScriptContainerElement *local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  TMap<float> local_280;
  TMap<float> local_170;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0xb2,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_3 < 0.0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalFrameGPUBusyTimeMs >= 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0xb3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->IgnoreFrameRemainingCount < 1) {
    ResizeHistoryIfNeeded(this);
    iVar8 = (this->History).ArrayNum;
    uVar17 = (this->PreviousFrameIndex + 1) % iVar8;
    uVar13 = 0;
    if ((int)uVar17 < iVar8) {
      uVar13 = ~uVar17 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (local_2b8 = (longlong)(int)uVar17, local_2b0 = (longlong)iVar8,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar15 = (this->History).AllocatorInstance.Data;
    lVar19 = (longlong)(int)uVar17 * 0x230;
    this->PreviousFrameIndex = uVar17;
    local_290 = 0xbf800000;
    local_28c = 0xbf800000;
    local_288 = 0xbf800000;
    local_2a0 = pFVar15;
    local_298 = lVar19;
    DynamicRenderScaling::TMap<float>::TMap<float>(&local_280);
    DynamicRenderScaling::TMap<float>::TMap<float>(&local_170);
    local_2a8 = 1.0;
    DynamicRenderScaling::TMap<float>::SetAll(&local_170,&local_2a8);
    local_2a4 = -1.0;
    DynamicRenderScaling::TMap<float>::SetAll(&local_280,&local_2a4);
    *(undefined4 *)(pFVar15 + lVar19) = local_290;
    this_00 = pFVar15 + lVar19 + 0x10;
    *(undefined4 *)(pFVar15 + lVar19 + 4) = local_28c;
    *(undefined4 *)(pFVar15 + lVar19 + 8) = local_288;
    DynamicRenderScaling::TMap<float>::operator=((TMap<float> *)this_00,&local_280);
    DynamicRenderScaling::TMap<float>::operator=
              ((TMap<float> *)(pFVar15 + lVar19 + 0x120),&local_170);
    if (local_170.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FMemory::Free((void *)local_170.Array.AllocatorInstance.SecondaryData);
    }
    if (local_280.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FMemory::Free((void *)local_280.Array.AllocatorInstance.SecondaryData);
    }
    DynamicRenderScaling::TMap<float>::operator=
              ((TMap<float> *)(pFVar15 + lVar19 + 0x120),&this->CurrentFrameResolutionFractions);
    *(float *)(pFVar15 + lVar19) = param_1;
    *(float *)(pFVar15 + lVar19 + 4) = param_2;
    *(float *)(pFVar15 + lVar19 + 8) = param_3;
    iVar8 = (this->History).ArrayNum;
    iVar7 = this->HistorySize + 1;
    if (iVar7 < iVar8) {
      iVar8 = iVar7;
    }
    this->HistorySize = iVar8;
    FVar10 = (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)
             DynamicRenderScaling::GetLatestTimings();
    pfVar11 = DynamicRenderScaling::TMap<float>::operator[]
                        ((TMap<float> *)this_00,&GDynamicPrimaryResolutionFraction);
    *pfVar11 = param_3;
    ppTVar12 = DynamicRenderScaling::FBudget::GetGlobalList();
    fVar5 = __real_3a83126f;
    pTVar18 = *ppTVar12;
    if (pTVar18 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      do {
        pFVar1 = pTVar18->Element;
        iVar8 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((*(int *)((longlong)FVar10 + 0x108) != iVar8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array.Num() == FBudget::GetGlobalListSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                               ,0xcf,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = pFVar1->BudgetId;
        uVar17 = 0;
        if ((int)uVar13 < *(int *)((longlong)FVar10 + 0x108)) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_2b8 = (longlong)(int)uVar13,
           local_2b0 = (longlong)*(int *)((longlong)FVar10 + 0x108),
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar14 = FVar10;
        if (*(ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *)
             ((longlong)FVar10 + 0x100) !=
            (ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem>)0x0) {
          FVar14 = *(ForElementType<DynamicRenderScaling::TMap<unsigned___int64>::FItem> *)
                    ((longlong)FVar10 + 0x100);
        }
        uVar2 = *(ulonglong *)((longlong)FVar14 + 8 + (longlong)(int)uVar13 * 0x10);
        iVar8 = *(int *)(local_2a0 + lVar19 + 0x118);
        iVar7 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar8 != iVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array.Num() == FBudget::GetGlobalListSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                               ,0xd5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = pFVar1->BudgetId;
        uVar17 = 0;
        if ((int)uVar13 < *(int *)(this_00 + 0x108)) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_2b8 = (longlong)(int)uVar13, local_2b0 = (longlong)*(int *)(this_00 + 0x108),
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = this_00;
        if (*(FScriptContainerElement **)(this_00 + 0x100) != (FScriptContainerElement *)0x0) {
          pFVar15 = *(FScriptContainerElement **)(this_00 + 0x100);
        }
        *(float *)(pFVar15 + (longlong)(int)uVar13 * 0x10 + 8) = (float)uVar2 * fVar5;
        iVar8 = (this->History).ArrayNum;
        iVar7 = (this->BudgetHistorySizes).Array.ArrayNum;
        iVar9 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar7 != iVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array.Num() == FBudget::GetGlobalListSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                               ,0xd5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = pFVar1->BudgetId;
        iVar7 = (this->BudgetHistorySizes).Array.ArrayNum;
        uVar17 = 0;
        if ((int)uVar13 < iVar7) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_2b8 = (longlong)(int)uVar13, local_2b0 = (longlong)iVar7,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)&this->BudgetHistorySizes;
        if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
          FVar16 = FVar3;
        }
        iVar7 = (this->BudgetHistorySizes).Array.ArrayNum;
        iVar9 = *(int *)((uchar *)((longlong)FVar16 + 8) + (longlong)(int)uVar13 * 0x10) + 1;
        if (iVar9 < iVar8) {
          iVar8 = iVar9;
        }
        iVar9 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar7 != iVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array.Num() == FBudget::GetGlobalListSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                               ,0xd5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = pFVar1->BudgetId;
        iVar7 = (this->BudgetHistorySizes).Array.ArrayNum;
        uVar17 = 0;
        if ((int)uVar13 < iVar7) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_2b8 = (longlong)(int)uVar13, local_2b0 = (longlong)iVar7,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)&this->BudgetHistorySizes;
        if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
          FVar16 = FVar3;
        }
        *(int *)((uchar *)((longlong)FVar16 + 8) + (longlong)(int)uVar13 * 0x10) = iVar8;
        pTVar18 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar18->_padding_;
        lVar19 = local_298;
      } while (pTVar18 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0);
    }
  }
  else {
    this->IgnoreFrameRemainingCount = this->IgnoreFrameRemainingCount + -1;
  }
  return;
}

// GetResolutionFractionUpperBounds @ 147b6d670

TMap<float> * __thiscall
FDynamicResolutionHeuristicProxy::GetResolutionFractionUpperBounds
          (FDynamicResolutionHeuristicProxy *this,TMap<float> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TMap<float> *pTVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1f6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TMap<float> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  DynamicRenderScaling::TMap<float>::TMap<float>
            (__return_storage_ptr__,&this->CurrentFrameMaxResolutionFractions);
  return __return_storage_ptr__;
}

// QueryCurrentFrameResolutionFractions_Internal @ 147b7f240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<float> * __thiscall
FDynamicResolutionHeuristicProxy::QueryCurrentFrameResolutionFractions_Internal
          (FDynamicResolutionHeuristicProxy *this,TMap<float> *__return_storage_ptr__)

{
  float fVar1;
  uint uVar2;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar3;
  FBudget *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TMap<float> *pTVar10;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar11;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar12;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar13;
  float fVar14;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  TMap<float> local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar6 = IsInGameThread();
  if (((!bVar6) && (bVar6 = IsInParallelRenderingThread(), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1f6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TMap<float> *)(*pcVar5)();
    return pTVar10;
  }
  DynamicRenderScaling::TMap<float>::TMap<float>
            (&local_158,&this->CurrentFrameMaxResolutionFractions);
  DynamicRenderScaling::TMap<float>::TMap<float>
            (__return_storage_ptr__,&this->CurrentFrameResolutionFractions);
  ppTVar11 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar3 = *ppTVar11;
  while( true ) {
    if (pTVar3 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      if (local_158.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FMemory::Free((void *)local_158.Array.AllocatorInstance.SecondaryData);
      }
      return __return_storage_ptr__;
    }
    pFVar4 = pTVar3->Element;
    iVar7 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    iVar9 = local_158.Array.ArrayNum;
    if (iVar9 != iVar7) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Array.Num() == FBudget::GetGlobalListSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                         ,0xd5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TMap<float> *)(*pcVar5)();
        return pTVar10;
      }
      iVar9 = local_158.Array.ArrayNum;
    }
    uVar2 = pFVar4->BudgetId;
    uVar8 = 0;
    if ((int)uVar2 < iVar9) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      local_160 = (longlong)iVar9;
      local_168 = (longlong)(int)uVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TMap<float> *)(*pcVar5)();
        return pTVar10;
      }
    }
    FVar12 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)&local_158;
    if (local_158.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar12 = local_158.Array.AllocatorInstance.SecondaryData;
    }
    iVar7 = (__return_storage_ptr__->Array).ArrayNum;
    fVar1 = *(float *)((uchar *)((longlong)FVar12 + 8) + (longlong)(int)uVar2 * 0x10);
    iVar9 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((iVar7 != iVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array.Num() == FBudget::GetGlobalListSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                           ,0xd5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TMap<float> *)(*pcVar5)();
      return pTVar10;
    }
    uVar2 = pFVar4->BudgetId;
    iVar7 = (__return_storage_ptr__->Array).ArrayNum;
    uVar8 = 0;
    if ((int)uVar2 < iVar7) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_168 = (longlong)(int)uVar2, local_160 = (longlong)iVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TMap<float> *)(*pcVar5)();
      return pTVar10;
    }
    FVar12 = (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)__return_storage_ptr__;
    if (FVar12 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar13 = FVar12;
    }
    iVar7 = (__return_storage_ptr__->Array).ArrayNum;
    fVar14 = *(float *)((uchar *)((longlong)FVar13 + 8) + (longlong)(int)uVar2 * 0x10);
    if (fVar1 <= *(float *)((uchar *)((longlong)FVar13 + 8) + (longlong)(int)uVar2 * 0x10)) {
      fVar14 = fVar1;
    }
    iVar9 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((iVar7 != iVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array.Num() == FBudget::GetGlobalListSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                           ,0xd5,L""), bVar6)) break;
    uVar2 = pFVar4->BudgetId;
    iVar7 = (__return_storage_ptr__->Array).ArrayNum;
    uVar8 = 0;
    if ((int)uVar2 < iVar7) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (local_168 = (longlong)(int)uVar2, local_160 = (longlong)iVar7,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TMap<float> *)(*pcVar5)();
      return pTVar10;
    }
    FVar12 = (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)__return_storage_ptr__;
    if (FVar12 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
      FVar13 = FVar12;
    }
    *(float *)((uchar *)((longlong)FVar13 + 8) + (longlong)(int)uVar2 * 0x10) = fVar14;
    pTVar3 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar3->_padding_;
  }
  pcVar5 = (code *)swi(3);
  pTVar10 = (TMap<float> *)(*pcVar5)();
  return pTVar10;
}

// RefreshCurrentFrameResolutionFractionUpperBound_RenderThread @ 147b800c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicResolutionHeuristicProxy::RefreshCurrentFrameResolutionFractionUpperBound_RenderThread
          (FDynamicResolutionHeuristicProxy *this)

{
  uchar *puVar1;
  uint uVar2;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar3;
  FBudget *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar10;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar11;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  FHeuristicSettings local_178;
  TMap<float> local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_148);
  ppTVar10 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar3 = *ppTVar10;
  do {
    if (pTVar3 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      DynamicRenderScaling::TMap<float>::operator=
                (&this->CurrentFrameMaxResolutionFractions,&local_148);
      if (local_148.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FMemory::Free((void *)local_148.Array.AllocatorInstance.SecondaryData);
      }
      return;
    }
    pFVar4 = pTVar3->Element;
    local_178.Model = (pFVar4->CachedSettings).Model;
    local_178.bModelScalesWithPrimaryScreenPercentage =
         (pFVar4->CachedSettings).bModelScalesWithPrimaryScreenPercentage;
    local_178._5_3_ = *(undefined3 *)&(pFVar4->CachedSettings).field_0x5;
    local_178.MinResolutionFraction = (pFVar4->CachedSettings).MinResolutionFraction;
    local_178.MaxResolutionFraction = (pFVar4->CachedSettings).MaxResolutionFraction;
    local_178.ThrottlingMaxResolutionFraction =
         (pFVar4->CachedSettings).ThrottlingMaxResolutionFraction;
    local_178.BudgetMs = (pFVar4->CachedSettings).BudgetMs;
    local_178.ChangeThreshold = (pFVar4->CachedSettings).ChangeThreshold;
    local_178.TargetedHeadRoom = (pFVar4->CachedSettings).TargetedHeadRoom;
    local_178.IncreaseAmortizationFactor = (pFVar4->CachedSettings).IncreaseAmortizationFactor;
    local_178.FractionQuantization = (pFVar4->CachedSettings).FractionQuantization;
    local_178.UpperBoundQuantization = (pFVar4->CachedSettings).UpperBoundQuantization;
    bVar6 = DynamicRenderScaling::FHeuristicSettings::IsEnabled(&local_178);
    if ((bVar6) || (pFVar4->BudgetId == GDynamicPrimaryResolutionFraction.BudgetId)) {
      auVar14 = ZEXT416((uint)local_178.MaxResolutionFraction);
      fVar13 = local_178.MaxResolutionFraction;
      if (0 < local_178.UpperBoundQuantization) {
        iVar7 = (this->CurrentFrameResolutionFractions).Array.ArrayNum;
        iVar9 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar7 != iVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Array.Num() == FBudget::GetGlobalListSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                               ,0xd5,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar2 = pFVar4->BudgetId;
        iVar7 = (this->CurrentFrameResolutionFractions).Array.ArrayNum;
        uVar8 = 0;
        if ((int)uVar2 < iVar7) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_188 = (longlong)(int)uVar2, local_180 = (longlong)iVar7,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar11 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                 &this->CurrentFrameResolutionFractions;
        if (FVar11 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar12 = FVar11;
        }
        fVar13 = (local_178.MaxResolutionFraction - local_178.MinResolutionFraction) /
                 (float)local_178.UpperBoundQuantization;
        auVar14 = roundps(auVar14,ZEXT416((uint)(*(float *)((uchar *)((longlong)FVar12 + 8) +
                                                           (longlong)(int)uVar2 * 0x10) / fVar13)),2
                         );
        fVar13 = auVar14._0_4_ * fVar13;
        if (local_178.MaxResolutionFraction <= fVar13) {
          fVar13 = local_178.MaxResolutionFraction;
        }
      }
      iVar7 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      iVar9 = local_148.Array.ArrayNum;
      if (iVar9 != iVar7) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array.Num() == FBudget::GetGlobalListSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                           ,0xd5,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_148.Array.ArrayNum;
      }
      uVar2 = pFVar4->BudgetId;
      uVar8 = 0;
      if ((int)uVar2 < iVar9) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_180 = (longlong)iVar9;
        local_188 = (longlong)(int)uVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar11 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)&local_148;
      if (local_148.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FVar11 = local_148.Array.AllocatorInstance.SecondaryData;
      }
      *(float *)((uchar *)((longlong)FVar11 + 8) + (longlong)(int)uVar2 * 0x10) = fVar13;
    }
    else {
      iVar7 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      iVar9 = local_148.Array.ArrayNum;
      if (iVar9 != iVar7) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array.Num() == FBudget::GetGlobalListSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                           ,0xd5,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_148.Array.ArrayNum;
      }
      uVar2 = pFVar4->BudgetId;
      uVar8 = 0;
      if ((int)uVar2 < iVar9) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_180 = (longlong)iVar9;
        local_188 = (longlong)(int)uVar2;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar11 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)&local_148;
      if (local_148.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FVar11 = local_148.Array.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uchar *)((longlong)FVar11 + 8) + (longlong)(int)uVar2 * 0x10;
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = 0x80;
      puVar1[3] = '?';
    }
    pTVar3 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar3->_padding_;
  } while( true );
}

// RefreshCurrentFrameResolutionFraction_RenderThread @ 147b80440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicResolutionHeuristicProxy::RefreshCurrentFrameResolutionFraction_RenderThread
          (FDynamicResolutionHeuristicProxy *this)

{
  uchar *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar8;
  FName FVar9;
  code *pcVar10;
  bool bVar11;
  float fVar12;
  TConsoleVariableData<float> *pTVar13;
  TConsoleVariableData<int> *pTVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<bool> *pTVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar24;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar25;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar26;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar27;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar28;
  uint uVar29;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar30;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar31;
  FBudget *pFVar32;
  FrameHistoryEntry *pFVar33;
  FHeuristicSettings *this_02;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_268 [32];
  uint local_234;
  FName local_208;
  FBudget *local_200;
  FStatMessage local_1f8;
  TMap<float> local_1e8;
  ulonglong local_d8;
  
  pTVar13 = CVarFrameWeightExponent.Ref;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar15 = CVarMaxConsecutiveOverBudgetGPUFrameCount.Ref;
  fVar3 = pTVar13->ShadowedValue[1];
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar14 = CVarFrameChangePeriod.Ref;
  uVar25 = 2;
  if (2 < pTVar15->ShadowedValue[1]) {
    uVar25 = pTVar15->ShadowedValue[1];
  }
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar16 = CVarUseCPUTimeLogic.Ref;
  iVar5 = pTVar14->ShadowedValue[1];
  iVar6 = this->NumberOfFramesSinceScreenPercentageChange;
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar17 = pTVar16->ShadowedValue[1];
  DynamicRenderScaling::TMap<float>::TMap<float>(&local_1e8,&this->CurrentFrameResolutionFractions);
  bVar11 = false;
  ppTVar24 = DynamicRenderScaling::FBudget::GetGlobalList();
  fVar12 = __real_3f800000;
  for (pTVar31 = *ppTVar24; pTVar31 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0;
      pTVar31 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar31->_padding_) {
    pFVar32 = pTVar31->Element;
    iVar23 = (this->BudgetHistorySizes).Array.ArrayNum;
    this_02 = &pFVar32->CachedSettings;
    local_200 = pFVar32;
    iVar20 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((iVar23 != iVar20) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar21 = pFVar32->BudgetId;
    uVar34 = 0;
    uVar29 = uVar34;
    if ((int)uVar21 < (this->BudgetHistorySizes).Array.ArrayNum) {
      uVar29 = ~uVar21 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar8 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
    FVar26 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)&this->BudgetHistorySizes;
    if (FVar8 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
      FVar26 = FVar8;
    }
    iVar23 = *(int *)((uchar *)((longlong)FVar26 + 8) + (longlong)(int)uVar21 * 0x10);
    if (this->HistorySize < *(int *)((uchar *)((longlong)FVar26 + 8) + (longlong)(int)uVar21 * 0x10)
       ) {
      iVar23 = this->HistorySize;
    }
    if ((iVar23 != 0) &&
       ((pFVar32->BudgetId == GDynamicPrimaryResolutionFraction.BudgetId ||
        (bVar18 = DynamicRenderScaling::FHeuristicSettings::IsEnabled(this_02), bVar18)))) {
      fVar4 = (pFVar32->CachedSettings).BudgetMs;
      fVar35 = DynamicRenderScaling::FHeuristicSettings::GetTargetedMs(this_02,fVar4);
      iVar20 = 0;
      local_234 = 0;
      fVar38 = 0.0;
      fVar40 = 0.0;
      bVar18 = true;
      fVar39 = fVar12;
      uVar21 = 0;
      if (0 < iVar23) {
        do {
          uVar34 = uVar21;
          if (!bVar18) break;
          if (iVar20 < this->HistorySize) {
            iVar7 = (this->History).ArrayNum;
            uVar29 = ((this->PreviousFrameIndex - iVar20) + iVar7) % iVar7;
            uVar21 = 0;
            if ((int)uVar29 < iVar7) {
              uVar21 = ~uVar29 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar33 = (FrameHistoryEntry *)
                      ((this->History).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x230);
          }
          else {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `private:_struct_FDynamicResolutionHeuristicProxy::FrameHistoryEntry_const&___ptr64___cdecl_FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry(int)const___ptr64'
                 ::__l5::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`private:_struct_FDynamicResolutionHeuristicProxy::FrameHistoryEntry_const&___ptr64___cdecl_FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry(int)const___ptr64'
                                     ::__l5::_thread_safe_static_guard_0__),
               `private:_struct_FDynamicResolutionHeuristicProxy::FrameHistoryEntry_const&___ptr64___cdecl_FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry(int)const___ptr64'
               ::__l5::_thread_safe_static_guard_0__ == -1)) {
              FrameHistoryEntry::FrameHistoryEntry
                        (&`private:_struct_FDynamicResolutionHeuristicProxy::FrameHistoryEntry_const&___ptr64___cdecl_FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry(int)const___ptr64'
                          ::__l5::InvalidEntry);
              atexit(`FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry'::__l5::
                     _dynamic_atexit_destructor_for__InvalidEntry__);
              _Init_thread_footer(&`private:_struct_FDynamicResolutionHeuristicProxy::FrameHistoryEntry_const&___ptr64___cdecl_FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry(int)const___ptr64'
                                   ::__l5::_thread_safe_static_guard_0__);
            }
            pFVar33 = &`private:_struct_FDynamicResolutionHeuristicProxy::FrameHistoryEntry_const&___ptr64___cdecl_FDynamicResolutionHeuristicProxy::GetPreviousFrameEntry(int)const___ptr64'
                       ::__l5::InvalidEntry;
          }
          if (pFVar32->BudgetId == GDynamicPrimaryResolutionFraction.BudgetId) {
            fVar37 = pFVar33->TotalFrameGPUBusyTimeMs;
          }
          else {
            iVar7 = (pFVar33->BudgetTimingMs).Array.ArrayNum;
            iVar22 = DynamicRenderScaling::FBudget::GetGlobalListSize();
            if ((iVar7 != iVar22) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Array.Num() == FBudget::GetGlobalListSize()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                    ,0xcf,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar21 = pFVar32->BudgetId;
            uVar29 = 0;
            if ((int)uVar21 < (pFVar33->BudgetTimingMs).Array.ArrayNum) {
              uVar29 = ~uVar21 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar28 = (pFVar33->BudgetTimingMs).Array.AllocatorInstance.SecondaryData;
            FVar27 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                     &pFVar33->BudgetTimingMs;
            if (FVar28 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
              FVar27 = FVar28;
            }
            fVar37 = *(float *)((longlong)FVar27 + ((longlong)(int)uVar21 * 4 + 2) * 4);
          }
          if (fVar37 < 0.0) {
            this_02 = &pFVar32->CachedSettings;
          }
          else {
            FVar9 = *(FName *)&((pFVar32->StatId_MeasuredMs).StatIdPtr)->Name;
            if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              local_1f8.NameAndInfo.Number = FVar9.Number & 0xffff8fff | 0x8000;
              local_208 = FVar9;
              local_1f8.StatData.Pad = (uchar  [8])(double)fVar37;
              local_1f8.NameAndInfo.Index.Value = FVar9.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(this_00,&local_1f8);
              FStatsTrace::Set(&local_208,(double)fVar37);
              if (this_00->ScopeCount == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
            bVar19 = GDynamicPrimaryResolutionFraction.CachedSettings.BudgetMs <
                     pFVar33->GameThreadTimeMs;
            fVar36 = DynamicRenderScaling::FHeuristicSettings::GetTargetedMs
                               (&GDynamicPrimaryResolutionFraction.CachedSettings,
                                GDynamicPrimaryResolutionFraction.CachedSettings.BudgetMs);
            if (((bVar17 != false) && ((bVar19 || (fVar36 < pFVar33->RenderThreadTimeMs)))) ||
               (fVar37 <= fVar4)) {
              uVar34 = 0;
            }
            else {
              uVar34 = uVar34 + 1;
              if ((int)uVar25 < (int)uVar34) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ConsecutiveOverBudgetGPUFrameCount <= MaxConsecutiveOverBudgetGPUFrameCount"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                                    ,0x128,L"");
                if (bVar19) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              else if (uVar34 == uVar25) {
                bVar18 = false;
              }
            }
            iVar7 = (pFVar33->ResolutionFractions).Array.ArrayNum;
            iVar22 = DynamicRenderScaling::FBudget::GetGlobalListSize();
            if ((iVar7 != iVar22) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Array.Num() == FBudget::GetGlobalListSize()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                    ,0xcf,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar32 = local_200;
            uVar21 = local_200->BudgetId;
            uVar29 = 0;
            if ((int)uVar21 < (pFVar33->ResolutionFractions).Array.ArrayNum) {
              uVar29 = ~uVar21 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar28 = (pFVar33->ResolutionFractions).Array.AllocatorInstance.SecondaryData;
            this_02 = &pFVar32->CachedSettings;
            FVar27 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                     &pFVar33->ResolutionFractions;
            if (FVar28 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
              FVar27 = FVar28;
            }
            fVar36 = *(float *)((longlong)FVar27 + ((longlong)(int)uVar21 * 4 + 2) * 4);
            fVar37 = DynamicRenderScaling::FHeuristicSettings::EstimateResolutionFactor
                               (this_02,fVar35,fVar37);
            fVar40 = fVar40 + fVar39;
            local_234 = local_234 + 1;
            fVar37 = fVar37 * fVar36 * fVar39;
            fVar39 = fVar39 * fVar3;
            fVar38 = fVar38 + fVar37;
          }
          iVar20 = iVar20 + 1;
          uVar21 = uVar34;
        } while (iVar20 < iVar23);
      }
      fVar38 = fVar38 / fVar40;
      if (((int)local_234 < 1) || (uVar34 != local_234)) {
        iVar23 = (this->CurrentFrameResolutionFractions).Array.ArrayNum;
        iVar20 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar23 != iVar20) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Array.Num() == FBudget::GetGlobalListSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                ,0xd5,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar21 = pFVar32->BudgetId;
        uVar29 = 0;
        if ((int)uVar21 < (this->CurrentFrameResolutionFractions).Array.ArrayNum) {
          uVar29 = ~uVar21 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar28 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
        FVar27 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                 &this->CurrentFrameResolutionFractions;
        if (FVar28 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar27 = FVar28;
        }
        bVar18 = DynamicRenderScaling::FHeuristicSettings::DoesResolutionChangeEnough
                           (this_02,*(float *)((longlong)FVar27 + 8 + (longlong)(int)uVar21 * 0x10),
                            fVar38,iVar5 <= iVar6);
        if (!bVar18) {
          iVar23 = (this->CurrentFrameResolutionFractions).Array.ArrayNum;
          iVar20 = DynamicRenderScaling::FBudget::GetGlobalListSize();
          if ((iVar23 != iVar20) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Array.Num() == FBudget::GetGlobalListSize()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                  ,0xd5,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar21 = pFVar32->BudgetId;
          uVar29 = 0;
          if ((int)uVar21 < (this->CurrentFrameResolutionFractions).Array.ArrayNum) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar28 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
          FVar27 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                   &this->CurrentFrameResolutionFractions;
          if (FVar28 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
            FVar27 = FVar28;
          }
          fVar38 = *(float *)((longlong)FVar27 + 8 + (longlong)(int)uVar21 * 0x10);
        }
        iVar23 = (this->CurrentFrameResolutionFractions).Array.ArrayNum;
        iVar20 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar23 != iVar20) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Array.Num() == FBudget::GetGlobalListSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                ,0xd5,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar21 = pFVar32->BudgetId;
        uVar29 = 0;
        if ((int)uVar21 < (this->CurrentFrameResolutionFractions).Array.ArrayNum) {
          uVar29 = ~uVar21 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar28 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
        FVar27 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                 &this->CurrentFrameResolutionFractions;
        if (FVar28 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar27 = FVar28;
        }
        pfVar2 = (float *)((longlong)FVar27 + 8 + (longlong)(int)uVar21 * 0x10);
        if (*pfVar2 <= fVar38 && fVar38 != *pfVar2) {
          iVar23 = (this->CurrentFrameResolutionFractions).Array.ArrayNum;
          iVar20 = DynamicRenderScaling::FBudget::GetGlobalListSize();
          if ((iVar23 != iVar20) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Array.Num() == FBudget::GetGlobalListSize()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                  ,0xd5,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar21 = pFVar32->BudgetId;
          uVar29 = 0;
          if ((int)uVar21 < (this->CurrentFrameResolutionFractions).Array.ArrayNum) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar28 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
          FVar27 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                   &this->CurrentFrameResolutionFractions;
          if (FVar28 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
            FVar27 = FVar28;
          }
          fVar38 = (fVar38 - *(float *)((longlong)FVar27 + 8 + (longlong)(int)uVar21 * 0x10)) *
                   this_02->IncreaseAmortizationFactor +
                   *(float *)((longlong)FVar27 + 8 + (longlong)(int)uVar21 * 0x10);
        }
      }
      else {
        iVar23 = (this->BudgetHistorySizes).Array.ArrayNum;
        iVar20 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((iVar23 != iVar20) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Array.Num() == FBudget::GetGlobalListSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                ,0xd5,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar21 = pFVar32->BudgetId;
        uVar29 = 0;
        if ((int)uVar21 < (this->BudgetHistorySizes).Array.ArrayNum) {
          uVar29 = ~uVar21 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar8 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
        FVar26 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)&this->BudgetHistorySizes;
        if (FVar8 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
          FVar26 = FVar8;
        }
        puVar1 = (uchar *)((longlong)FVar26 + 8) + (longlong)(int)uVar21 * 0x10;
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        if (pFVar32->BudgetId == GDynamicPrimaryResolutionFraction.BudgetId) {
          this->HistorySize = 0;
          bVar11 = true;
        }
      }
      fVar4 = this_02->ThrottlingMaxResolutionFraction;
      fVar39 = this_02->MaxResolutionFraction;
      if (0.0 < fVar4) {
        if (fVar4 <= fVar39) {
          fVar39 = fVar4;
        }
        if (fVar39 <= this_02->MinResolutionFraction) {
          fVar39 = this_02->MinResolutionFraction;
        }
      }
      if (fVar38 <= fVar39) {
        fVar39 = fVar38;
      }
      if (fVar39 <= this_02->MinResolutionFraction) {
        fVar39 = this_02->MinResolutionFraction;
      }
      if (this->TemporalUpscalerMaxResolutionFraction <= fVar39) {
        fVar39 = this->TemporalUpscalerMaxResolutionFraction;
      }
      if (fVar39 <= this->TemporalUpscalerMinResolutionFraction) {
        fVar39 = this->TemporalUpscalerMinResolutionFraction;
      }
      iVar23 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      iVar20 = local_1e8.Array.ArrayNum;
      if (iVar20 != iVar23) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L"");
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar20 = local_1e8.Array.ArrayNum;
      }
      uVar21 = pFVar32->BudgetId;
      uVar29 = 0;
      if ((int)uVar21 < iVar20) {
        uVar29 = ~uVar21 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar28 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)&local_1e8;
      if (local_1e8.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FVar28 = local_1e8.Array.AllocatorInstance.SecondaryData;
      }
      *(float *)((uchar *)((longlong)FVar28 + 8) + (longlong)(int)uVar21 * 0x10) = fVar39;
    }
  }
  bVar17 = false;
  ppTVar24 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar31 = *ppTVar24;
  if (pTVar31 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
LAB_147b811a4:
    if (!bVar11) {
      this->NumberOfFramesSinceScreenPercentageChange =
           this->NumberOfFramesSinceScreenPercentageChange + 1;
      goto LAB_147b811c4;
    }
  }
  else {
    do {
      pFVar32 = pTVar31->Element;
      if (bVar17) {
LAB_147b8117e:
        bVar17 = true;
      }
      else {
        iVar23 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        iVar20 = local_1e8.Array.ArrayNum;
        if (iVar20 != iVar23) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Array.Num() == FBudget::GetGlobalListSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                              ,0xd5,L"");
          if (bVar17) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar20 = local_1e8.Array.ArrayNum;
        }
        uVar25 = pFVar32->BudgetId;
        uVar21 = 0;
        if ((int)uVar25 < iVar20) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar28 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)&local_1e8;
        if (local_1e8.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar28 = local_1e8.Array.AllocatorInstance.SecondaryData;
        }
        iVar23 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if (((this->CurrentFrameResolutionFractions).Array.ArrayNum != iVar23) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Array.Num() == FBudget::GetGlobalListSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                ,0xd5,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar21 = pFVar32->BudgetId;
        uVar29 = 0;
        if ((int)uVar21 < (this->CurrentFrameResolutionFractions).Array.ArrayNum) {
          uVar29 = ~uVar21 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar27 = (this->CurrentFrameResolutionFractions).Array.AllocatorInstance.SecondaryData;
        FVar30 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
                 &this->CurrentFrameResolutionFractions;
        if (FVar27 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
          FVar30 = FVar27;
        }
        if (*(float *)((uchar *)((longlong)FVar28 + 8) + (longlong)(int)uVar25 * 0x10) !=
            *(float *)((uchar *)((longlong)FVar30 + 8) + (longlong)(int)uVar21 * 0x10))
        goto LAB_147b8117e;
        bVar17 = false;
      }
      pTVar31 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar31->_padding_;
    } while (pTVar31 != (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0);
    if ((!bVar17) || (iVar6 < iVar5)) goto LAB_147b811a4;
  }
  this->NumberOfFramesSinceScreenPercentageChange = 0;
  DynamicRenderScaling::TMap<float>::operator=(&this->CurrentFrameResolutionFractions,&local_1e8);
LAB_147b811c4:
  RefreshCurrentFrameResolutionFractionUpperBound_RenderThread(this);
  RefreshHeuristicStats_RenderThread(this);
  if (local_1e8.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    FMemory::Free((void *)local_1e8.Array.AllocatorInstance.SecondaryData);
  }
  return;
}

// RefreshHeuristicStats_RenderThread @ 147b81290

void __thiscall
FDynamicResolutionHeuristicProxy::RefreshHeuristicStats_RenderThread
          (FDynamicResolutionHeuristicProxy *this)

{
  int iVar1;
  uint uVar2;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar3;
  FBudget *pFVar4;
  FName FVar5;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar6;
  code *pcVar7;
  uchar auVar8 [8];
  bool bVar9;
  int iVar10;
  uint uVar11;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName *pFVar15;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar16;
  float fVar17;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FStatMessage local_70 [3];
  
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1d9,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ppTVar12 = DynamicRenderScaling::FBudget::GetGlobalList();
  pTVar3 = *ppTVar12;
  do {
    if (pTVar3 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return;
    }
    pFVar4 = pTVar3->Element;
    bVar9 = DynamicRenderScaling::FHeuristicSettings::IsEnabled(&pFVar4->CachedSettings);
    if (bVar9) {
      fVar17 = DynamicRenderScaling::FHeuristicSettings::GetTargetedMs
                         (&pFVar4->CachedSettings,(pFVar4->CachedSettings).BudgetMs);
      FVar5 = *(FName *)&((pFVar4->StatId_TargetMs).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_f0.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_138 = FVar5;
        local_f0.StatData.Pad = (uchar  [8])(double)fVar17;
        local_f0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_f0);
        FStatsTrace::Set(&local_138,(double)fVar17);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      auVar8 = (uchar  [8])(double)(pFVar4->CachedSettings).MinResolutionFraction;
      FVar5 = *(FName *)&((pFVar4->StatId_MinScaling).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_e0.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_130 = FVar5;
        local_e0.StatData.Pad = auVar8;
        local_e0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_e0);
        FStatsTrace::Set(&local_130,(double)auVar8);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      auVar8 = (uchar  [8])(double)(pFVar4->CachedSettings).MaxResolutionFraction;
      FVar5 = *(FName *)&((pFVar4->StatId_MaxScaling).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_d0.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_128 = FVar5;
        local_d0.StatData.Pad = auVar8;
        local_d0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_d0);
        FStatsTrace::Set(&local_128,(double)auVar8);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      iVar1 = (this->CurrentFrameMaxResolutionFractions).Array.ArrayNum;
      iVar10 = DynamicRenderScaling::FBudget::GetGlobalListSize();
      if ((iVar1 != iVar10) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Array.Num() == FBudget::GetGlobalListSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                             ,0xd5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = pFVar4->BudgetId;
      uVar11 = 0;
      if ((int)uVar2 < (this->CurrentFrameMaxResolutionFractions).Array.ArrayNum) {
        uVar11 = ~uVar2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar6 = (this->CurrentFrameMaxResolutionFractions).Array.AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)
               &this->CurrentFrameMaxResolutionFractions;
      if (FVar6 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FVar16 = FVar6;
      }
      auVar8 = (uchar  [8])
               (double)*(float *)((uchar *)((longlong)FVar16 + 8) + (longlong)(int)uVar2 * 0x10);
      FVar5 = *(FName *)&((pFVar4->StatId_CurrentScaling).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_c0.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_120 = FVar5;
        local_c0.StatData.Pad = auVar8;
        local_c0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_c0);
        pFVar15 = &local_120;
LAB_147b81a86:
        FStatsTrace::Set(pFVar15,(double)auVar8);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    else {
      FVar5 = *(FName *)&((pFVar4->StatId_TargetMs).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_b0.StatData.Pad[0] = '\0';
        local_b0.StatData.Pad[1] = '\0';
        local_b0.StatData.Pad[2] = '\0';
        local_b0.StatData.Pad[3] = '\0';
        local_b0.StatData.Pad[4] = '\0';
        local_b0.StatData.Pad[5] = '\0';
        local_b0.StatData.Pad[6] = '\0';
        local_b0.StatData.Pad[7] = '\0';
        local_b0.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_118 = FVar5;
        local_b0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_b0);
        FStatsTrace::Set(&local_118,0.0);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      FVar5 = *(FName *)&((pFVar4->StatId_MeasuredMs).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_a0.StatData.Pad[0] = '\0';
        local_a0.StatData.Pad[1] = '\0';
        local_a0.StatData.Pad[2] = '\0';
        local_a0.StatData.Pad[3] = '\0';
        local_a0.StatData.Pad[4] = '\0';
        local_a0.StatData.Pad[5] = '\0';
        local_a0.StatData.Pad[6] = '\0';
        local_a0.StatData.Pad[7] = '\0';
        local_a0.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_110 = FVar5;
        local_a0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_a0);
        FStatsTrace::Set(&local_110,0.0);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      FVar5 = *(FName *)&((pFVar4->StatId_MinScaling).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_90.StatData.Pad[0] = '\0';
        local_90.StatData.Pad[1] = '\0';
        local_90.StatData.Pad[2] = '\0';
        local_90.StatData.Pad[3] = '\0';
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_90.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_108 = FVar5;
        local_90.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_90);
        FStatsTrace::Set(&local_108,0.0);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      FVar5 = *(FName *)&((pFVar4->StatId_MaxScaling).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_80.StatData.Pad[0] = '\0';
        local_80.StatData.Pad[1] = '\0';
        local_80.StatData.Pad[2] = '\0';
        local_80.StatData.Pad[3] = '\0';
        local_80.StatData.Pad[4] = '\0';
        local_80.StatData.Pad[5] = '\0';
        local_80.StatData.Pad[6] = '\0';
        local_80.StatData.Pad[7] = '\0';
        local_80.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_100 = FVar5;
        local_80.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_80);
        FStatsTrace::Set(&local_100,0.0);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      FVar5 = *(FName *)&((pFVar4->StatId_CurrentScaling).StatIdPtr)->Name;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_70[0].StatData.Pad[0] = '\0';
        local_70[0].StatData.Pad[1] = '\0';
        local_70[0].StatData.Pad[2] = '\0';
        local_70[0].StatData.Pad[3] = '\0';
        local_70[0].StatData.Pad[4] = '\0';
        local_70[0].StatData.Pad[5] = '\0';
        local_70[0].StatData.Pad[6] = '\0';
        local_70[0].StatData.Pad[7] = '\0';
        local_70[0].NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_f8 = FVar5;
        local_70[0].NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,local_70);
        auVar8[0] = '\0';
        auVar8[1] = '\0';
        auVar8[2] = '\0';
        auVar8[3] = '\0';
        auVar8[4] = '\0';
        auVar8[5] = '\0';
        auVar8[6] = '\0';
        auVar8[7] = '\0';
        pFVar15 = &local_f8;
        goto LAB_147b81a86;
      }
    }
    pTVar3 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar3->_padding_;
  } while( true );
}

// ResetInternal @ 147b858c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicResolutionHeuristicProxy::ResetInternal(FDynamicResolutionHeuristicProxy *this)

{
  int *piVar1;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar2;
  FrameHistoryEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<DynamicRenderScaling::TMap<int>::FItem> FVar8;
  longlong lVar9;
  uint uVar10;
  float local_res8 [2];
  float local_res10 [2];
  
  this->HistorySize = 0;
  this->PreviousFrameIndex = -1;
  iVar6 = DynamicRenderScaling::FBudget::GetGlobalListSize();
  TArray<DynamicRenderScaling::TMap<int>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&(this->BudgetHistorySizes).Array,iVar6,Default);
  iVar6 = (this->BudgetHistorySizes).Array.ArrayNum;
  uVar10 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar6) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->BudgetHistorySizes).Array.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)&this->BudgetHistorySizes;
      if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<int>::FItem>)0x0) {
        FVar8 = FVar2;
      }
      uVar10 = uVar10 + 1;
      *(undefined4 *)((longlong)FVar8 + 8 + lVar9) = 0;
      lVar9 = lVar9 + 0x10;
      iVar6 = (this->BudgetHistorySizes).Array.ArrayNum;
    } while ((int)uVar10 < iVar6);
  }
  piVar1 = &(this->History).ArrayMax;
  pFVar3 = (FrameHistoryEntry *)(this->History).AllocatorInstance.Data;
  iVar6 = (this->History).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>(pFVar3,iVar6);
    (this->History).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x230,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>(pFVar3,iVar6);
    (this->History).ArrayNum = 0;
  }
  this->NumberOfFramesSinceScreenPercentageChange = 0;
  local_res8[0] = 1.0;
  DynamicRenderScaling::TMap<float>::SetAll(&this->CurrentFrameResolutionFractions,local_res8);
  local_res10[0] = 1.0;
  DynamicRenderScaling::TMap<float>::SetAll(&this->CurrentFrameMaxResolutionFractions,local_res10);
  this->TemporalUpscalerMinResolutionFraction = 0.01;
  this->TemporalUpscalerMaxResolutionFraction = 4.0;
  this->IgnoreFrameRemainingCount = 1;
  return;
}

// Reset_RenderThread @ 147b85a50

void __thiscall
FDynamicResolutionHeuristicProxy::Reset_RenderThread(FDynamicResolutionHeuristicProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ResetInternal(this);
  return;
}

// ResizeHistoryIfNeeded @ 147b85b40

void __thiscall
FDynamicResolutionHeuristicProxy::ResizeHistoryIfNeeded(FDynamicResolutionHeuristicProxy *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForAnyElementType local_48;
  uint local_40;
  int iStack_3c;
  
  pTVar4 = CVarHistorySize.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = pTVar4->ShadowedValue[1];
  if ((int)uVar12 < 1) {
    uVar12 = 1;
  }
  if ((this->History).ArrayNum != uVar12) {
    uVar10 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    iStack_3c = 0;
    if ((int)uVar12 < 1) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x230,8,uVar12,&stack0xffffffffffffffb8,(int *)&stack0xffffffffffffffc0,
                         &stack0xffffffffffffffc4);
      DefaultConstructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>
                (local_48.Data + (longlong)iVar7 * 0x230,uVar12);
      uVar10 = local_40;
    }
    uVar12 = uVar10;
    if (this->HistorySize < (int)uVar10) {
      uVar12 = this->HistorySize;
    }
    iVar7 = 0;
    if (0 < (int)uVar12) {
      lVar15 = 0;
      uVar11 = uVar12;
      do {
        uVar11 = uVar11 - 1;
        iVar2 = (this->History).ArrayNum;
        uVar9 = (this->PreviousFrameIndex - iVar7) % iVar2;
        uVar8 = 0;
        if ((int)uVar9 < iVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar10 = local_40;
        }
        pFVar14 = (this->History).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x230;
        uVar8 = 0;
        if ((int)uVar11 < (int)uVar10) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar5.Data = local_48.Data;
        lVar13 = (((longlong)(int)uVar12 + -1) - lVar15) * 0x230;
        *(undefined4 *)&local_48.Data[lVar13].field_0x0 = *(undefined4 *)pFVar14;
        *(undefined4 *)(local_48.Data + lVar13 + 4) = *(undefined4 *)(pFVar14 + 4);
        *(undefined4 *)(local_48.Data + lVar13 + 8) = *(undefined4 *)(pFVar14 + 8);
        DynamicRenderScaling::TMap<float>::operator=
                  ((TMap<float> *)(local_48.Data + lVar13 + 0x10),(TMap<float> *)(pFVar14 + 0x10));
        DynamicRenderScaling::TMap<float>::operator=
                  ((TMap<float> *)(FVar5.Data + lVar13 + 0x120),(TMap<float> *)(pFVar14 + 0x120));
        iVar7 = iVar7 + 1;
        lVar15 = lVar15 + 1;
        uVar10 = local_40;
      } while (lVar15 < (int)uVar12);
    }
    if (this != (FDynamicResolutionHeuristicProxy *)&stack0xffffffffffffffb8) {
      DestructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>
                ((FrameHistoryEntry *)(this->History).AllocatorInstance.Data,
                 (this->History).ArrayNum);
      FVar5.Data = local_48.Data;
      iVar7 = local_40;
      piVar1 = &(this->History).ArrayMax;
      (this->History).ArrayNum = local_40;
      if ((local_40 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        uVar10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x230,8,local_40,*piVar1,(ForAnyElementType *)this,local_40,piVar1);
        ConstructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>
                  ((this->History).AllocatorInstance.Data,(FrameHistoryEntry *)FVar5.Data,iVar7);
        uVar10 = local_40;
      }
    }
    this->HistorySize = uVar12;
    this->PreviousFrameIndex = uVar12 - 1;
    DestructItems<FDynamicResolutionHeuristicProxy::FrameHistoryEntry,int>
              ((FrameHistoryEntry *)local_48.Data,uVar10);
    if ((FrameHistoryEntry *)local_48.Data != (FrameHistoryEntry *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// SetTemporalUpscaler @ 147b8dd70

void __thiscall
FDynamicResolutionHeuristicProxy::SetTemporalUpscaler
          (FDynamicResolutionHeuristicProxy *this,ITemporalUpscaler *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = IsInParallelRenderingThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1a7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar4 = __real_40800000;
  fVar3 = __real_3c23d70a;
  if (param_1 != (ITemporalUpscaler *)0x0) {
    fVar3 = (float)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    fVar4 = (float)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  if ((fVar3 != this->TemporalUpscalerMinResolutionFraction) ||
     (fVar4 != this->TemporalUpscalerMaxResolutionFraction)) {
    this->TemporalUpscalerMinResolutionFraction = fVar3;
    this->TemporalUpscalerMaxResolutionFraction = fVar4;
    RefreshCurrentFrameResolutionFraction_RenderThread(this);
  }
  return;
}

