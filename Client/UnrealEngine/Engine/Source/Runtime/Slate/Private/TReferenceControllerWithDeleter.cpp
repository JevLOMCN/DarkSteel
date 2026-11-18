// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 76

// DestroyObject @ 1426b6650

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericWindowDefinition,SharedPointerInternals::DefaultDeleter<FGenericWindowDefinition>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericWindowDefinition,SharedPointerInternals::DefaultDeleter<FGenericWindowDefinition>,1>
                *this)

{
  FGenericWindowDefinition *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericWindowDefinition *)0x0) {
    pFVar2 = (pFVar1->Title).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x78);
    return;
  }
  return;
}

// DestroyObject @ 1426b6690

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericCommands,SharedPointerInternals::DefaultDeleter<FGenericCommands>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericCommands,SharedPointerInternals::DefaultDeleter<FGenericCommands>,1>
                *this)

{
  FGenericCommands *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericCommands *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b66a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b66b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuInHostWidget,SharedPointerInternals::DefaultDeleter<FMenuInHostWidget>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuInHostWidget,SharedPointerInternals::DefaultDeleter<FMenuInHostWidget>,1>
                *this)

{
  FMenuInHostWidget *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuInHostWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b66c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b66d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuInPopup,SharedPointerInternals::DefaultDeleter<FMenuInPopup>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuInPopup,SharedPointerInternals::DefaultDeleter<FMenuInPopup>,1>
                *this)

{
  FMenuInPopup *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuInPopup *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b66e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b66f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuInWindow,SharedPointerInternals::DefaultDeleter<FMenuInWindow>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuInWindow,SharedPointerInternals::DefaultDeleter<FMenuInWindow>,1>
                *this)

{
  FMenuInWindow *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuInWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b6701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b6710

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullSlateSoundDevice,SharedPointerInternals::DefaultDeleter<FNullSlateSoundDevice>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNullSlateSoundDevice,SharedPointerInternals::DefaultDeleter<FNullSlateSoundDevice>,1>
                *this)

{
  FNullSlateSoundDevice *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNullSlateSoundDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b6721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b6730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateApplication,SharedPointerInternals::DefaultDeleter<FSlateApplication>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateApplication,SharedPointerInternals::DefaultDeleter<FSlateApplication>,1>
                *this)

{
  FSlateApplication *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateApplication *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b6741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b6750

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateVirtualUserHandle,SharedPointerInternals::DefaultDeleter<FSlateVirtualUserHandle>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateVirtualUserHandle,SharedPointerInternals::DefaultDeleter<FSlateVirtualUserHandle>,1>
                *this)

{
  FSlateVirtualUserHandle *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateVirtualUserHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b6761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b6770

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabCommands,SharedPointerInternals::DefaultDeleter<FTabCommands>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabCommands,SharedPointerInternals::DefaultDeleter<FTabCommands>,1>
                *this)

{
  FTabCommands *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTabCommands *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b6781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1426b6790

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<GenericApplication,SharedPointerInternals::DefaultDeleter<GenericApplication>,1>
::DestroyObject(TReferenceControllerWithDeleter<GenericApplication,SharedPointerInternals::DefaultDeleter<GenericApplication>,1>
                *this)

{
  GenericApplication *pGVar1;
  
  pGVar1 = this->Object;
  if (pGVar1 != (GenericApplication *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426b67a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pGVar1->_padding_)(pGVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bac0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInputChord,SharedPointerInternals::DefaultDeleter<FInputChord>,1>::
DestroyObject(TReferenceControllerWithDeleter<FInputChord,SharedPointerInternals::DefaultDeleter<FInputChord>,1>
              *this)

{
  FInputChord *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FInputChord *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Key).KeyDetails.SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x20);
    return;
  }
  return;
}

// DestroyObject @ 14272bb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabSpawnerEntry,SharedPointerInternals::DefaultDeleter<FTabSpawnerEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabSpawnerEntry,SharedPointerInternals::DefaultDeleter<FTabSpawnerEntry>,1>
                *this)

