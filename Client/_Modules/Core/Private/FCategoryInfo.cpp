// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FCategoryInfo @ 141677940

FCategoryInfo * __thiscall
FPersistentStorageManager::FCategoryInfo::FCategoryInfo
          (FCategoryInfo *this,
          TArray<FPersistentStorageCategory,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  (this->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Categories).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = param_1->ArrayNum;
  (this->Categories).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->DefaultCategory = param_2;
  return this;
}

