// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 18

// ~FInstallerAction @ 1431bf480

void __thiscall BuildPatchServices::FInstallerAction::~FInstallerAction(FInstallerAction *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->CloudSubdirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstallSubdirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->InstallTags).HashSize = 0;
  FVar2 = (this->InstallTags).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InstallTags).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstallManifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentManifest).SharedReferenceCount.ReferenceController);
  return;
}

// FInstallerAction @ 1432233b0

FInstallerAction * __thiscall
BuildPatchServices::FInstallerAction::FInstallerAction(FInstallerAction *this)

{
  (this->CurrentManifest).Object = (IBuildManifest *)0x0;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InstallManifest).Object = (IBuildManifest *)0x0;
  (this->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  (this->InstallSubdirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallSubdirectory).Data.ArrayNum = 0;
  (this->InstallSubdirectory).Data.ArrayMax = 0;
  (this->CloudSubdirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudSubdirectory).Data.ArrayNum = 0;
  (this->CloudSubdirectory).Data.ArrayMax = 0;
  this->ActionIntent = Invalid;
  return this;
}

// FInstallerAction @ 143223420

FInstallerAction * __thiscall
BuildPatchServices::FInstallerAction::FInstallerAction
          (FInstallerAction *this,FInstallerAction *param_1)

{
  IBuildManifest *pIVar1;
  
  (this->CurrentManifest).Object = (param_1->CurrentManifest).Object;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController =
       (param_1->CurrentManifest).SharedReferenceCount.ReferenceController;
  pIVar1 = (param_1->InstallManifest).Object;
  (param_1->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->CurrentManifest).Object = (IBuildManifest *)0x0;
  (this->InstallManifest).Object = pIVar1;
  (this->InstallManifest).SharedReferenceCount.ReferenceController =
       (param_1->InstallManifest).SharedReferenceCount.ReferenceController;
  (param_1->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->InstallManifest).Object = (IBuildManifest *)0x0;
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            (&this->InstallTags,&param_1->InstallTags);
  (this->InstallSubdirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallSubdirectory).Data.AllocatorInstance.Data =
       (param_1->InstallSubdirectory).Data.AllocatorInstance.Data;
  (param_1->InstallSubdirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallSubdirectory).Data.ArrayNum = (param_1->InstallSubdirectory).Data.ArrayNum;
  (this->InstallSubdirectory).Data.ArrayMax = (param_1->InstallSubdirectory).Data.ArrayMax;
  (param_1->InstallSubdirectory).Data.ArrayNum = 0;
  (param_1->InstallSubdirectory).Data.ArrayMax = 0;
  (this->CloudSubdirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudSubdirectory).Data.AllocatorInstance.Data =
       (param_1->CloudSubdirectory).Data.AllocatorInstance.Data;
  (param_1->CloudSubdirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudSubdirectory).Data.ArrayNum = (param_1->CloudSubdirectory).Data.ArrayNum;
  (this->CloudSubdirectory).Data.ArrayMax = (param_1->CloudSubdirectory).Data.ArrayMax;
  (param_1->CloudSubdirectory).Data.ArrayNum = 0;
  (param_1->CloudSubdirectory).Data.ArrayMax = 0;
  this->ActionIntent = param_1->ActionIntent;
  return this;
}

// FInstallerAction @ 143223520

FInstallerAction * __thiscall
BuildPatchServices::FInstallerAction::FInstallerAction
          (FInstallerAction *this,FInstallerAction *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->CurrentManifest).Object = (param_1->CurrentManifest).Object;
  pTVar1 = (param_1->CurrentManifest).SharedReferenceCount.ReferenceController;
  (this->CurrentManifest).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->InstallManifest).Object = (param_1->InstallManifest).Object;
  pTVar1 = (param_1->InstallManifest).SharedReferenceCount.ReferenceController;
  (this->InstallManifest).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&(this->InstallTags).Elements = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstallTags).Elements.field_0x34 = 0;
  (this->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InstallTags).HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->InstallTags,&param_1->InstallTags);
  ::FString::FString(&this->InstallSubdirectory,&param_1->InstallSubdirectory);
  ::FString::FString(&this->CloudSubdirectory,&param_1->CloudSubdirectory);
  this->ActionIntent = param_1->ActionIntent;
  return this;
}

// GetCloudSubdirectory @ 143255420

FString * __thiscall
BuildPatchServices::FInstallerAction::GetCloudSubdirectory(FInstallerAction *this)

{
  return &this->CloudSubdirectory;
}

