// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FConfigModificationTracker @ 1418551a0

FConfigModificationTracker * __thiscall
FConfigModificationTracker::FConfigModificationTracker(FConfigModificationTracker *this)

{
  this->bTrackModifiedSections = true;
  this->bTrackLoadedFiles = false;
  *(undefined8 *)&this->ModifiedSectionsPerBranch = 0;
  *(undefined8 *)&(this->ModifiedSectionsPerBranch).field_0x8 = 0;
  *(undefined8 *)&(this->ModifiedSectionsPerBranch).field_0x20 = 0;
  *(undefined4 *)&(this->ModifiedSectionsPerBranch).field_0x28 = 0;
  *(undefined4 *)&(this->ModifiedSectionsPerBranch).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModifiedSectionsPerBranch).field_0x34 = 0;
  *(undefined4 *)&(this->ModifiedSectionsPerBranch).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModifiedSectionsPerBranch).field_0x40 = 0;
  *(undefined4 *)&(this->ModifiedSectionsPerBranch).field_0x48 = 0;
  (this->LoadedFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedFiles).ArrayNum = 0;
  (this->LoadedFiles).ArrayMax = 0;
  *(undefined8 *)&this->CVars = 0;
  *(undefined8 *)&(this->CVars).field_0x8 = 0;
  *(undefined8 *)&(this->CVars).field_0x20 = 0;
  *(undefined4 *)&(this->CVars).field_0x28 = 0;
  *(undefined4 *)&(this->CVars).field_0x2c = 0x80;
  *(undefined4 *)&(this->CVars).field_0x34 = 0;
  *(undefined4 *)&(this->CVars).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CVars).field_0x40 = 0;
  *(undefined4 *)&(this->CVars).field_0x48 = 0;
  (this->ClassesToSkipSubclasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassesToSkipSubclasses).ArrayNum = 0;
  (this->ClassesToSkipSubclasses).ArrayMax = 0;
  (this->ClassesToSkipInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassesToSkipInstances).ArrayNum = 0;
  (this->ClassesToSkipInstances).ArrayMax = 0;
  return this;
}

// ~FConfigModificationTracker @ 1418575c0

void __thiscall
FConfigModificationTracker::~FConfigModificationTracker(FConfigModificationTracker *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->ClassesToSkipInstances).AllocatorInstance.Data,
             (this->ClassesToSkipInstances).ArrayNum);
  pFVar1 = (this->ClassesToSkipInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ClassesToSkipSubclasses).AllocatorInstance.Data,
             (this->ClassesToSkipSubclasses).ArrayNum);
  pFVar1 = (this->ClassesToSkipSubclasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CVars).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CVars).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigModificationTracker::FCVarTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigModificationTracker::FCVarTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigModificationTracker::FCVarTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CVars);
  DestructItems<FString,int>
            ((FString *)(this->LoadedFiles).AllocatorInstance.Data,(this->LoadedFiles).ArrayNum);
  pFVar1 = (this->LoadedFiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ModifiedSectionsPerBranch).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModifiedSectionsPerBranch).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModifiedSectionsPerBranch);
  return;
}