{
  FTabSpawnerEntry *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTabSpawnerEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bb20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonReader<char>,SharedPointerInternals::DefaultDeleter<TJsonReader<char>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonReader<char>,SharedPointerInternals::DefaultDeleter<TJsonReader<char>_>,1>
                *this)

{
  TJsonReader<char> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonReader<char> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bb31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bb40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>,1>
                *this)

{
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *this_00;
  
  this_00 = this->Object;
  if (this_00 !=
      (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
       *)0x0) {
    *(undefined4 *)&this_00->field_0x48 = 0;
    if (*(void **)&this_00->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// DestroyObject @ 14272bb90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>_>,1>
                *this)

{
  TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
  *this_00;
  
  this_00 = this->Object;
  if (this_00 !=
      (TMap<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
       *)0x0) {
    *(undefined4 *)&this_00->field_0x48 = 0;
    if (*(void **)&this_00->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FTabSpawnerEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// DestroyObject @ 14272bbe0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FArea,SharedPointerInternals::DefaultDeleter<FTabManager::FArea>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabManager::FArea,SharedPointerInternals::DefaultDeleter<FTabManager::FArea>,1>
                *this)

{
  FArea *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FArea *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bbf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDockingDragOperation,SharedPointerInternals::DefaultDeleter<FDockingDragOperation>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDockingDragOperation,SharedPointerInternals::DefaultDeleter<FDockingDragOperation>,1>
                *this)

{
  FDockingDragOperation *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDockingDragOperation *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGlobalTabmanager,SharedPointerInternals::DefaultDeleter<FGlobalTabmanager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGlobalTabmanager,SharedPointerInternals::DefaultDeleter<FGlobalTabmanager>,1>
                *this)

{
  FGlobalTabmanager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGlobalTabmanager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bc40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueBoolean,SharedPointerInternals::DefaultDeleter<FJsonValueBoolean>,1>
::DestroyObject(TReferenceControllerWithDeleter<FJsonValueBoolean,SharedPointerInternals::DefaultDeleter<FJsonValueBoolean>,1>
                *this)

{
  FJsonValueBoolean *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FJsonValueBoolean *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bc60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueNumber,SharedPointerInternals::DefaultDeleter<FJsonValueNumber>,1>
::DestroyObject(TReferenceControllerWithDeleter<FJsonValueNumber,SharedPointerInternals::DefaultDeleter<FJsonValueNumber>,1>
                *this)

{
  FJsonValueNumber *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FJsonValueNumber *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bc80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FLayout,SharedPointerInternals::DefaultDeleter<FTabManager::FLayout>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabManager::FLayout,SharedPointerInternals::DefaultDeleter<FTabManager::FLayout>,1>
                *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FLayout *pFVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  pFVar5 = this->Object;
  if (pFVar5 != (FLayout *)0x0) {
    DestructItems<TSharedRef<FTabManager::FArea,1>,int>
              ((TSharedRef<FTabManager::FArea,1> *)(pFVar5->Areas).AllocatorInstance.Data,
               (pFVar5->Areas).ArrayNum);
    pFVar6 = (pFVar5->Areas).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pTVar7 = (pFVar5->PrimaryArea).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    plVar8 = (longlong *)pFVar5->_padding_;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    ::operator_delete(pFVar5,0x38);
  }
  return;
}

// DestroyObject @ 14272bd10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNamePermissionList,SharedPointerInternals::DefaultDeleter<FNamePermissionList>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNamePermissionList,SharedPointerInternals::DefaultDeleter<FNamePermissionList>,1>
                *this)

{
  FNamePermissionList *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNamePermissionList *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FPrivateApi,SharedPointerInternals::DefaultDeleter<FTabManager::FPrivateApi>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabManager::FPrivateApi,SharedPointerInternals::DefaultDeleter<FTabManager::FPrivateApi>,1>
                *this)

{
  ::operator_delete(this->Object,8);
  return;
}

// DestroyObject @ 14272bd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateUser,SharedPointerInternals::DefaultDeleter<FSlateUser>,1>::
DestroyObject(TReferenceControllerWithDeleter<FSlateUser,SharedPointerInternals::DefaultDeleter<FSlateUser>,1>
              *this)

{
  FSlateUser *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateUser *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bd61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bd70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FSplitter,SharedPointerInternals::DefaultDeleter<FTabManager::FSplitter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabManager::FSplitter,SharedPointerInternals::DefaultDeleter<FTabManager::FSplitter>,1>
                *this)

{
  FSplitter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSplitter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bd90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager::FStack,SharedPointerInternals::DefaultDeleter<FTabManager::FStack>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTabManager::FStack,SharedPointerInternals::DefaultDeleter<FTabManager::FStack>,1>
                *this)

{
  FStack *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStack *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTabManager,SharedPointerInternals::DefaultDeleter<FTabManager>,1>::
DestroyObject(TReferenceControllerWithDeleter<FTabManager,SharedPointerInternals::DefaultDeleter<FTabManager>,1>
              *this)

{
  FTabManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTabManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bdc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bdd0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUICommandDragDropOp,SharedPointerInternals::DefaultDeleter<FUICommandDragDropOp>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUICommandDragDropOp,SharedPointerInternals::DefaultDeleter<FUICommandDragDropOp>,1>
                *this)

{
  FUICommandDragDropOp *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUICommandDragDropOp *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272bde1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272bdf0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUICommandInfo,SharedPointerInternals::DefaultDeleter<FUICommandInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUICommandInfo,SharedPointerInternals::DefaultDeleter<FUICommandInfo>,1>
                *this)

{
  FUICommandInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUICommandInfo *)0x0) {
    DestructItems<FInputChord,int>
              ((FInputChord *)(pFVar1->DefaultChords).AllocatorInstance.Data,
               (pFVar1->DefaultChords).ArrayNum);
    pFVar2 = (pFVar1->DefaultChords).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pIVar3 = (pFVar1->Description).TextData.Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar3 = (pFVar1->Label).TextData.Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    DestructItems<TSharedRef<FInputChord,1>,int>
              ((TSharedRef<FInputChord,1> *)(pFVar1->ActiveChords).AllocatorInstance.Data,
               (pFVar1->ActiveChords).ArrayNum);
    pFVar2 = (pFVar1->ActiveChords).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x88);
    return;
  }
  return;
}

// DestroyObject @ 14272be70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUICommandList,SharedPointerInternals::DefaultDeleter<FUICommandList>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUICommandList,SharedPointerInternals::DefaultDeleter<FUICommandList>,1>
                *this)

{
  FUICommandList *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUICommandList *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014272be81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14272be90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUserDefinedChords,SharedPointerInternals::DefaultDeleter<FUserDefinedChords>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUserDefinedChords,SharedPointerInternals::DefaultDeleter<FUserDefinedChords>,1>
                *this)

{
  FUserDefinedChords *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUserDefinedChords *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Chords).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 142801880

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FButtonRowBlock,SharedPointerInternals::DefaultDeleter<FButtonRowBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FButtonRowBlock,SharedPointerInternals::DefaultDeleter<FButtonRowBlock>,1>
                *this)

{
  FButtonRowBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FButtonRowBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1428018a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDriverIdMetaData,SharedPointerInternals::DefaultDeleter<FDriverIdMetaData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDriverIdMetaData,SharedPointerInternals::DefaultDeleter<FDriverIdMetaData>,1>
                *this)

{
  FDriverIdMetaData *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDriverIdMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428018b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1428018c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDropPreviewBlock,SharedPointerInternals::DefaultDeleter<FDropPreviewBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDropPreviewBlock,SharedPointerInternals::DefaultDeleter<FDropPreviewBlock>,1>
                *this)

{
  FDropPreviewBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDropPreviewBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428018d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1428018e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEditableTextBlock,SharedPointerInternals::DefaultDeleter<FEditableTextBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FEditableTextBlock,SharedPointerInternals::DefaultDeleter<FEditableTextBlock>,1>
                *this)

{
  FEditableTextBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FEditableTextBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428018f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801900

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGroupEndBlock,SharedPointerInternals::DefaultDeleter<FGroupEndBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGroupEndBlock,SharedPointerInternals::DefaultDeleter<FGroupEndBlock>,1>
                *this)

{
  FGroupEndBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGroupEndBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801920

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGroupStartBlock,SharedPointerInternals::DefaultDeleter<FGroupStartBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGroupStartBlock,SharedPointerInternals::DefaultDeleter<FGroupStartBlock>,1>
                *this)

{
  FGroupStartBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGroupStartBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801940

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuBarExtension,SharedPointerInternals::DefaultDeleter<FMenuBarExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuBarExtension,SharedPointerInternals::DefaultDeleter<FMenuBarExtension>,1>
                *this)

{
  FMenuBarExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuBarExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801960

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuEntryBlock,SharedPointerInternals::DefaultDeleter<FMenuEntryBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuEntryBlock,SharedPointerInternals::DefaultDeleter<FMenuEntryBlock>,1>
                *this)

{
  FMenuEntryBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuEntryBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801980

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuExtension,SharedPointerInternals::DefaultDeleter<FMenuExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuExtension,SharedPointerInternals::DefaultDeleter<FMenuExtension>,1>
                *this)

{
  FMenuExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1428019a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMenuSeparatorBlock,SharedPointerInternals::DefaultDeleter<FMenuSeparatorBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMenuSeparatorBlock,SharedPointerInternals::DefaultDeleter<FMenuSeparatorBlock>,1>
                *this)

{
  FMenuSeparatorBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMenuSeparatorBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428019b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1428019c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMultiBox,SharedPointerInternals::DefaultDeleter<FMultiBox>,1>::
DestroyObject(TReferenceControllerWithDeleter<FMultiBox,SharedPointerInternals::DefaultDeleter<FMultiBox>,1>
              *this)

{
  FMultiBox *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMultiBox *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428019d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1428019e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarButtonBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FToolBarButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarButtonBlock>,1>
                *this)

{
  FToolBarButtonBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FToolBarButtonBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428019f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801a00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarComboButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarComboButtonBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FToolBarComboButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarComboButtonBlock>,1>
                *this)

{
  FToolBarComboButtonBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FToolBarComboButtonBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801a20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarExtension,SharedPointerInternals::DefaultDeleter<FToolBarExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FToolBarExtension,SharedPointerInternals::DefaultDeleter<FToolBarExtension>,1>
                *this)

{
  FToolBarExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FToolBarExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142801a40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FToolBarStackButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarStackButtonBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FToolBarStackButtonBlock,SharedPointerInternals::DefaultDeleter<FToolBarStackButtonBlock>,1>
                *this)

{
  FToolBarStackButtonBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FToolBarStackButtonBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142801a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e1e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultLayoutBlock,SharedPointerInternals::DefaultDeleter<FDefaultLayoutBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultLayoutBlock,SharedPointerInternals::DefaultDeleter<FDefaultLayoutBlock>,1>
                *this)

{
  FDefaultLayoutBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultLayoutBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e200

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultRichTextMarkupParser,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupParser>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultRichTextMarkupParser,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupParser>,1>
                *this)

{
  FDefaultRichTextMarkupParser *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultRichTextMarkupParser *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e220

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultRichTextMarkupWriter,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupWriter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultRichTextMarkupWriter,SharedPointerInternals::DefaultDeleter<FDefaultRichTextMarkupWriter>,1>
                *this)

{
  FDefaultRichTextMarkupWriter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultRichTextMarkupWriter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e240

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExtender,SharedPointerInternals::DefaultDeleter<FExtender>,1>::
DestroyObject(TReferenceControllerWithDeleter<FExtender,SharedPointerInternals::DefaultDeleter<FExtender>,1>
              *this)

{
  FExtender *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FExtender *)0x0) {
    DestructItems<TSharedPtr<FExtensionBase_const_,1>,int>
              ((TSharedPtr<FExtensionBase_const_,1> *)(pFVar1->Extensions).AllocatorInstance.Data,
               (pFVar1->Extensions).ArrayNum);
    pFVar2 = (pFVar1->Extensions).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 14286e290

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHyperlinkDecorator,SharedPointerInternals::DefaultDeleter<FHyperlinkDecorator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FHyperlinkDecorator,SharedPointerInternals::DefaultDeleter<FHyperlinkDecorator>,1>
                *this)

{
  FHyperlinkDecorator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FHyperlinkDecorator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e2b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImageDecorator,SharedPointerInternals::DefaultDeleter<FImageDecorator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FImageDecorator,SharedPointerInternals::DefaultDeleter<FImageDecorator>,1>
                *this)

{
  FImageDecorator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FImageDecorator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e2d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPlainTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FPlainTextLayoutMarshaller>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPlainTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FPlainTextLayoutMarshaller>,1>
                *this)

{
  FPlainTextLayoutMarshaller *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FPlainTextLayoutMarshaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e2f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRichTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextLayoutMarshaller>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRichTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextLayoutMarshaller>,1>
                *this)

{
  FRichTextLayoutMarshaller *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRichTextLayoutMarshaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e310

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller,SharedPointerInternals::DefaultDeleter<FRichTextSyntaxHighlighterTextLayoutMarshaller>,1>
                *this)

{
  FRichTextSyntaxHighlighterTextLayoutMarshaller *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRichTextSyntaxHighlighterTextLayoutMarshaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e330

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FShapedGlyphSequence,SharedPointerInternals::DefaultDeleter<FShapedGlyphSequence>,1>
::DestroyObject(TReferenceControllerWithDeleter<FShapedGlyphSequence,SharedPointerInternals::DefaultDeleter<FShapedGlyphSequence>,1>
                *this)

{
  FShapedGlyphSequence *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FShapedGlyphSequence *)0x0) {
    FShapedGlyphSequence::~FShapedGlyphSequence(this_00);
    ::operator_delete(this_00,0xa8);
    return;
  }
  return;
}

// DestroyObject @ 14286e370

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateHyperlinkRun,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateHyperlinkRun,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun>,1>
                *this)

