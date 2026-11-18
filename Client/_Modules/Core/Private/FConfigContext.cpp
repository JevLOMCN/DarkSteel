// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FConfigContext @ 141854690

FConfigContext * __thiscall
FConfigContext::FConfigContext
          (FConfigContext *this,FConfigCacheIni *param_1,bool param_2,FString *param_3,
          FConfigFile *param_4)

{
  FString *this_00;
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this->ConfigSystem = param_1;
  this->ExistingFile = (FConfigFile *)0x0;
  pFVar5 = &this->Platform;
  (this->DestIniFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestIniFilename).Data.ArrayNum = 0;
  (this->DestIniFilename).Data.ArrayMax = 0;
  this->Branch = (FConfigBranch *)0x0;
  this->TemporaryBranch = (FConfigBranch *)0x0;
  ::FString::FString(pFVar5,param_3);
  this_00 = &this->SavePlatform;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->EngineConfigDir;
  (this->SavePlatform).Data.ArrayNum = 0;
  (this->SavePlatform).Data.ArrayMax = 0;
  pFVar2 = &this->ProjectConfigDir;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineConfigDir).Data.ArrayNum = 0;
  (this->EngineConfigDir).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectConfigDir).Data.ArrayNum = 0;
  (this->ProjectConfigDir).Data.ArrayMax = 0;
  (this->GeneratedConfigDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedConfigDir).Data.ArrayNum = 0;
  (this->GeneratedConfigDir).Data.ArrayMax = 0;
  (this->BaseIniName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseIniName).Data.ArrayNum = 0;
  (this->BaseIniName).Data.ArrayMax = 0;
  (this->StartSkippingAtFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartSkippingAtFilename).Data.ArrayNum = 0;
  (this->StartSkippingAtFilename).Data.ArrayMax = 0;
  (this->EngineRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineRootDir).Data.ArrayNum = 0;
  (this->EngineRootDir).Data.ArrayMax = 0;
  (this->ProjectRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectRootDir).Data.ArrayNum = 0;
  (this->ProjectRootDir).Data.ArrayMax = 0;
  (this->PluginRootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PluginRootDir).Data.ArrayNum = 0;
  (this->PluginRootDir).Data.ArrayMax = 0;
  (this->ChildPluginBaseDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildPluginBaseDirs).ArrayNum = 0;
  (this->ChildPluginBaseDirs).ArrayMax = 0;
  (this->ConfigFileTag).ComparisonIndex = 0;
  (this->ConfigFileTag).Number = 0;
  (this->ProjectLimitedAccessDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectLimitedAccessDir).Data.ArrayNum = 0;
  (this->ProjectLimitedAccessDir).Data.ArrayMax = 0;
  (this->ProjectNotForLicenseesDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectNotForLicenseesDir).Data.ArrayNum = 0;
  (this->ProjectNotForLicenseesDir).Data.ArrayMax = 0;
  (this->ProjectNoRedistDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectNoRedistDir).Data.ArrayNum = 0;
  (this->ProjectNoRedistDir).Data.ArrayMax = 0;
  *(undefined8 *)&this->PerPlatformDirs = 0;
  *(undefined8 *)&(this->PerPlatformDirs).field_0x8 = 0;
  *(undefined8 *)&(this->PerPlatformDirs).field_0x20 = 0;
  this->ChangeTracker = (FConfigModificationTracker *)0x0;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x28 = 0;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x34 = 0;
  *(undefined8 *)&(this->PerPlatformDirs).field_0x40 = 0;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x48 = 0;
  (this->OverrideLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideLayers).ArrayNum = 0;
  (this->OverrideLayers).ArrayMax = 0;
  this->bUseHierarchyCache = false;
  this->bAllowGeneratedIniWhenCooked = false;
  this->bForceReload = false;
  this->bAllowRemoteConfig = false;
  this->bWriteDestIni = false;
  this->bDefaultEngineRequired = false;
  this->bIsForPlugin = false;
  this->bIsForPluginModification = false;
  *(undefined8 *)&this->HandleLayersFunction = 0;
  *(undefined8 *)&(this->HandleLayersFunction).field_0x28 = 0;
  this->bDoNotResetConfigFile = false;
  this->bCacheOnNextLoad = true;
  this->bIsHierarchicalConfig = param_2;
  this->bIncludeTagNameInBranchName = false;
  this->bIsMakingBinaryConfig = false;
  this->bIsFixingUpAfterBinaryConfig = false;
  this->IniCacheSet = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  this->StagedGlobalConfigCache =
       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  this->StagedPluginConfigCache =
       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
  if (param_4 != (FConfigFile *)0x0) {
    this->ExistingFile = param_4;
    this->bDoNotResetConfigFile = true;
  }
  if ((this->Platform).Data.ArrayNum < 2) {
    ::FString::FString(&local_68,"Windows");
    if (pFVar5 != &local_68) {
      pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar5->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (this->Platform).Data.ArrayNum = local_68.Data.ArrayNum;
      (this->Platform).Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_58,"Windows");
    if (this_00 != &local_58) {
      pFVar3 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (this_00->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->SavePlatform).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->SavePlatform).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,"Windows");
    if (iVar4 == 0) {
      ::FString::FString(&local_48,"Windows");
      if (this_00 != &local_48) {
        pFVar3 = (this_00->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (this_00->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (this->SavePlatform).Data.ArrayNum = local_48.Data.ArrayNum;
        (this->SavePlatform).Data.ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar4 = (this->Platform).Data.ArrayNum;
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange(this_00,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar6);
    }
  }
  pFVar5 = FPaths::EngineConfigDir(&local_38);
  if (pFVar1 != pFVar5) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->EngineConfigDir).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->EngineConfigDir).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = FPaths::SourceConfigDir(&local_38);
  if (pFVar2 != pFVar5) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ProjectConfigDir).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->ProjectConfigDir).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((this->ConfigSystem != (FConfigCacheIni *)0x0) && (this->ConfigSystem == GConfig)) {
    this->bWriteDestIni = true;
    this->bUseHierarchyCache = true;
    this->bAllowGeneratedIniWhenCooked = true;
    this->bAllowRemoteConfig = true;
  }
  return this;
}

// FConfigContext @ 141854a70

FConfigContext * __thiscall
FConfigContext::FConfigContext(FConfigContext *this,FConfigContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<FString,FConfigContext::FPerPlatformDirs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigContext::FPerPlatformDirs,0>_>
  *this_00;
  TArray<FConfigLayer,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  this->ConfigSystem = param_1->ConfigSystem;
  this->ExistingFile = param_1->ExistingFile;
  this->Branch = param_1->Branch;
  this->TemporaryBranch = param_1->TemporaryBranch;
  ::FString::FString(&this->DestIniFilename,&param_1->DestIniFilename);
  ::FString::FString(&this->Platform,&param_1->Platform);
  ::FString::FString(&this->SavePlatform,&param_1->SavePlatform);
  ::FString::FString(&this->GeneratedConfigDir,&param_1->GeneratedConfigDir);
  ::FString::FString(&this->BaseIniName,&param_1->BaseIniName);
  ::FString::FString(&this->StartSkippingAtFilename,&param_1->StartSkippingAtFilename);
  ::FString::FString(&this->EngineConfigDir,&param_1->EngineConfigDir);
  ::FString::FString(&this->EngineRootDir,&param_1->EngineRootDir);
  ::FString::FString(&this->ProjectConfigDir,&param_1->ProjectConfigDir);
  ::FString::FString(&this->ProjectRootDir,&param_1->ProjectRootDir);
  ::FString::FString(&this->PluginRootDir,&param_1->PluginRootDir);
  pTVar3 = &this->ChildPluginBaseDirs;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ChildPluginBaseDirs).ArrayMax;
  iVar5 = (param_1->ChildPluginBaseDirs).ArrayNum;
  pFVar6 = (param_1->ChildPluginBaseDirs).AllocatorInstance.Data;
  (this->ChildPluginBaseDirs).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<FString,FString,int>((pTVar3->AllocatorInstance).Data,(FString *)pFVar6,iVar5);
  }
  this->ChangeTracker = param_1->ChangeTracker;
  this->ConfigFileTag = param_1->ConfigFileTag;
  ::FString::FString(&this->ProjectLimitedAccessDir,&param_1->ProjectLimitedAccessDir);
  ::FString::FString(&this->ProjectNotForLicenseesDir,&param_1->ProjectNotForLicenseesDir);
  ::FString::FString(&this->ProjectNoRedistDir,&param_1->ProjectNoRedistDir);
  this_00 = &this->PerPlatformDirs;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PerPlatformDirs).field_0x8 = 0;
  *(undefined8 *)&(this->PerPlatformDirs).field_0x20 = 0;
  puVar2 = &(this->PerPlatformDirs).field_0x48;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x28 = 0;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerPlatformDirs).field_0x34 = 0;
  *(undefined8 *)&(this->PerPlatformDirs).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_00 != &param_1->PerPlatformDirs) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->PerPlatformDirs).field_0x38,(int *)puVar2,
               (ForElementType<FSetElementId> *)&(param_1->PerPlatformDirs).field_0x38,
               *(int *)&(param_1->PerPlatformDirs).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigContext::FPerPlatformDirs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FConfigContext::FPerPlatformDirs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FString,FConfigContext::FPerPlatformDirs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->PerPlatformDirs);
  }
  pTVar4 = &this->OverrideLayers;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OverrideLayers).ArrayMax;
  iVar5 = (param_1->OverrideLayers).ArrayNum;
  pFVar6 = (param_1->OverrideLayers).AllocatorInstance.Data;
  (this->OverrideLayers).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  this->bUseHierarchyCache = param_1->bUseHierarchyCache;
  this->bAllowGeneratedIniWhenCooked = param_1->bAllowGeneratedIniWhenCooked;
  this->bForceReload = param_1->bForceReload;
  this->bAllowRemoteConfig = param_1->bAllowRemoteConfig;
  this->bIsHierarchicalConfig = param_1->bIsHierarchicalConfig;
  this->bWriteDestIni = param_1->bWriteDestIni;
  this->bDefaultEngineRequired = param_1->bDefaultEngineRequired;
  this->bIsForPlugin = param_1->bIsForPlugin;
  this->bIsForPluginModification = param_1->bIsForPluginModification;
  this->bIncludeTagNameInBranchName = param_1->bIncludeTagNameInBranchName;
  this->bIsMakingBinaryConfig = param_1->bIsMakingBinaryConfig;
  this->bIsFixingUpAfterBinaryConfig = param_1->bIsFixingUpAfterBinaryConfig;
  this->PluginModificationPriority = param_1->PluginModificationPriority;
  this->IniCacheSet = param_1->IniCacheSet;
  this->StagedGlobalConfigCache = param_1->StagedGlobalConfigCache;
  this->StagedPluginConfigCache = param_1->StagedPluginConfigCache;
  lVar7 = *(longlong *)&param_1->HandleLayersFunction;
  *(longlong *)&this->HandleLayersFunction = lVar7;
  *(undefined8 *)&(this->HandleLayersFunction).field_0x28 = 0;
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)&(param_1->HandleLayersFunction).field_0x28;
    puVar9 = (undefined8 *)&(param_1->HandleLayersFunction).field_0x10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = puVar8;
    }
    (**(code **)*puVar9)();
  }
  this->bDoNotResetConfigFile = param_1->bDoNotResetConfigFile;
  this->bCacheOnNextLoad = param_1->bCacheOnNextLoad;
  return this;
}

// ~FConfigContext @ 1418572c0

void __thiscall FConfigContext::~FConfigContext(FConfigContext *this)

{
  FConfigBranch *this_00;
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this_00 = this->TemporaryBranch;
  if (this_00 != (FConfigBranch *)0x0) {
    FConfigBranch::~FConfigBranch(this_00);
    ::operator_delete(this_00,0x628);
  }
  if (*(longlong *)&this->HandleLayersFunction != 0) {
    plVar1 = *(longlong **)&(this->HandleLayersFunction).field_0x28;
    plVar4 = (longlong *)&(this->HandleLayersFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->OverrideLayers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PerPlatformDirs).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerPlatformDirs).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigContext::FPerPlatformDirs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigContext::FPerPlatformDirs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigContext::FPerPlatformDirs>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerPlatformDirs);
  pFVar2 = (this->ProjectNoRedistDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProjectNotForLicenseesDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProjectLimitedAccessDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->ChildPluginBaseDirs).AllocatorInstance.Data,
             (this->ChildPluginBaseDirs).ArrayNum);
  pFVar2 = (this->ChildPluginBaseDirs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PluginRootDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProjectRootDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProjectConfigDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EngineRootDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EngineConfigDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StartSkippingAtFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BaseIniName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GeneratedConfigDir).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SavePlatform).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DestIniFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddStaticLayersToHierarchy @ 141860a80

/* WARNING: Removing unreachable block (ram,0x0001418614e6) */
/* WARNING: Removing unreachable block (ram,0x0001418611f8) */

