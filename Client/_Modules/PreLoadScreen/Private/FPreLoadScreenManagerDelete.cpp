// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 1

// operator() @ 145ac0410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FPreLoadScreenManager::FPreLoadScreenManagerDelete::operator()
          (FPreLoadScreenManagerDelete *this,FPreLoadScreenManager *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  if (param_1 != (FPreLoadScreenManager *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->VirtualRenderWindow).SharedReferenceCount.ReferenceController);
    pTVar3 = (param_1->MainWindow).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->WidgetRenderer).SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<IPreLoadScreen,1>,int>
              ((TSharedPtr<IPreLoadScreen,1> *)(param_1->PreLoadScreens).AllocatorInstance.Data,
               (param_1->PreLoadScreens).ArrayNum);
    pFVar4 = (param_1->PreLoadScreens).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(param_1->IsResponsibleForRenderingDelegate).field_0x8,
               *(int *)&(param_1->IsResponsibleForRenderingDelegate).field_0x10);
    pvVar5 = *(void **)&(param_1->IsResponsibleForRenderingDelegate).field_0x8;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&param_1->IsResponsibleForRenderingDelegate);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(param_1->OnPreLoadScreenManagerCleanUp).field_0x8,
               *(int *)&(param_1->OnPreLoadScreenManagerCleanUp).field_0x10);
    pvVar5 = *(void **)&(param_1->OnPreLoadScreenManagerCleanUp).field_0x8;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    ::operator_delete(param_1,0xb8);
  }
  return;
}

