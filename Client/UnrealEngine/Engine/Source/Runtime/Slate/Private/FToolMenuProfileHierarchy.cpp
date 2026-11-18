// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// GenerateFlattenedMenuProfile @ 14280b6d0

FToolMenuProfile * __thiscall
FToolMenuProfileHierarchy::GenerateFlattenedMenuProfile
          (FToolMenuProfileHierarchy *this,FToolMenuProfile *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  FToolMenuProfile::FToolMenuProfile(__return_storage_ptr__);
  pFVar3 = (this->ProfileHierarchy).AllocatorInstance.Data;
  iVar2 = (this->ProfileHierarchy).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ProfileHierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FToolMenuProfile_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UE::ToolMenuCustomization::Private::HandleToolMenuProfile
              (__return_storage_ptr__,*(FToolMenuProfile **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (this->RuntimeProfileHierarchy).AllocatorInstance.Data;
  iVar2 = (this->RuntimeProfileHierarchy).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RuntimeProfileHierarchy).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FToolMenuProfile_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UE::ToolMenuCustomization::Private::HandleToolMenuProfile
              (__return_storage_ptr__,*(FToolMenuProfile **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return __return_storage_ptr__;
}