void __thiscall
FConfigContext::AddStaticLayersToHierarchy
          (FConfigContext *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  EConfigLayerFlags EVar1;
  void *_Src;
  code *pcVar2;
  FDataDrivenPlatformInfo *pFVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  size_t sVar10;
  wchar_t *pwVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FConfigLayer *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  FConfigLayerExpansion *pFVar18;
  int iVar19;
  uint uVar20;
  FConfigLayer *pFVar21;
  EConfigExpansionFlags local_res8;
  FString local_148;
  uint local_138;
  int local_134;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  uint local_f0;
  int local_ec;
  FConfigLayerExpansion *local_e8;
  FConfigLayer *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  int local_a8;
  FConfigLayer *local_a0;
  longlong local_98;
  longlong local_90;
  FDataDrivenPlatformInfo *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  iVar19 = (this->EngineConfigDir).Data.ArrayNum;
  iVar7 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            (&this->Branch->SourceEngineConfigDir,
             (wchar_t *)(this->EngineConfigDir).Data.AllocatorInstance.Data,iVar7);
  iVar19 = (this->ProjectConfigDir).Data.ArrayNum;
  iVar7 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            (&this->Branch->SourceProjectConfigDir,
             (wchar_t *)(this->ProjectConfigDir).Data.AllocatorInstance.Data,iVar7);
  ::FString::FString(&local_60,L"");
  pFVar8 = FConfigCacheIni::GetCustomConfigString();
  local_e0 = GConfigLayers;
  local_res8 = ForCooked;
  iVar19 = (pFVar8->Data).ArrayNum;
  iVar7 = 0xe;
  if (this->bIsForPlugin != false) {
    local_res8 = ForPlugin;
    if (this->bIsForPluginModification == false) {
      local_e0 = GPluginLayers;
      iVar7 = 6;
    }
    else {
      local_e0 = GPluginModificationLayers;
      iVar7 = 2;
    }
  }
  iVar12 = (this->OverrideLayers).ArrayNum;
  if (0 < iVar12) {
    local_e0 = (FConfigLayer *)(this->OverrideLayers).AllocatorInstance.Data;
    iVar7 = iVar12;
  }
  local_134 = 0;
  local_ec = iVar19;
  if (0 < iVar7) {
    lVar9 = (longlong)iVar7;
    local_90 = 0;
    pFVar14 = local_e0;
    local_98 = lVar9;
    do {
      iVar7 = local_134;
      uVar17 = 0;
      pFVar21 = pFVar14 + local_90;
      EVar1 = pFVar14[local_90].Flag;
      local_a0 = pFVar21;
      if (((EVar1 & RequiresCustomConfig) == None) || (1 < iVar19)) {
        if ((EVar1 & UseGlobalConfigCache) == None) {
          if ((EVar1 & UsePluginConfigCache) != None) {
            uVar17 = 2;
          }
        }
        else {
          uVar17 = 1;
        }
        if (pFVar21->bHasCheckedExist != '\0') {
          if (pFVar21->bExists == '\0') goto LAB_141861633;
          uVar17 = uVar17 | 4;
        }
        if ((this->BaseIniName).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_70,pFVar21->Path);
        PerformBasicReplacements(&local_120,&local_70,pwVar11);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        local_a8 = ::FString::Find(&local_120,L"{PLATFORM}",10,IgnoreCase,FromStart,-1);
        bVar4 = ::FString::StartsWith(&local_120,L"{ENGINE}",8,IgnoreCase);
        if ((bVar4) || (bVar5 = ::FString::StartsWith(&local_120,L"{PROJECT}",9,IgnoreCase), !bVar5)
           ) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((this->bIsForPlugin != false) && (!bVar4)) && (!bVar5)) {
          ::FString::StartsWith(&local_120,L"{PLUGIN}",8,IgnoreCase);
        }
        if ((pFVar21->Flag & NoExpand) != None) {
          PerformFinalExpansions(this,&local_100,&local_120,&this->Platform);
          iVar19 = (this->StartSkippingAtFilename).Data.ArrayNum;
          iVar12 = local_100.Data.ArrayNum;
          if (iVar12 == iVar19) {
            if (1 < iVar12) {
              iVar19 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_100.Data.AllocatorInstance.Data,
                                  (wchar_t *)
                                  (this->StartSkippingAtFilename).Data.AllocatorInstance.Data);
              bVar4 = iVar19 == 0;
              goto LAB_1418613e1;
            }
          }
          else {
            bVar4 = iVar19 + iVar12 == 1;
LAB_1418613e1:
            if (!bVar4) {
              if (param_1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
                FConfigFileHierarchy::AddStaticLayer
                          (&this->Branch->Hierarchy,&local_100,iVar7,0,0,uVar17);
              }
              else if (param_2) {
                ::FString::PrintfImpl(&local_c8,L"%s: %s");
                pFVar13 = (param_1->AllocatorInstance).Data;
                if (((pFVar13 <= (FScriptContainerElement *)&local_c8) &&
                    ((FScriptContainerElement *)&local_c8 <
                     pFVar13 + (longlong)param_1->ArrayMax * 0x10)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar19 = param_1->ArrayNum;
                if (iVar19 == param_1->ArrayMax) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar19 + 1;
                pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
                *(undefined8 *)pFVar13 = 0;
                *(FScriptContainerElement **)pFVar13 = local_c8.Data.AllocatorInstance.Data;
                local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar13 + 8) = local_c8.Data.ArrayNum;
                *(int *)(pFVar13 + 0xc) = local_c8.Data.ArrayMax;
                local_c8.Data.ArrayNum = 0;
                local_c8.Data.ArrayMax = 0;
              }
              else {
                pFVar13 = (param_1->AllocatorInstance).Data;
                if (((pFVar13 <= (FScriptContainerElement *)&local_100) &&
                    ((FScriptContainerElement *)&local_100 <
                     pFVar13 + (longlong)param_1->ArrayMax * 0x10)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar19 = param_1->ArrayNum;
                if (iVar19 == param_1->ArrayMax) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                FVar15.Data = local_100.Data.AllocatorInstance.Data;
                pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
                param_1->ArrayNum = iVar19 + 1;
                *(undefined8 *)&pFVar13->field_0x0 = 0;
                iVar19 = local_100.Data.ArrayNum;
                *(int *)&pFVar13[8].field_0x0 = iVar19;
                if (iVar19 == 0) {
                  *(int *)(pFVar13 + 0xc) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar19,0,(ForAnyElementType *)pFVar13,iVar19,(int *)(pFVar13 + 0xc)
                            );
                  memcpy(*(void **)&pFVar13->field_0x0,FVar15.Data,(longlong)iVar19 * 2);
                }
              }
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              goto LAB_141861609;
            }
          }
LAB_141861679:
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          break;
        }
        local_e8 = GConfigExpansions;
        local_138 = 0;
        do {
          pFVar18 = local_e8;
          FVar15.Data = local_120.Data.AllocatorInstance.Data;
          uVar16 = local_138;
          if ((local_e8->Flags & local_res8) != None) {
            pwVar11 = local_e8->Before1;
            if (pwVar11 == (wchar_t *)0x0) {
              local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.Data.ArrayNum = local_120.Data.ArrayNum;
              lVar9 = (longlong)local_148.Data.ArrayNum;
              if (local_148.Data.ArrayNum == 0) {
                local_148.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
                           local_148.Data.ArrayNum,&local_148.Data.ArrayMax);
                memcpy(local_148.Data.AllocatorInstance.Data,FVar15.Data,lVar9 * 2);
                pFVar18 = local_e8;
              }
            }
            else {
              sVar10 = wcslen(pwVar11);
              iVar19 = ::FString::Find(&local_120,pwVar11,(int)sVar10,IgnoreCase,FromStart,-1);
              if (iVar19 == -1) {
                pwVar11 = pFVar18->Before2;
                if (pwVar11 != (wchar_t *)0x0) {
                  sVar10 = wcslen(pwVar11);
                  iVar19 = ::FString::Find(&local_120,pwVar11,(int)sVar10,IgnoreCase,FromStart,-1);
                  if (iVar19 != -1) goto LAB_141860e39;
                }
                ::FString::FString(&local_148,L"");
              }
              else {
LAB_141860e39:
                ::FString::Replace(&local_120,&local_110,pFVar18->Before1,pFVar18->After1,
                                   CaseSensitive);
                if (pFVar18->Before2 != (wchar_t *)0x0) {
                  pFVar8 = ::FString::Replace(&local_110,&local_50,pFVar18->Before2,pFVar18->After2,
                                              CaseSensitive);
                  if (&local_110 != pFVar8) {
                    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_110.Data.AllocatorInstance.Data);
                    }
                    local_110.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
                    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_110.Data.ArrayNum = (pFVar8->Data).ArrayNum;
                    local_110.Data.ArrayMax = (pFVar8->Data).ArrayMax;
                    (pFVar8->Data).ArrayNum = 0;
                    (pFVar8->Data).ArrayMax = 0;
                  }
                  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_50.Data.AllocatorInstance.Data);
                  }
                }
                local_148.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
                local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_148.Data.ArrayNum = local_110.Data.ArrayNum;
                local_148.Data.ArrayMax = local_110.Data.ArrayMax;
                local_110.Data.ArrayNum = 0;
                local_110.Data.ArrayMax = 0;
              }
            }
            iVar19 = local_148.Data.ArrayNum + -1;
            if (local_148.Data.ArrayNum == 0) {
              iVar19 = 0;
            }
            if (iVar19 == 0) {
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
            }
            else {
              if (((pFVar21->Flag & AllowCommandLineOverride) != None) && (uVar16 == 0)) {
                ::FString::PrintfImpl(&local_80,L"DEF%sINI=");
                FVar15.Data = (FScriptContainerElement *)L"";
                if (local_80.Data.ArrayNum != 0) {
                  FVar15.Data = local_80.Data.AllocatorInstance.Data;
                }
                pwVar11 = FCommandLine::Get();
                FParse::Value(pwVar11,(wchar_t *)FVar15.Data,&local_148,true,(wchar_t **)0x0);
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
              }
              local_88 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(&this->Platform);
              uVar20 = 0;
              if (local_a8 == -1) {
                iVar19 = 1;
                local_f0 = 0;
                uVar20 = 0;
LAB_141860fb0:
                do {
                  pFVar3 = local_88;
                  pFVar13 = (FScriptContainerElement *)&this->Platform;
                  if (uVar20 == 0xffffffff) {
                    pFVar13 = (FScriptContainerElement *)&local_60;
                  }
                  else if (uVar20 != local_f0) {
                    uVar6 = 0;
                    if ((int)uVar20 < (local_88->IniParentChain).ArrayNum) {
                      uVar6 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar6 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pFVar13 = (pFVar3->IniParentChain).AllocatorInstance.Data +
                              (longlong)(int)uVar20 * 0x10;
                  }
                  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_b8.Data.ArrayNum = *(int *)(pFVar13 + 8);
                  lVar9 = (longlong)local_b8.Data.ArrayNum;
                  _Src = *(void **)&pFVar13->field_0x0;
                  if (local_b8.Data.ArrayNum == 0) {
                    local_b8.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                               local_b8.Data.ArrayNum,&local_b8.Data.ArrayMax);
                    memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
                  }
                  PerformFinalExpansions(this,&local_130,&local_148,&local_b8);
                  iVar7 = (this->StartSkippingAtFilename).Data.ArrayNum;
                  if (local_130.Data.ArrayNum == iVar7) {
                    if (1 < local_130.Data.ArrayNum) {
                      iVar7 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)local_130.Data.AllocatorInstance.Data,
                                         (wchar_t *)
                                         (this->StartSkippingAtFilename).Data.AllocatorInstance.Data
                                        );
                      bVar4 = iVar7 == 0;
                      goto LAB_1418610ba;
                    }
LAB_141861651:
                    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_130.Data.AllocatorInstance.Data);
                    }
                    local_100.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
                    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                      local_100.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
                    }
                    goto LAB_141861679;
                  }
                  bVar4 = local_130.Data.ArrayNum + iVar7 == 1;
LAB_1418610ba:
                  if (bVar4) goto LAB_141861651;
                  bVar4 = ::FString::StartsWith(&local_130,L"<skip>",6,IgnoreCase);
                  if (!bVar4) {
                    if (param_1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
                      FConfigFileHierarchy::AddStaticLayer
                                (&this->Branch->Hierarchy,&local_130,local_134,uVar16,uVar20,uVar17)
                      ;
                    }
                    else if (param_2) {
                      ::FString::PrintfImpl(&local_d8,L"%s[Exp-%d]: %s");
                      pFVar13 = (param_1->AllocatorInstance).Data;
                      if (((pFVar13 <= (FScriptContainerElement *)&local_d8) &&
                          ((FScriptContainerElement *)&local_d8 <
                           pFVar13 + (longlong)param_1->ArrayMax * 0x10)) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar4)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar7 = param_1->ArrayNum;
                      if (iVar7 == param_1->ArrayMax) {
                        iVar7 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
                      }
                      param_1->ArrayNum = iVar7 + 1;
                      pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
                      *(undefined8 *)pFVar13 = 0;
                      *(FScriptContainerElement **)pFVar13 = local_d8.Data.AllocatorInstance.Data;
                      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      *(int *)(pFVar13 + 8) = local_d8.Data.ArrayNum;
                      *(int *)(pFVar13 + 0xc) = local_d8.Data.ArrayMax;
                      local_d8.Data.ArrayNum = 0;
                      local_d8.Data.ArrayMax = 0;
                    }
                    else {
                      pFVar13 = (param_1->AllocatorInstance).Data;
                      if (((pFVar13 <= (FScriptContainerElement *)&local_130) &&
                          ((FScriptContainerElement *)&local_130 <
                           pFVar13 + (longlong)param_1->ArrayMax * 0x10)) &&
                         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar4)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar7 = param_1->ArrayNum;
                      if (iVar7 == param_1->ArrayMax) {
                        iVar7 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
                      }
                      iVar12 = local_130.Data.ArrayNum;
                      FVar15.Data = local_130.Data.AllocatorInstance.Data;
                      pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
                      param_1->ArrayNum = iVar7 + 1;
                      *(undefined8 *)&pFVar13->field_0x0 = 0;
                      *(int *)&pFVar13[8].field_0x0 = local_130.Data.ArrayNum;
                      if (local_130.Data.ArrayNum == 0) {
                        *(int *)(pFVar13 + 0xc) = 0;
                        uVar16 = local_138;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,
                                   local_130.Data.ArrayNum,(int *)(pFVar13 + 0xc));
                        memcpy(*(void **)&pFVar13->field_0x0,FVar15.Data,(longlong)iVar12 * 2);
                        uVar16 = local_138;
                      }
                    }
                  }
                  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_130.Data.AllocatorInstance.Data);
                  }
                  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                  }
                  uVar20 = uVar20 + 1;
                } while ((int)uVar20 < iVar19);
              }
              else {
                local_f0 = (local_88->IniParentChain).ArrayNum;
                iVar19 = local_f0 + 1;
                if (0 < iVar19) goto LAB_141860fb0;
              }
              pFVar18 = local_e8;
              pFVar21 = local_a0;
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
                pFVar18 = local_e8;
                pFVar21 = local_a0;
              }
            }
          }
          local_138 = uVar16 + 1;
          local_e8 = pFVar18 + 1;
          iVar7 = local_134;
        } while (local_138 < 9);
LAB_141861609:
        lVar9 = local_98;
        pFVar14 = local_e0;
        iVar19 = local_ec;
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
          lVar9 = local_98;
          pFVar14 = local_e0;
          iVar19 = local_ec;
        }
      }
LAB_141861633:
      local_134 = iVar7 + 1;
      local_90 = local_90 + 1;
    } while (local_90 < lVar9);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// CachePaths @ 141864750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConfigContext::CachePaths(FConfigContext *this)