{
  FSlateHyperlinkRun *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateHyperlinkRun *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e390

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateImageRun,SharedPointerInternals::DefaultDeleter<FSlateImageRun>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateImageRun,SharedPointerInternals::DefaultDeleter<FSlateImageRun>,1>
                *this)

{
  FSlateImageRun *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateImageRun *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e3b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlatePasswordRun,SharedPointerInternals::DefaultDeleter<FSlatePasswordRun>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlatePasswordRun,SharedPointerInternals::DefaultDeleter<FSlatePasswordRun>,1>
                *this)

{
  FSlatePasswordRun *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlatePasswordRun *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e3d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextHighlightRunRenderer,SharedPointerInternals::DefaultDeleter<FSlateTextHighlightRunRenderer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTextHighlightRunRenderer,SharedPointerInternals::DefaultDeleter<FSlateTextHighlightRunRenderer>,1>
                *this)

{
  FSlateTextHighlightRunRenderer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateTextHighlightRunRenderer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e3e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e3f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextLayout,SharedPointerInternals::DefaultDeleter<FSlateTextLayout>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTextLayout,SharedPointerInternals::DefaultDeleter<FSlateTextLayout>,1>
                *this)

{
  FSlateTextLayout *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateTextLayout *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e410

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextRun,SharedPointerInternals::DefaultDeleter<FSlateTextRun>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTextRun,SharedPointerInternals::DefaultDeleter<FSlateTextRun>,1>
                *this)

