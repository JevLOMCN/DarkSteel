// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// operator() @ 14d3d1a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<TraceServices::FAnalysisCache::FFileContents>::operator()
          (TDefaultDelete<TraceServices::FAnalysisCache::FFileContents> *this,FFileContents *param_1
          )

{
  FScriptContainerElement *pFVar1;
  IFileHandle *pIVar2;
  bool bVar3;
  
  if (param_1 != (FFileContents *)0x0) {
    if ((param_1->Blocks).ArrayNum != 0) {
      bVar3 = TraceServices::FAnalysisCache::FFileContents::Save(param_1);
      if ((!bVar3) && (1 < (byte)LogAnalysisCache._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
      }
    }
    pFVar1 = (param_1->Blocks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int>
              ((FIndexEntry *)(param_1->IndexEntries).AllocatorInstance.Data,
               (param_1->IndexEntries).ArrayNum);
    pFVar1 = (param_1->IndexEntries).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar2 = (param_1->CacheFileWrite).Ptr;
    if (pIVar2 != (IFileHandle *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    pIVar2 = (param_1->CacheFile).Ptr;
    if (pIVar2 != (IFileHandle *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    pFVar1 = (param_1->CacheFilePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0x48);
  }
  return;
}

