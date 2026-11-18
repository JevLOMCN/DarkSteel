// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 22

// FPluginDescriptor @ 141e0d4f0

FPluginDescriptor * __thiscall
FPluginDescriptor::FPluginDescriptor(FPluginDescriptor *this,FPluginDescriptor *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *pTVar6;
  Type TVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FModuleDescriptor *pFVar11;
  FLocalizationTargetDescriptor *pFVar12;
  FPluginReferenceDescriptor *pFVar13;
  
  this->Version = param_1->Version;
  ::FString::FString(&this->VersionName,&param_1->VersionName);
  ::FString::FString(&this->FriendlyName,&param_1->FriendlyName);
  ::FString::FString(&this->Description,&param_1->Description);
  ::FString::FString(&this->Category,&param_1->Category);
  ::FString::FString(&this->CreatedBy,&param_1->CreatedBy);
  ::FString::FString(&this->CreatedByURL,&param_1->CreatedByURL);
  ::FString::FString(&this->DocsURL,&param_1->DocsURL);
  ::FString::FString(&this->MarketplaceURL,&param_1->MarketplaceURL);
  ::FString::FString(&this->SupportURL,&param_1->SupportURL);
  ::FString::FString(&this->EngineVersion,&param_1->EngineVersion);
  ::FString::FString(&this->EditorCustomVirtualPath,&param_1->EditorCustomVirtualPath);
  pTVar2 = &this->SupportedTargetPlatforms;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SupportedTargetPlatforms).ArrayMax;
  iVar9 = (param_1->SupportedTargetPlatforms).ArrayNum;
  pFVar10 = (param_1->SupportedTargetPlatforms).AllocatorInstance.Data;
  (this->SupportedTargetPlatforms).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar2->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar10,iVar9);
  }
  pTVar2 = &this->SupportedPrograms;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SupportedPrograms).ArrayMax;
  iVar9 = (param_1->SupportedPrograms).ArrayNum;
  pFVar10 = (param_1->SupportedPrograms).AllocatorInstance.Data;
  (this->SupportedPrograms).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar2->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar10,iVar9);
  }
  ::FString::FString(&this->ParentPluginName,&param_1->ParentPluginName);
  pTVar3 = &this->Modules;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Modules).ArrayMax;
  iVar9 = (param_1->Modules).ArrayNum;
  pFVar11 = (FModuleDescriptor *)(param_1->Modules).AllocatorInstance.Data;
  (this->Modules).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x168,8,iVar9,0,&pTVar3->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FModuleDescriptor,FModuleDescriptor,int>
              ((pTVar3->AllocatorInstance).Data,pFVar11,iVar9);
  }
  pTVar4 = &this->LocalizationTargets;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LocalizationTargets).ArrayMax;
  iVar9 = (param_1->LocalizationTargets).ArrayNum;
  pFVar12 = (FLocalizationTargetDescriptor *)(param_1->LocalizationTargets).AllocatorInstance.Data;
  (this->LocalizationTargets).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar9,0,&pTVar4->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FLocalizationTargetDescriptor,FLocalizationTargetDescriptor,int>
              ((pTVar4->AllocatorInstance).Data,pFVar12,iVar9);
  }
  ::FString::FString(&this->VersePath,&param_1->VersePath);
  ::FString::FString(&this->DeprecatedEngineVersion,&param_1->DeprecatedEngineVersion);
  TVar7 = param_1->VerseScope;
  (this->VerseVersion).bIsSet = false;
  this->VerseScope = TVar7;
  bVar8 = (param_1->VerseVersion).bIsSet;
  (this->VerseVersion).bIsSet = bVar8;
  if (bVar8 != false) {
    (this->VerseVersion).TypedValue = (param_1->VerseVersion).TypedValue;
  }
  this->bEnableSceneGraph = param_1->bEnableSceneGraph;
  this->bEnableVerseAssetReflection = param_1->bEnableVerseAssetReflection;
  this->bEnableIAD = param_1->bEnableIAD;
  this->EnabledByDefault = param_1->EnabledByDefault;
  this->bCanContainContent = param_1->bCanContainContent;
  this->bCanContainVerse = param_1->bCanContainVerse;
  this->bIsBetaVersion = param_1->bIsBetaVersion;
  this->bIsExperimentalVersion = param_1->bIsExperimentalVersion;
  this->bInstalled = param_1->bInstalled;
  this->bRequiresBuildPlatform = param_1->bRequiresBuildPlatform;
  this->bIsHidden = param_1->bIsHidden;
  this->bIsSealed = param_1->bIsSealed;
  this->bNoCode = param_1->bNoCode;
  this->bExplicitlyLoaded = param_1->bExplicitlyLoaded;
  this->bHasExplicitPlatforms = param_1->bHasExplicitPlatforms;
  this->bIsPluginExtension = param_1->bIsPluginExtension;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x8 = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x20 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x28 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x34 = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x40 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->PreBuildSteps,
              (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->PreBuildSteps);
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x8 = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x20 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x28 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x2c = 0x80;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x34 = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x40 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->PostBuildSteps,
              (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->PostBuildSteps);
  pTVar5 = &this->Plugins;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Plugins).ArrayMax;
  iVar9 = (param_1->Plugins).ArrayNum;
  pFVar13 = (FPluginReferenceDescriptor *)(param_1->Plugins).AllocatorInstance.Data;
  (this->Plugins).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar9,0,&pTVar5->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FPluginReferenceDescriptor,FPluginReferenceDescriptor,int>
              ((pTVar5->AllocatorInstance).Data,pFVar13,iVar9);
  }
  pTVar6 = &this->DisallowedPlugins;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DisallowedPlugins).ArrayMax;
  iVar9 = (param_1->DisallowedPlugins).ArrayNum;
  pFVar10 = (param_1->DisallowedPlugins).AllocatorInstance.Data;
  (this->DisallowedPlugins).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar6->AllocatorInstance,iVar9,piVar1);
    ConstructItems<FPluginDisallowedDescriptor,FPluginDisallowedDescriptor,int>
              ((pTVar6->AllocatorInstance).Data,(FPluginDisallowedDescriptor *)pFVar10,iVar9);
  }
  return this;
}

// FPluginDescriptor @ 141e0d9a0

FPluginDescriptor * __thiscall FPluginDescriptor::FPluginDescriptor(FPluginDescriptor *this)

{
  this->VerseScope = PublicUser;
  this->Version = 0;
  (this->VersionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersionName).Data.ArrayNum = 0;
  (this->VersionName).Data.ArrayMax = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = 0;
  (this->Category).Data.ArrayMax = 0;
  (this->CreatedBy).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedBy).Data.ArrayNum = 0;
  (this->CreatedBy).Data.ArrayMax = 0;
  (this->CreatedByURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedByURL).Data.ArrayNum = 0;
  (this->CreatedByURL).Data.ArrayMax = 0;
  (this->DocsURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DocsURL).Data.ArrayNum = 0;
  (this->DocsURL).Data.ArrayMax = 0;
  (this->MarketplaceURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarketplaceURL).Data.ArrayNum = 0;
  (this->MarketplaceURL).Data.ArrayMax = 0;
  (this->SupportURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportURL).Data.ArrayNum = 0;
  (this->SupportURL).Data.ArrayMax = 0;
  (this->EngineVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineVersion).Data.ArrayNum = 0;
  (this->EngineVersion).Data.ArrayMax = 0;
  (this->EditorCustomVirtualPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorCustomVirtualPath).Data.ArrayNum = 0;
  (this->EditorCustomVirtualPath).Data.ArrayMax = 0;
  (this->SupportedTargetPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedTargetPlatforms).ArrayNum = 0;
  (this->SupportedTargetPlatforms).ArrayMax = 0;
  (this->SupportedPrograms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedPrograms).ArrayNum = 0;
  (this->SupportedPrograms).ArrayMax = 0;
  (this->ParentPluginName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPluginName).Data.ArrayNum = 0;
  (this->ParentPluginName).Data.ArrayMax = 0;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->LocalizationTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizationTargets).ArrayNum = 0;
  (this->LocalizationTargets).ArrayMax = 0;
  (this->VersePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VersePath).Data.ArrayNum = 0;
  (this->VersePath).Data.ArrayMax = 0;
  (this->DeprecatedEngineVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeprecatedEngineVersion).Data.ArrayNum = 0;
  (this->DeprecatedEngineVersion).Data.ArrayMax = 0;
  (this->VerseVersion).bIsSet = false;
  this->bEnableSceneGraph = false;
  this->bEnableVerseAssetReflection = false;
  this->bEnableIAD = false;
  this->EnabledByDefault = Unspecified;
  this->bCanContainContent = false;
  this->bCanContainVerse = false;
  this->bIsBetaVersion = false;
  this->bIsExperimentalVersion = false;
  this->bInstalled = false;
  this->bRequiresBuildPlatform = false;
  this->bIsHidden = false;
  this->bIsSealed = false;
  this->bNoCode = false;
  this->bExplicitlyLoaded = false;
  this->bHasExplicitPlatforms = false;
  this->bIsPluginExtension = false;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x8 = 0;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x20 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x28 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x34 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x40 = 0;
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x8 = 0;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x20 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x28 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x2c = 0x80;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x34 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x40 = 0;
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  (this->Plugins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Plugins).ArrayNum = 0;
  (this->Plugins).ArrayMax = 0;
  (this->DisallowedPlugins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisallowedPlugins).ArrayNum = 0;
  (this->DisallowedPlugins).ArrayMax = 0;
  return this;
}

