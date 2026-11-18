// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 3

// FInstallBundleSourceUpdateContentResultInfo @ 148bc2db0

FInstallBundleSourceUpdateContentResultInfo * __thiscall
FInstallBundleSourceUpdateContentResultInfo::FInstallBundleSourceUpdateContentResultInfo
          (FInstallBundleSourceUpdateContentResultInfo *this,
          FInstallBundleSourceUpdateContentResultInfo *param_1)

{
  this->BundleName = param_1->BundleName;
  this->Result = param_1->Result;
  FText::FText(&this->OptionalErrorText,&param_1->OptionalErrorText);
  (this->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalErrorCode).Data.AllocatorInstance.Data =
       (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  (param_1->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalErrorCode).Data.ArrayNum = (param_1->OptionalErrorCode).Data.ArrayNum;
  (this->OptionalErrorCode).Data.ArrayMax = (param_1->OptionalErrorCode).Data.ArrayMax;
  (param_1->OptionalErrorCode).Data.ArrayNum = 0;
  (param_1->OptionalErrorCode).Data.ArrayMax = 0;
  (this->ContentPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPaths).AllocatorInstance.Data = (param_1->ContentPaths).AllocatorInstance.Data;
  (param_1->ContentPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPaths).ArrayNum = (param_1->ContentPaths).ArrayNum;
  (this->ContentPaths).ArrayMax = (param_1->ContentPaths).ArrayMax;
  (param_1->ContentPaths).ArrayNum = 0;
  (param_1->ContentPaths).ArrayMax = 0;
  (this->AdditionalRootDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRootDirs).AllocatorInstance.Data =
       (param_1->AdditionalRootDirs).AllocatorInstance.Data;
  (param_1->AdditionalRootDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRootDirs).ArrayNum = (param_1->AdditionalRootDirs).ArrayNum;
  (this->AdditionalRootDirs).ArrayMax = (param_1->AdditionalRootDirs).ArrayMax;
  (param_1->AdditionalRootDirs).ArrayNum = 0;
  (param_1->AdditionalRootDirs).ArrayMax = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            (&this->NonUFSShaderLibPaths,&param_1->NonUFSShaderLibPaths);
  (this->OnDemandMountArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandMountArgs).AllocatorInstance.Data =
       (param_1->OnDemandMountArgs).AllocatorInstance.Data;
  (param_1->OnDemandMountArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandMountArgs).ArrayNum = (param_1->OnDemandMountArgs).ArrayNum;
  (this->OnDemandMountArgs).ArrayMax = (param_1->OnDemandMountArgs).ArrayMax;
  (param_1->OnDemandMountArgs).ArrayNum = 0;
  (param_1->OnDemandMountArgs).ArrayMax = 0;
  (this->MountOptions).MountFlags = (param_1->MountOptions).MountFlags;
  (this->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.AllocatorInstance.Data =
       (param_1->ProjectName).Data.AllocatorInstance.Data;
  (param_1->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.ArrayNum = (param_1->ProjectName).Data.ArrayNum;
  (this->ProjectName).Data.ArrayMax = (param_1->ProjectName).Data.ArrayMax;
  (param_1->ProjectName).Data.ArrayNum = 0;
  (param_1->ProjectName).Data.ArrayMax = 0;
  this->CurrentInstallSize = param_1->CurrentInstallSize;
  (this->LastAccessTime).Ticks = (param_1->LastAccessTime).Ticks;
  this->bContentWasInstalled = param_1->bContentWasInstalled;
  return this;
}

// FInstallBundleSourceUpdateContentResultInfo @ 148bc2f20

FInstallBundleSourceUpdateContentResultInfo * __thiscall
FInstallBundleSourceUpdateContentResultInfo::FInstallBundleSourceUpdateContentResultInfo
          (FInstallBundleSourceUpdateContentResultInfo *this)

{
  (this->BundleName).ComparisonIndex = 0;
  (this->BundleName).Number = 0;
  this->Result = OK;
  FText::FText(&this->OptionalErrorText);
  (this->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalErrorCode).Data.ArrayNum = 0;
  (this->OptionalErrorCode).Data.ArrayMax = 0;
  (this->ContentPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPaths).ArrayNum = 0;
  (this->ContentPaths).ArrayMax = 0;
  (this->AdditionalRootDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalRootDirs).ArrayNum = 0;
  (this->AdditionalRootDirs).ArrayMax = 0;
  *(undefined8 *)&(this->NonUFSShaderLibPaths).Elements = 0;
  *(undefined8 *)&(this->NonUFSShaderLibPaths).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->NonUFSShaderLibPaths).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->NonUFSShaderLibPaths).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->NonUFSShaderLibPaths).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->NonUFSShaderLibPaths).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NonUFSShaderLibPaths).Elements.field_0x34 = 0;
  (this->NonUFSShaderLibPaths).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->NonUFSShaderLibPaths).HashSize = 0;
  (this->OnDemandMountArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandMountArgs).ArrayNum = 0;
  (this->OnDemandMountArgs).ArrayMax = 0;
  (this->MountOptions).MountFlags = None;
  (this->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.ArrayNum = 0;
  (this->ProjectName).Data.ArrayMax = 0;
  this->CurrentInstallSize = 0;
  (this->LastAccessTime).Ticks = 0;
  this->bContentWasInstalled = false;
  return this;
}

// ~FInstallBundleSourceUpdateContentResultInfo @ 148bc3e20

void __thiscall
FInstallBundleSourceUpdateContentResultInfo::~FInstallBundleSourceUpdateContentResultInfo
          (FInstallBundleSourceUpdateContentResultInfo *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  ITextData *pIVar3;
  
  pFVar1 = (this->ProjectName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<UE::IoStore::FOnDemandMountArgs,TDefaultDelete<UE::IoStore::FOnDemandMountArgs>_>,int>
            ((TUniquePtr<UE::IoStore::FOnDemandMountArgs,TDefaultDelete<UE::IoStore::FOnDemandMountArgs>_>
              *)(this->OnDemandMountArgs).AllocatorInstance.Data,(this->OnDemandMountArgs).ArrayNum)
  ;
  pFVar1 = (this->OnDemandMountArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->NonUFSShaderLibPaths).HashSize = 0;
  FVar2 = (this->NonUFSShaderLibPaths).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NonUFSShaderLibPaths).Elements);
  DestructItems<FString,int>
            ((FString *)(this->AdditionalRootDirs).AllocatorInstance.Data,
             (this->AdditionalRootDirs).ArrayNum);
  pFVar1 = (this->AdditionalRootDirs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ContentPaths).AllocatorInstance.Data,(this->ContentPaths).ArrayNum);
  pFVar1 = (this->ContentPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OptionalErrorCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->OptionalErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

