// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// FInvalidationInfo @ 14242cb90

FInvalidationInfo * __thiscall
FConsoleSlateDebuggerInvalidate::FInvalidationInfo::FInvalidationInfo
          (FInvalidationInfo *this,FInvalidationInfo *param_1)

{
  SWidget *pSVar1;
  ulong64 uVar2;
  undefined8 uVar3;
  
  this->WidgetInvalidatedId = param_1->WidgetInvalidatedId;
  this->WidgetInvalidatorId = param_1->WidgetInvalidatorId;
  (this->WidgetInvalidated).Object = (param_1->WidgetInvalidated).Object;
  (this->WidgetInvalidated).WeakReferenceCount.ReferenceController =
       (param_1->WidgetInvalidated).WeakReferenceCount.ReferenceController;
  pSVar1 = (param_1->WidgetInvalidator).Object;
  (param_1->WidgetInvalidated).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WidgetInvalidated).Object = (SWidget *)0x0;
  (this->WidgetInvalidator).Object = pSVar1;
  (this->WidgetInvalidator).WeakReferenceCount.ReferenceController =
       (param_1->WidgetInvalidator).WeakReferenceCount.ReferenceController;
  (param_1->WidgetInvalidator).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->WidgetInvalidator).Object = (SWidget *)0x0;
  uVar2 = param_1->WindowId;
  (this->WidgetInvalidatedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->WindowId = uVar2;
  (this->WidgetInvalidatedName).Data.AllocatorInstance.Data =
       (param_1->WidgetInvalidatedName).Data.AllocatorInstance.Data;
  (param_1->WidgetInvalidatedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetInvalidatedName).Data.ArrayNum = (param_1->WidgetInvalidatedName).Data.ArrayNum;
  (this->WidgetInvalidatedName).Data.ArrayMax = (param_1->WidgetInvalidatedName).Data.ArrayMax;
  (param_1->WidgetInvalidatedName).Data.ArrayNum = 0;
  (param_1->WidgetInvalidatedName).Data.ArrayMax = 0;
  (this->WidgetInvalidatorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetInvalidatorName).Data.AllocatorInstance.Data =
       (param_1->WidgetInvalidatorName).Data.AllocatorInstance.Data;
  (param_1->WidgetInvalidatorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetInvalidatorName).Data.ArrayNum = (param_1->WidgetInvalidatorName).Data.ArrayNum;
  (this->WidgetInvalidatorName).Data.ArrayMax = (param_1->WidgetInvalidatorName).Data.ArrayMax;
  (param_1->WidgetInvalidatorName).Data.ArrayNum = 0;
  (param_1->WidgetInvalidatorName).Data.ArrayMax = 0;
  (this->InvalidatedPaintLocation).field0_0x0 = (param_1->InvalidatedPaintLocation).field0_0x0;
  (this->InvalidatedPaintSize).field0_0x0 = (param_1->InvalidatedPaintSize).field0_0x0;
  (this->InvalidatorPaintLocation).field0_0x0 = (param_1->InvalidatorPaintLocation).field0_0x0;
  (this->InvalidatorPaintSize).field0_0x0 = (param_1->InvalidatorPaintSize).field0_0x0;
  this->WidgetReason = param_1->WidgetReason;
  this->InvalidationRootReason = param_1->InvalidationRootReason;
  this->InvalidationPriority = param_1->InvalidationPriority;
  uVar3 = *(undefined8 *)((longlong)&(param_1->DisplayColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DisplayColor).field0_0x0 =
       *(undefined8 *)&(param_1->DisplayColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DisplayColor).field0_0x0 + 8) = uVar3;
  this->InvalidationTime = param_1->InvalidationTime;
  this->bIsInvalidatorPaintValid = param_1->bIsInvalidatorPaintValid;
  return this;
}

// FInvalidationInfo @ 14242cc90

FInvalidationInfo * __thiscall
FConsoleSlateDebuggerInvalidate::FInvalidationInfo::FInvalidationInfo
          (FInvalidationInfo *this,FSlateDebuggingInvalidateArgs *param_1,int param_2,bool param_3,
          bool param_4)

