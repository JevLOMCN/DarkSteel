// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FBuildPatchInstallerAction @ 1431baa40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchInstallerAction * __thiscall
BuildPatchServices::FBuildPatchInstallerAction::FBuildPatchInstallerAction
          (FBuildPatchInstallerAction *this,FInstallerAction *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<IBuildManifest,1> *pTVar3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar4;
  FBuildPatchAppManifest *pFVar5;
  FBuildPatchInstallerAction *pFVar6;
  FBuildPatchAppManifest *pFVar7;
  FBuildPatchAppManifest *pFVar8;
  FString local_38;
  TSharedRef<IBuildManifest,1> local_28;
  TSharedRef<IBuildManifest,1> local_18;
  
  FInstallerAction::FInstallerAction(&this->InstallerAction,param_1);
  bVar2 = FInstallerAction::IsUpdate(&this->InstallerAction);
  pFVar5 = (FBuildPatchAppManifest *)0x0;
  if (((bVar2) || (bVar2 = FInstallerAction::IsRepair(&this->InstallerAction), bVar2)) ||
     (bVar2 = FInstallerAction::IsUninstall(&this->InstallerAction), pFVar7 = pFVar5,
     pFVar8 = pFVar5, bVar2)) {
    pTVar3 = FInstallerAction::GetCurrentManifest(&this->InstallerAction,&local_28);
    pFVar8 = (FBuildPatchAppManifest *)(pTVar3->SharedReferenceCount).ReferenceController;
    pFVar7 = (FBuildPatchAppManifest *)pTVar3->Object;
    if (pFVar8 != (FBuildPatchAppManifest *)0x0) {
      LOCK();
      (pFVar8->ManifestMeta).FeatureLevel = (pFVar8->ManifestMeta).FeatureLevel + CustomFields;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  (this->CurrentManifest).Object = pFVar7;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar8;
  if (pFVar8 != (FBuildPatchAppManifest *)0x0) {
    LOCK();
    (pFVar8->ManifestMeta).FeatureLevel = (pFVar8->ManifestMeta).FeatureLevel + CustomFields;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  bVar2 = FInstallerAction::IsInstall(&this->InstallerAction);
  if (((bVar2) || (bVar2 = FInstallerAction::IsUpdate(&this->InstallerAction), bVar2)) ||
     (bVar2 = FInstallerAction::IsRepair(&this->InstallerAction), pFVar8 = pFVar5, bVar2)) {
    pTVar3 = FInstallerAction::GetInstallManifest(&this->InstallerAction,&local_18);
    pFVar8 = (FBuildPatchAppManifest *)(pTVar3->SharedReferenceCount).ReferenceController;
    pFVar5 = (FBuildPatchAppManifest *)pTVar3->Object;
    if (pFVar8 != (FBuildPatchAppManifest *)0x0) {
      LOCK();
      (pFVar8->ManifestMeta).FeatureLevel = (pFVar8->ManifestMeta).FeatureLevel + CustomFields;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  (this->InstallManifest).Object = pFVar5;
  (this->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar8;
  if (pFVar8 != (FBuildPatchAppManifest *)0x0) {
    LOCK();
    (pFVar8->ManifestMeta).FeatureLevel = (pFVar8->ManifestMeta).FeatureLevel + CustomFields;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  this_00 = &this->InstallTags;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TaggedFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TaggedFiles).Elements.field_0x34 = 0;
  (this->TaggedFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TaggedFiles).HashSize = 0;
  pTVar4 = FInstallerAction::GetInstallTags(&this->InstallerAction);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(this_00,pTVar4);
  if (*(int *)&(this->InstallTags).Elements.field_0x8 ==
      *(int *)&(this->InstallTags).Elements.field_0x34) {
    pFVar5 = GetInstallOrCurrentManifest(this);
    (**(code **)(pFVar5->_padding_ + 0xc0))(pFVar5,this_00);
  }
  ::FString::FString(&local_38,L"");
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (this_00,(FString *)&stack0x00000008,(bool *)&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar2 = FInstallerAction::IsUninstall(&this->InstallerAction);
  if (!bVar2) {
    if (((this->InstallManifest).Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FBuildPatchInstallerAction *)(*pcVar1)();
      return pFVar6;
    }
    pFVar5 = (this->InstallManifest).Object;
    (**(code **)(pFVar5->_padding_ + 0x1d0))(pFVar5,this_00,&this->TaggedFiles);
  }
  return this;
}

// GetInstallManifest @ 1431e0be0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
BuildPatchServices::FBuildPatchInstallerAction::GetInstallManifest(FBuildPatchInstallerAction *this)

{
  code *pcVar1;
  bool bVar2;
  FBuildPatchAppManifest *pFVar3;
  
  if ((this->InstallManifest).Object != (FBuildPatchAppManifest *)0x0) {
    return (this->InstallManifest).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBuildPatchAppManifest *)(*pcVar1)();
    return pFVar3;
  }
  return (this->InstallManifest).Object;
}

// GetInstallOrCurrentManifest @ 1431e0c40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchAppManifest * __thiscall
BuildPatchServices::FBuildPatchInstallerAction::GetInstallOrCurrentManifest
          (FBuildPatchInstallerAction *this)

{
  code *pcVar1;
  bool bVar2;
  FBuildPatchAppManifest *pFVar3;
  
  if ((this->InstallManifest).Object != (FBuildPatchAppManifest *)0x0) {
    return (this->InstallManifest).Object;
  }
  if ((this->CurrentManifest).Object == (FBuildPatchAppManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FBuildPatchAppManifest *)(*pcVar1)();
      return pFVar3;
    }
    return (this->CurrentManifest).Object;
  }
  return (this->CurrentManifest).Object;
}

// ~FBuildPatchInstallerAction @ 143227a90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchInstallerAction::~FBuildPatchInstallerAction
          (FBuildPatchInstallerAction *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->TaggedFiles).HashSize = 0;
  FVar1 = (this->TaggedFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TaggedFiles).Elements);
  (this->InstallTags).HashSize = 0;
  FVar1 = (this->InstallTags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InstallTags).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstallManifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentManifest).SharedReferenceCount.ReferenceController);
  FInstallerAction::~FInstallerAction(&this->InstallerAction);
  return;
}

