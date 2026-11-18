// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPackageInfo @ 148b1dd10

FPackageInfo * __thiscall
`UEngine::HandleListLoadedPackagesCommand'::__l2::FPackageInfo::FPackageInfo
          (void *this,UPackage *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
  if (this != pFVar1) {
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(FScriptContainerElement **)this = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)this + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)this + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(float *)((longlong)this + 0x10) = param_1->LoadTime;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  return this;
}