// GetCurrentManifest @ 143255430

TSharedRef<IBuildManifest,1> * __thiscall
BuildPatchServices::FInstallerAction::GetCurrentManifest
          (FInstallerAction *this,TSharedRef<IBuildManifest,1> *__return_storage_ptr__)

{
  TSharedPtr<IBuildManifest,1>::ToSharedRef(&this->CurrentManifest,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInstallManifest @ 143256fc0

TSharedRef<IBuildManifest,1> * __thiscall
BuildPatchServices::FInstallerAction::GetInstallManifest
          (FInstallerAction *this,TSharedRef<IBuildManifest,1> *__return_storage_ptr__)

{
  TSharedPtr<IBuildManifest,1>::ToSharedRef(&this->InstallManifest,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInstallSubdirectory @ 143256ff0

FString * __thiscall
BuildPatchServices::FInstallerAction::GetInstallSubdirectory(FInstallerAction *this)

{
  return &this->InstallSubdirectory;
}

// GetInstallTags @ 143257000

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FInstallerAction::GetInstallTags(FInstallerAction *this)

{
  return &this->InstallTags;
}

// IsInstall @ 143258cf0

bool __thiscall BuildPatchServices::FInstallerAction::IsInstall(FInstallerAction *this)

{
  return this->ActionIntent == Install;
}

// IsRepair @ 143258d90

bool __thiscall BuildPatchServices::FInstallerAction::IsRepair(FInstallerAction *this)

{
  return this->ActionIntent == Repair;
}

// IsUninstall @ 143258dd0

bool __thiscall BuildPatchServices::FInstallerAction::IsUninstall(FInstallerAction *this)

{
  return this->ActionIntent == Uninstall;
}

// IsUpdate @ 143258df0

bool __thiscall BuildPatchServices::FInstallerAction::IsUpdate(FInstallerAction *this)

{
  return this->ActionIntent == Update;
}

// MakeInstall @ 14325b370

FInstallerAction * __cdecl
BuildPatchServices::FInstallerAction::MakeInstall
          (FInstallerAction *__return_storage_ptr__,TSharedRef<IBuildManifest,1> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,FString *param_3,
          FString *param_4)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TSharedPtr<IBuildManifest,1> *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  IBuildManifest *local_48;
  FSharedReferencer<1> local_40;
  
  pTVar1 = &__return_storage_ptr__->InstallTags;
  pTVar2 = &__return_storage_ptr__->InstallManifest;
  (__return_storage_ptr__->CurrentManifest).Object = (IBuildManifest *)0x0;
  pFVar3 = &__return_storage_ptr__->InstallSubdirectory;
  (__return_storage_ptr__->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar4 = &__return_storage_ptr__->CloudSubdirectory;
  pTVar2->Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x34 = 0;
  (__return_storage_ptr__->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->InstallTags).HashSize = 0;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = 0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = 0;
  __return_storage_ptr__->ActionIntent = Invalid;
  local_40.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_48 = param_1->Object;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<IBuildManifest,1> *)&local_48) {
    pTVar2->Object = local_48;
    local_48 = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->InstallManifest).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  if (pTVar1 != param_2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(pTVar1,param_2);
  }
  if (pFVar3 != param_3) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar3->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = (param_3->Data).ArrayNum;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  if (pFVar4 != param_4) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (param_4->Data).AllocatorInstance.Data;
    (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = (param_4->Data).ArrayNum;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = (param_4->Data).ArrayMax;
    (param_4->Data).ArrayNum = 0;
    (param_4->Data).ArrayMax = 0;
  }
  __return_storage_ptr__->ActionIntent = Install;
  param_2->HashSize = 0;
  FVar6 = (param_2->Hash).SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_2->Elements);
  pFVar5 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// MakeRepair @ 14325b510

FInstallerAction * __cdecl
BuildPatchServices::FInstallerAction::MakeRepair
          (FInstallerAction *__return_storage_ptr__,TSharedRef<IBuildManifest,1> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,FString *param_3,
          FString *param_4)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TSharedPtr<IBuildManifest,1> *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  undefined1 local_68 [48];
  
  pTVar1 = &__return_storage_ptr__->InstallTags;
  pTVar2 = &__return_storage_ptr__->InstallManifest;
  pFVar3 = &__return_storage_ptr__->InstallSubdirectory;
  pFVar4 = &__return_storage_ptr__->CloudSubdirectory;
  (__return_storage_ptr__->CurrentManifest).Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x34 = 0;
  (__return_storage_ptr__->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->InstallTags).HashSize = 0;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = 0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = 0;
  __return_storage_ptr__->ActionIntent = Invalid;
  local_68._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  local_68._0_8_ = param_1->Object;
  if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68._32_8_ = param_1;
  if (__return_storage_ptr__ != (FInstallerAction *)local_68) {
    (__return_storage_ptr__->CurrentManifest).Object = (IBuildManifest *)local_68._0_8_;
    local_68._0_8_ = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->CurrentManifest).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_68 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_68._8_8_);
  local_68._16_8_ = *(IBuildManifest **)local_68._32_8_;
  local_68._24_8_ = ((FSharedReferencer<1> *)(local_68._32_8_ + 8))->ReferenceController;
  if ((TReferenceControllerBase<1> *)local_68._24_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._24_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._24_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<IBuildManifest,1> *)(local_68 + 0x10)) {
    pTVar2->Object = (IBuildManifest *)local_68._16_8_;
    local_68._16_8_ = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->InstallManifest).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_68 + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_68._24_8_);
  if (pTVar1 != param_2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(pTVar1,param_2);
  }
  if (pFVar3 != param_3) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar3->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = (param_3->Data).ArrayNum;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  if (pFVar4 != param_4) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (param_4->Data).AllocatorInstance.Data;
    (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = (param_4->Data).ArrayNum;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = (param_4->Data).ArrayMax;
    (param_4->Data).ArrayNum = 0;
    (param_4->Data).ArrayMax = 0;
  }
  __return_storage_ptr__->ActionIntent = Repair;
  param_2->HashSize = 0;
  FVar6 = (param_2->Hash).SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_2->Elements);
  pFVar5 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// MakeUninstall @ 14325b870

