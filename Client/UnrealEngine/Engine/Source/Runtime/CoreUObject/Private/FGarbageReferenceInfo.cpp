// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetReferencingObjectInfo @ 142055d30

FString * __thiscall
FGarbageReferenceInfo::GetReferencingObjectInfo
          (FGarbageReferenceInfo *this,FString *__return_storage_ptr__)

{
  FGCObject *pFVar1;
  FString *pFVar2;
  longlong lVar3;
  FString local_38;
  FString local_28;
  
  lVar3 = 0;
  if (this->bReferencerUObject == false) {
    pFVar1 = (this->Referencer).GCObject;
    if (pFVar1 != (FGCObject *)0x0) {
      lVar3 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,&local_28);
      if (*(int *)(lVar3 + 8) == 0) {
        lVar3 = 2;
      }
      else {
        lVar3 = 2;
      }
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s->AddRereferencedObjects");
  }
  else {
    if (this->PropertyName != (FName)0x0) {
      pFVar2 = ::FName::ToString(&this->PropertyName,&local_28);
      if ((pFVar2->Data).ArrayNum == 0) {
        lVar3 = 1;
      }
      else {
        lVar3 = 1;
      }
    }
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(this->Referencer).Object,&local_38,(UObject *)0x0,None);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s->%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((lVar3 != 0) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