// ~FPluginDescriptor @ 141e0f340

void __thiscall FPluginDescriptor::~FPluginDescriptor(FPluginDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FPluginDisallowedDescriptor,int>
            ((FPluginDisallowedDescriptor *)(this->DisallowedPlugins).AllocatorInstance.Data,
             (this->DisallowedPlugins).ArrayNum);
  pFVar1 = (this->DisallowedPlugins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPluginReferenceDescriptor,int>
            ((FPluginReferenceDescriptor *)(this->Plugins).AllocatorInstance.Data,
             (this->Plugins).ArrayNum);
  pFVar1 = (this->Plugins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PostBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PostBuildSteps).HostPlatformToCommands.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PostBuildSteps);
  *(undefined4 *)&(this->PreBuildSteps).HostPlatformToCommands.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PreBuildSteps).HostPlatformToCommands.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreBuildSteps);
  pFVar1 = (this->DeprecatedEngineVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VersePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLocalizationTargetDescriptor,int>
            ((FLocalizationTargetDescriptor *)(this->LocalizationTargets).AllocatorInstance.Data,
             (this->LocalizationTargets).ArrayNum);
  pFVar1 = (this->LocalizationTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FModuleDescriptor,int>
            ((FModuleDescriptor *)(this->Modules).AllocatorInstance.Data,(this->Modules).ArrayNum);
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentPluginName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SupportedPrograms).AllocatorInstance.Data,
             (this->SupportedPrograms).ArrayNum);
  pFVar1 = (this->SupportedPrograms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SupportedTargetPlatforms).AllocatorInstance.Data,
             (this->SupportedTargetPlatforms).ArrayNum);
  pFVar1 = (this->SupportedTargetPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EditorCustomVirtualPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SupportURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarketplaceURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DocsURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreatedByURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreatedBy).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VersionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 141e0fea0

FPluginDescriptor * __thiscall
FPluginDescriptor::operator=(FPluginDescriptor *this,FPluginDescriptor *param_1)

{
  int *piVar1;
  TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FModuleDescriptor *pFVar6;
  FLocalizationTargetDescriptor *pFVar7;
  FScriptContainerElement *pFVar8;
  
  this->Version = param_1->Version;
  ::FString::operator=(&this->VersionName,&param_1->VersionName);
  ::FString::operator=(&this->FriendlyName,&param_1->FriendlyName);
  ::FString::operator=(&this->Description,&param_1->Description);
  ::FString::operator=(&this->Category,&param_1->Category);
  ::FString::operator=(&this->CreatedBy,&param_1->CreatedBy);
  ::FString::operator=(&this->CreatedByURL,&param_1->CreatedByURL);
  ::FString::operator=(&this->DocsURL,&param_1->DocsURL);
  ::FString::operator=(&this->MarketplaceURL,&param_1->MarketplaceURL);
  ::FString::operator=(&this->SupportURL,&param_1->SupportURL);
  ::FString::operator=(&this->EngineVersion,&param_1->EngineVersion);
  ::FString::operator=(&this->EditorCustomVirtualPath,&param_1->EditorCustomVirtualPath);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->SupportedTargetPlatforms,&param_1->SupportedTargetPlatforms);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->SupportedPrograms,&param_1->SupportedPrograms);
  ::FString::operator=(&this->ParentPluginName,&param_1->ParentPluginName);
  pTVar2 = &this->Modules;
  if (pTVar2 != &param_1->Modules) {
    DestructItems<FModuleDescriptor,int>
              ((FModuleDescriptor *)(pTVar2->AllocatorInstance).Data,(this->Modules).ArrayNum);
    iVar5 = (param_1->Modules).ArrayNum;
    piVar1 = &(this->Modules).ArrayMax;
    pFVar6 = (FModuleDescriptor *)(param_1->Modules).AllocatorInstance.Data;
    (this->Modules).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x168,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FModuleDescriptor,FModuleDescriptor,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pTVar3 = &this->LocalizationTargets;
  if (pTVar3 != &param_1->LocalizationTargets) {
    DestructItems<FLocalizationTargetDescriptor,int>
              ((FLocalizationTargetDescriptor *)(pTVar3->AllocatorInstance).Data,
               (this->LocalizationTargets).ArrayNum);
    iVar5 = (param_1->LocalizationTargets).ArrayNum;
    piVar1 = &(this->LocalizationTargets).ArrayMax;
    pFVar7 = (FLocalizationTargetDescriptor *)(param_1->LocalizationTargets).AllocatorInstance.Data;
    (this->LocalizationTargets).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FLocalizationTargetDescriptor,FLocalizationTargetDescriptor,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  ::FString::operator=(&this->VersePath,&param_1->VersePath);
  ::FString::operator=(&this->DeprecatedEngineVersion,&param_1->DeprecatedEngineVersion);
  this->VerseScope = param_1->VerseScope;
  if (&param_1->VerseVersion != &this->VerseVersion) {
    if ((param_1->VerseVersion).bIsSet == false) {
      if ((this->VerseVersion).bIsSet != false) {
        (this->VerseVersion).bIsSet = false;
      }
    }
    else {
      (this->VerseVersion).TypedValue = (param_1->VerseVersion).TypedValue;
      (this->VerseVersion).bIsSet = true;
    }
  }
  this->bEnableSceneGraph = param_1->bEnableSceneGraph;
  this->bEnableVerseAssetReflection = param_1->bEnableVerseAssetReflection;
  this->bEnableIAD = param_1->bEnableIAD;
  this->EnabledByDefault = param_1->EnabledByDefault;
  this->bCanContainContent = param_1->bCanContainContent;
  this->bCanContainVerse = param_1->bCanContainVerse;
  this->bIsBetaVersion = param_1->bIsBetaVersion;
  this->bIsExperimentalVersion = param_1->bIsExperimentalVersion;
  this->bInstalled = param_1->bInstalled;
  this->bRequiresBuildPlatform = param_1->bRequiresBuildPlatform;
  this->bIsHidden = param_1->bIsHidden;
  this->bIsSealed = param_1->bIsSealed;
  this->bNoCode = param_1->bNoCode;
  this->bExplicitlyLoaded = param_1->bExplicitlyLoaded;
  this->bHasExplicitPlatforms = param_1->bHasExplicitPlatforms;
  this->bIsPluginExtension = param_1->bIsPluginExtension;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->PreBuildSteps,
              (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->PreBuildSteps);
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->PostBuildSteps,
              (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&param_1->PostBuildSteps);
  TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_>::operator=
            (&this->Plugins,&param_1->Plugins);
  pTVar4 = &this->DisallowedPlugins;
  if (pTVar4 != &param_1->DisallowedPlugins) {
    DestructItems<FPluginDisallowedDescriptor,int>
              ((FPluginDisallowedDescriptor *)(pTVar4->AllocatorInstance).Data,
               (this->DisallowedPlugins).ArrayNum);
    iVar5 = (param_1->DisallowedPlugins).ArrayNum;
    piVar1 = &(this->DisallowedPlugins).ArrayMax;
    pFVar8 = (param_1->DisallowedPlugins).AllocatorInstance.Data;
    (this->DisallowedPlugins).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FPluginDisallowedDescriptor,FPluginDisallowedDescriptor,int>
                ((pTVar4->AllocatorInstance).Data,(FPluginDisallowedDescriptor *)pFVar8,iVar5);
    }
  }
  return this;
}

