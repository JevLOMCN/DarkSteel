// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// AddReferencedObjects @ 142130e50

void __thiscall
PackageReloadInternal::FExistingPackageReferences::AddReferencedObjects
          (FExistingPackageReferences *this,FReferenceCollector *param_1)

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
      `TCheckedPointerIterator<PackageReloadInternal::FExistingPackageReference,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3 + 8,0,0);
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// GetReferencerName @ 14213e8b0

FString * __thiscall
PackageReloadInternal::FExistingPackageReferences::GetReferencerName
          (FExistingPackageReferences *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FExistingPackageReferences");
  return __return_storage_ptr__;
}

