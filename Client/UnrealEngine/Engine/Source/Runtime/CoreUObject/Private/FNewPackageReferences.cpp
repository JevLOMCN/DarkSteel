// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// AddReferencedObjects @ 142130ed0

void __thiscall
PackageReloadInternal::FNewPackageReferences::AddReferencedObjects
          (FNewPackageReferences *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Refs).ArrayNum;
  pFVar3 = (this->Refs).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Refs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<PackageReloadInternal::FNewPackageReference,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3);
    if (*(longlong *)(pFVar3 + 8) != 0) {
      FReferenceCollector::
      AddReferencedObjects<UObject,UObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                (param_1,(TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                          *)(*(longlong *)(pFVar3 + 8) + 0x10),(UObject *)0x0,(FProperty *)0x0);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// GetReferencerName @ 14213e8e0

FString * __thiscall
PackageReloadInternal::FNewPackageReferences::GetReferencerName
          (FNewPackageReferences *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNewPackageReferences");
  return __return_storage_ptr__;
}

