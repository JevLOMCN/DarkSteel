// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14758cff0

UScriptStruct * __cdecl FAssetManagerSearchRules::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerSearchRules,(UObject *)pUVar1,
                         L"AssetManagerSearchRules");
  }
  return Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.OuterSingleton;
}

// FAssetManagerSearchRules @ 1475a4310

FAssetManagerSearchRules * __thiscall
FAssetManagerSearchRules::FAssetManagerSearchRules
          (FAssetManagerSearchRules *this,FAssetManagerSearchRules *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UClass *pUVar5;
  
  piVar1 = &(this->AssetScanPaths).ArrayMax;
  (this->AssetScanPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->AssetScanPaths).ArrayNum;
  pFVar4 = (param_1->AssetScanPaths).AllocatorInstance.Data;
  (this->AssetScanPaths).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FString,FString,int>
              ((this->AssetScanPaths).AllocatorInstance.Data,(FString *)pFVar4,iVar3);
  }
  pTVar2 = &this->IncludePatterns;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->IncludePatterns).ArrayMax;
  iVar3 = (param_1->IncludePatterns).ArrayNum;
  pFVar4 = (param_1->IncludePatterns).AllocatorInstance.Data;
  (this->IncludePatterns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pTVar2 = &this->ExcludePatterns;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExcludePatterns).ArrayMax;
  iVar3 = (param_1->ExcludePatterns).ArrayNum;
  pFVar4 = (param_1->ExcludePatterns).AllocatorInstance.Data;
  (this->ExcludePatterns).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  pUVar5 = (param_1->AssetBaseClass).field0_0x0.DebugPtr;
  (this->AssetBaseClass).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->bHasBlueprintClasses = param_1->bHasBlueprintClasses;
  this->bForceSynchronousScan = param_1->bForceSynchronousScan;
  this->bSkipVirtualPathExpansion = param_1->bSkipVirtualPathExpansion;
  this->bSkipManagerIncludeCheck = param_1->bSkipManagerIncludeCheck;
  *(undefined8 *)&this->ShouldIncludeDelegate = 0;
  *(undefined8 *)&(this->ShouldIncludeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldIncludeDelegate).field_0x10 = 0;
  TDelegate<bool___cdecl(FAssetData_const_&,FAssetManagerSearchRules_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ShouldIncludeDelegate,&param_1->ShouldIncludeDelegate);
  return this;
}

// ~FAssetManagerSearchRules @ 1475a9780

void __thiscall FAssetManagerSearchRules::~FAssetManagerSearchRules(FAssetManagerSearchRules *this)

{
  FScriptContainerElement *pFVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldIncludeDelegate);
  DestructItems<FString,int>
            ((FString *)(this->ExcludePatterns).AllocatorInstance.Data,
             (this->ExcludePatterns).ArrayNum);
  pFVar1 = (this->ExcludePatterns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->IncludePatterns).AllocatorInstance.Data,
             (this->IncludePatterns).ArrayNum);
  pFVar1 = (this->IncludePatterns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AssetScanPaths).AllocatorInstance.Data,
             (this->AssetScanPaths).ArrayNum);
  pFVar1 = (this->AssetScanPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AreRulesSet @ 1475b3b60

bool __thiscall FAssetManagerSearchRules::AreRulesSet(FAssetManagerSearchRules *this)

{
  bool bVar1;
  
  if (((((this->AssetScanPaths).ArrayNum == 0) && ((this->ExcludePatterns).ArrayNum == 0)) &&
      ((this->IncludePatterns).ArrayNum == 0)) &&
     ((this->AssetBaseClass).field0_0x0.DebugPtr == (UClass *)0x0)) {
    bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldIncludeDelegate);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

