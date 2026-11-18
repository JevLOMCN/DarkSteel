// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 2

// DestroyObject @ 146ad6370

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGameplayTagNode,SharedPointerInternals::DefaultDeleter<FGameplayTagNode>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGameplayTagNode,SharedPointerInternals::DefaultDeleter<FGameplayTagNode>,1>
                *this)

{
  FGameplayTagNode *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGameplayTagNode *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->ParentNode).SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
              ((TSharedPtr<FGameplayTagNode,1> *)(pFVar1->ChildTags).AllocatorInstance.Data,
               (pFVar1->ChildTags).ArrayNum);
    pFVar2 = (pFVar1->ChildTags).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->CompleteTagWithParents).ParentTags.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x50);
    return;
  }
  return;
}

// DestroyObject @ 146ad63e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetFieldExportGroup,SharedPointerInternals::DefaultDeleter<FNetFieldExportGroup>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNetFieldExportGroup,SharedPointerInternals::DefaultDeleter<FNetFieldExportGroup>,1>
                *this)

{
  FNetFieldExportGroup *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNetFieldExportGroup *)0x0) {
    DestructItems<FNetFieldExport,int>
              ((FNetFieldExport *)(pFVar1->NetFieldExports).AllocatorInstance.Data,
               (pFVar1->NetFieldExports).ArrayNum);
    pFVar2 = (pFVar1->NetFieldExports).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->PathName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