// GetFileExtension @ 141e24b10

FString * __cdecl FPluginDescriptor::GetFileExtension(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&Extension,L".uplugin");
      atexit(`FPluginDescriptor::GetFileExtension'::__l2::
             _dynamic_atexit_destructor_for__Extension__);
      _Init_thread_footer(&::_TSS0);
      return &Extension;
    }
  }
  return &Extension;
}

// Load @ 141e27050

bool __thiscall FPluginDescriptor::Load(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = Load(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = Load(this,L"",param_2);
  return bVar1;
}

// Load @ 141e27070

bool __thiscall FPluginDescriptor::Load(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = Load(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = Load(this,L"",param_2);
  return bVar1;
}

// Load @ 141e27090

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FPluginDescriptor::Load(FPluginDescriptor *this,wchar_t *param_1,FText *param_2)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int iVar7;
  FString local_78;
  TStringView<wchar_t> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &CustomPluginDescriptorReaderDelegate,&local_28);
  if (((CustomPluginDescriptorReaderDelegate._16_4_ == 0) ||
      (CustomPluginDescriptorReaderDelegate._8_8_ == 0)) ||
     (cVar1 = (**(code **)(*(longlong *)CustomPluginDescriptorReaderDelegate._8_8_ + 0x38))(),
     cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    iVar7 = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    bVar2 = FFileHelper::LoadFileToString(&local_78,param_1,None,0);
    if (bVar2) {
      bVar2 = Read(this,&local_78,param_2);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (param_2 != (FText *)0x0) {
        local_68.DataPtr = param_1;
        if (param_1 != (wchar_t *)0x0) {
          sVar3 = wcslen(param_1);
          iVar7 = (int)sVar3;
        }
        local_68.Size = iVar7;
        pFVar4 = FText::FromStringView(&local_38,&local_68);
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"PluginDescriptor",L"FailedToLoadDescriptorFile",
                            L"Failed to open descriptor file \'{0}\'");
        pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar5,Default);
        pFVar4 = FText::Format<FText>(&local_58,pFVar6,pFVar4);
        FText::operator=(param_2,pFVar4);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      bVar2 = false;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar2 = ReadWithCustomPluginDescriptorReader(this,param_1,param_2);
  }
  return bVar2;
}

// Read @ 141e2d420

bool __thiscall FPluginDescriptor::Read(FPluginDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FPluginDescriptor>(param_1,this,param_2);
  return bVar1;
}

// Read @ 141e2d440

bool __thiscall FPluginDescriptor::Read(FPluginDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FPluginDescriptor>(param_1,this,param_2);
  return bVar1;
}

// Read @ 141e2d460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FPluginDescriptor::Read(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ulonglong uVar10;
  undefined1 auStack_1f8 [32];
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStack_1d8;
  TOptional<FText>_u_0 TStack_1d0;
  FScriptContainerElement *pFStack_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *pFStack_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  undefined8 uStack_190;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_188;
  TStringView<wchar_t> TStack_178;
  TStringView<wchar_t> TStack_168;
  FText FStack_158;
  FText FStack_148;
  FString FStack_138;
  FText FStack_128;
  FTextFormat FStack_118;
  Number NStack_108;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined8 uStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  void *pvStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  Data DStack_98;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  void *pvStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFStack_1b8 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_1b0 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_1b0 = 0;
  }
  TStack_178._12_4_ = uStack_1ac;
  TStack_178.Size = iStack_1b0;
  TStack_178.DataPtr = (wchar_t *)pFStack_1b8;
  UE::Json::Parse((TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
                   *)&NStack_108.i,&TStack_178);
  uVar10 = (ulonglong)bStack_a8;
  if (2 < uVar10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) != '\0') {
    if (param_2 != (FText *)0x0) {
      if (bStack_a8 != 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFStack_1a8 = (param_1->Data).AllocatorInstance.Data;
      iVar1 = (param_1->Data).ArrayNum;
      iStack_1a0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_1a0 = 0;
      }
      TStack_168._12_4_ = uStack_19c;
      TStack_168.Size = iStack_1a0;
      TStack_168.DataPtr = (wchar_t *)pFStack_1a8;
      pFVar6 = UE::Json::FParseError::CreateMessage
                         ((FParseError *)&NStack_108.i,&FStack_138,&TStack_168);
      pFVar7 = FText::FromString(&FStack_128,pFVar6);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_148,L"PluginDescriptor",L"FailedToReadDescriptorFile",
                          L"Failed to read file. {0}");
      pFVar9 = FTextFormat::FTextFormat(&FStack_118,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&FStack_158,pFVar9,pFVar7);
      FText::operator=(param_2,pFVar7);
      if (FStack_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_158.TextData.Reference + 0x10))();
      }
      if (FStack_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_148.TextData.Reference + 0x10))();
      }
      if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
    goto LAB_141e2d7c8;
  }
  if (bStack_a8 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  DStack_98.s.str = (wchar_t *)CONCAT26(uStack_fa,uStack_100);
  uStack_88 = uStack_f8;
  pvStack_80 = pvStack_f0;
  uStack_78 = uStack_e8;
  pvStack_70 = pvStack_e0;
  pvStack_68 = pvStack_d8;
  DStack_98.n = NStack_108;
  uStack_60 = uStack_d0;
  uStack_58 = uStack_c8;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_fa = 0;
  uStack_50 = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  pvStack_e0 = (void *)0x0;
  pvStack_d8 = (void *)0x0;
  uStack_d0 = 0;
  lStack_48 = lStack_b8;
  uStack_40 = uStack_b0;
  lStack_b8 = (ulonglong)uStack_194 << 0x20;
  uStack_f8 = 0;
  pvStack_f0 = (void *)0x0;
  uStack_b0 = 0;
  if (2 < bStack_a8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bStack_a8])(&NStack_108);
  bStack_a8 = 2;
  UE::Json::GetRootObject
            (&TStack_188,
             (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              *)&DStack_98.s);
  if (TStack_188.bIsSet == false) {
LAB_141e2d778:
    bVar3 = false;
  }
  else {
    pGStack_1d8 = TStack_188.TypedValue.value_;
    UE::Projects::Private::Read
              ((TOptional<FText> *)&TStack_1d0.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &pGStack_1d8,this);
    if (TStack_1d0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      if (param_2 != (FText *)0x0) {
        FText::operator=(param_2,&TStack_1d0.TypedValue);
      }
      if (TStack_1d0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)TStack_1d0.TypedValue.TextData.Reference + 0x10))();
      }
      goto LAB_141e2d778;
    }
    bVar3 = true;
  }
  if (pvStack_80 != (void *)0x0) {
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &DStack_98.s);
    DStack_98.n.i64 = (Number)0x0;
    DStack_98.s.str = (wchar_t *)0x0;
  }
  ::operator_delete(pvStack_80,1);
  free(pvStack_68);
  ::operator_delete(pvStack_70,1);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &DStack_98.s);
LAB_141e2d7c8:
  uVar10 = (ulonglong)bStack_a8;
  if (2 < bStack_a8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar10])(&NStack_108);
  return bVar3;
}

// Read @ 141e2d470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FPluginDescriptor::Read(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ulonglong uVar10;
  undefined1 auStack_1f8 [32];
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_1d8;
  TOptional<FText>_u_0 local_1d0;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  uint uStack_194;
  undefined8 uStack_190;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  FText local_158;
  FText local_148;
  FString local_138;
  FText local_128;
  FTextFormat local_118;
  Number local_108;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined8 local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  byte local_a8;
  Data local_98;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1b8 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_1b0 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_1b0 = 0;
  }
  local_178._12_4_ = uStack_1ac;
  local_178.Size = iStack_1b0;
  local_178.DataPtr = (wchar_t *)local_1b8;
  UE::Json::Parse((TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
                   *)&local_108.i,&local_178);
  uVar10 = (ulonglong)local_a8;
  if (2 < uVar10) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10) != '\0') {
    if (param_2 != (FText *)0x0) {
      if (local_a8 != 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_1a8 = (param_1->Data).AllocatorInstance.Data;
      iVar1 = (param_1->Data).ArrayNum;
      iStack_1a0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_1a0 = 0;
      }
      local_168._12_4_ = uStack_19c;
      local_168.Size = iStack_1a0;
      local_168.DataPtr = (wchar_t *)local_1a8;
      pFVar6 = UE::Json::FParseError::CreateMessage
                         ((FParseError *)&local_108.i,&local_138,&local_168);
      pFVar7 = FText::FromString(&local_128,pFVar6);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_148,L"PluginDescriptor",L"FailedToReadDescriptorFile",
                          L"Failed to read file. {0}");
      pFVar9 = FTextFormat::FTextFormat(&local_118,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_158,pFVar9,pFVar7);
      FText::operator=(param_2,pFVar7);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
    goto LAB_141e2d7c8;
  }
  if (local_a8 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_98.s.str = (wchar_t *)CONCAT26(uStack_fa,uStack_100);
  local_88 = local_f8;
  local_80 = pvStack_f0;
  local_78 = local_e8;
  local_70 = pvStack_e0;
  local_68 = local_d8;
  local_98.n = local_108;
  local_60 = uStack_d0;
  local_58 = local_c8;
  local_198 = 0;
  uStack_190 = 0;
  uStack_fa = 0;
  local_50 = uStack_c0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_e8 = 0;
  pvStack_e0 = (void *)0x0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_48 = local_b8;
  uStack_40 = uStack_b0;
  local_b8 = (ulonglong)uStack_194 << 0x20;
  local_f8 = 0;
  pvStack_f0 = (void *)0x0;
  uStack_b0 = 0;
  if (2 < local_a8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a8])(&local_108);
  local_a8 = 2;
  UE::Json::GetRootObject
            (&local_188,
             (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              *)&local_98.s);
  if (local_188.bIsSet == false) {
LAB_141e2d778:
    bVar3 = false;
  }
  else {
    local_1d8 = local_188.TypedValue.value_;
    UE::Projects::Private::Read
              ((TOptional<FText> *)&local_1d0.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_1d8,this);
    if (local_1d0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      if (param_2 != (FText *)0x0) {
        FText::operator=(param_2,&local_1d0.TypedValue);
      }
      if (local_1d0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1d0.TypedValue.TextData.Reference + 0x10))();
      }
      goto LAB_141e2d778;
    }
    bVar3 = true;
  }
  if (local_80 != (void *)0x0) {
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_98.s);
    local_98.n.i64 = (Number)0x0;
    local_98.s.str = (wchar_t *)0x0;
  }
  ::operator_delete(local_80,1);
  free(local_68);
  ::operator_delete(local_70,1);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_98.s);
LAB_141e2d7c8:
  uVar10 = (ulonglong)local_a8;
  if (2 < local_a8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar10])(&local_108);
  return bVar3;
}

// ReadWithCustomPluginDescriptorReader @ 141e333a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPluginDescriptor::ReadWithCustomPluginDescriptorReader
          (FPluginDescriptor *this,wchar_t *param_1,FText *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  size_t sVar9;
  longlong *plVar10;
  int iVar11;
  char local_res20 [8];
  FJsonObject *local_1e8;
  FSharedReferencer<1> local_1e0;
  FString local_1d8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_1c8;
  TOptional<FText>_u_0 local_1c0;
  undefined8 local_1b0;
  FSharedReferencer<1> local_1a8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_1a0;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TSharedRef<FJsonObject,1> local_178;
  FText local_168;
  FText local_158;
  TSharedRef<FJsonObject,1> local_148;
  TStringView<wchar_t> local_138;
  FText local_128;
  FText local_118;
  FReadAccessScope local_108;
  Data local_e8;
  void *local_d0;
  void *local_c0;
  void *local_b8;
  char local_88;
  FReadAccessScope local_78;
  FText local_60;
  FTextFormat local_50;
  FText local_40;
  FTextFormat local_30;
  
  pTVar5 = MakeShared<FJsonObject,1>(&local_178);
  local_1e8 = pTVar5->Object;
  local_1e0.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_1e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_res20[0] = '\x01';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &CustomPluginDescriptorReaderDelegate,&local_108);
  iVar11 = 0;
  if (((CustomPluginDescriptorReaderDelegate._16_4_ == 0) ||
      (CustomPluginDescriptorReaderDelegate._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)CustomPluginDescriptorReaderDelegate._8_8_ + 0x38))(),
     cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
LAB_141e334e9:
    if (local_1e8 == (FJsonObject *)0x0) {
      if (local_res20[0] != '\0') goto LAB_141e3368e;
    }
    else {
      if (local_res20[0] == '\0') {
        if ((local_1e8 == (FJsonObject *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        UE::Json::ConvertSharedJsonToRapidJsonDocument
                  ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                    *)&local_e8.s,local_1e8);
        if (local_88 == '\0') {
          if (param_2 != (FText *)0x0) {
            pFVar6 = FText::FromString(&local_60,param_1);
            pFVar7 = FText::AsLocalizable_Advanced_LocText
                               (&local_158,L"PluginDescriptor",L"InvalidDescriptorFile",
                                L"Internal error or malformed plugin descriptor file. {0}");
            pFVar8 = FTextFormat::FTextFormat(&local_50,pFVar7,Default);
            pFVar6 = FText::Format<FText>(&local_168,pFVar8,pFVar6);
            FText::operator=(param_2,pFVar6);
            local_1c0.TypedValue.TextData.Reference =
                 (TRefCountPtr<ITextData>)local_158.TextData.Reference;
            if (local_168.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
              local_1c0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)local_158.TextData.Reference;
            }
LAB_141e335be:
            if (local_1c0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_1c0.TypedValue.TextData.Reference + 0x10))
                        ();
            }
          }
LAB_141e335c9:
          bVar3 = false;
        }
        else {
          UE::Json::GetRootObject
                    (&local_1a0,
                     (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                      *)&local_e8.s);
          if (local_1a0.bIsSet == false) goto LAB_141e335c9;
          local_1c8 = local_1a0.TypedValue.value_;
          UE::Projects::Private::Read
                    ((TOptional<FText> *)&local_1c0.TypedValue,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_1c8,this);
          if (local_1c0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            if (param_2 != (FText *)0x0) {
              FText::operator=(param_2,&local_1c0.TypedValue);
            }
            goto LAB_141e335be;
          }
          bVar3 = true;
        }
        if (local_88 != '\0') {
          if (local_d0 != (void *)0x0) {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_e8.s);
            local_e8.n.i64 = (Number)0x0;
            local_e8.s.str = (wchar_t *)0x0;
          }
          ::operator_delete(local_d0,1);
          free(local_b8);
          ::operator_delete(local_c0,1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_e8.s);
        }
        goto LAB_141e334af;
      }
LAB_141e3368e:
      pTVar5 = MakeShared<FJsonObject,1>(&local_148);
      local_1a8.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
      local_1e8 = pTVar5->Object;
      if (local_1a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1a8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1a8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1e0,&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      bVar3 = FFileHelper::LoadFileToString(&local_1d8,param_1,None,0);
      if (bVar3) {
        bVar3 = Read(this,&local_1d8,param_2);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        goto LAB_141e334af;
      }
      if (param_2 != (FText *)0x0) {
        local_188 = param_1;
        if (param_1 != (wchar_t *)0x0) {
          sVar9 = wcslen(param_1);
          iVar11 = (int)sVar9;
        }
        local_138._12_4_ = uStack_17c;
        local_138.Size = iVar11;
        local_138.DataPtr = local_188;
        iStack_180 = iVar11;
        pFVar6 = FText::FromStringView(&local_40,&local_138);
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_118,L"PluginDescriptor",L"FailedToLoadDescriptorFile",
                            L"Failed to open descriptor file \'{0}\'");
        pFVar8 = FTextFormat::FTextFormat(&local_30,pFVar7,Default);
        pFVar6 = FText::Format<FText>(&local_128,pFVar8,pFVar6);
        FText::operator=(param_2,pFVar6);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    local_res20[0] = '\0';
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &CustomPluginDescriptorReaderDelegate,&local_78);
    plVar10 = (longlong *)0x0;
    if (CustomPluginDescriptorReaderDelegate._16_4_ != 0) {
      plVar10 = (longlong *)CustomPluginDescriptorReaderDelegate._8_8_;
    }
    cVar2 = (**(code **)(*plVar10 + 0x60))(plVar10,param_1,param_2,&local_1e8,local_res20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if ((cVar2 != '\0') || (local_res20[0] != '\0')) goto LAB_141e334e9;
  }
  bVar3 = false;
LAB_141e334af:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.ReferenceController);
  return bVar3;
}

// Save @ 141e36600

bool __thiscall FPluginDescriptor::Save(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = Save(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = Save(this,L"",param_2);
  return bVar1;
}

// Save @ 141e36620

bool __thiscall FPluginDescriptor::Save(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = Save(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = Save(this,L"",param_2);
  return bVar1;
}

// Save @ 141e36640

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FPluginDescriptor::Save(FPluginDescriptor *this,wchar_t *param_1,FText *param_2)

{
  bool bVar1;
  IFileManager *pIVar2;
  size_t sVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int iVar7;
  FString local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  Write(this,&local_68);
  pIVar2 = IFileManager::Get();
  iVar7 = 0;
  local_58.Size = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_58.Size = iVar7;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  bVar1 = FFileHelper::SaveStringToFile(&local_58,param_1,AutoDetect,pIVar2,0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (param_2 != (FText *)0x0) {
      local_58.DataPtr = param_1;
      if (param_1 != (wchar_t *)0x0) {
        sVar3 = wcslen(param_1);
        iVar7 = (int)sVar3;
      }
      local_58.Size = iVar7;
      pFVar4 = FText::FromStringView(&local_28,&local_58);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PluginDescriptor",L"FailedToWriteDescriptorFile",
                          L"Failed to write plugin descriptor file \'{0}\'. Perhaps the file is Read-Only?"
                         );
      pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
      pFVar4 = FText::Format<FText>(&local_48,pFVar6,pFVar4);
      FText::operator=(param_2,pFVar4);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    bVar1 = false;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SupportsTargetPlatform @ 141e37d40

bool __thiscall FPluginDescriptor::SupportsTargetPlatform(FPluginDescriptor *this,FString *param_1)

{
  bool bVar1;
  
  if (this->bHasExplicitPlatforms != false) {
    bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (&this->SupportedTargetPlatforms,param_1);
    return bVar1;
  }
  if ((this->SupportedTargetPlatforms).ArrayNum != 0) {
    bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (&this->SupportedTargetPlatforms,param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// UpdateJson @ 141e418c0

void __thiscall FPluginDescriptor::UpdateJson(FPluginDescriptor *this,FJsonObject *param_1)

{
  Type TVar1;
  EPluginEnabledByDefault EVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  TJsonValueString<wchar_t> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  wchar_t *pwVar12;
  TJsonValueString<wchar_t> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  FJsonObject *local_res10;
  undefined1 local_res18 [8];
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_res20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_7a8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_798;
  TSharedPtr<FJsonValue,1> local_788;
  TSharedPtr<FJsonValue,1> local_778;
  undefined1 local_768 [8];
  FDelegateAllocation local_760;
  undefined1 local_750 [8];
  FDelegateAllocation local_748;
  undefined1 local_738 [8];
  FDelegateAllocation local_730;
  undefined1 local_720 [8];
  FDelegateAllocation local_718;
  undefined1 local_708 [8];
  FDelegateAllocation local_700;
  undefined1 local_6f0 [8];
  FDelegateAllocation local_6e8;
  undefined1 local_6d8 [8];
  FDelegateAllocation local_6d0;
  undefined1 local_6c0 [8];
  FDelegateAllocation local_6b8;
  undefined1 local_6a8 [8];
  FDelegateAllocation local_6a0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_690;
  TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_688;
  TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_670;
  TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_658;
  wchar_t *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  FString local_628;
  wchar_t *local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  FString local_608;
  wchar_t *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  FString local_5e8;
  wchar_t *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  FString local_5c8;
  wchar_t *local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  FString local_5a8;
  wchar_t *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  FString local_588;
  wchar_t *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  FString local_568;
  wchar_t *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  FString local_548;
  wchar_t *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  FString local_528;
  FString local_518;
  wchar_t *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  wchar_t *local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  FString local_498;
  wchar_t *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  FString local_478;
  wchar_t *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  FString local_458;
  FString local_448;
  FString local_438;
  wchar_t *local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  FString local_418;
  wchar_t *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  FString local_3f8;
  wchar_t *local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  FString local_3d8;
  wchar_t *local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FString local_3b8;
  wchar_t *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FDestructionSentinel local_2a8;
  FDelegateAllocation *local_290;
  FDestructionSentinel local_288;
  FDelegateAllocation *local_270;
  FDestructionSentinel local_268;
  FDelegateAllocation *local_250;
  FDestructionSentinel local_248;
  FDelegateAllocation *local_230;
  FDestructionSentinel local_228;
  FDelegateAllocation *local_210;
  FDestructionSentinel local_208;
  FDelegateAllocation *local_1f0;
  FDestructionSentinel local_1e8;
  FDelegateAllocation *local_1d0;
  FDestructionSentinel local_1c8;
  FDelegateAllocation *local_1b0;
  FDestructionSentinel local_1a8;
  FDelegateAllocation *local_190;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  
  local_res10 = param_1;
  ::FString::FString(&local_368,L"FileVersion");
  FJsonObject::SetNumberField(param_1,&local_368,__real_4008000000000000);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  iVar3 = this->Version;
  ::FString::FString(&local_358,L"Version");
  FJsonObject::SetNumberField(param_1,&local_358,(double)iVar3);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_348,L"VersionName");
  FJsonObject::SetStringField(param_1,&local_348,&this->VersionName);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_338,L"FriendlyName");
  FJsonObject::SetStringField(param_1,&local_338,&this->FriendlyName);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_328,L"Description");
  FJsonObject::SetStringField(param_1,&local_328,&this->Description);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_318,L"Category");
  FJsonObject::SetStringField(param_1,&local_318,&this->Category);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_308,L"CreatedBy");
  FJsonObject::SetStringField(param_1,&local_308,&this->CreatedBy);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2f8,L"CreatedByURL");
  FJsonObject::SetStringField(param_1,&local_2f8,&this->CreatedByURL);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2e8,L"DocsURL");
  FJsonObject::SetStringField(param_1,&local_2e8,&this->DocsURL);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2d8,L"MarketplaceURL");
  FJsonObject::SetStringField(param_1,&local_2d8,&this->MarketplaceURL);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2c8,L"SupportURL");
  FJsonObject::SetStringField(param_1,&local_2c8,&this->SupportURL);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  iVar3 = (this->EngineVersion).Data.ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (iVar7 < 1) {
    uStack_630 = 0xd;
    local_638 = L"EngineVersion";
    local_158._12_4_ = uStack_62c;
    local_158.Size = 0xd;
    local_158.DataPtr = L"EngineVersion";
    FJsonObject::RemoveField(param_1,&local_158);
  }
  else {
    ::FString::FString(&local_2b8,L"EngineVersion");
    FJsonObject::SetStringField(param_1,&local_2b8,&this->EngineVersion);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = (this->EditorCustomVirtualPath).Data.ArrayNum;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (iVar7 < 1) {
    uStack_610 = 0x17;
    local_618 = L"EditorCustomVirtualPath";
    local_118._12_4_ = uStack_60c;
    local_118.Size = 0x17;
    local_118.DataPtr = L"EditorCustomVirtualPath";
    FJsonObject::RemoveField(param_1,&local_118);
  }
  else {
    ::FString::FString(&local_628,L"EditorCustomVirtualPath");
    FJsonObject::SetStringField(param_1,&local_628,&this->EditorCustomVirtualPath);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  if ((this->VersePath).Data.ArrayNum < 2) {
    uStack_5f0 = 9;
    local_5f8 = L"VersePath";
    local_108._12_4_ = uStack_5ec;
    local_108.Size = 9;
    local_108.DataPtr = L"VersePath";
    FJsonObject::RemoveField(param_1,&local_108);
  }
  else {
    ::FString::FString(&local_608,L"VersePath");
    FJsonObject::SetStringField(param_1,&local_608,&this->VersePath);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
  }
  TVar1 = this->VerseScope;
  if (TVar1 == PublicUser) {
    uStack_5d0 = 10;
    local_5d8 = L"VerseScope";
    local_e8._12_4_ = uStack_5cc;
    local_e8.Size = 10;
    local_e8.DataPtr = L"VerseScope";
    FJsonObject::RemoveField(param_1,&local_e8);
  }
  else {
    if (TVar1 == PublicAPI) {
      pwVar12 = L"PublicAPI";
    }
    else if (TVar1 == InternalAPI) {
      pwVar12 = L"InternalAPI";
    }
    else if (TVar1 == PublicUser) {
      pwVar12 = L"PublicUser";
    }
    else if (TVar1 == InternalUser) {
      pwVar12 = L"InternalUser";
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5564663884733743066>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\VerseScope.cpp"
                         ,0x26,"false");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pwVar12 = L"<unknown>";
    }
    ::FString::FString(&local_5e8,L"VerseScope");
    pFVar8 = ::FString::FString(&local_f8,pwVar12);
    FJsonObject::SetStringField(param_1,&local_5e8,pFVar8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->VerseVersion).bIsSet == false) {
    uStack_5b0 = 0xc;
    local_5b8 = L"VerseVersion";
    local_d8._12_4_ = uStack_5ac;
    local_d8.Size = 0xc;
    local_d8.DataPtr = L"VerseVersion";
    FJsonObject::RemoveField(param_1,&local_d8);
  }
  else {
    uVar4 = (this->VerseVersion).TypedValue;
    ::FString::FString(&local_5c8,L"VerseVersion");
    FJsonObject::SetNumberField(param_1,&local_5c8,(double)uVar4);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bEnableSceneGraph;
  if (bVar6 == false) {
    uStack_590 = 0x10;
    local_598 = L"EnableSceneGraph";
    local_c8._12_4_ = uStack_58c;
    local_c8.Size = 0x10;
    local_c8.DataPtr = L"EnableSceneGraph";
    FJsonObject::RemoveField(param_1,&local_c8);
  }
  else {
    ::FString::FString(&local_5a8,L"EnableSceneGraph");
    FJsonObject::SetBoolField(param_1,&local_5a8,bVar6);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bEnableVerseAssetReflection;
  if (bVar6 == false) {
    uStack_570 = 0x1a;
    local_578 = L"EnableVerseAssetReflection";
    local_b8._12_4_ = uStack_56c;
    local_b8.Size = 0x1a;
    local_b8.DataPtr = L"EnableVerseAssetReflection";
    FJsonObject::RemoveField(param_1,&local_b8);
  }
  else {
    ::FString::FString(&local_588,L"EnableVerseAssetReflection");
    FJsonObject::SetBoolField(param_1,&local_588,bVar6);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bEnableIAD;
  if (bVar6 == false) {
    uStack_550 = 9;
    local_558 = L"EnableIAD";
    local_a8._12_4_ = uStack_54c;
    local_a8.Size = 9;
    local_a8.DataPtr = L"EnableIAD";
    FJsonObject::RemoveField(param_1,&local_a8);
  }
  else {
    ::FString::FString(&local_568,L"EnableIAD");
    FJsonObject::SetBoolField(param_1,&local_568,bVar6);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  EVar2 = this->EnabledByDefault;
  if (EVar2 == Unspecified) {
    uStack_530 = 0x10;
    local_538 = L"EnabledByDefault";
    local_98._12_4_ = uStack_52c;
    local_98.Size = 0x10;
    local_98.DataPtr = L"EnabledByDefault";
    FJsonObject::RemoveField(param_1,&local_98);
  }
  else {
    ::FString::FString(&local_548,L"EnabledByDefault");
    FJsonObject::SetBoolField(param_1,&local_548,EVar2 == Enabled);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bCanContainContent;
  ::FString::FString(&local_528,L"CanContainContent");
  FJsonObject::SetBoolField(param_1,&local_528,bVar6);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  bVar6 = this->bCanContainVerse;
  if (bVar6 == false) {
    uStack_500 = 0xf;
    local_508 = L"CanContainVerse";
    local_88._12_4_ = uStack_4fc;
    local_88.Size = 0xf;
    local_88.DataPtr = L"CanContainVerse";
    FJsonObject::RemoveField(param_1,&local_88);
  }
  else {
    ::FString::FString(&local_518,L"CanContainVerse");
    FJsonObject::SetBoolField(param_1,&local_518,bVar6);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bNoCode;
  if (bVar6 != false) {
    ::FString::FString(&local_4f8,L"NoCode");
    FJsonObject::SetBoolField(param_1,&local_4f8,bVar6);
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bIsBetaVersion;
  ::FString::FString(&local_4e8,L"IsBetaVersion");
  FJsonObject::SetBoolField(param_1,&local_4e8,bVar6);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  bVar6 = this->bIsExperimentalVersion;
  ::FString::FString(&local_4d8,L"IsExperimentalVersion");
  FJsonObject::SetBoolField(param_1,&local_4d8,bVar6);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  bVar6 = this->bInstalled;
  ::FString::FString(&local_4c8,L"Installed");
  FJsonObject::SetBoolField(param_1,&local_4c8,bVar6);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  iVar3 = (this->SupportedTargetPlatforms).ArrayNum;
  if (iVar3 < 1) {
    uStack_4a0 = 0x18;
    local_4a8 = L"SupportedTargetPlatforms";
    local_78._12_4_ = uStack_49c;
    local_78.Size = 0x18;
    local_78.DataPtr = L"SupportedTargetPlatforms";
    FJsonObject::RemoveField(param_1,&local_78);
  }
  else {
    pFVar14 = (this->SupportedTargetPlatforms).AllocatorInstance.Data;
    local_7a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar15 = pFVar14 + (longlong)iVar3 * 0x10;
    local_7a8.ArrayNum = 0;
    local_7a8.ArrayMax = 0;
    while( true ) {
      if ((this->SupportedTargetPlatforms).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar15) break;
      pTVar9 = ::operator_new(0x20);
      pTVar13 = (TJsonValueString<wchar_t> *)0x0;
      if (pTVar9 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar9->Value,(FString *)pFVar14);
        *(EJson *)&pTVar9->_padding_ = String;
        pTVar13 = pTVar9;
      }
      local_res20.Object = pTVar13;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_788,&local_res20);
      if (((local_7a8.AllocatorInstance.Data <= &local_788) &&
          (&local_788 <
           (TSharedPtr<FJsonValue,1> *)
           (local_7a8.AllocatorInstance.Data + (longlong)local_7a8.ArrayMax * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = local_7a8.ArrayNum;
      if (local_7a8.ArrayNum == local_7a8.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_7a8.AllocatorInstance,&local_7a8.ArrayMax);
      }
      local_7a8.ArrayNum = iVar7 + 1;
      *(FJsonValue **)&local_7a8.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
           local_788.Object;
      *(TReferenceControllerBase<1> **)
       (local_7a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
           local_788.SharedReferenceCount.ReferenceController;
      local_788.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_788.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_4b8,L"SupportedTargetPlatforms");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_4b8,&local_7a8);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_7a8.AllocatorInstance.Data,local_7a8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_7a8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_7a8.AllocatorInstance.Data);
    }
  }
  iVar3 = (this->SupportedPrograms).ArrayNum;
  if (iVar3 < 1) {
    uStack_480 = 0x11;
    local_488 = L"SupportedPrograms";
    local_188._12_4_ = uStack_47c;
    local_188.Size = 0x11;
    local_188.DataPtr = L"SupportedPrograms";
    FJsonObject::RemoveField(param_1,&local_188);
  }
  else {
    pFVar14 = (this->SupportedPrograms).AllocatorInstance.Data;
    local_798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar15 = pFVar14 + (longlong)iVar3 * 0x10;
    local_798.ArrayNum = 0;
    local_798.ArrayMax = 0;
    while( true ) {
      if ((this->SupportedPrograms).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar14 == pFVar15) break;
      pTVar9 = ::operator_new(0x20);
      pTVar13 = (TJsonValueString<wchar_t> *)0x0;
      if (pTVar9 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar9->Value,(FString *)pFVar14);
        *(EJson *)&pTVar9->_padding_ = String;
        pTVar13 = pTVar9;
      }
      local_690.Object = pTVar13;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&local_778,&local_690);
      if (((local_798.AllocatorInstance.Data <= &local_778) &&
          (&local_778 <
           (TSharedPtr<FJsonValue,1> *)
           (local_798.AllocatorInstance.Data + (longlong)local_798.ArrayMax * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = local_798.ArrayNum;
      if (local_798.ArrayNum == local_798.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_798.AllocatorInstance,&local_798.ArrayMax);
      }
      local_798.ArrayNum = iVar7 + 1;
      *(FJsonValue **)&local_798.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
           local_778.Object;
      *(TReferenceControllerBase<1> **)
       (local_798.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
           local_778.SharedReferenceCount.ReferenceController;
      local_778.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_778.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&local_498,L"SupportedPrograms");
    param_1 = local_res10;
    FJsonObject::SetArrayField(local_res10,&local_498,&local_798);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_798.AllocatorInstance.Data,local_798.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_798.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_798.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bIsPluginExtension;
  if (bVar6 == false) {
    uStack_460 = 0x12;
    local_468 = L"bIsPluginExtension";
    local_178._12_4_ = uStack_45c;
    local_178.Size = 0x12;
    local_178.DataPtr = L"bIsPluginExtension";
    FJsonObject::RemoveField(param_1,&local_178);
  }
  else {
    ::FString::FString(&local_478,L"bIsPluginExtension");
    FJsonObject::SetBoolField(param_1,&local_478,bVar6);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  local_688._16_8_ = 0;
  local_688._0_8_ = 0;
  local_688._8_8_ = 0;
  local_750 = (undefined1  [8])0x0;
  local_748.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_748.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_750,
             (FWriteAccessScope *)&local_288);
  local_270 = &local_748;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_748);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6AXAEBUFModuleDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = ModuleDescriptor::UpdateModuleJsonObject;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  local_738 = (undefined1  [8])0x0;
  local_730.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_730.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
             (FWriteAccessScope *)&local_268);
  local_250 = &local_730;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_730);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = ModuleDescriptor::TryGetModuleJsonObjectKey;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  local_720 = (undefined1  [8])0x0;
  local_718.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_718.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_720,
             (FWriteAccessScope *)&local_248);
  local_230 = &local_718;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_718);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFModuleDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = ModuleDescriptor::GetModuleKey;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  ::FString::FString(&local_458,L"Modules");
  FJsonObjectArrayUpdater<FModuleDescriptor,FString>::Execute
            (param_1,&local_458,&this->Modules,
             (TDelegate<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy> *)
             local_720,
             (TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *)
             local_738,
             (TDelegate<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
              *)local_750,&local_688);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  local_670._16_8_ = 0;
  local_670._0_8_ = 0;
  local_670._8_8_ = 0;
  local_708 = (undefined1  [8])0x0;
  local_700.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_700.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_708,
             (FWriteAccessScope *)&local_228);
  local_210 = &local_700;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_700);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = LocalizationDescriptor::UpdateDescriptorJsonObject;
  }
  if (local_228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
  }
  local_6f0 = (undefined1  [8])0x0;
  local_6e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6f0,
             (FWriteAccessScope *)&local_208);
  local_1f0 = &local_6e8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_6e8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = LocalizationDescriptor::TryGetDescriptorJsonObjectKey;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  local_6d8 = (undefined1  [8])0x0;
  local_6d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d8,
             (FWriteAccessScope *)&local_1e8);
  local_1d0 = &local_6d0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_6d0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = LocalizationDescriptor::GetDescriptorKey;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  ::FString::FString(&local_448,L"LocalizationTargets");
  FJsonObjectArrayUpdater<FLocalizationTargetDescriptor,FString>::Execute
            (param_1,&local_448,&this->LocalizationTargets,
             (TDelegate<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
              *)local_6d8,
             (TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *)
             local_6f0,
             (TDelegate<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
              *)local_708,&local_670);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  bVar6 = this->bRequiresBuildPlatform;
  if (bVar6 == false) {
    uStack_420 = 0x15;
    local_428 = L"RequiresBuildPlatform";
    local_168._12_4_ = uStack_41c;
    local_168.Size = 0x15;
    local_168.DataPtr = L"RequiresBuildPlatform";
    FJsonObject::RemoveField(param_1,&local_168);
  }
  else {
    ::FString::FString(&local_438,L"RequiresBuildPlatform");
    FJsonObject::SetBoolField(param_1,&local_438,bVar6);
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bIsHidden;
  if (bVar6 == false) {
    uStack_400 = 6;
    local_408 = L"Hidden";
    local_68[0]._12_4_ = uStack_3fc;
    local_68[0].Size = 6;
    local_68[0].DataPtr = L"Hidden";
    FJsonObject::RemoveField(param_1,local_68);
  }
  else {
    ::FString::FString(&local_418,L"Hidden");
    FJsonObject::SetBoolField(param_1,&local_418,bVar6);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bIsSealed;
  if (bVar6 == false) {
    uStack_3e0 = 6;
    local_3e8 = L"Sealed";
    local_148._12_4_ = uStack_3dc;
    local_148.Size = 6;
    local_148.DataPtr = L"Sealed";
    FJsonObject::RemoveField(param_1,&local_148);
  }
  else {
    ::FString::FString(&local_3f8,L"Sealed");
    FJsonObject::SetBoolField(param_1,&local_3f8,bVar6);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bExplicitlyLoaded;
  if (bVar6 == false) {
    uStack_3c0 = 0x10;
    local_3c8 = L"ExplicitlyLoaded";
    local_138._12_4_ = uStack_3bc;
    local_138.Size = 0x10;
    local_138.DataPtr = L"ExplicitlyLoaded";
    FJsonObject::RemoveField(param_1,&local_138);
  }
  else {
    ::FString::FString(&local_3d8,L"ExplicitlyLoaded");
    FJsonObject::SetBoolField(param_1,&local_3d8,bVar6);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = this->bHasExplicitPlatforms;
  if (bVar6 == false) {
    uStack_3a0 = 0x14;
    local_3a8 = L"HasExplicitPlatforms";
    local_128._12_4_ = uStack_39c;
    local_128.Size = 0x14;
    local_128.DataPtr = L"HasExplicitPlatforms";
    FJsonObject::RemoveField(param_1,&local_128);
  }
  else {
    ::FString::FString(&local_3b8,L"HasExplicitPlatforms");
    FJsonObject::SetBoolField(param_1,&local_3b8,bVar6);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_398,L"PreBuildSteps");
  FCustomBuildSteps::UpdateJson(&this->PreBuildSteps,param_1,&local_398);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_388,L"PostBuildSteps");
  FCustomBuildSteps::UpdateJson(&this->PostBuildSteps,param_1,&local_388);
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  FPluginReferenceDescriptor::UpdateArray(param_1,L"Plugins",&this->Plugins);
  local_658._16_8_ = 0;
  local_658._0_8_ = 0;
  local_658._8_8_ = 0;
  local_6c0 = (undefined1  [8])0x0;
  local_6b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c0,
             (FWriteAccessScope *)&local_1c8);
  local_1b0 = &local_6b8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_6b8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = PluginDisallowedDescriptor::UpdatePluginRefJsonObject;
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  local_6a8 = (undefined1  [8])0x0;
  local_6a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a8,
             (FWriteAccessScope *)&local_1a8);
  local_190 = &local_6a0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_6a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = PluginDisallowedDescriptor::TryGetPluginRefJsonObjectKey;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  local_768 = (undefined1  [8])0x0;
  local_760.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_760.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
             (FWriteAccessScope *)&local_2a8);
  local_290 = &local_760;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_760);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = PluginDisallowedDescriptor::GetPluginRefKey;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  ::FString::FString(&local_378,L"DisallowedPlugins");
  FJsonObjectArrayUpdater<FPluginDisallowedDescriptor,FString>::Execute
            (param_1,&local_378,&this->DisallowedPlugins,
             (TDelegate<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
              *)local_768,
             (TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *)
             local_6a8,
             (TDelegate<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
              *)local_6c0,&local_658);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdatePluginFile @ 141e443e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPluginDescriptor::UpdatePluginFile(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  int iVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  IFileManager *pIVar7;
  size_t sVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  FString FStack_d8;
  TSharedPtr<FJsonObject,1> TStack_c8;
  TSharedPtr<FJsonObject,1> TStack_b8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> TStack_a8;
  FScriptContainerElement *pFStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FText FStack_48;
  FTextFormat FStack_38;
  
  pIVar7 = IFileManager::Get();
  pwVar13 = L"";
  iVar14 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,pwVar12);
  iVar1 = (param_1->Data).ArrayNum;
  if (cVar4 == '\0') {
    if (iVar1 != 0) {
      pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar5 = Save(this,pwVar13,param_2);
  }
  else {
    FStack_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_d8.Data.ArrayNum = 0;
    FStack_d8.Data.ArrayMax = 0;
    if (iVar1 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar5 = FFileHelper::LoadFileToString(&FStack_d8,pwVar12,None,0);
    if (bVar5) {
      UE::PluginDescriptor::Internal::DeserializeJson(&TStack_c8,&FStack_d8,param_2);
      if (TStack_c8.Object == (FJsonObject *)0x0) {
        bVar5 = false;
      }
      else {
        UpdateJson(this,TStack_c8.Object);
        TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                  (&TStack_a8,&FStack_d8,0);
        if ((TStack_c8.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        FVar3.ReferenceController = TStack_c8.SharedReferenceCount.ReferenceController;
        if (TStack_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (TStack_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((TStack_c8.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        TStack_b8.Object = TStack_c8.Object;
        TStack_b8.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
        if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar3.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
                Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                          (&TStack_b8,TStack_a8.Object,true);
        if (bVar5) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_a8.SharedReferenceCount.ReferenceController);
          if ((param_1->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          bVar5 = UE::PluginDescriptor::Internal::WriteFile(pwVar13,&FStack_d8,param_2);
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4094756661057553091>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginDescriptor.cpp"
                             ,0x2c3,
                             "FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter)");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          if (param_2 != (FText *)0x0) {
            pFVar9 = FText::AsLocalizable_Advanced_LocText
                               (&FStack_58,L"PluginDescriptor",L"FailedToWriteDescriptor",
                                L"Failed to write plugin descriptor content");
            FText::operator=(param_2,pFVar9);
            if (FStack_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*FStack_58.TextData.Reference + 0x10))();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_a8.SharedReferenceCount.ReferenceController);
          bVar5 = false;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_c8.SharedReferenceCount.ReferenceController);
    }
    else {
      if (param_2 != (FText *)0x0) {
        pFStack_98 = (FScriptContainerElement *)pwVar12;
        if ((FScriptContainerElement *)pwVar12 != (FScriptContainerElement *)0x0) {
          sVar8 = wcslen(pwVar12);
          iVar14 = (int)sVar8;
        }
        TStack_88._12_4_ = uStack_8c;
        TStack_88.Size = iVar14;
        TStack_88.DataPtr = (wchar_t *)pFStack_98;
        iStack_90 = iVar14;
        pFVar9 = FText::FromStringView(&FStack_48,&TStack_88);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&FStack_68,L"PluginDescriptor",L"FailedToLoadDescriptorFile",
                             L"Failed to open descriptor file \'{0}\'");
        pFVar11 = FTextFormat::FTextFormat(&FStack_38,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&FStack_78,pFVar11,pFVar9);
        FText::operator=(param_2,pFVar9);
        if (FStack_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
        }
        if (FStack_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
        }
      }
      bVar5 = false;
    }
    if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
    }
  }
  return bVar5;
}

// UpdatePluginFile @ 141e443f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPluginDescriptor::UpdatePluginFile(FPluginDescriptor *this,FString *param_1,FText *param_2)

{
  int iVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  IFileManager *pIVar7;
  size_t sVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  FString local_d8;
  TSharedPtr<FJsonObject,1> local_c8;
  TSharedPtr<FJsonObject,1> local_b8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  pIVar7 = IFileManager::Get();
  pwVar13 = L"";
  iVar14 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,pwVar12);
  iVar1 = (param_1->Data).ArrayNum;
  if (cVar4 == '\0') {
    if (iVar1 != 0) {
      pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar5 = Save(this,pwVar13,param_2);
  }
  else {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    if (iVar1 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar5 = FFileHelper::LoadFileToString(&local_d8,pwVar12,None,0);
    if (bVar5) {
      UE::PluginDescriptor::Internal::DeserializeJson(&local_c8,&local_d8,param_2);
      if (local_c8.Object == (FJsonObject *)0x0) {
        bVar5 = false;
      }
      else {
        UpdateJson(this,local_c8.Object);
        TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_a8,&local_d8,0);
        if ((local_c8.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        FVar3.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
        if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_c8.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        local_b8.Object = local_c8.Object;
        local_b8.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
        if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar3.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
                Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_b8,local_a8.Object,true);
        if (bVar5) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          if ((param_1->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          bVar5 = UE::PluginDescriptor::Internal::WriteFile(pwVar13,&local_d8,param_2);
        }
        else {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4094756661057553091>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginDescriptor.cpp"
                             ,0x2c3,
                             "FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter)");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
          if (param_2 != (FText *)0x0) {
            pFVar9 = FText::AsLocalizable_Advanced_LocText
                               (&local_58,L"PluginDescriptor",L"FailedToWriteDescriptor",
                                L"Failed to write plugin descriptor content");
            FText::operator=(param_2,pFVar9);
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          bVar5 = false;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    else {
      if (param_2 != (FText *)0x0) {
        local_98 = (FScriptContainerElement *)pwVar12;
        if ((FScriptContainerElement *)pwVar12 != (FScriptContainerElement *)0x0) {
          sVar8 = wcslen(pwVar12);
          iVar14 = (int)sVar8;
        }
        local_88._12_4_ = uStack_8c;
        local_88.Size = iVar14;
        local_88.DataPtr = (wchar_t *)local_98;
        iStack_90 = iVar14;
        pFVar9 = FText::FromStringView(&local_48,&local_88);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_68,L"PluginDescriptor",L"FailedToLoadDescriptorFile",
                             L"Failed to open descriptor file \'{0}\'");
        pFVar11 = FTextFormat::FTextFormat(&local_38,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_78,pFVar11,pFVar9);
        FText::operator=(param_2,pFVar9);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
      }
      bVar5 = false;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  return bVar5;
}

// Write @ 141e45190

void __thiscall
FPluginDescriptor::Write
          (FPluginDescriptor *this,TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TSharedPtr<FJsonObject,1> local_28;
  TSharedRef<FJsonObject,1> local_18;
  
  pTVar5 = MakeShared<FJsonObject,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UpdateJson(this,pFVar2);
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar2;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_28,param_1,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Write @ 141e452d0

void __thiscall FPluginDescriptor::Write(FPluginDescriptor *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_28;
  TSharedRef<FJsonObject,1> local_18;
  
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_28,param_1,0);
  pTVar5 = MakeShared<FJsonObject,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UpdateJson(this,pFVar2);
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar2;
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_38,local_28.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (**(code **)((local_28.Object)->_padding_ + 8))(local_28.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