FInstallerAction * __cdecl
BuildPatchServices::FInstallerAction::MakeUninstall
          (FInstallerAction *__return_storage_ptr__,TSharedRef<IBuildManifest,1> *param_1,
          FString *param_2,FString *param_3)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  IBuildManifest *local_28;
  FSharedReferencer<1> local_20;
  
  pFVar1 = &__return_storage_ptr__->InstallSubdirectory;
  (__return_storage_ptr__->CurrentManifest).Object = (IBuildManifest *)0x0;
  pFVar2 = &__return_storage_ptr__->CloudSubdirectory;
  (__return_storage_ptr__->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->InstallManifest).Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x34 = 0;
  (__return_storage_ptr__->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->InstallTags).HashSize = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = 0;
  __return_storage_ptr__->ActionIntent = Invalid;
  local_20.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_28 = param_1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != (FInstallerAction *)&stack0xffffffffffffffd8) {
    (__return_storage_ptr__->CurrentManifest).Object = local_28;
    local_28 = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->CurrentManifest).SharedReferenceCount,
               &stack0xffffffffffffffe0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  if (pFVar1 != param_2) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  if (pFVar2 != param_3) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = (param_3->Data).ArrayNum;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  __return_storage_ptr__->ActionIntent = Uninstall;
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// MakeUpdate @ 14325b9d0

