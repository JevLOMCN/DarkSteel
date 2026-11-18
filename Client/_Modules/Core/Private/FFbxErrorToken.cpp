// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FFbxErrorToken @ 1418bb2c0

FFbxErrorToken * __thiscall FFbxErrorToken::FFbxErrorToken(FFbxErrorToken *this,FName *param_1)

{
  FString *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(param_1,&local_18);
  ::FString::FString(&local_28,FbxErrorsLocalPath);
  ::FString::FString(&local_38,FbxErrorsURLPath);
  FDocumentationToken::FDocumentationToken((FDocumentationToken *)this,&local_38,&local_28,pFVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7FFbxErrorToken__6B_;
  return this;
}