{
  atomic<int> *paVar1;
  FString *pFVar2;
  atomic<int> aVar3;
  ESlateDebuggingInvalidateRootReason EVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  SWidget *pSVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  FString *pFVar10;
  FString *pFVar11;
  SWidget *pSVar12;
  byte bVar13;
  bool bVar14;
  TSharedRef<SWidget_const_,1> local_58;
  TSharedRef<SWidget_const_,1> local_48;
  TSharedRef<SWidget_const_,1> local_38;
  
  pSVar12 = (SWidget *)0x0;
  pSVar8 = pSVar12;
  if (param_1->WidgetInvalidated != (SWidget *)0x0) {
    pSVar8 = (SWidget *)param_1->WidgetInvalidated->UniqueIdentifier;
  }
  this->WidgetInvalidatedId = (ulong64)pSVar8;
  pSVar8 = pSVar12;
  if (param_1->WidgetInvalidateInvestigator != (SWidget *)0x0) {
    pSVar8 = (SWidget *)param_1->WidgetInvalidateInvestigator->UniqueIdentifier;
  }
  this->WidgetInvalidatorId = (ulong64)pSVar8;
  if (((param_1->WidgetInvalidated->_padding_ == 0) ||
      (lVar5 = param_1->WidgetInvalidated->_padding_, lVar5 == 0)) || (*(int *)(lVar5 + 8) < 1)) {
    (this->WidgetInvalidated).Object = (SWidget *)0x0;
    (this->WidgetInvalidated).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->WidgetInvalidated->_padding_,
                        &local_48);
    pTVar6 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar9->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    (this->WidgetInvalidated).WeakReferenceCount.ReferenceController = pTVar6;
    (this->WidgetInvalidated).Object = pSVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  pSVar8 = param_1->WidgetInvalidateInvestigator;
  if (((pSVar8 == (SWidget *)0x0) || (pSVar8->_padding_ == 0)) ||
     ((pSVar8->_padding_ == 0 || (*(int *)(pSVar8->_padding_ + 8) < 1)))) {
    bVar13 = 0x20;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = &local_58;
  }
  else {
    bVar13 = 0x18;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)
                        &param_1->WidgetInvalidateInvestigator->_padding_,&local_38);
    local_48.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar12 = pTVar9->Object;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = &local_48;
  }
  (this->WidgetInvalidator).WeakReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  (this->WidgetInvalidator).Object = pSVar12;
  (pTVar9->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9->Object = (SWidget *)0x0;
  if (((bVar13 & 0x20) != 0) &&
     (bVar13 = bVar13 & 0xdf,
     local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_58.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.SharedReferenceCount.ReferenceController,1);
    }
  }
  if (((bVar13 & 0x10) != 0) &&
     (bVar13 = bVar13 & 0xef,
     local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &(local_48.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.SharedReferenceCount.ReferenceController,1);
    }
  }
  if ((bVar13 & 8) != 0) {
    bVar13 = bVar13 & 0xf7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  (this->WidgetInvalidatedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetInvalidatedName).Data.ArrayNum = 0;
  (this->WidgetInvalidatedName).Data.ArrayMax = 0;
  pFVar11 = &this->WidgetInvalidatedName;
  this->WindowId = 0;
  pFVar2 = &this->WidgetInvalidatorName;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetInvalidatorName).Data.ArrayNum = 0;
  (this->WidgetInvalidatorName).Data.ArrayMax = 0;
  this->WidgetReason = param_1->InvalidateWidgetReason;
  EVar4 = param_1->InvalidateInvalidationRootReason;
  this->InvalidationPriority = param_2;
  this->InvalidationRootReason = EVar4;
  this->InvalidationTime = 0.0;
  this->bIsInvalidatorPaintValid = false;
  if (param_3) {
    if (param_4) {
      bVar13 = bVar13 | 0x40;
      pFVar10 = FReflectionMetaData::GetWidgetPath
                          ((FString *)&local_48,param_1->WidgetInvalidated,true,false);
    }
    else {
      bVar13 = bVar13 | 0x80;
      pFVar10 = FReflectionMetaData::GetWidgetDebugInfo
                          ((FString *)&local_38,param_1->WidgetInvalidated);
    }
    if (pFVar11 != pFVar10) {
      pFVar7 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar11->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->WidgetInvalidatedName).Data.ArrayNum = (pFVar10->Data).ArrayNum;
      (this->WidgetInvalidatedName).Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (((char)bVar13 < '\0') && (bVar13 = bVar13 & 0x7f, local_38.Object != (SWidget *)0x0)) {
      FMemory::Free(local_38.Object);
    }
    if (((bVar13 & 0x40) != 0) && (local_48.Object != (SWidget *)0x0)) {
      FMemory::Free(local_48.Object);
    }
    bVar14 = !param_4;
    if (bVar14) {
      pFVar11 = FReflectionMetaData::GetWidgetDebugInfo
                          ((FString *)&local_38,param_1->WidgetInvalidateInvestigator);
    }
    else {
      pFVar11 = FReflectionMetaData::GetWidgetPath
                          ((FString *)&local_48,param_1->WidgetInvalidateInvestigator,true,false);
    }
    if (pFVar2 != pFVar11) {
      pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->WidgetInvalidatorName).Data.ArrayNum = (pFVar11->Data).ArrayNum;
      (this->WidgetInvalidatorName).Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if ((bVar14) && (local_38.Object != (SWidget *)0x0)) {
      FMemory::Free(local_38.Object);
    }
    if ((!bVar14) && (local_48.Object != (SWidget *)0x0)) {
      FMemory::Free(local_48.Object);
    }
  }
  return this;
}