FInstallerAction * __cdecl
BuildPatchServices::FInstallerAction::MakeUpdate
          (FInstallerAction *__return_storage_ptr__,TSharedRef<IBuildManifest,1> *param_1,
          TSharedRef<IBuildManifest,1> *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,FString *param_4,
          FString *param_5)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TSharedPtr<IBuildManifest,1> *pTVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  undefined1 local_68 [48];
  
  pTVar1 = &__return_storage_ptr__->InstallTags;
  pTVar2 = &__return_storage_ptr__->InstallManifest;
  pFVar3 = &__return_storage_ptr__->InstallSubdirectory;
  pFVar4 = &__return_storage_ptr__->CloudSubdirectory;
  (__return_storage_ptr__->CurrentManifest).Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->CurrentManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (IBuildManifest *)0x0;
  (__return_storage_ptr__->InstallManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InstallTags).Elements.field_0x34 = 0;
  (__return_storage_ptr__->InstallTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->InstallTags).HashSize = 0;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = 0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = 0;
  (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = 0;
  __return_storage_ptr__->ActionIntent = Invalid;
  local_68._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  local_68._0_8_ = param_1->Object;
  if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68._32_8_ = param_2;
  if (__return_storage_ptr__ != (FInstallerAction *)local_68) {
    (__return_storage_ptr__->CurrentManifest).Object = (IBuildManifest *)local_68._0_8_;
    local_68._0_8_ = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->CurrentManifest).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_68 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_68._8_8_);
  local_68._16_8_ = *(IBuildManifest **)local_68._32_8_;
  local_68._24_8_ = ((FSharedReferencer<1> *)(local_68._32_8_ + 8))->ReferenceController;
  if ((TReferenceControllerBase<1> *)local_68._24_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._24_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._24_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<IBuildManifest,1> *)(local_68 + 0x10)) {
    pTVar2->Object = (IBuildManifest *)local_68._16_8_;
    local_68._16_8_ = (IBuildManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->InstallManifest).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_68 + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_68._24_8_);
  if (pTVar1 != param_3) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(pTVar1,param_3);
  }
  if (pFVar3 != param_4) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar3->Data).AllocatorInstance.Data = (param_4->Data).AllocatorInstance.Data;
    (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayNum = (param_4->Data).ArrayNum;
    (__return_storage_ptr__->InstallSubdirectory).Data.ArrayMax = (param_4->Data).ArrayMax;
    (param_4->Data).ArrayNum = 0;
    (param_4->Data).ArrayMax = 0;
  }
  if (pFVar4 != param_5) {
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar4->Data).AllocatorInstance.Data = (param_5->Data).AllocatorInstance.Data;
    (param_5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayNum = (param_5->Data).ArrayNum;
    (__return_storage_ptr__->CloudSubdirectory).Data.ArrayMax = (param_5->Data).ArrayMax;
    (param_5->Data).ArrayNum = 0;
    (param_5->Data).ArrayMax = 0;
  }
  __return_storage_ptr__->ActionIntent = Update;
  param_3->HashSize = 0;
  FVar6 = (param_3->Hash).SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_3->Elements);
  pFVar5 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (param_5->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// MakeInstallOrUpdate @ 143323860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInstallerAction * __cdecl
BuildPatchServices::FInstallerAction::MakeInstallOrUpdate
          (FInstallerAction *__return_storage_ptr__,TSharedPtr<IBuildManifest,1> *param_1,
          TSharedRef<IBuildManifest,1> *param_2,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_3,FString *param_4,
          FString *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  IBuildManifest *pIVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FSetElementId> FVar8;
  code *pcVar9;
  bool bVar10;
  FInstallerAction *pFVar11;
  TSharedRef<IBuildManifest,1> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_d8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  
  pIVar5 = param_1->Object;
  pFVar6 = (param_5->Data).AllocatorInstance.Data;
  (param_5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_5->Data).ArrayNum;
  iVar2 = (param_5->Data).ArrayMax;
  (param_5->Data).ArrayNum = 0;
  (param_5->Data).ArrayMax = 0;
  pFVar7 = (param_4->Data).AllocatorInstance.Data;
  (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_4->Data).ArrayNum;
  iVar4 = (param_4->Data).ArrayMax;
  (param_4->Data).ArrayNum = 0;
  (param_4->Data).ArrayMax = 0;
  if (pIVar5 == (IBuildManifest *)0x0) {
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_d8.Elements._48_8_ = _UNK_150631d98;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    local_118.Data.AllocatorInstance.Data = pFVar6;
    local_118.Data.ArrayNum = iVar1;
    local_118.Data.ArrayMax = iVar2;
    local_108.Data.AllocatorInstance.Data = pFVar7;
    local_108.Data.ArrayNum = iVar3;
    local_108.Data.ArrayMax = iVar4;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&local_d8,param_3);
    MakeInstall(__return_storage_ptr__,param_2,&local_d8,&local_108,&local_118);
  }
  else {
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_88.Elements._48_8_ = _UNK_150631d98;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_f8.Data.AllocatorInstance.Data = pFVar6;
    local_f8.Data.ArrayNum = iVar1;
    local_f8.Data.ArrayMax = iVar2;
    local_e8.Data.AllocatorInstance.Data = pFVar7;
    local_e8.Data.ArrayNum = iVar3;
    local_e8.Data.ArrayMax = iVar4;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(&local_88,param_3);
    if (param_1->Object == (IBuildManifest *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FInstallerAction *)(*pcVar9)();
        return pFVar11;
      }
    }
    local_128.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_128.Object = param_1->Object;
    if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_128.Object == (IBuildManifest *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FInstallerAction *)(*pcVar9)();
        return pFVar11;
      }
    }
    MakeUpdate(__return_storage_ptr__,&local_128,param_2,&local_88,&local_e8,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
  }
  param_3->HashSize = 0;
  FVar8 = (param_3->Hash).SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_3->Elements);
  pFVar6 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (param_5->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return __return_storage_ptr__;
}