{
  FSlateTextRun *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateTextRun *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e430

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextStrikeLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextStrikeLineHighlighter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTextStrikeLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextStrikeLineHighlighter>,1>
                *this)

{
  FSlateTextStrikeLineHighlighter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateTextStrikeLineHighlighter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e450

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateTextUnderlineLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextUnderlineLineHighlighter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateTextUnderlineLineHighlighter,SharedPointerInternals::DefaultDeleter<FSlateTextUnderlineLineHighlighter>,1>
                *this)

{
  FSlateTextUnderlineLineHighlighter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateTextUnderlineLineHighlighter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e470

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateWidgetRun,SharedPointerInternals::DefaultDeleter<FSlateWidgetRun>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateWidgetRun,SharedPointerInternals::DefaultDeleter<FSlateWidgetRun>,1>
                *this)

{
  FSlateWidgetRun *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateWidgetRun *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e490

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FString,SharedPointerInternals::DefaultDeleter<FString>,1>::
DestroyObject(TReferenceControllerWithDeleter<FString,SharedPointerInternals::DefaultDeleter<FString>,1>
              *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 14286e4d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSyntaxTokenizer,SharedPointerInternals::DefaultDeleter<FSyntaxTokenizer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSyntaxTokenizer,SharedPointerInternals::DefaultDeleter<FSyntaxTokenizer>,1>
                *this)

{
  FSyntaxTokenizer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSyntaxTokenizer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e4f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidgetDecorator,SharedPointerInternals::DefaultDeleter<FWidgetDecorator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWidgetDecorator,SharedPointerInternals::DefaultDeleter<FWidgetDecorator>,1>
                *this)

{
  FWidgetDecorator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWidgetDecorator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e510

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidgetLayoutBlock,SharedPointerInternals::DefaultDeleter<FWidgetLayoutBlock>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWidgetLayoutBlock,SharedPointerInternals::DefaultDeleter<FWidgetLayoutBlock>,1>
                *this)

{
  FWidgetLayoutBlock *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWidgetLayoutBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286e521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14286e530

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateHyperlinkRun::FWidgetViewModel,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun::FWidgetViewModel>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateHyperlinkRun::FWidgetViewModel,SharedPointerInternals::DefaultDeleter<FSlateHyperlinkRun::FWidgetViewModel>,1>
                *this)

{
  ::operator_delete(this->Object,2);
  return;
}

// DestroyObject @ 1429e3e80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FCursorLineHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FCursorLineHighlighter>,1>
::DestroyObject(TReferenceControllerWithDeleter<SlateEditableTextTypes::FCursorLineHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FCursorLineHighlighter>,1>
                *this)

{
  FCursorLineHighlighter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCursorLineHighlighter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429e3e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1429e3ea0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextCompositionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextCompositionHighlighter>,1>
::DestroyObject(TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextCompositionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextCompositionHighlighter>,1>
                *this)

{
  FTextCompositionHighlighter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextCompositionHighlighter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429e3eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1429e3ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateEditableTextLayout::FTextInputMethodContext,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FTextInputMethodContext>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateEditableTextLayout::FTextInputMethodContext,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FTextInputMethodContext>,1>
                *this)

{
  FTextInputMethodContext *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextInputMethodContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429e3ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1429e3ee0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSearchHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSearchHighlighter>,1>
::DestroyObject(TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSearchHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSearchHighlighter>,1>
                *this)

{
  FTextSearchHighlighter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextSearchHighlighter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429e3ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1429e3f00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSelectionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSelectionHighlighter>,1>
::DestroyObject(TReferenceControllerWithDeleter<SlateEditableTextTypes::FTextSelectionHighlighter,SharedPointerInternals::DefaultDeleter<SlateEditableTextTypes::FTextSelectionHighlighter>,1>
                *this)

{
  FTextSelectionHighlighter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextSelectionHighlighter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429e3f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1429e3f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry,SharedPointerInternals::DefaultDeleter<FSlateEditableTextLayout::FVirtualKeyboardEntry>,1>
                *this)

{
  FVirtualKeyboardEntry *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FVirtualKeyboardEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429e3f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