{
  int *piVar1;
  FString *pFVar2;
  TArray<FConfigLayer,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  FConfigLayer *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  TTuple<FName,FConfigCacheIni::FPluginInfo_*> *pTVar12;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar13;
  FString *pFVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FName FVar20;
  FConfigLayer *pFVar21;
  longlong lVar22;
  undefined1 auStackY_248 [32];
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FName local_178;
  FString local_170;
  TStringView<wchar_t> local_160;
  wchar_t *local_150;
  undefined4 local_148;
  TStringView<wchar_t> local_140;
  wchar_t *local_130;
  undefined4 local_128;
  TStringView<wchar_t> local_120;
  wchar_t *local_110;
  undefined4 local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TStringView<wchar_t> local_c0;
  wchar_t *local_b0;
  undefined4 local_a8;
  FScriptContainerElement *local_a0;
  int local_98;
  TStringView<wchar_t> local_90;
  wchar_t *local_80;
  undefined4 local_78;
  FScriptContainerElement *local_70;
  int local_68;
  TStringView<wchar_t> local_60;
  wchar_t *local_50;
  undefined4 local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_178.ComparisonIndex.Value = 0;
  if (this->bIsHierarchicalConfig != false) {
    if (this->ConfigSystem != (FConfigCacheIni *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&FConfigCacheIni::RegisteredPluginsLock);
      FVar20 = this->ConfigFileTag;
      if (FVar20 == (FName)0x0) {
        if ((this->BaseIniName).Data.ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
        }
        pFVar11 = ::FName::FName(&local_178,pwVar16);
        FVar20 = *pFVar11;
      }
      pTVar12 = TSet<TTuple<FName,FConfigCacheIni::FPluginInfo_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni::FPluginInfo_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FConfigCacheIni::FPluginInfo_*>,TDefaultMapHashableKeyFuncs<FName,FConfigCacheIni::FPluginInfo_*,0>,FDefaultSetAllocator>
                        *)&FConfigCacheIni::RegisteredPlugins,FVar20);
      if ((pTVar12 != (TTuple<FName,FConfigCacheIni::FPluginInfo_*> *)0x0) &&
         (puVar4 = *(undefined8 **)&pTVar12->field_0x8, puVar4 != (undefined8 *)0x0)) {
        this->bIsForPlugin = true;
        iVar10 = *(int *)(puVar4 + 1) + -1;
        if (*(int *)(puVar4 + 1) == 0) {
          iVar10 = 0;
        }
        ::FString::AssignRange(&this->PluginRootDir,(wchar_t *)*puVar4,iVar10);
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  (&this->ChildPluginBaseDirs,
                   (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar4 + 2));
        pTVar13 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                  ::Find((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                          *)&this->ConfigSystem->StagedPluginConfigCache,FVar20);
        this->StagedPluginConfigCache = pTVar13;
      }
      this->StagedGlobalConfigCache = this->ConfigSystem->StagedGlobalConfigCache;
      LeaveCriticalSection((LPCRITICAL_SECTION)&FConfigCacheIni::RegisteredPluginsLock);
    }
    bVar9 = ::FString::EndsWith(&this->EngineConfigDir,L"Config/",7,IgnoreCase);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("EngineConfigDir.EndsWith(L\"Config/\")",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
                           ,0x71,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = (this->ProjectConfigDir).Data.ArrayNum;
    iVar18 = 0;
    iVar17 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar17 = iVar18;
    }
    if (((iVar17 != 0) &&
        (bVar9 = ::FString::EndsWith(&this->ProjectConfigDir,L"Config/",7,IgnoreCase), !bVar9)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProjectConfigDir.Len() == 0 || ProjectConfigDir.EndsWith(L\"Config/\")",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
                           ,0x73,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar14 = FPaths::GetPath(&local_f0,&this->EngineConfigDir);
    pFVar15 = FPaths::GetPath(&local_100,pFVar14);
    pFVar14 = &this->EngineRootDir;
    if (pFVar14 != pFVar15) {
      pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar14->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->EngineRootDir).Data.ArrayNum = (pFVar15->Data).ArrayNum;
      (this->EngineRootDir).Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    iVar10 = (this->ProjectConfigDir).Data.ArrayNum;
    iVar17 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar17 = iVar18;
    }
    bVar9 = iVar17 < 1;
    if (bVar9) {
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar15 = &local_188;
    }
    else {
      pFVar15 = FPaths::GetPath(&local_d0,&this->ProjectConfigDir);
      pFVar15 = FPaths::GetPath(&local_e0,pFVar15);
    }
    pFVar2 = &this->ProjectRootDir;
    if (pFVar2 != pFVar15) {
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ProjectRootDir).Data.ArrayNum = (pFVar15->Data).ArrayNum;
      (this->ProjectRootDir).Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if ((bVar9) && (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if ((!bVar9) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if ((!bVar9) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    bVar9 = FPaths::IsUnderDirectory(pFVar2,pFVar14);
    iVar10 = 0;
    if (bVar9) {
      local_1f8.Data.ArrayNum = (this->ProjectRootDir).Data.ArrayNum;
      lVar22 = (longlong)local_1f8.Data.ArrayNum;
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1f8.Data.ArrayNum == 0) {
        local_1f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8,
                   local_1f8.Data.ArrayNum,&local_1f8.Data.ArrayMax);
        memcpy(local_1f8.Data.AllocatorInstance.Data,pFVar5,lVar22 * 2);
      }
      ::FString::ConcatFC(&local_170,pFVar14,L"/");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_170.Data.ArrayNum != 0) {
        FVar19.Data = local_170.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_1f8,(wchar_t *)FVar19.Data);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      local_c0.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      iVar17 = (this->EngineRootDir).Data.ArrayNum;
      local_a8 = 0x1a;
      local_c0.Size = iVar17 + -1;
      if (iVar17 == 0) {
        local_c0.Size = iVar18;
      }
      local_b0 = L"Restricted/NotForLicensees";
      local_a0 = local_1f8.Data.AllocatorInstance.Data;
      local_98 = local_1f8.Data.ArrayNum + -1;
      if (local_1f8.Data.ArrayNum == 0) {
        local_98 = iVar18;
      }
      FPaths::CombineInternal(&local_1e8,&local_c0,3);
      pFVar15 = &this->ProjectNotForLicenseesDir;
      if (pFVar15 != &local_1e8) {
        pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar15->Data).AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
        (this->ProjectNotForLicenseesDir).Data.ArrayNum = local_1e8.Data.ArrayNum;
        (this->ProjectNotForLicenseesDir).Data.ArrayMax = local_1e8.Data.ArrayMax;
        local_1e8.Data.ArrayNum = 0;
        local_1e8.Data.ArrayMax = 0;
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      local_90.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      iVar17 = (this->EngineRootDir).Data.ArrayNum;
      local_78 = 0x13;
      local_90.Size = iVar17 + -1;
      if (iVar17 == 0) {
        local_90.Size = iVar18;
      }
      local_80 = L"Restricted/NoRedist";
      local_70 = local_1f8.Data.AllocatorInstance.Data;
      local_68 = local_1f8.Data.ArrayNum + -1;
      if (local_1f8.Data.ArrayNum == 0) {
        local_68 = iVar18;
      }
      FPaths::CombineInternal(&local_1d8,&local_90,3);
      pFVar15 = &this->ProjectNoRedistDir;
      if (pFVar15 != &local_1d8) {
        pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar15->Data).AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
        (this->ProjectNoRedistDir).Data.ArrayNum = local_1d8.Data.ArrayNum;
        (this->ProjectNoRedistDir).Data.ArrayMax = local_1d8.Data.ArrayMax;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      local_60.DataPtr = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      iVar17 = (this->EngineRootDir).Data.ArrayNum;
      local_48 = 0x18;
      local_60.Size = iVar17 + -1;
      if (iVar17 == 0) {
        local_60.Size = iVar18;
      }
      local_50 = L"Restricted/LimitedAccess";
      local_40 = local_1f8.Data.AllocatorInstance.Data;
      local_38 = local_1f8.Data.ArrayNum + -1;
      if (local_1f8.Data.ArrayNum == 0) {
        local_38 = iVar18;
      }
      FPaths::CombineInternal(&local_1c8,&local_60,3);
      pFVar14 = &this->ProjectLimitedAccessDir;
      if (pFVar14 != &local_1c8) {
        pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar14->Data).AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
        (this->ProjectLimitedAccessDir).Data.ArrayNum = local_1c8.Data.ArrayNum;
        (this->ProjectLimitedAccessDir).Data.ArrayMax = local_1c8.Data.ArrayMax;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FVar19.Data = local_1f8.Data.AllocatorInstance.Data;
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        FVar19.Data = local_1f8.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_160.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      iVar17 = (this->ProjectRootDir).Data.ArrayNum;
      local_148 = 0x1a;
      local_160.Size = iVar17 + -1;
      if (iVar17 == 0) {
        local_160.Size = iVar10;
      }
      local_150 = L"Restricted/NotForLicensees";
      FPaths::CombineInternal(&local_1b8,&local_160,2);
      pFVar14 = &this->ProjectNotForLicenseesDir;
      if (pFVar14 != &local_1b8) {
        pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar14->Data).AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        (this->ProjectNotForLicenseesDir).Data.ArrayNum = local_1b8.Data.ArrayNum;
        (this->ProjectNotForLicenseesDir).Data.ArrayMax = local_1b8.Data.ArrayMax;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      local_140.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      iVar17 = (this->ProjectRootDir).Data.ArrayNum;
      local_128 = 0x13;
      local_140.Size = iVar17 + -1;
      if (iVar17 == 0) {
        local_140.Size = iVar10;
      }
      local_130 = L"Restricted/NoRedist";
      FPaths::CombineInternal(&local_1a8,&local_140,2);
      pFVar14 = &this->ProjectNoRedistDir;
      if (pFVar14 != &local_1a8) {
        pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar14->Data).AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
        (this->ProjectNoRedistDir).Data.ArrayNum = local_1a8.Data.ArrayNum;
        (this->ProjectNoRedistDir).Data.ArrayMax = local_1a8.Data.ArrayMax;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      local_120.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      iVar17 = (this->ProjectRootDir).Data.ArrayNum;
      local_108 = 0x18;
      local_120.Size = iVar17 + -1;
      if (iVar17 == 0) {
        local_120.Size = iVar10;
      }
      local_110 = L"Restricted/LimitedAccess";
      FPaths::CombineInternal(&local_198,&local_120,2);
      pFVar14 = &this->ProjectLimitedAccessDir;
      FVar19.Data = local_198.Data.AllocatorInstance.Data;
      if (pFVar14 != &local_198) {
        pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar14->Data).AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
        (this->ProjectLimitedAccessDir).Data.ArrayNum = local_198.Data.ArrayNum;
        (this->ProjectLimitedAccessDir).Data.ArrayMax = local_198.Data.ArrayMax;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar19.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (FVar19.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar19.Data);
    }
    iVar17 = (this->ProjectConfigDir).Data.ArrayNum;
    iVar18 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar18 = iVar10;
    }
    if ((iVar18 == 0) && ((this->OverrideLayers).ArrayNum == 0)) {
      pFVar21 = GConfigLayers;
      do {
        pwVar16 = wcsstr(pFVar21->Path,L"{PROJECT}");
        if (pwVar16 == (wchar_t *)0x0) {
          pTVar3 = &this->OverrideLayers;
          pFVar6 = (FConfigLayer *)(pTVar3->AllocatorInstance).Data;
          if (((pFVar6 <= pFVar21) && (pFVar21 < pFVar6 + (this->OverrideLayers).ArrayMax)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = (this->OverrideLayers).ArrayNum;
          piVar1 = &(this->OverrideLayers).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->OverrideLayers).ArrayNum = iVar10 + 1;
          pwVar16 = pFVar21->Path;
          pFVar7 = (pTVar3->AllocatorInstance).Data;
          pFVar5 = pFVar7 + (longlong)iVar10 * 0x18;
          *(wchar_t **)pFVar5 = pFVar21->EditorName;
          *(wchar_t **)(pFVar5 + 8) = pwVar16;
          *(undefined8 *)(pFVar7 + (longlong)iVar10 * 0x18 + 0x10) = *(undefined8 *)&pFVar21->Flag;
        }
        pFVar21 = pFVar21 + 1;
      } while (pFVar21 != GPluginLayers);
    }
  }
  return;
}

// EnsureRequiredGlobalPathsHaveBeenInitialized @ 14186c750

void __cdecl FConfigContext::EnsureRequiredGlobalPathsHaveBeenInitialized(void)

{
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"");
  PerformBasicReplacements(&local_18,&local_28,L"");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateDestIniFile @ 141871510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConfigContext::GenerateDestIniFile(FConfigContext *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  FConfigBranch *pFVar5;
  FName FVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FConfigCommandStreamSection *this_00;
  FName *pFVar16;
  FConfigValue *pFVar17;
  FString *pFVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  FConfigExpansion *pFVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  longlong *plVar25;
  FConfigCommandStream *pFVar26;
  TMap<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
  *this_01;
  FConfigFile *pFVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  wchar_t *pwVar30;
  undefined1 auStackY_188 [32];
  FString local_158;
  undefined1 local_148 [4];
  int local_144;
  int local_140 [2];
  FName local_138;
  FName local_130;
  undefined1 local_128 [21];
  bool bStack_113;
  undefined2 uStack_112;
  int iStack_110;
  undefined4 uStack_10c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c8;
  FScriptContainerElement *pFStack_c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  FString local_98;
  undefined1 local_88 [32];
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->bIsFixingUpAfterBinaryConfig == false) {
    FConfigFile::Cleanup(&this->Branch->InMemoryFile);
    FConfigFile::Cleanup(&this->Branch->CombinedStaticLayers);
    pFVar5 = this->Branch;
    pFVar26 = &pFVar5->SavedLayer;
    bVar12 = 1 < (int)(pFVar5->SavedLayer)._padding_;
    if (!bVar12) {
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                        *)pFVar26);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pFVar26,0,(int)(pFVar5->SavedLayer)._padding_);
    piVar1 = (int *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4);
    *(undefined4 *)&(pFVar5->SavedLayer)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,0,(ForAnyElementType *)pFVar26,0,piVar1);
    }
    *(undefined4 *)&(pFVar5->SavedLayer)._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4) = 0;
    iVar13 = *(int *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4);
    *(undefined4 *)&(pFVar5->SavedLayer)._padding_ = 0;
    if ((iVar13 < 0) || (0x80 < iVar13)) {
      *(undefined4 *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->SavedLayer)._padding_,0);
    }
    if (bVar12) {
      *(undefined4 *)&(pFVar5->SavedLayer)._padding_ = 1;
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                *)pFVar26);
    }
    pFVar5 = this->Branch;
    pFVar26 = &pFVar5->CommandLineOverrides;
    bVar12 = 1 < (int)(pFVar5->CommandLineOverrides)._padding_;
    if (!bVar12) {
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                        *)pFVar26);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pFVar26,0,(int)(pFVar5->CommandLineOverrides)._padding_);
    piVar1 = (int *)((longlong)&(pFVar5->CommandLineOverrides)._padding_ + 4);
    *(undefined4 *)&(pFVar5->CommandLineOverrides)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,0,(ForAnyElementType *)pFVar26,0,piVar1);
    }
    *(undefined4 *)&(pFVar5->CommandLineOverrides)._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&(pFVar5->CommandLineOverrides)._padding_ + 4) = 0;
    iVar13 = *(int *)((longlong)&(pFVar5->CommandLineOverrides)._padding_ + 4);
    *(undefined4 *)&(pFVar5->CommandLineOverrides)._padding_ = 0;
    if ((iVar13 < 0) || (0x80 < iVar13)) {
      *(undefined4 *)((longlong)&(pFVar5->CommandLineOverrides)._padding_ + 4) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->CommandLineOverrides)._padding_,0
                );
    }
    if (bVar12) {
      *(undefined4 *)&(pFVar5->CommandLineOverrides)._padding_ = 1;
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                *)pFVar26);
    }
    pFVar5 = this->Branch;
    this_01 = &pFVar5->StaticLayers;
    bVar12 = 1 < *(int *)&(pFVar5->StaticLayers).field_0x48;
    if (!bVar12) {
      TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
                        *)this_01);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(pFVar5->StaticLayers).field_0x8);
    puVar2 = &(pFVar5->StaticLayers).field_0xc;
    *(undefined4 *)&(pFVar5->StaticLayers).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
    }
    *(undefined4 *)&(pFVar5->StaticLayers).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar5->StaticLayers).field_0x34 = 0;
    iVar13 = *(int *)&(pFVar5->StaticLayers).field_0x2c;
    *(undefined4 *)&(pFVar5->StaticLayers).field_0x28 = 0;
    if ((iVar13 < 0) || (0x80 < iVar13)) {
      *(undefined4 *)&(pFVar5->StaticLayers).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->StaticLayers).field_0x10,0);
    }
    if (bVar12) {
      *(undefined4 *)&(pFVar5->StaticLayers).field_0x48 = 1;
      TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
                *)this_01);
    }
    TDoubleLinkedList<FConfigCommandStream_*>::Empty(&this->Branch->DynamicLayers);
    pFVar5 = this->Branch;
    pFVar27 = &pFVar5->FinalCombinedLayers;
    AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    bVar12 = 1 < (int)(pFVar5->FinalCombinedLayers)._padding_;
    if (!bVar12) {
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)pFVar27);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pFVar27,0,(int)(pFVar5->FinalCombinedLayers)._padding_);
    piVar1 = (int *)((longlong)&(pFVar5->FinalCombinedLayers)._padding_ + 4);
    *(undefined4 *)&(pFVar5->FinalCombinedLayers)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x110,8,0,(ForAnyElementType *)pFVar27,0,piVar1);
    }
    *(undefined4 *)&(pFVar5->FinalCombinedLayers)._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&(pFVar5->FinalCombinedLayers)._padding_ + 4) = 0;
    iVar13 = *(int *)((longlong)&(pFVar5->FinalCombinedLayers)._padding_ + 4);
    *(undefined4 *)&(pFVar5->FinalCombinedLayers)._padding_ = 0;
    if ((iVar13 < 0) || (0x80 < iVar13)) {
      *(undefined4 *)((longlong)&(pFVar5->FinalCombinedLayers)._padding_ + 4) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->FinalCombinedLayers)._padding_,0)
      ;
    }
    if (bVar12) {
      *(undefined4 *)&(pFVar5->FinalCombinedLayers)._padding_ = 1;
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)pFVar27);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    LoadIniFileHierarchy(this);
  }
  pwVar30 = L"";
  if (this->bAllowGeneratedIniWhenCooked != false) {
    iVar13 = (this->DestIniFilename).Data.ArrayNum;
    iVar15 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar15 = 0;
    }
    if (0 < iVar15) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pwVar23 = FCommandLine::Get();
        bDumpIniLoadInfo = FParse::Param(pwVar23,L"dumpiniloads");
        _Init_thread_footer(&::_TSS0);
      }
      if ((3 < (byte)LogConfig._0_1_) && (bDumpIniLoadInfo != false)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      if ((this->DestIniFilename).Data.ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(this->DestIniFilename).Data.AllocatorInstance.Data;
      }
      bVar12 = DoesConfigFileExistWrapper
                         (pwVar23,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                  0x0,
                          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
      if (bVar12) {
        if ((3 < (byte)LogConfig._0_1_) && (bDumpIniLoadInfo != false)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        }
        pFVar5 = this->Branch;
        if ((this->DestIniFilename).Data.ArrayNum == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)(this->DestIniFilename).Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_158,pwVar23);
        FillFileFromDisk<FConfigCommandStream>(&pFVar5->SavedLayer,&local_158,false);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        (this->Branch->SavedLayer).bIsSavedConfigFile = '\x01';
      }
    }
  }
  if (this->ExistingFile == (FConfigFile *)0x0) {
    pFVar5 = this->Branch;
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    lVar21 = (pFVar5->InMemoryFile)._padding_;
    iVar13 = *(int *)((longlong)&(pFVar5->InMemoryFile)._padding_ + 4);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (0 < (int)lVar21 - iVar13) {
      pFVar5 = this->Branch;
      iVar13 = -1;
      bVar12 = false;
      local_144 = -1;
      if (0 < (int)(pFVar5->SavedLayer)._padding_ -
              *(int *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4)) {
        this_00 = TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
                  ::Find((TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
                          *)&pFVar5->SavedLayer,&CurrentIniVersionString);
        if (this_00 != (FConfigCommandStreamSection *)0x0) {
          pwVar23 = L"";
          if (VersionName.Data.ArrayNum != 0) {
            pwVar23 = (wchar_t *)VersionName.Data.AllocatorInstance;
          }
          pFVar16 = ::FName::FName(&local_130,pwVar23);
          pFVar17 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                            *)this_00,*pFVar16);
          if (pFVar17 != (FConfigValue *)0x0) {
            pFVar18 = FConfigValue::GetValue(pFVar17,&local_158);
            if ((pFVar18->Data).ArrayNum == 0) {
              pwVar23 = L"";
            }
            else {
              pwVar23 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            }
            iVar13 = _wtoi(pwVar23);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
          }
        }
        pFVar5 = this->Branch;
        pwVar23 = L"";
        if (VersionName.Data.ArrayNum != 0) {
          pwVar23 = (wchar_t *)VersionName.Data.AllocatorInstance.Data;
        }
        pwVar24 = L"";
        if (CurrentIniVersionString.Data.ArrayNum != 0) {
          pwVar24 = (wchar_t *)CurrentIniVersionString.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_158,pwVar24);
        AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        iVar15 = local_158.Data.ArrayNum + -1;
        FVar28.Data = local_158.Data.AllocatorInstance.Data;
        if (local_158.Data.ArrayNum == 0) {
          iVar15 = 0;
          FVar28.Data = (FScriptContainerElement *)L"";
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,(wchar_t *)FVar28.Data);
        iVar15 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                             *)&pFVar5->CombinedStaticLayers,uVar14,&local_158);
        if (iVar15 == -1) {
          lVar21 = 0;
        }
        else {
          lVar21 = (longlong)iVar15 * 0x110 + (pFVar5->CombinedStaticLayers)._padding_;
        }
        pFVar29 = (FScriptContainerElement *)0x0;
        pFVar22 = (FScriptContainerElement *)(lVar21 + 0x10);
        if (lVar21 == 0) {
          pFVar22 = pFVar29;
        }
        ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        bVar10 = false;
        if (pFVar22 != (FScriptContainerElement *)0x0) {
          pFVar16 = ::FName::FName(&local_130,pwVar23);
          pFVar17 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                            *)pFVar22,*pFVar16);
          if (pFVar17 == (FConfigValue *)0x0) {
            bVar9 = false;
            iVar15 = local_144;
          }
          else {
            pFVar18 = FConfigValue::GetValue(pFVar17,&local_158);
            iVar15 = 0;
            if (&local_98 != pFVar18) {
              pFVar29 = (pFVar18->Data).AllocatorInstance.Data;
              (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar15 = (pFVar18->Data).ArrayNum;
              (pFVar18->Data).ArrayNum = 0;
              (pFVar18->Data).ArrayMax = 0;
            }
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
            pFVar22 = (FScriptContainerElement *)L"";
            if (iVar15 != 0) {
              pFVar22 = pFVar29;
            }
            iVar15 = _wtoi((wchar_t *)pFVar22);
            local_144 = iVar15;
            if (pFVar29 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar29);
            }
            bVar9 = true;
          }
          bVar10 = bVar12;
          if (bVar9) {
            if (iVar13 < iVar15) {
              if (4 < (byte)LogInit._0_1_) {
                FPaths::ConvertRelativePathToFull(&local_158,&this->DestIniFilename);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
              }
              bVar10 = true;
            }
            else if ((iVar15 < iVar13) && (2 < (byte)LogInit._0_1_)) {
              FPaths::ConvertRelativePathToFull(&local_158,&this->DestIniFilename);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        pwVar23 = FCommandLine::Get();
        bVar12 = FParse::Param(pwVar23,L"REGENERATEINIS");
        if (bVar12) {
          pFVar5 = this->Branch;
          pFVar26 = &pFVar5->SavedLayer;
          if ((int)(pFVar5->SavedLayer)._padding_ < 2) {
            TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                              *)pFVar26);
            TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pFVar26,0);
          }
          else {
            TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pFVar26,0);
            *(undefined4 *)&(pFVar5->SavedLayer)._padding_ = 1;
            TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                      *)pFVar26);
          }
        }
        else if (bVar10) {
          local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pwVar24 = L"";
          pwVar23 = L"";
          local_108.ArrayNum = 0;
          local_108.ArrayMax = 0;
          if (PreserveName.Data.ArrayNum != 0) {
            pwVar24 = (wchar_t *)PreserveName.Data.AllocatorInstance;
          }
          if (CurrentIniVersionString.Data.ArrayNum != 0) {
            pwVar23 = (wchar_t *)CurrentIniVersionString.Data.AllocatorInstance;
          }
          FConfigFile::GetArray(&this->Branch->InMemoryFile,pwVar23,pwVar24,&local_108);
          local_88._0_8_ = 0;
          local_88._8_8_ = 0;
          local_68 = 0;
          local_60 = 0;
          local_5c = 0x80;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = (ForElementType<FSetElementId>)0x0;
          local_40 = 0;
          TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
          ::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                    ((TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
                      *)&this->Branch->SavedLayer,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88);
          local_128._8_8_ = local_88 + 0x10;
          local_128._0_8_ = &DAT_100000000;
          local_128._16_4_ = 0xffffffff;
          local_128[0x14] = Set;
          bStack_113 = false;
          uStack_112 = 0;
          iStack_110 = 0;
          if (local_60 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_128);
          }
          TStack_f0.CurrentBitIndex._0_1_ = local_128[0x14];
          TStack_f0.UnvisitedBitMask = local_128._16_4_;
          TStack_f0.CurrentBitIndex._1_1_ = bStack_113;
          TStack_f0.CurrentBitIndex._2_2_ = uStack_112;
          TStack_f0._28_4_ = uStack_10c;
          TStack_f0.BaseBitIndex = iStack_110;
          local_a0 = local_88._8_4_ - local_54;
          pFStack_c0 = (FScriptContainerElement *)local_128._0_8_;
          pTStack_b8 = (TBitArray<FDefaultBitArrayAllocator> *)local_128._8_8_;
          TStack_f0._padding_ = local_128._0_8_;
          uStack_d0 = CONCAT44(uStack_9c,local_a0);
          TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128._8_8_;
          local_f8 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88;
          local_c8 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88;
          uStack_b0 = TStack_f0._16_8_;
          uStack_a8 = TStack_f0._24_8_;
          pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_128,
                               (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),local_60);
          pFStack_c0 = (FScriptContainerElement *)pTVar19->_padding_;
          pTVar7 = pTVar19->Array;
          uVar8._0_4_ = pTVar19->UnvisitedBitMask;
          uVar8._4_4_ = pTVar19->CurrentBitIndex;
          uStack_a8 = *(undefined8 *)&pTVar19->BaseBitIndex;
          pTStack_b8 = pTVar7;
          uStack_b0 = uVar8;
          while( true ) {
            pTVar11 = local_f8;
            if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34
                != (int)uStack_d0) {
              `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
            }
            if (((TStack_f0.CurrentBitIndex == uVar8._4_4_) && (TStack_f0.Array == pTVar7)) &&
               (pTVar11 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88
               )) break;
            pFVar29 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10;
            puVar3 = (undefined8 *)
                     (*(longlong *)&pTVar11->Elements + (longlong)TStack_f0.CurrentBitIndex * 0x18);
            for (FVar28.Data = local_108.AllocatorInstance.Data; FVar28.Data != pFVar29;
                FVar28.Data = FVar28.Data + 0x10) {
              iVar13 = *(int *)(FVar28.Data + 8);
              if (iVar13 == *(int *)(puVar3 + 1)) {
                if (iVar13 < 2) goto LAB_141871e5c;
                iVar13 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)FVar28.Data,(wchar_t *)*puVar3);
                bVar12 = iVar13 == 0;
              }
              else {
                bVar12 = iVar13 + *(int *)(puVar3 + 1) == 1;
              }
              if (bVar12) goto LAB_141871e5c;
            }
            pFVar5 = this->Branch;
            if (*(int *)(puVar3 + 1) == 0) {
              pwVar23 = L"";
            }
            else {
              pwVar23 = (wchar_t *)*puVar3;
            }
            ::FString::FString(&local_158,pwVar23);
            if ((int)(pFVar5->SavedLayer)._padding_ !=
                *(int *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4)) {
              iVar13 = local_158.Data.ArrayNum + -1;
              FVar28.Data = local_158.Data.AllocatorInstance.Data;
              if (local_158.Data.ArrayNum == 0) {
                iVar13 = 0;
                FVar28.Data = (FScriptContainerElement *)L"";
              }
              uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar28.Data);
              TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
              ::RemoveImpl<FString>
                        ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                          *)&pFVar5->SavedLayer,uVar14,&local_158);
            }
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
LAB_141871e5c:
            TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
          }
          pFVar5 = this->Branch;
          pFVar26 = &pFVar5->SavedLayer;
          iVar13 = CurrentIniVersionString.Data.ArrayNum + -1;
          FVar28.Data = CurrentIniVersionString.Data.AllocatorInstance.Data;
          if (CurrentIniVersionString.Data.ArrayNum == 0) {
            iVar13 = 0;
            FVar28.Data = (FScriptContainerElement *)L"";
          }
          uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar28.Data);
          if ((int)(pFVar5->SavedLayer)._padding_ !=
              *(int *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4)) {
            plVar25 = (longlong *)(pFVar5->SavedLayer)._padding_;
            if (plVar25 == (longlong *)0x0) {
              plVar25 = &(pFVar5->SavedLayer)._padding_;
            }
            iVar13 = *(int *)((longlong)plVar25 +
                             (ulonglong)((int)(pFVar5->SavedLayer)._padding_ - 1U & uVar14) * 4);
            iVar15 = CurrentIniVersionString.Data.ArrayNum;
            while (iVar13 != -1) {
              lVar21 = (longlong)iVar13 * 0xb8;
              iVar4 = *(int *)(pFVar26->_padding_ + 8 + lVar21);
              if (iVar4 == iVar15) {
                if (1 < iVar4) {
                  iVar15 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(pFVar26->_padding_ + lVar21),
                                      (wchar_t *)CurrentIniVersionString.Data.AllocatorInstance.Data
                                     );
                  bVar12 = iVar15 == 0;
                  iVar15 = CurrentIniVersionString.Data.ArrayNum;
                  goto LAB_141871f1b;
                }
LAB_141871f33:
                if ((iVar13 != -1) && (lVar21 = pFVar26->_padding_ + lVar21, lVar21 != 0))
                goto LAB_141871f75;
                break;
              }
              bVar12 = iVar4 + iVar15 == 1;
LAB_141871f1b:
              if (bVar12) goto LAB_141871f33;
              iVar13 = *(int *)(pFVar26->_padding_ + 0xb0 + lVar21);
            }
          }
          local_138 = (FName)&CurrentIniVersionString;
          TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                      *)pFVar26,(uint)local_140,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar14,(bool *)&local_138);
          lVar21 = (longlong)local_140[0] * 0xb8 + pFVar26->_padding_;
LAB_141871f75:
          pwVar23 = L"";
          if (VersionName.Data.ArrayNum != 0) {
            pwVar23 = (wchar_t *)VersionName.Data.AllocatorInstance.Data;
          }
          pFVar16 = ::FName::FName(&local_130,pwVar23);
          FVar6 = *pFVar16;
          local_138 = FVar6;
          if (*(int *)(lVar21 + 0x18) != *(int *)(lVar21 + 0x44)) {
            uVar14 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
            TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                                 *)(lVar21 + 0x10),FVar6.Number + uVar14,&local_138);
          }
          pFVar5 = this->Branch;
          pFVar26 = &pFVar5->SavedLayer;
          iVar13 = CurrentIniVersionString.Data.ArrayNum + -1;
          FVar28.Data = CurrentIniVersionString.Data.AllocatorInstance.Data;
          if (CurrentIniVersionString.Data.ArrayNum == 0) {
            iVar13 = 0;
            FVar28.Data = (FScriptContainerElement *)L"";
          }
          uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar28.Data);
          if ((int)(pFVar5->SavedLayer)._padding_ !=
              *(int *)((longlong)&(pFVar5->SavedLayer)._padding_ + 4)) {
            plVar25 = (longlong *)(pFVar5->SavedLayer)._padding_;
            if (plVar25 == (longlong *)0x0) {
              plVar25 = &(pFVar5->SavedLayer)._padding_;
            }
            iVar13 = *(int *)((longlong)plVar25 +
                             (ulonglong)((int)(pFVar5->SavedLayer)._padding_ - 1U & uVar14) * 4);
            iVar15 = CurrentIniVersionString.Data.ArrayNum;
            while (iVar13 != -1) {
              lVar21 = (longlong)iVar13 * 0xb8;
              iVar4 = *(int *)(pFVar26->_padding_ + 8 + lVar21);
              if (iVar4 == iVar15) {
                if (1 < iVar4) {
                  iVar15 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(pFVar26->_padding_ + lVar21),
                                      (wchar_t *)CurrentIniVersionString.Data.AllocatorInstance.Data
                                     );
                  bVar12 = iVar15 == 0;
                  iVar15 = CurrentIniVersionString.Data.ArrayNum;
                  goto LAB_14187205c;
                }
LAB_141872074:
                if ((iVar13 != -1) && (lVar21 = pFVar26->_padding_ + lVar21, lVar21 != 0))
                goto LAB_1418720b6;
                break;
              }
              bVar12 = iVar4 + iVar15 == 1;
LAB_14187205c:
              if (bVar12) goto LAB_141872074;
              iVar13 = *(int *)(pFVar26->_padding_ + 0xb0 + lVar21);
            }
          }
          local_138 = (FName)&CurrentIniVersionString;
          TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                      *)pFVar26,(uint)local_140,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar14,(bool *)&local_138);
          lVar21 = (longlong)local_140[0] * 0xb8 + pFVar26->_padding_;
LAB_1418720b6:
          ::FString::PrintfImpl(&local_158,L"%d");
          iVar13 = local_158.Data.ArrayNum;
          pwVar23 = (wchar_t *)local_158.Data.AllocatorInstance.Data;
          local_128._0_8_ = local_158.Data.AllocatorInstance.Data;
          local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_158.Data.ArrayNum = 0;
          local_158.Data.ArrayMax = 0;
          local_128[0x14] = Set;
          if (iVar13 == 0) {
            local_128._16_4_ = FCrc::StrCrc32<wchar_t>(L"",0);
            pwVar23 = L"";
          }
          else {
            local_128._16_4_ = FCrc::StrCrc32<wchar_t>(pwVar23,0);
          }
          pFVar20 = FindNextExpansion(pwVar23,(wchar_t **)&local_138);
          bStack_113 = pFVar20 != (FConfigExpansion *)0x0;
          if (VersionName.Data.ArrayNum != 0) {
            pwVar30 = (wchar_t *)VersionName.Data.AllocatorInstance;
          }
          ::FName::FName(&local_130,pwVar30);
          TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
          ::Emplace<FName,FConfigValue>
                    ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                      *)(lVar21 + 0x10),&local_130,(FConfigValue *)local_128);
          if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._0_8_);
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          local_40 = 0;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_48);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_88);
          DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum)
          ;
          if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.AllocatorInstance.Data);
          }
        }
      }
      FConfigFile::ApplyFile(&this->Branch->InMemoryFile,&this->Branch->SavedLayer);
      FConfigFile::OverrideFromCommandline(&this->Branch->CommandLineOverrides,&this->BaseIniName);
      FConfigFile::ApplyFile(&this->Branch->FinalCombinedLayers,&this->Branch->CommandLineOverrides)
      ;
      FConfigFile::ApplyFile(&this->Branch->InMemoryFile,&this->Branch->CommandLineOverrides);
    }
  }
  pFVar5 = this->Branch;
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  lVar21 = (pFVar5->InMemoryFile)._padding_;
  iVar13 = *(int *)((longlong)&(pFVar5->InMemoryFile)._padding_ + 4);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)lVar21 - iVar13 < 1) {
    pFVar27 = this->ExistingFile;
    if (pFVar27 != (FConfigFile *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      lVar21 = pFVar27->_padding_;
      iVar13 = *(int *)((longlong)&pFVar27->_padding_ + 4);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (0 < (int)lVar21 - iVar13) goto LAB_141872286;
    }
    bVar12 = false;
  }
  else {
LAB_141872286:
    bVar12 = true;
  }
  return bVar12;
}

// GetPerPlatformDirs @ 141874ff0

/* WARNING: Enum "EPathConversion": Some values do not have unique names */

FPerPlatformDirs * __thiscall
FConfigContext::GetPerPlatformDirs(FConfigContext *this,FString *param_1)

{
  void *_Src;
  ForAnyElementType _Src_00;
  uint uVar1;
  int iVar2;
  FPerPlatformDirs *pFVar3;
  ulonglong uVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  TPairInitializer<FString_const_&,FConfigContext::FPerPlatformDirs_&&> local_res8;
  FString local_88;
  undefined1 local_78 [16];
  FString local_68;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  iVar2 = (param_1->Data).ArrayNum;
  pwVar10 = L"";
  if (iVar2 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar6);
  iVar2 = TSet<TTuple<FString,FConfigContext::FPerPlatformDirs>,TDefaultMapHashableKeyFuncs<FString,FConfigContext::FPerPlatformDirs,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigContext::FPerPlatformDirs>,TDefaultMapHashableKeyFuncs<FString,FConfigContext::FPerPlatformDirs,0>,FDefaultSetAllocator>
                      *)&this->PerPlatformDirs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar8 = *(longlong *)&(this->PerPlatformDirs).field_0x0 + (longlong)iVar2 * 0x48;
    pFVar3 = (FPerPlatformDirs *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      pFVar3 = (FPerPlatformDirs *)0x0;
    }
    if (pFVar3 != (FPerPlatformDirs *)0x0) {
      return pFVar3;
    }
  }
  ::FString::FString(&local_88,L"<skip>");
  if (this->bIsForPlugin != false) {
    local_res8.Value._0_4_ = (this->ChildPluginBaseDirs).ArrayNum;
    uVar4 = (ulonglong)(int)(uint)local_res8.Value;
    this_00 = (this->ChildPluginBaseDirs).AllocatorInstance.Data;
    pFVar9 = this_00 + uVar4 * 0x10;
    do {
      if ((this->ChildPluginBaseDirs).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (this_00 == pFVar9) break;
      ::FString::PrintfImpl((FString *)local_78,L"/%s/");
      if (local_78._8_4_ == 0) {
        pwVar6 = L"";
LAB_141875109:
        sVar5 = wcslen(pwVar6);
        iVar2 = ::FString::Find((FString *)this_00,pwVar6,(int)sVar5,IgnoreCase,FromStart,-1);
      }
      else {
        pwVar6 = (wchar_t *)local_78._0_8_;
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0)
        goto LAB_141875109;
        iVar2 = -1;
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
      if (iVar2 != -1) goto LAB_14187515b;
      uVar4 = (ulonglong)(uint)local_res8.Value;
      this_00 = this_00 + 0x10;
    } while( true );
  }
LAB_1418751c9:
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FPaths::ConvertPath(&local_68,&this->EngineRootDir,Engine_PlatformExtension,pwVar6,(wchar_t *)0x0)
  ;
  if ((this->ProjectRootDir).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->ProjectRootDir).Data.AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FPaths::ConvertPath(&local_58,&this->ProjectRootDir,Project_First,pwVar10,pwVar6);
  _Src_00.Data = local_88.Data.AllocatorInstance.Data;
  lVar8 = (longlong)local_88.Data.ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = local_88.Data.ArrayNum;
  if (local_88.Data.ArrayNum == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,&local_48,local_88.Data.ArrayNum,&local_3c);
    memcpy(local_48.Data,_Src_00.Data,lVar8 * 2);
  }
  local_78._8_8_ = &local_68;
  local_78._0_8_ = param_1;
  TSet<TTuple<FString,FConfigContext::FPerPlatformDirs>,TDefaultMapHashableKeyFuncs<FString,FConfigContext::FPerPlatformDirs,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FConfigContext::FPerPlatformDirs_&&>_>
            ((TSet<TTuple<FString,FConfigContext::FPerPlatformDirs>,TDefaultMapHashableKeyFuncs<FString,FConfigContext::FPerPlatformDirs,0>,FDefaultSetAllocator>
              *)&this->PerPlatformDirs,&local_res8,(bool *)local_78);
  lVar8 = *(longlong *)&(this->PerPlatformDirs).field_0x0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return (FPerPlatformDirs *)(lVar8 + (longlong)(int)local_res8.Key * 0x48 + 0x10);
LAB_14187515b:
  if ((FScriptContainerElement *)&local_88 != this_00) {
    iVar2 = *(int *)(this_00 + 8);
    _Src = *(void **)&this_00->field_0x0;
    local_88.Data.ArrayNum = iVar2;
    if ((iVar2 == 0) && (local_88.Data.ArrayMax == 0)) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,local_88.Data.ArrayMax,(ForAnyElementType *)&local_88,iVar2,
                 &local_88.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  goto LAB_1418751c9;
}

// Load @ 14187b020

bool __thiscall FConfigContext::Load(FConfigContext *this,wchar_t *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = Load(this,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Load @ 14187b060

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConfigContext::Load(FConfigContext *this,wchar_t *param_1,FString *param_2)

{
  FString *this_00;
  FConfigCacheIni *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  FConfigBranch *pFVar6;
  FConfigBranch *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  bool local_res8 [8];
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId206,"FConfigContext::Load",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
               ,0xce);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId206);
  }
  pFVar7 = this->Branch;
  if ((pFVar7 != (FConfigBranch *)0x0) && (pFVar7->bIsSafeUnloaded != false)) {
    pFVar7->bIsSafeUnloaded = false;
    bVar2 = LoadIniFileHierarchy(this);
    goto LAB_14187b3bc;
  }
  pFVar7 = (FConfigBranch *)0x0;
  if (this->ExistingFile != (FConfigFile *)0x0) {
    pFVar6 = this->ExistingFile->Branch;
    this->Branch = pFVar6;
    if ((this->bIsHierarchicalConfig != false) && (pFVar6 == (FConfigBranch *)0x0)) {
      pFVar6 = ::operator_new(0x628);
      if (pFVar6 != (FConfigBranch *)0x0) {
        pFVar7 = FConfigBranch::FConfigBranch(pFVar6);
      }
      this->TemporaryBranch = pFVar7;
      this->Branch = pFVar7;
      pFVar7->ReplayMethod = NoReplay;
      this->TemporaryBranch->bIsHierarchical = true;
    }
  }
  this_00 = &this->BaseIniName;
  if (this->bCacheOnNextLoad == false) {
    if ((this->BaseIniName).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar10,param_1);
    if (iVar4 != 0) goto LAB_14187b173;
  }
  else {
LAB_14187b173:
    if (this->bIncludeTagNameInBranchName == false) {
      ::FString::operator=(this_00,param_1);
      if (this->bDoNotResetConfigFile == false) {
        this->Branch = (FConfigBranch *)0x0;
      }
    }
    else {
      pFVar8 = ::FName::ToString(&this->ConfigFileTag,&local_38);
      ::FString::ConcatFC(&local_58,pFVar8,param_1);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar11.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FString::operator=(this_00,(wchar_t *)FVar11.Data);
      if (this->bDoNotResetConfigFile == false) {
        this->Branch = (FConfigBranch *)0x0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    CachePaths(this);
    this->bCacheOnNextLoad = false;
  }
  if (this->bIsHierarchicalConfig == false) {
    bVar2 = PerformSingleFileLoad(this);
    goto LAB_14187b3bc;
  }
  if (this->bIsForPluginModification != false) {
    this_01 = this->ConfigSystem;
    ::FString::FString(&local_48,param_1);
    pFVar9 = ::FName::FName(&local_res20,param_1);
    pFVar7 = FConfigCacheIni::FindBranch(this_01,*pFVar9,&local_48);
    this->Branch = pFVar7;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (this->Branch == (FConfigBranch *)0x0) {
      if ((this->DestIniFilename).Data.ArrayNum < 2) {
        bVar2 = false;
        goto LAB_14187b3bc;
      }
      if (2 < (byte)LogConfig._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      pFVar7 = FConfigCacheIni::AddNewBranch(this->ConfigSystem,&this->DestIniFilename);
      this->Branch = pFVar7;
    }
  }
  bVar2 = PrepareForLoad(this,local_res8);
  if (!bVar2) {
    bVar2 = false;
    goto LAB_14187b3bc;
  }
  iVar4 = (param_2->Data).ArrayNum;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
LAB_14187b30c:
    if (((this->bWriteDestIni != false) && ((this->DestIniFilename).Data.ArrayNum < 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bWriteDestIni || !DestIniFilename.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
                           ,0x11c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = (this->DestIniFilename).Data.ArrayNum;
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              (param_2,(wchar_t *)(this->DestIniFilename).Data.AllocatorInstance.Data,iVar5);
  }
  else {
    iVar5 = (this->BaseIniName).Data.ArrayNum;
    if (iVar4 == iVar5) {
      if (1 < iVar4) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                           (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data);
        bVar2 = iVar4 == 0;
        goto LAB_14187b305;
      }
    }
    else {
      bVar2 = iVar5 + iVar4 == 1;
LAB_14187b305:
      if (!bVar2) goto LAB_14187b30c;
    }
  }
  bVar2 = true;
  if (local_res8[0] != false) {
    bVar2 = PerformLoad(this);
    if (bVar2) {
      if (((this->ExistingFile != (FConfigFile *)0x0) &&
          (this->TemporaryBranch != (FConfigBranch *)0x0)) &&
         (this->Branch->ReplayMethod != NoReplay)) {
        FConfigFile::operator=(this->ExistingFile,&this->TemporaryBranch->InMemoryFile);
      }
    }
    else if (((this->ConfigSystem != (FConfigCacheIni *)0x0) &&
             (this->ExistingFile == (FConfigFile *)0x0)) &&
            (this->TemporaryBranch == (FConfigBranch *)0x0)) {
      FConfigCacheIni::SafeUnloadBranch(this->ConfigSystem,param_1);
    }
  }
LAB_14187b3bc:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// LoadIniFileHierarchy @ 14187c280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConfigContext::LoadIniFileHierarchy(FConfigContext *this)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FConfigBranch *pFVar4;
  FConfigModificationTracker *pFVar5;
  code *pcVar6;
  FConfigContext *pFVar7;
  FConfigFileHierarchy *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FString *pFVar15;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar16;
  FConfigCommandStream *pFVar17;
  wchar_t *pwVar18;
  byte bVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  FConfigFile *pFVar22;
  uint uVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar26;
  longlong *plVar27;
  int iVar28;
  uint uVar29;
  longlong *plVar30;
  bool bVar31;
  undefined1 auStackY_258 [32];
  undefined1 local_207 [7];
  FString local_200;
  uint local_1f0;
  uint local_1ec;
  int local_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  FConfigFileHierarchy *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  longlong *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  int local_18c;
  FConfigContext *local_188;
  FConfigFileHierarchy *local_180;
  FConfigFileHierarchy *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FString local_148;
  undefined8 local_130;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_108 [24];
  longlong lStack_f0;
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  FConfigBranch *local_68;
  FName local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_38;
  FConfigBranch *pFVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_188 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar18 = FCommandLine::Get();
    bDumpIniLoadInfo = FParse::Param(pwVar18,L"dumpiniloads");
    _Init_thread_footer(&::_TSS0);
  }
  FConfigFile::OverrideFromCommandline(&this->Branch->CommandLineOverrides,&this->BaseIniName);
  pFVar4 = this->Branch;
  uVar12 = (int)(pFVar4->CommandLineOverrides)._padding_ -
           *(int *)((longlong)&(pFVar4->CommandLineOverrides)._padding_ + 4);
  pFVar14 = (FConfigBranch *)(ulonglong)uVar12;
  if ((0 < (int)uVar12) && (pFVar4->ReplayMethod == NoReplay)) {
    if (3 < (byte)LogConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    }
    pFVar14 = this->Branch;
    pFVar14->ReplayMethod = DynamicLayerReplay;
  }
  local_1f0 = (uint)pFVar14 & 0xffffff00;
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1028,"LoadIniFileHierarchy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
               ,0x404);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1028);
  }
  pFVar4 = this->Branch;
  iVar13 = (int)(pFVar4->Hierarchy)._padding_;
  plVar30 = &(pFVar4->Hierarchy)._padding_;
  iStack_1b8 = 0;
  uStack_1b4 = 1;
  local_1a0 = 0;
  local_1c0 = &pFVar4->Hierarchy;
  iStack_1a4 = 0;
  if (iVar13 != 0) {
    plVar27 = (longlong *)(pFVar4->Hierarchy)._padding_;
    if (plVar27 == (longlong *)0x0) {
      plVar27 = plVar30;
    }
    uVar12 = (uint)*plVar27;
    while (uVar12 == 0) {
      lVar20 = (longlong)iStack_1b8;
      local_1a0 = local_1a0 + 0x20;
      iStack_1b8 = iStack_1b8 + 1;
      iStack_1a4 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b8) goto LAB_14187c42e;
      uVar12 = *(uint *)((longlong)plVar27 + lVar20 * 4 + 4);
    }
    uStack_1b4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_190 = (int)lVar20;
    iStack_1a4 = local_1a0 + -1 + local_190;
    if (iVar13 < iStack_1a4) {
      iStack_1a4 = iVar13;
    }
  }
LAB_14187c42e:
  iStack_198 = (int)(pFVar4->Hierarchy)._padding_ -
               *(int *)((longlong)&(pFVar4->Hierarchy)._padding_ + 4);
  uVar12 = (uint)(pFVar4->Hierarchy)._padding_;
  bVar19 = (byte)uVar12 & 0x1f;
  iVar28 = (int)uVar12 >> 5;
  uStack_1e4 = 1 << bVar19;
  uVar29 = -1 << bVar19;
  uVar23 = uVar12 & 0xffffffe0;
  uStack_1a8 = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
  TStack_170.CurrentBitIndex = iStack_1a4;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  TStack_170._28_4_ = iStack_1a4;
  TStack_170.BaseBitIndex = local_1a0;
  uStack_150 = CONCAT44(uStack_194,iStack_198);
  local_1e8 = iVar28;
  pTStack_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)plVar30;
  local_1d8 = uVar29;
  uStack_1d4 = uVar12;
  uStack_1d0 = uVar23;
  local_1b0 = plVar30;
  iStack_19c = iStack_1a4;
  local_180 = local_1c0;
  local_178 = local_1c0;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar30;
  if ((((int)uVar12 < 0) || (iVar13 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pFVar7 = local_188;
  uVar3 = (uint)(pFVar4->Hierarchy)._padding_;
  if (uVar12 != uVar3) {
    plVar27 = (longlong *)(pFVar4->Hierarchy)._padding_;
    if (plVar27 != (longlong *)0x0) {
      plVar30 = plVar27;
    }
    uVar29 = uVar29 & *(uint *)((longlong)plVar30 + (longlong)iVar28 * 4);
    while (uVar29 == 0) {
      uStack_1d0 = uVar23 + 0x20;
      local_1e8 = iVar28 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1e8)
      goto LAB_14187c56d;
      uVar29 = *(uint *)((longlong)plVar30 + (longlong)iVar28 * 4 + 4);
      local_1d8 = 0xffffffff;
      iVar28 = local_1e8;
      uVar23 = uStack_1d0;
    }
    uStack_1e4 = -uVar29 & uVar29;
    uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_18c = (int)lVar20;
    uStack_1d4 = local_18c + -1 + uVar23;
    if ((int)uVar3 < (int)uStack_1d4) {
LAB_14187c56d:
      uStack_1d4 = uVar3;
    }
  }
  local_130 = CONCAT44(uStack_1e4,local_1e8);
  local_120 = CONCAT44(uStack_1d4,local_1d8);
  uStack_118 = CONCAT44(uStack_1cc,uStack_1d0);
  pTStack_128 = pTStack_1e0;
  local_1c8 = pTStack_1e0;
  local_1ec = uStack_1d4;
  uVar12 = local_1f0;
  do {
    pFVar8 = local_178;
    uVar29 = local_1ec;
    if ((int)local_178->_padding_ - *(int *)((longlong)&local_178->_padding_ + 4) != (int)uStack_150
       ) {
      local_207[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
    }
    if (((TStack_170.CurrentBitIndex == uVar29) && (TStack_170.Array == local_1c8)) &&
       (pFVar8 == local_180)) {
      pFVar4 = pFVar7->Branch;
      local_1f0 = uVar12;
      if (pFVar4->ReplayMethod == NoReplay) {
        FConfigFile::Shrink(&pFVar4->InMemoryFile);
      }
      else {
        FConfigFile::Shrink(&pFVar4->CombinedStaticLayers);
        FConfigFile::operator=(&pFVar7->Branch->InMemoryFile,&pFVar7->Branch->CombinedStaticLayers);
        (pFVar7->Branch->InMemoryFile).ChangeTracker = &pFVar7->Branch->SavedLayer;
      }
      FConfigFile::operator=(&pFVar7->Branch->FinalCombinedLayers,&pFVar7->Branch->InMemoryFile);
      if (bVar31) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return SUB41(local_1f0,0);
    }
    bVar9 = false;
    local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar24 = (uint *)((longlong)TStack_170.CurrentBitIndex * 0x20 + pFVar8->_padding_);
    local_200.Data.ArrayNum = 0;
    local_200.Data.ArrayMax = 0;
    uVar29 = *puVar24 & 0xfffffff8;
    iVar13 = puVar24[4] - 1;
    if (puVar24[4] == 0) {
      iVar13 = 0;
    }
    pFVar15 = ::FString::ConstructFromPtrSize(&local_148,*(uchar **)(puVar24 + 2),iVar13);
    if (&local_200 != pFVar15) {
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      local_200.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      local_200.Data.ArrayMax = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if ((pFVar7->ConfigSystem != (FConfigCacheIni *)0x0) && ((*puVar24 & 1) != 0)) {
      bVar9 = true;
    }
    uVar23 = *puVar24;
    if ((3 < (byte)LogConfig._0_1_) && (bDumpIniLoadInfo != false)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    }
    if ((uVar23 & 4) == 0) {
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_200.Data.ArrayNum != 0) {
        FVar21.Data = local_200.Data.AllocatorInstance.Data;
      }
      bVar11 = IsUsingLocalIniFile((wchar_t *)FVar21.Data,(wchar_t *)0x0);
      if (!bVar11) goto LAB_14187c71e;
      pTVar16 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
      pTVar26 = pTVar16;
      if ((uVar23 & 2) != 0) {
        pTVar26 = pFVar7->StagedPluginConfigCache;
      }
      if (bVar9) {
        pTVar16 = pFVar7->ConfigSystem->StagedGlobalConfigCache;
      }
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_200.Data.ArrayNum != 0) {
        FVar21.Data = local_200.Data.AllocatorInstance.Data;
      }
      bVar9 = DoesConfigFileExistWrapper((wchar_t *)FVar21.Data,pFVar7->IniCacheSet,pTVar16,pTVar26)
      ;
      if (bVar9) goto LAB_14187c71e;
    }
    else {
LAB_14187c71e:
      uVar12 = uVar12 & 0xff;
      if (uVar29 != 0) {
        uVar12 = 1;
      }
      if ((3 < (byte)LogConfig._0_1_) && (bDumpIniLoadInfo != false)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      pFVar4 = pFVar7->Branch;
      if (pFVar4->ReplayMethod == FullReplay) {
        local_dc = 0x80;
        local_108._0_8_ = (FScriptContainerElement *)0x0;
        local_d0 = 0;
        local_108._16_8_ = 0;
        lStack_f0 = 0;
        local_c0 = 0;
        local_b8._16_8_ = 0;
        uStack_a0 = 0;
        local_80 = 0;
        local_70 = 0;
        local_58._0_1_ = '\0';
        local_58._1_1_ = '\0';
        local_58._2_1_ = '\0';
        local_58._3_1_ = '\0';
        local_58._4_2_ = 0;
        local_58._6_2_ = 0;
        local_108._8_8_ = 0;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        local_d4 = 0;
        local_c8 = (void *)0x0;
        local_b8._0_8_ = (FScriptContainerElement *)0x0;
        local_b8._8_8_ = 0;
        local_98 = (void *)0x0;
        local_90 = 0;
        local_84 = 0;
        local_78 = (void *)0x0;
        local_68 = (FConfigBranch *)0x0;
        local_60.ComparisonIndex.Value = 0;
        local_60.Number = 0;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48._0_4_ = 0;
        local_48._4_4_ = 0;
        local_d8 = 0xffffffff;
        local_8c = 0x80;
        local_88 = 0xffffffff;
        pFVar17 = TMapBase<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
                  ::Emplace<FString_const_&,FConfigCommandStream>
                            ((TMapBase<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
                              *)&pFVar4->StaticLayers,&local_200,(FConfigCommandStream *)local_108);
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        local_70 = local_70 & 0xffffffff00000000;
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_b8,0,local_b8._8_4_);
        iVar13 = SUB84(local_b8._8_8_,4);
        local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
        if (iVar13 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
        }
        local_88 = 0xffffffff;
        local_84 = 0;
        local_90 = 0;
        if (0x80 < local_8c) {
          local_8c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
        }
        if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_b8._0_8_);
        }
        local_c0 = local_c0 & 0xffffffff00000000;
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_108,0,local_108._8_4_);
        iVar13 = SUB84(local_108._8_8_,4);
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
        if (iVar13 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb8,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
        }
        local_d8 = 0xffffffff;
        local_d4 = 0;
        local_e0 = 0;
        if (0x80 < local_dc) {
          local_dc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
        }
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108._0_8_);
        }
        FillFileFromDisk<FConfigCommandStream>(pFVar17,&local_200,uVar29 != 0);
        FConfigFile::ApplyFile(&pFVar7->Branch->CombinedStaticLayers,pFVar17);
      }
      else {
        if (pFVar4->ReplayMethod == DynamicLayerReplay) {
          pFVar22 = &pFVar4->CombinedStaticLayers;
        }
        else {
          pFVar22 = pFVar7->ExistingFile;
          if (pFVar22 == (FConfigFile *)0x0) {
            pFVar22 = &pFVar4->InMemoryFile;
          }
        }
        FillFileFromDisk<FConfigFile>(pFVar22,&local_200,uVar29 != 0);
      }
      pFVar5 = pFVar7->ChangeTracker;
      if ((pFVar5 != (FConfigModificationTracker *)0x0) && (pFVar5->bTrackLoadedFiles != false)) {
        pFVar25 = (pFVar5->LoadedFiles).AllocatorInstance.Data;
        if ((pFVar25 <= (FScriptContainerElement *)&local_200) &&
           (((FScriptContainerElement *)&local_200 <
             pFVar25 + (longlong)(pFVar5->LoadedFiles).ArrayMax * 0x10 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar13 = (pFVar5->LoadedFiles).ArrayNum;
        piVar1 = &(pFVar5->LoadedFiles).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pFVar5->LoadedFiles).AllocatorInstance,piVar1);
        }
        FVar21.Data = local_200.Data.AllocatorInstance.Data;
        (pFVar5->LoadedFiles).ArrayNum = iVar13 + 1;
        pFVar25 = (pFVar5->LoadedFiles).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)&pFVar25->field_0x0 = 0;
        lVar20 = (longlong)local_200.Data.ArrayNum;
        *(int *)&pFVar25[8].field_0x0 = local_200.Data.ArrayNum;
        if (local_200.Data.ArrayNum == 0) {
          *(int *)(pFVar25 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_200.Data.ArrayNum,0,(ForAnyElementType *)pFVar25,
                     local_200.Data.ArrayNum,(int *)(pFVar25 + 0xc));
          memcpy(*(void **)&pFVar25->field_0x0,FVar21.Data,lVar20 * 2);
        }
      }
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  } while( true );
}

// LogVariables @ 14187d350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConfigContext::LogVariables(FConfigContext *this,wchar_t *param_1,FString *param_2)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar1 = FCommandLine::Get();
    bDumpIniLoadInfo = FParse::Param(pwVar1,L"dumpiniloads");
    _Init_thread_footer(&::_TSS0);
  }
  if (bDumpIniLoadInfo != false) {
    if (3 < (byte)LogConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    }
    if (3 < (byte)LogConfig._0_1_) {
      ::FString::FString(&local_28,"{TYPE}");
      PerformBasicReplacements(&local_18,&local_28,param_1);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogConfig._0_1_) {
        ::FString::FString(&local_28,"{USERSETTINGS}");
        PerformBasicReplacements(&local_18,&local_28,param_1);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (3 < (byte)LogConfig._0_1_) {
          ::FString::FString(&local_28,"{USER}");
          PerformBasicReplacements(&local_18,&local_28,param_1);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogConfig._0_1_) {
            ::FString::FString(&local_28,"{CUSTOMCONFIG}");
            PerformBasicReplacements(&local_18,&local_28,param_1);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            if (3 < (byte)LogConfig._0_1_) {
              ::FString::FString(&local_28,"{ENGINE}");
              PerformFinalExpansions(this,&local_18,&local_28,param_2);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
              if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_18.Data.AllocatorInstance.Data);
              }
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
              if (3 < (byte)LogConfig._0_1_) {
                ::FString::FString(&local_28,"{PROJECT}");
                PerformFinalExpansions(this,&local_18,&local_28,param_2);
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_18.Data.AllocatorInstance.Data);
                }
                if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_28.Data.AllocatorInstance.Data);
                }
                if (3 < (byte)LogConfig._0_1_) {
                  ::FString::FString(&local_28,"{RESTRICTEDPROJECT_NFL}");
                  PerformFinalExpansions(this,&local_18,&local_28,param_2);
                  UE::Logging::Private::BasicLog<4>
                            ((FStaticBasicLogRecord *)&PTR_u____hs___s_15069b658,
                             (FLogCategoryBase *)&LogConfig);
                  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_18.Data.AllocatorInstance.Data);
                  }
                  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_28.Data.AllocatorInstance.Data);
                  }
                  if (3 < (byte)LogConfig._0_1_) {
                    ::FString::FString(&local_28,"{RESTRICTEDPROJECT_NR}");
                    PerformFinalExpansions(this,&local_18,&local_28,param_2);
                    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_18.Data.AllocatorInstance.Data);
                    }
                    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_28.Data.AllocatorInstance.Data);
                    }
                    if (3 < (byte)LogConfig._0_1_) {
                      ::FString::FString(&local_28,"{OPT_SUBDIR}");
                      PerformFinalExpansions(this,&local_18,&local_28,param_2);
                      UE::Logging::Private::BasicLog<4>
                                (&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_18.Data.AllocatorInstance.Data);
                      }
                      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_28.Data.AllocatorInstance.Data);
                      }
                      if (3 < (byte)LogConfig._0_1_) {
                        ::FString::FString(&local_28,"{EXTENGINE}");
                        PerformFinalExpansions(this,&local_18,&local_28,param_2);
                        UE::Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_18.Data.AllocatorInstance.Data);
                        }
                        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_28.Data.AllocatorInstance.Data);
                        }
                        if (3 < (byte)LogConfig._0_1_) {
                          ::FString::FString(&local_28,"{EXTPROJECT}");
                          PerformFinalExpansions(this,&local_18,&local_28,param_2);
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_18.Data.AllocatorInstance.Data);
                          }
                          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_28.Data.AllocatorInstance.Data);
                          }
                          if (3 < (byte)LogConfig._0_1_) {
                            ::FString::FString(&local_28,"{PLATFORM}");
                            PerformFinalExpansions(this,&local_18,&local_28,param_2);
                            UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                            if (local_18.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_18.Data.AllocatorInstance.Data);
                            }
                            if (local_28.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_28.Data.AllocatorInstance.Data);
                            }
                            if (3 < (byte)LogConfig._0_1_) {
                              ::FString::FString(&local_28,"{PLUGIN}");
                              PerformFinalExpansions(this,&local_18,&local_28,param_2);
                              UE::Logging::Private::BasicLog<4>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                              if (local_18.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_18.Data.AllocatorInstance.Data);
                              }
                              if (local_28.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_28.Data.AllocatorInstance.Data);
                              }
                              if (3 < (byte)LogConfig._0_1_) {
                                ::FString::FString(&local_28,"{EXTPLUGIN}");
                                PerformFinalExpansions(this,&local_18,&local_28,param_2);
                                UE::Logging::Private::BasicLog<4>
                                          (&::LOG_Static,(FLogCategoryBase *)&LogConfig);
                                if (local_18.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_18.Data.AllocatorInstance.Data);
                                }
                                if (local_28.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_28.Data.AllocatorInstance.Data);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// PerformFinalExpansions @ 141883fd0

FString * __thiscall
FConfigContext::PerformFinalExpansions
          (FConfigContext *this,FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FString *pFVar5;
  FString *pFVar6;
  FPerPlatformDirs *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pwVar10 = L"";
  pFVar6 = &this->EngineRootDir;
  if ((this->EngineRootDir).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FString::Replace(param_1,__return_storage_ptr__,L"{ENGINE}",pwVar11,IgnoreCase);
  pFVar1 = &this->ProjectRootDir;
  if ((this->ProjectRootDir).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pFVar5 = ::FString::Replace(__return_storage_ptr__,&local_58,L"{PROJECT}",pwVar11,IgnoreCase);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->ProjectNotForLicenseesDir).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->ProjectNotForLicenseesDir).Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FString::Replace(__return_storage_ptr__,&local_58,L"{RESTRICTEDPROJECT_NFL}",pwVar11,
                              IgnoreCase);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->ProjectNoRedistDir).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->ProjectNoRedistDir).Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FString::Replace(__return_storage_ptr__,&local_58,L"{RESTRICTEDPROJECT_NR}",pwVar11,
                              IgnoreCase);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->ProjectLimitedAccessDir).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->ProjectLimitedAccessDir).Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FString::Replace(__return_storage_ptr__,&local_58,L"{RESTRICTEDPROJECT_LA}",pwVar11,
                              IgnoreCase);
  if (__return_storage_ptr__ != pFVar5) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar4 = FPaths::IsUnderDirectory(pFVar1,&this->ProjectNotForLicenseesDir);
  if (bVar4) {
    local_68.Data.ArrayNum = (this->ProjectRootDir).Data.ArrayNum;
    lVar12 = (longlong)local_68.Data.ArrayNum;
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar3,lVar12 * 2);
    }
    ::FString::ConcatFC(&local_58,&this->ProjectNotForLicenseesDir,L"/");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&local_68,(wchar_t *)FVar9.Data);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFC(&local_58,&local_68,L"/");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{OPT_SUBDIR}",
                                (wchar_t *)FVar9.Data,IgnoreCase);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
LAB_1418842ea:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
  }
  else {
    bVar4 = FPaths::IsUnderDirectory(pFVar1,&this->ProjectNoRedistDir);
    if (bVar4) {
      local_68.Data.ArrayNum = (this->ProjectRootDir).Data.ArrayNum;
      lVar12 = (longlong)local_68.Data.ArrayNum;
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_68.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,
                   local_68.Data.ArrayNum,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,pFVar3,lVar12 * 2);
      }
      ::FString::ConcatFC(&local_58,&this->ProjectNoRedistDir,L"/");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_68,(wchar_t *)FVar9.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_58,&local_68,L"/");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{OPT_SUBDIR}",
                                  (wchar_t *)FVar9.Data,IgnoreCase);
      if (__return_storage_ptr__ != pFVar6) {
        pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar3 == (FScriptContainerElement *)0x0) goto LAB_1418842ea;
        FMemory::Free(pFVar3);
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
    }
    else {
      bVar4 = FPaths::IsUnderDirectory(pFVar1,&this->ProjectLimitedAccessDir);
      if (bVar4) {
        ::FString::FString(&local_68,pFVar1);
        pFVar6 = &this->ProjectLimitedAccessDir;
      }
      else {
        bVar4 = FPaths::IsUnderDirectory(pFVar1,pFVar6);
        if (!bVar4) {
          pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{OPT_SUBDIR}",L"",
                                      IgnoreCase);
          ::FString::operator=(__return_storage_ptr__,pFVar6);
          FVar9.Data = local_48.Data.AllocatorInstance.Data;
          goto LAB_14188453b;
        }
        ::FString::FString(&local_68,pFVar1);
      }
      ::FString::ConcatFC(&local_58,pFVar6,L"/");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_68,(wchar_t *)FVar9.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_58,&local_68,L"/");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{OPT_SUBDIR}",
                                  (wchar_t *)FVar9.Data,IgnoreCase);
      ::FString::operator=(__return_storage_ptr__,pFVar6);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar9.Data = local_68.Data.AllocatorInstance.Data;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
LAB_14188453b:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  iVar2 = (param_2->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    pFVar7 = GetPerPlatformDirs(this,param_2);
    if ((pFVar7->PlatformExtensionEngineDir).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar7->PlatformExtensionEngineDir).Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{EXTENGINE}",pwVar11,IgnoreCase);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar7 = GetPerPlatformDirs(this,param_2);
    if ((pFVar7->PlatformExtensionProjectDir).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar7->PlatformExtensionProjectDir).Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{EXTPROJECT}",pwVar11,IgnoreCase)
    ;
    if (__return_storage_ptr__ != pFVar6) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((param_2->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{PLATFORM}",pwVar11,IgnoreCase);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (this->bIsForPlugin != false) {
    if ((this->PluginRootDir).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(this->PluginRootDir).Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{PLUGIN}",pwVar11,IgnoreCase);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar7 = GetPerPlatformDirs(this,param_2);
    if ((pFVar7->PlatformExtensionPluginDir).Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar7->PlatformExtensionPluginDir).Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FString::Replace(__return_storage_ptr__,&local_48,L"{EXTPLUGIN}",pwVar10,IgnoreCase);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// PerformLoad @ 1418847d0

/* WARNING: Removing unreachable block (ram,0x000141884a62) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConfigContext::PerformLoad(FConfigContext *this)

{
  void *_Src;
  longlong *plVar1;
  FConfigBranch *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar13;
  FName *pFVar14;
  FConfigValue *pFVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  FConfigFile *this_01;
  ForAnyElementType FVar20;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *this_02;
  int iVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_f8 [8];
  TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> local_f0;
  uint local_e0;
  FLLMScope local_dc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FDynamicLayerInfo local_b8;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48;
  FMemScope local_40;
  FName local_38;
  FName local_30;
  
  lVar19 = 0;
  iVar8 = 0;
  local_e0 = 0;
  FLLMScope::FLLMScope(&local_dc,ConfigSystem,false,None,Default,true);
  FMemScope::FMemScope(&local_40,ConfigSystem,true);
  bVar3 = IsInGameThread();
  if (bVar3) {
    QueryPerformanceCounter(&local_58);
    GPerformLoadTime =
         GPerformLoadTime +
         (__real_c170000000000000 -
         (double)local_58.QuadPart * FGenericPlatformTime::SecondsPerCycle);
  }
  this_01 = this->ExistingFile;
  if (this_01 == (FConfigFile *)0x0) {
    this_01 = &this->Branch->InMemoryFile;
  }
  if (this->bIsForPluginModification == false) {
    if (this->bIsFixingUpAfterBinaryConfig == false) {
      AddStaticLayersToHierarchy(this,(TArray<FString,TSizedDefaultAllocator<32>_> *)0x0,false);
    }
    bVar3 = GenerateDestIniFile(this);
    if (this->bIsFixingUpAfterBinaryConfig == false) {
      if ((this->BaseIniName).Data.ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
      }
      pFVar14 = ::FName::FName(&local_38,pwVar16);
      this_01->Name = *pFVar14;
      iVar10 = (this->Platform).Data.ArrayNum;
      iVar21 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar21 = iVar8;
      }
      ::FString::AssignRange
                (&this_01->PlatformName,(wchar_t *)(this->Platform).Data.AllocatorInstance.Data,
                 iVar21);
      pwVar16 = SectionsToSaveString;
      this_01->bHasPlatformName = true;
      bVar5 = false;
      ::FString::FString(&local_78,pwVar16);
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_78.Data.ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        iVar8 = local_78.Data.ArrayNum + -1;
        pwVar16 = (wchar_t *)local_78.Data.AllocatorInstance.Data;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar16);
      iVar8 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                          *)this_01,uVar9,&local_78);
      if (iVar8 != -1) {
        lVar19 = (longlong)iVar8 * 0x110 + this_01->_padding_;
      }
      this_02 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)(lVar19 + 0x10);
      if (lVar19 == 0) {
        this_02 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)0x0;
      }
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (this_02 !=
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *)0x0) {
        pFVar14 = ::FName::FName(&local_30,SaveAllSectionsKey);
        pFVar15 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  ::Find(this_02,*pFVar14);
        if (pFVar15 != (FConfigValue *)0x0) {
          if (pFVar15->bExpandOnDemand == false) {
            local_c0 = (pFVar15->SavedValue).Data.ArrayNum;
            lVar19 = (longlong)local_c0;
            pFVar22 = (pFVar15->SavedValue).Data.AllocatorInstance.Data;
            local_c8.Data = (FScriptContainerElement *)0x0;
            if (local_c0 == 0) {
              local_bc = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_c0,0,&local_c8,local_c0,&local_bc);
              memcpy(local_c8.Data,pFVar22,lVar19 * 2);
            }
            bVar6 = false;
            bVar5 = true;
            FVar20.Data = local_c8.Data;
            iVar8 = local_c0;
          }
          else {
            local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_88.Data.ArrayNum = 0;
            local_88.Data.ArrayMax = 0;
            FConfigValue::ExpandValue(&pFVar15->SavedValue,&local_88);
            bVar6 = true;
            bVar5 = false;
            FVar20.Data = local_88.Data.AllocatorInstance.Data;
            iVar8 = local_88.Data.ArrayNum;
          }
          local_98.Data = (FScriptContainerElement *)0x0;
          local_90 = iVar8;
          if (iVar8 == 0) {
            local_8c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar8,0,&local_98,iVar8,&local_8c);
            memcpy(local_98.Data,FVar20.Data,(longlong)iVar8 * 2);
          }
          if ((bVar5) && (local_c8.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_c8.Data);
          }
          if ((bVar6) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_90 != 0) {
            FVar20.Data = local_98.Data;
          }
          bVar5 = FToBoolHelper::FromCStringWide((wchar_t *)FVar20.Data);
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data);
          }
        }
      }
      pwVar16 = L"";
      iVar8 = ::FString::Find(&this->BaseIniName,L"User",4,IgnoreCase,FromStart,-1);
      iVar10 = ::FString::Find(&this->BaseIniName,L"Editor",6,IgnoreCase,FromStart,-1);
      if (iVar10 == -1) {
LAB_141884e7c:
        bVar6 = false;
      }
      else {
        if ((this->BaseIniName).Data.ArrayNum != 0) {
          pwVar16 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar16,L"Editor");
        if (iVar10 == 0) goto LAB_141884e7c;
        bVar6 = true;
      }
      if (((bVar5 != false) || (iVar8 != -1)) || (bVar7 = 0, bVar6)) {
        bVar7 = 0x10;
      }
      this_01->bCanSaveAllSections = false;
      this_01->field_0x50 = this_01->field_0x50 | bVar7;
      if (((GIsInitialLoad == false) && (this->bWriteDestIni != false)) &&
         (this->bAllowGeneratedIniWhenCooked != false)) {
        pwVar16 = FCommandLine::Get();
        bVar5 = FParse::Param(pwVar16,L"Multiprocess");
        if (!bVar5) {
          if (-1 < CpuChannel->Enabled) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId3162,"ProcessSourceAndCheckAgainstBackup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                       ,0xc5a);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3162);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((bVar3) && (this->ExistingFile == (FConfigFile *)0x0)) {
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            FConfigFile::Write(this_01,&this->DestIniFilename,true,&local_68);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      bVar5 = IsInGameThread();
      if (bVar5) {
        QueryPerformanceCounter(&local_48);
        GPerformLoadTime =
             GPerformLoadTime +
             (double)local_48.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
      }
      goto LAB_141884f8c;
    }
  }
  else {
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    AddStaticLayersToHierarchy(this,&local_d8,false);
    uVar11 = (ulonglong)local_d8.ArrayNum;
    pFVar22 = local_d8.AllocatorInstance.Data + uVar11 * 0x10;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_e0 = local_d8.ArrayNum;
    uVar17 = uVar11;
    FVar20.Data = local_d8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != (int)uVar17) {
        local_f8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8)
        ;
      }
      if (FVar20.Data == pFVar22) break;
      _Src = *(void **)FVar20.Data;
      local_b8.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = *(int *)(FVar20.Data + 8);
      local_b8.Filename.Data.ArrayNum = iVar8;
      if (iVar8 == 0) {
        local_b8.Filename.Data.ArrayNum = 0;
        local_b8.Filename.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,0,(ForAnyElementType *)&local_b8,iVar8,&local_b8.Filename.Data.ArrayMax
                  );
        memcpy(local_b8.Filename.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
      }
      local_b8.Tag = this->ConfigFileTag;
      local_b8.Priority = this->PluginModificationPriority;
      if (((local_f0.AllocatorInstance.Data <= &local_b8) &&
          (&local_b8 <
           (FDynamicLayerInfo *)
           (local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 0x20))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (local_f0.ArrayNum == local_f0.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        local_f0.ArrayNum = iVar8;
      }
      lVar19 = (longlong)local_f0.ArrayNum * 0x20;
      local_f0.ArrayNum = local_f0.ArrayNum + 1;
      *(undefined8 *)&local_f0.AllocatorInstance.Data[lVar19].field_0x0 = 0;
      *(FScriptContainerElement **)&local_f0.AllocatorInstance.Data[lVar19].field_0x0 =
           local_b8.Filename.Data.AllocatorInstance.Data;
      *(int *)(local_f0.AllocatorInstance.Data + lVar19 + 8) = local_b8.Filename.Data.ArrayNum;
      *(int *)(local_f0.AllocatorInstance.Data + lVar19 + 0xc) = local_b8.Filename.Data.ArrayMax;
      *(FName *)(local_f0.AllocatorInstance.Data + lVar19 + 0x10) = local_b8.Tag;
      *(ushort *)(local_f0.AllocatorInstance.Data + lVar19 + 0x18) = local_b8.Priority;
      local_b8.Filename.Data.ArrayNum = 0;
      local_b8.Filename.Data.ArrayMax = 0;
      local_b8.Filename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (5 < (byte)LogConfig._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
      }
      uVar11 = local_d8._8_8_ & 0xffffffff;
      FVar20.Data = FVar20.Data + 0x10;
      uVar17 = (ulonglong)local_e0;
    }
    if (*(void **)&this->HandleLayersFunction == (void *)0x0) {
      this_00 = this->Branch;
      pTVar13 = TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                ::Find((TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                        *)&this->ConfigSystem->StagedPluginConfigCache,this->ConfigFileTag);
      FConfigBranch::AddDynamicLayersToHierarchy
                (this_00,&local_f0,this->ChangeTracker,this->ConfigSystem->StagedGlobalConfigCache,
                 pTVar13,false);
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->HandleLayersFunction);
      pcVar2 = *(code **)&this->HandleLayersFunction;
      plVar1 = *(longlong **)&(this->HandleLayersFunction).field_0x28;
      plVar18 = (longlong *)&(this->HandleLayersFunction).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar18 = plVar1;
      }
      uVar12 = (**(code **)(*plVar18 + 8))();
      (*pcVar2)(uVar12,&local_f0);
    }
    bVar3 = IsInGameThread();
    if (bVar3) {
      QueryPerformanceCounter(&local_50);
      GPerformLoadTime =
           GPerformLoadTime +
           (double)local_50.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
    DestructItems<FDynamicLayerInfo,int>
              ((FDynamicLayerInfo *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if ((FDynamicLayerInfo *)local_f0.AllocatorInstance.Data != (FDynamicLayerInfo *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
      bVar3 = true;
      goto LAB_141884f8c;
    }
  }
  bVar3 = true;
LAB_141884f8c:
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(&local_dc);
  return bVar3;
}

// PerformSingleFileLoad @ 141884fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConfigContext::PerformSingleFileLoad(FConfigContext *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FConfigCacheIni *this_00;
  FConfigModificationTracker *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FString *pFVar9;
  FName *pFVar10;
  FConfigBranch *pFVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  FConfigFile *pFVar15;
  int iVar16;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar14 = &this->BaseIniName;
  bVar6 = ::FString::EndsWith(pFVar14,L".ini",4,IgnoreCase);
  iVar8 = (this->BaseIniName).Data.ArrayNum;
  if (bVar6) {
    iVar16 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar16 = 0;
    }
    ::FString::AssignRange
              (&this->DestIniFilename,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar16);
    pFVar9 = FPaths::GetBaseFilename(&local_38,pFVar14,true);
    if (pFVar14 != pFVar9) {
      pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar14->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->BaseIniName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->BaseIniName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
  }
  else {
    ::FString::PrintfImpl(&local_58,L"%s/%s.ini");
    pFVar9 = &this->DestIniFilename;
    local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (pFVar9 != &local_58) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->DestIniFilename).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->DestIniFilename).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar9 = &this->DestIniFilename;
  this_00 = this->ConfigSystem;
  if (this_00 == (FConfigCacheIni *)0x0) {
    pFVar15 = this->ExistingFile;
  }
  else {
    if ((this->BaseIniName).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar10 = ::FName::FName(&local_res8,pwVar13);
    pFVar11 = FConfigCacheIni::FindBranch(this_00,*pFVar10,pFVar9);
    this->Branch = pFVar11;
    if (pFVar11 == (FConfigBranch *)0x0) {
      pFVar11 = FConfigCacheIni::AddNewBranch(this->ConfigSystem,pFVar9);
      this->Branch = pFVar11;
      pFVar11->bIsHierarchical = false;
    }
    else if (this->bForceReload == false) {
      return true;
    }
    pFVar15 = &this->Branch->InMemoryFile;
  }
  if ((this->BaseIniName).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_res10,pwVar13);
  pFVar15->Name = *pFVar10;
  ::FString::Reset(&pFVar15->PlatformName,0);
  pFVar15->bHasPlatformName = false;
  if ((this->DestIniFilename).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_48,pwVar13);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar12.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar6 = IsUsingLocalIniFile((wchar_t *)FVar12.Data,(wchar_t *)0x0);
  if (bVar6) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar12.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar6 = DoesConfigFileExistWrapper
                      ((wchar_t *)FVar12.Data,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0,
                       (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0);
    if (!bVar6) goto LAB_141885225;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar12.Data = local_48.Data.AllocatorInstance.Data;
  }
  ProcessIniContents((wchar_t *)FVar12.Data,(wchar_t *)FVar12.Data,pFVar15,false,false);
LAB_141885225:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((this->ChangeTracker != (FConfigModificationTracker *)0x0) &&
     (this->ChangeTracker->bTrackLoadedFiles != false)) {
    if (3 < (byte)LogConfig._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
    }
    pFVar3 = this->ChangeTracker;
    pFVar14 = &this->DestIniFilename;
    pFVar2 = (pFVar3->LoadedFiles).AllocatorInstance.Data;
    if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)(pFVar3->LoadedFiles).ArrayMax * 0x10)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar8 = (pFVar3->LoadedFiles).ArrayNum;
    piVar1 = &(pFVar3->LoadedFiles).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar3->LoadedFiles).AllocatorInstance,piVar1);
    }
    (pFVar3->LoadedFiles).ArrayNum = iVar8 + 1;
    ::FString::FString((FString *)
                       ((pFVar3->LoadedFiles).AllocatorInstance.Data + (longlong)iVar8 * 0x10),
                       pFVar14);
  }
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  lVar5 = pFVar15->_padding_;
  iVar8 = *(int *)((longlong)&pFVar15->_padding_ + 4);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  return 0 < (int)lVar5 - iVar8;
}

// PrepareForLoad @ 1418857d0

bool __thiscall FConfigContext::PrepareForLoad(FConfigContext *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  FName *pFVar10;
  FConfigBranch *pFVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FConfigCacheIni *pFVar15;
  int iVar16;
  wchar_t *pwVar17;
  bool bVar18;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  bVar5 = IsInGameThread();
  if (bVar5) {
    QueryPerformanceCounter(&local_res8);
    GPrepareForLoadTime =
         GPrepareForLoadTime +
         (__real_c170000000000000 -
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle);
  }
  if (((this->ConfigSystem == (FConfigCacheIni *)0x0) && (this->ExistingFile == (FConfigFile *)0x0))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("ConfigSystem != nullptr || ExistingFile != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
                            ,0x19f,
                            L"Loading config expects to either have a ConfigFile already passed in, or have a ConfigSystem passed in"
                           ), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  pvVar4 = ThreadLocalStoragePointer;
  uVar12 = (ulonglong)_tls_index;
  *param_1 = true;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar12 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar14 = FCommandLine::Get();
    bAllowWriteDuringLoad = FParse::Param(pwVar14,L"writeIniOnLoad");
    _Init_thread_footer(&::_TSS0);
  }
  if (bAllowWriteDuringLoad == false) {
    this->bWriteDestIni = false;
  }
  if ((this->GeneratedConfigDir).Data.ArrayNum < 2) {
    if ((this->BaseIniName).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar14,L"EditorSettings");
    if (iVar7 == 0) {
LAB_141885941:
      pFVar9 = FPaths::EngineEditorSettingsDir(&local_60);
      pFVar8 = &this->GeneratedConfigDir;
      local_70.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      if (pFVar8 != pFVar9) {
        pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar8->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->GeneratedConfigDir).Data.ArrayNum = (pFVar9->Data).ArrayNum;
        (this->GeneratedConfigDir).Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        local_70.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((this->BaseIniName).Data.ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar14,L"EditorKeyBindings");
      if (iVar7 == 0) goto LAB_141885941;
      if ((this->BaseIniName).Data.ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar14,L"EditorLayout");
      if (iVar7 == 0) goto LAB_141885941;
      pFVar8 = FPaths::GeneratedConfigDir(&local_70);
      ::FString::operator=(&this->GeneratedConfigDir,pFVar8);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if ((this->GeneratedConfigDir).Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(this->GeneratedConfigDir).Data.AllocatorInstance.Data;
  }
  if ((this->SavePlatform).Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(this->SavePlatform).Data.AllocatorInstance.Data;
  }
  if ((this->BaseIniName).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
  }
  pFVar9 = FConfigCacheIni::GetDestIniFilename(local_50,pwVar13,pwVar17,pwVar14);
  pFVar8 = &this->DestIniFilename;
  if (pFVar8 != pFVar9) {
    pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar8->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DestIniFilename).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->DestIniFilename).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  if (((this->Branch == (FConfigBranch *)0x0) && (this->bForceReload == false)) &&
     (pFVar15 = this->ConfigSystem, pFVar15 != (FConfigCacheIni *)0x0)) {
    if ((this->BaseIniName).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
    }
    pFVar10 = ::FName::FName(&local_res18,pwVar14);
    pFVar11 = FConfigCacheIni::FindBranch(pFVar15,*pFVar10,&this->DestIniFilename);
    this->Branch = pFVar11;
    if (pFVar11 != (FConfigBranch *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      lVar3 = (pFVar11->InMemoryFile)._padding_;
      iVar7 = *(int *)((longlong)&(pFVar11->InMemoryFile)._padding_ + 4);
      ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (0 < (int)lVar3 - iVar7) {
        *param_1 = false;
      }
    }
  }
  if (this->bForceReload == false) goto LAB_141885bee;
  if (this->ConfigSystem == (FConfigCacheIni *)0x0) {
    if ((this->Platform).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(this->Platform).Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar14,"Windows");
    if ((iVar7 != 0) || (GConfig == (FConfigCacheIni *)0x0)) goto LAB_141885bee;
  }
  bVar5 = false;
  pFVar15 = this->ConfigSystem;
  if (this->ConfigSystem == (FConfigCacheIni *)0x0) {
    pFVar15 = GConfig;
  }
  if ((this->BaseIniName).Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_res20,pwVar14);
  pFVar11 = FConfigCacheIni::FindBranch(pFVar15,*pFVar10,&this->DestIniFilename);
  if (pFVar11 == (FConfigBranch *)0x0) goto LAB_141885bee;
  iVar7 = (pFVar11->SourceEngineConfigDir).Data.ArrayNum;
  if (1 < iVar7) {
    iVar16 = (this->EngineConfigDir).Data.ArrayNum;
    if (iVar7 == iVar16) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar11->SourceEngineConfigDir).Data.AllocatorInstance.Data,
                         (wchar_t *)(this->EngineConfigDir).Data.AllocatorInstance.Data);
      bVar18 = iVar7 == 0;
    }
    else {
      bVar18 = iVar7 + iVar16 == 1;
    }
    if (!bVar18) {
      iVar7 = (pFVar11->SourceEngineConfigDir).Data.ArrayNum;
      iVar16 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar16 = 0;
      }
      ::FString::AssignRange
                (&this->EngineConfigDir,
                 (wchar_t *)(pFVar11->SourceEngineConfigDir).Data.AllocatorInstance.Data,iVar16);
      bVar5 = true;
    }
  }
  iVar7 = (pFVar11->SourceProjectConfigDir).Data.ArrayNum;
  if (iVar7 < 2) {
LAB_141885bd9:
    if (!bVar5) goto LAB_141885bee;
  }
  else {
    iVar16 = (this->ProjectConfigDir).Data.ArrayNum;
    if (iVar7 == iVar16) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar11->SourceProjectConfigDir).Data.AllocatorInstance.Data,
                         (wchar_t *)(this->ProjectConfigDir).Data.AllocatorInstance.Data);
      bVar18 = iVar7 == 0;
    }
    else {
      bVar18 = iVar7 + iVar16 == 1;
    }
    if (bVar18) goto LAB_141885bd9;
    iVar16 = (pFVar11->SourceProjectConfigDir).Data.ArrayNum;
    iVar7 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              (&this->ProjectConfigDir,
               (wchar_t *)(pFVar11->SourceProjectConfigDir).Data.AllocatorInstance.Data,iVar7);
  }
  CachePaths(this);
LAB_141885bee:
  pFVar11 = this->Branch;
  if (pFVar11 == (FConfigBranch *)0x0) {
    pFVar15 = this->ConfigSystem;
    if ((this->BaseIniName).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(this->BaseIniName).Data.AllocatorInstance.Data;
    }
    pFVar10 = ::FName::FName(&local_78,pwVar14);
    pFVar11 = FConfigCacheIni::FindBranch(pFVar15,*pFVar10,&this->DestIniFilename);
    this->Branch = pFVar11;
    if (pFVar11 == (FConfigBranch *)0x0) {
      if (((this->DestIniFilename).Data.ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!DestIniFilename.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigContext.cpp"
                             ,0x1fd,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar11 = FConfigCacheIni::AddNewBranch(this->ConfigSystem,&this->DestIniFilename);
      this->Branch = pFVar11;
    }
  }
  pFVar11->bIsHierarchical = this->bIsHierarchicalConfig;
  bVar5 = IsInGameThread();
  if (bVar5) {
    QueryPerformanceCounter(&local_res10);
    GPrepareForLoadTime =
         GPrepareForLoadTime +
         (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return true;
}

// ResetBaseIni @ 14188c940

FConfigContext * __thiscall FConfigContext::ResetBaseIni(FConfigContext *this,wchar_t *param_1)

{
  ::FString::operator=(&this->BaseIniName,param_1);
  if (this->bDoNotResetConfigFile == false) {
    this->Branch = (FConfigBranch *)0x0;
  }
  return this;
}

// VisualizeHierarchy @ 141897830

void __thiscall
FConfigContext::VisualizeHierarchy(FConfigContext *this,FOutputDevice *param_1,wchar_t *param_2)

{
  int iVar1;
  FString *pFVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  bool local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  FOutputDevice::Log(param_1,L"=======================================================");
  if (this->bIncludeTagNameInBranchName == false) {
    ::FString::operator=(&this->BaseIniName,param_2);
    if (this->bDoNotResetConfigFile == false) {
      this->Branch = (FConfigBranch *)0x0;
    }
  }
  else {
    pFVar2 = ::FName::ToString(&this->ConfigFileTag,&local_28);
    ::FString::ConcatFC(&local_38,pFVar2,param_2);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::operator=(&this->BaseIniName,(wchar_t *)FVar6.Data);
    if (this->bDoNotResetConfigFile == false) {
      this->Branch = (FConfigBranch *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  CachePaths(this);
  PrepareForLoad(this,local_res8);
  FOutputDevice::Log(param_1,L"Config hierarchy:");
  iVar1 = ::FString::Find(&this->ProjectRootDir,L"/Programs/",10,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    pwVar4 = L"  Project Dir: %s";
  }
  else if ((this->ProjectRootDir).Data.ArrayNum == 0) {
    pwVar4 = L"  Program Data Dir: %s";
  }
  else {
    pwVar4 = L"  Program Data Dir: %s";
  }
  FOutputDevice::LogfImpl(param_1,pwVar4);
  FOutputDevice::LogfImpl(param_1,L"  Platform: %s");
  if (this->bIsForPlugin != false) {
    FOutputDevice::LogfImpl(param_1,L"  Plugin Root Dir: %s");
    iVar1 = (this->ChildPluginBaseDirs).ArrayNum;
    pFVar5 = (this->ChildPluginBaseDirs).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ChildPluginBaseDirs).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar7) break;
      FOutputDevice::LogfImpl(param_1,L"  Plugin Children Dir: %s");
      pFVar5 = pFVar5 + 0x10;
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  AddStaticLayersToHierarchy(this,&local_48,true);
  FOutputDevice::Log(param_1,L"  Files:");
  iVar1 = local_48.ArrayNum;
  uVar3 = (ulonglong)local_48.ArrayNum;
  pFVar5 = local_48.AllocatorInstance.Data + uVar3 * 0x10;
  FVar6.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar6.Data == pFVar5) break;
    FOutputDevice::LogfImpl(param_1,L"    %s");
    uVar3 = local_48._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 0x10;
  }
  FOutputDevice::Log(param_1,L"=======================================================");
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// VisualizeHierarchy @ 141897b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FConfigContext::VisualizeHierarchy
          (FOutputDevice *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
          wchar_t *param_5,TArray<FString,TSizedDefaultAllocator<32>_> *param_6)

{
  FString *pFVar1;
  size_t sVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_3a8 [32];
  FString local_378;
  FString local_368;
  TStringView<wchar_t> local_350;
  FScriptContainerElement *local_340;
  int local_338;
  FConfigContext local_328;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  FConfigFile::FConfigFile(&local_138);
  if (param_3 == (wchar_t *)0x0) {
    local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.Data.ArrayNum = 0;
    local_378.Data.ArrayMax = 0;
    FConfigContext(&local_328,(FConfigCacheIni *)0x0,true,&local_378,&local_138);
    FVar3.Data = local_378.Data.AllocatorInstance.Data;
  }
  else {
    pFVar1 = ::FString::FString(&local_368,param_3);
    FConfigContext(&local_328,(FConfigCacheIni *)0x0,true,pFVar1,&local_138);
    FVar3.Data = local_368.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (param_5 != (wchar_t *)0x0) {
    local_328.bIsForPlugin = true;
    ::FString::operator=(&local_328.PluginRootDir,param_5);
    if (param_6 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_328.ChildPluginBaseDirs,param_6)
      ;
    }
  }
  if (param_4 != (wchar_t *)0x0) {
    ::FString::FString(&local_378,"Config/");
    local_350.DataPtr = param_4;
    sVar2 = wcslen(param_4);
    local_350.Size = (int)sVar2;
    local_340 = local_378.Data.AllocatorInstance.Data;
    local_338 = local_378.Data.ArrayNum + -1;
    if (local_378.Data.ArrayNum == 0) {
      local_338 = 0;
    }
    FPaths::CombineInternal(&local_368,&local_350,2);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (local_328.ProjectConfigDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.ProjectConfigDir.Data.AllocatorInstance.Data);
    }
    local_328.ProjectConfigDir.Data.AllocatorInstance.Data = local_368.Data.AllocatorInstance.Data;
    local_328.ProjectConfigDir.Data.ArrayNum = local_368.Data.ArrayNum;
    local_328.ProjectConfigDir.Data.ArrayMax = local_368.Data.ArrayMax;
  }
  VisualizeHierarchy(&local_328,param_1,param_2);
  ~FConfigContext(&local_328);
  FConfigFile::~FConfigFile(&local_138);
  return;
}

