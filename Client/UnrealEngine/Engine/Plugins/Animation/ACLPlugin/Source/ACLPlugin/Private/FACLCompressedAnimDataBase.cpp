// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 1

// SerializeCompressedData @ 14deb77d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FACLCompressedAnimDataBase::SerializeCompressedData
          (FACLCompressedAnimDataBase *this,UObject *param_1,FArchive *param_2)

{
  FString *pFVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = false;
  ICompressedAnimData::SerializeCompressedData((ICompressedAnimData *)this,param_1,param_2);
  ::operator<<(param_2,&this->bCompressionFailed);
  if ((this->bCompressionFailed != false) &&
     ((((param_2->field_0x28 & 1) != 0 ||
       ((*(longlong *)&param_2->field_0x68 != 0 &&
        (*(longlong *)(*(longlong *)&param_2->field_0x68 + 0x10) != 0)))) &&
      (1 < (byte)LogAnimationCompression._0_1_)))) {
    if (param_1 != (UObject *)0x0) {
      pFVar1 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      if ((pFVar1->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