// ~FInvalidationInfo @ 14242eee0

void __thiscall
FConsoleSlateDebuggerInvalidate::FInvalidationInfo::~FInvalidationInfo(FInvalidationInfo *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar3 = (this->WidgetInvalidatorName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->WidgetInvalidatedName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->WidgetInvalidator).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pTVar4 = (this->WidgetInvalidated).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// ReplaceInvalidated @ 14244fe70

void __thiscall
FConsoleSlateDebuggerInvalidate::FInvalidationInfo::ReplaceInvalidated
          (FInvalidationInfo *this,FSlateDebuggingInvalidateArgs *param_1,int param_2,bool param_3,
          bool param_4)

{
  TWeakPtr<SWidget_const_,1> *pTVar1;
  atomic<int> *paVar2;
  FString *pFVar3;
  int *piVar4;
  atomic<int> aVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TSharedRef<SWidget_const_,1> *pTVar15;
  FString *pFVar16;
  SWidget *pSVar17;
  SWidget *pSVar18;
  SWidget **ppSVar19;
  SWidget *local_78;
  TReferenceControllerBase<1> *local_70;
  SWidget *local_68;
  longlong *plStack_60;
  TSharedRef<SWidget_const_,1> local_58;
  FString local_48;
  FString local_38;
  
  pSVar18 = (SWidget *)0x0;
  if (this->WidgetInvalidatorId == 0) {
    pTVar1 = &this->WidgetInvalidated;
    this->WidgetInvalidatorId = this->WidgetInvalidatedId;
    if (&this->WidgetInvalidator != pTVar1) {
      (this->WidgetInvalidator).Object = pTVar1->Object;
      pTVar7 = (this->WidgetInvalidated).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (SWidget *)0x0;
      pTVar8 = (this->WidgetInvalidator).WeakReferenceCount.ReferenceController;
      (this->WidgetInvalidator).WeakReferenceCount.ReferenceController = pTVar7;
      (this->WidgetInvalidated).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar8->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
        }
      }
    }
    pFVar16 = &this->WidgetInvalidatedName;
    pFVar3 = &this->WidgetInvalidatorName;
    if (pFVar3 != pFVar16) {
      pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->WidgetInvalidatorName).Data.ArrayNum = (this->WidgetInvalidatedName).Data.ArrayNum;
      (this->WidgetInvalidatorName).Data.ArrayMax = (this->WidgetInvalidatedName).Data.ArrayMax;
      (this->WidgetInvalidatedName).Data.ArrayNum = 0;
      (this->WidgetInvalidatedName).Data.ArrayMax = 0;
    }
  }
  if ((param_1->WidgetInvalidated == (SWidget *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs.WidgetInvalidated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\ConsoleSlateDebuggerInvalidate.cpp"
                          ,0x18b,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar17 = pSVar18;
  if (param_1->WidgetInvalidated != (SWidget *)0x0) {
    pSVar17 = (SWidget *)param_1->WidgetInvalidated->UniqueIdentifier;
  }
  this->WidgetInvalidatedId = (ulong64)pSVar17;
  if (((param_1->WidgetInvalidated->_padding_ == 0) ||
      (lVar10 = param_1->WidgetInvalidated->_padding_, lVar10 == 0)) || (*(int *)(lVar10 + 8) < 1))
  {
    ppSVar19 = &local_68;
    bVar13 = false;
    bVar12 = false;
    bVar14 = true;
    local_68 = (SWidget *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&param_1->WidgetInvalidated->_padding_,
                         &local_58);
    local_70 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar18 = pTVar15->Object;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
      UNLOCK();
    }
    ppSVar19 = &local_78;
    bVar13 = true;
    bVar12 = true;
    bVar14 = false;
    local_78 = pSVar18;
  }
  if (&this->WidgetInvalidated != (TWeakPtr<SWidget_const_,1> *)ppSVar19) {
    pSVar17 = ppSVar19[1];
    (this->WidgetInvalidated).Object = pSVar18;
    pTVar7 = (this->WidgetInvalidated).WeakReferenceCount.ReferenceController;
    *ppSVar19 = (SWidget *)0x0;
    (this->WidgetInvalidated).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pSVar17;
    ppSVar19[1] = (SWidget *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar7->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
  }
  pTVar7 = local_70;
  if ((bVar14) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    piVar4 = (int *)((longlong)plStack_60 + 0xc);
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plStack_60 + 8))(plStack_60,1);
    }
  }
  if ((bVar12) && (pTVar7 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar7->WeakReferenceCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (param_3) {
    bVar14 = !param_4;
    if (bVar14) {
      pFVar16 = FReflectionMetaData::GetWidgetDebugInfo(&local_48,param_1->WidgetInvalidated);
    }
    else {
      pFVar16 = FReflectionMetaData::GetWidgetPath(&local_38,param_1->WidgetInvalidated,true,false);
    }
    pFVar3 = &this->WidgetInvalidatedName;
    if (pFVar3 != pFVar16) {
      pFVar9 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->WidgetInvalidatedName).Data.ArrayNum = (pFVar16->Data).ArrayNum;
      (this->WidgetInvalidatedName).Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if ((bVar14) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((!bVar14) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  this->WidgetReason = this->WidgetReason | param_1->InvalidateWidgetReason;
  this->InvalidationRootReason =
       this->InvalidationRootReason | param_1->InvalidateInvalidationRootReason;
  this->InvalidationPriority = param_2;
  return;
}

// ReplaceInvalidator @ 142450160

void __thiscall
FConsoleSlateDebuggerInvalidate::FInvalidationInfo::ReplaceInvalidator
          (FInvalidationInfo *this,FSlateDebuggingInvalidateArgs *param_1,int param_2,bool param_3,
          bool param_4)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  FString *pFVar4;
  bool bVar5;
  FString local_48;
  FString local_38;
  
  uVar3 = 0;
  if (param_1->WidgetInvalidateInvestigator != (SWidget *)0x0) {
    uVar3 = param_1->WidgetInvalidateInvestigator->UniqueIdentifier;
  }
  this->WidgetInvalidatorId = uVar3;
  if (param_3) {
    bVar5 = !param_4;
    if (bVar5) {
      pFVar4 = FReflectionMetaData::GetWidgetDebugInfo
                         (&local_48,param_1->WidgetInvalidateInvestigator);
    }
    else {
      pFVar4 = FReflectionMetaData::GetWidgetPath
                         (&local_38,param_1->WidgetInvalidateInvestigator,true,false);
    }
    pFVar1 = &this->WidgetInvalidatorName;
    if (pFVar1 != pFVar4) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->WidgetInvalidatorName).Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (this->WidgetInvalidatorName).Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((!bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  this->WidgetReason = this->WidgetReason | param_1->InvalidateWidgetReason;
  this->InvalidationRootReason =
       this->InvalidationRootReason | param_1->InvalidateInvalidationRootReason;
  this->InvalidationPriority = param_2;
  return;
}

// UpdateInvalidationReason @ 142456020

void __thiscall
FConsoleSlateDebuggerInvalidate::FInvalidationInfo::UpdateInvalidationReason
          (FInvalidationInfo *this,FSlateDebuggingInvalidateArgs *param_1,int param_2)

{
  this->WidgetReason = this->WidgetReason | param_1->InvalidateWidgetReason;
  this->InvalidationRootReason =
       this->InvalidationRootReason | param_1->InvalidateInvalidationRootReason;
  this->InvalidationPriority = param_2;
  return;
}

