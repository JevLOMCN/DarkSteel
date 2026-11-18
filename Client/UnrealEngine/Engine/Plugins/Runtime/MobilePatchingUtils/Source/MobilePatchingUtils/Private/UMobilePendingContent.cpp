// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MobilePatchingUtils
// Functions: 21

// StaticClass @ 14f03be70

UClass * __cdecl UMobilePendingContent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobilePendingContent",
               &Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton,
               StaticRegisterNativesUMobilePendingContent,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMobilePendingContent>,
               InternalVTableHelperCtorCaller<UMobilePendingContent>,local_res8,
               UMobileInstalledContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton;
}

// UMobilePendingContent @ 14f03d060

UMobilePendingContent * __thiscall
UMobilePendingContent::UMobilePendingContent(UMobilePendingContent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMobilePendingContent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RemoteManifestURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteManifestURL).Data.ArrayNum = 0;
  (this->RemoteManifestURL).Data.ArrayMax = 0;
  (this->CloudURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudURL).Data.ArrayNum = 0;
  (this->CloudURL).Data.ArrayMax = 0;
  (this->Installer).Object = (IBuildInstaller *)0x0;
  (this->Installer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RemoteManifest).Object = (IBuildManifest *)0x0;
  (this->RemoteManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMobilePendingContent @ 14f03d0c0

UMobilePendingContent * __thiscall
UMobilePendingContent::UMobilePendingContent
          (UMobilePendingContent *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMobilePendingContent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RemoteManifestURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteManifestURL).Data.ArrayNum = 0;
  (this->RemoteManifestURL).Data.ArrayMax = 0;
  (this->CloudURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudURL).Data.ArrayNum = 0;
  (this->CloudURL).Data.ArrayMax = 0;
  (this->Installer).Object = (IBuildInstaller *)0x0;
  (this->Installer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RemoteManifest).Object = (IBuildManifest *)0x0;
  (this->RemoteManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMobilePendingContent @ 14f03d180

void __thiscall UMobilePendingContent::~UMobilePendingContent(UMobilePendingContent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMobilePendingContent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RemoteManifest).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Installer).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CloudURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemoteManifestURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMobileInstalledContent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14f03d7c0

void __thiscall UMobilePendingContent::BeginDestroy(UMobilePendingContent *this)

{
  IBuildInstaller *pIVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UObject::BeginDestroy((UObject *)this);
  pIVar1 = (this->Installer).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0xb8))();
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->Installer != (TSharedPtr<IBuildInstaller,1> *)&local_18) {
      (this->Installer).Object = (IBuildInstaller *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Installer).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// GetDownloadSize @ 14f03dec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall UMobilePendingContent::GetDownloadSize(UMobilePendingContent *this)

{
  IBuildManifest *pIVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  undefined1 auStackY_b8 [32];
  longlong local_88;
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pIVar1 = (this->RemoteManifest).Object;
  dVar7 = 0.0;
  if (pIVar1 != (IBuildManifest *)0x0) {
    if (this->_padding_ == 0) {
      lVar5 = (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1);
      dVar7 = (double)lVar5;
    }
    else {
      local_88 = this->_padding_;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_44 = 0;
      local_38 = (void *)0x0;
      local_30 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x68);
      local_80 = (TReferenceControllerBase<1> *)this->_padding_;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_88 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
      }
      lVar5 = (*pcVar2)(pIVar1,local_78,&local_88);
      dVar7 = (double)lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      local_30 = 0;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_78,0,local_78._8_4_);
      iVar3 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_44 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
    }
  }
  dVar7 = FUnitConversion::Convert<double>(dVar7,Bytes,Megabytes);
  return (float)dVar7;
}

// GetDownloadSpeed @ 14f03e090

float __thiscall UMobilePendingContent::GetDownloadSpeed(UMobilePendingContent *this)

{
  IBuildInstaller *pIVar1;
  double dVar2;
  
  pIVar1 = (this->Installer).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    dVar2 = (double)(**(code **)((longlong)*pIVar1 + 0x60))();
    dVar2 = FUnitConversion::Convert<double>(dVar2,Bytes,Megabytes);
    return (float)dVar2;
  }
  return 0.0;
}

// GetDownloadStatusText @ 14f03e0d0

FText * __thiscall
UMobilePendingContent::GetDownloadStatusText
          (UMobilePendingContent *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetInstallProgress @ 14f03e160

float __thiscall UMobilePendingContent::GetInstallProgress(UMobilePendingContent *this)

{
  IBuildInstaller *pIVar1;
  float fVar2;
  
  pIVar1 = (this->Installer).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f03e16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((longlong)*pIVar1 + 0x90))();
    return fVar2;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14f03e870

UClass * __cdecl UMobilePendingContent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MobilePatchingUtils",L"MobilePendingContent",
               &Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton,
               StaticRegisterNativesUMobilePendingContent,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMobilePendingContent>,
               InternalVTableHelperCtorCaller<UMobilePendingContent>,local_res8,
               UMobileInstalledContent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMobilePendingContent.InnerSingleton;
}

// GetRequiredDiskSpace @ 14f03ed60

float __thiscall UMobilePendingContent::GetRequiredDiskSpace(UMobilePendingContent *this)

{
  IBuildManifest *pIVar1;
  longlong lVar2;
  double dVar3;
  
  pIVar1 = (this->RemoteManifest).Object;
  if (pIVar1 != (IBuildManifest *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x78))();
    dVar3 = FUnitConversion::Convert<double>((double)lVar2,Bytes,Megabytes);
    return (float)dVar3;
  }
  return 0.0;
}

// GetTotalDownloadedSize @ 14f03edd0

float __thiscall UMobilePendingContent::GetTotalDownloadedSize(UMobilePendingContent *this)

{
  IBuildInstaller *pIVar1;
  longlong lVar2;
  double dVar3;
  
  pIVar1 = (this->Installer).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x78))();
    dVar3 = FUnitConversion::Convert<double>((double)lVar2,Bytes,Megabytes);
    return (float)dVar3;
  }
  return 0.0;
}

// StartInstall @ 14f03fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMobilePendingContent::StartInstall
          (UMobilePendingContent *this,FOnContentInstallSucceeded *param_1,
          FOnContentInstallFailed *param_2)

{
  FName FVar1;
  IBuildManifest *pIVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  IBuildPatchServicesModule *pIVar4;
  ForAnyElementType _Src_00;
  bool bVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  longlong lVar9;
  FInstallerAction *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FBuildInstallerConfiguration *pFVar13;
  TSharedPtr<IBuildInstaller,1> *pTVar14;
  int iVar15;
  undefined1 auStackY_438 [32];
  ForAnyElementType local_3e8;
  undefined8 local_3e0;
  FString local_3d8;
  IBuildInstaller *local_3c8;
  FSharedReferencer<1> local_3c0;
  TSharedRef<IBuildManifest,1> local_3b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_398;
  FDelegateAllocation local_390;
  FString local_380;
  FString local_370;
  TArray<BuildPatchServices::FInstallerAction,TSizedDefaultAllocator<32>_> local_360;
  FBuildInstallerConfiguration local_348;
  FDestructionSentinel local_298;
  FDelegateAllocation *local_280;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_278;
  FName local_228;
  FString local_220;
  undefined1 local_210 [8];
  TReferenceControllerBase<1> *local_208;
  FReadAccessScope local_200;
  FReadAccessScope local_1e8;
  FBuildInstallerConfiguration local_1d0;
  FInstallerAction local_118;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pTVar7 = &FPaths::ProjectPersistentDownloadDir(&local_220)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_3a8,pTVar7,0xe - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_3a8,L"PatchStaging",0xc);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (BuildPatchServices == (IBuildPatchServicesModule *)0x0) {
    pFVar8 = ::FName::FName(&local_228,L"BuildPatchServices");
    FVar1 = *pFVar8;
    this_00 = FModuleManager::Get();
    BuildPatchServices =
         (IBuildPatchServicesModule *)FModuleManager::LoadModuleChecked(this_00,FVar1);
  }
  pIVar4 = BuildPatchServices;
  GetDownloadSize(this);
  pIVar2 = (this->RemoteManifest).Object;
  if (pIVar2 != (IBuildManifest *)0x0) {
    lVar9 = (**(code **)((longlong)*pIVar2 + 0x78))();
    FUnitConversion::Convert<double>((double)lVar9,Bytes,Megabytes);
  }
  UMobileInstalledContent::GetDiskFreeSpace((UMobileInstalledContent *)this);
  if (4 < (byte)LogMobilePatchingUtils._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
  }
  if (4 < (byte)LogMobilePatchingUtils._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
  }
  if (4 < (byte)LogMobilePatchingUtils._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMobilePatchingUtils);
  }
  local_3e8.Data = (FScriptContainerElement *)0x0;
  local_278.Elements._16_8_ = 0;
  local_278.Elements._24_8_ = 0;
  local_3e0 = 0;
  local_278.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_278.Elements._48_8_ = _UNK_150631d98;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Data.ArrayNum = 0;
  local_380.Data.ArrayMax = 0;
  local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.Data.ArrayNum = 0;
  local_370.Data.ArrayMax = 0;
  local_278.Hash.InlineData[0] = '\0';
  local_278.Hash.InlineData[1] = '\0';
  local_278.Hash.InlineData[2] = '\0';
  local_278.Hash.InlineData[3] = '\0';
  local_278.Hash._padding_ = 0;
  local_278.HashSize = 0;
  local_278._76_4_ = 0;
  local_278.Elements._0_8_ = 0;
  local_278.Elements._8_8_ = 0;
  local_278.Elements._32_8_ = 0;
  local_278.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if (((this->RemoteManifest).Object == (IBuildManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_3b8.SharedReferenceCount.ReferenceController =
       (this->RemoteManifest).SharedReferenceCount.ReferenceController;
  local_3b8.Object = (this->RemoteManifest).Object;
  if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_3b8.Object == (IBuildManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = BuildPatchServices::FInstallerAction::MakeInstallOrUpdate
                      (&local_118,(TSharedPtr<IBuildManifest,1> *)&this->_padding_,&local_3b8,
                       &local_278,&local_370,&local_380);
  if (((local_3e8.Data <= pFVar10) &&
      (pFVar10 < (FInstallerAction *)(local_3e8.Data + (longlong)local_3e0._4_4_ * 0x98))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)local_3e0;
  if ((int)local_3e0 == local_3e0._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&local_3e8,(int *)((longlong)&local_3e0 + 4));
  }
  local_3e0 = CONCAT44(local_3e0._4_4_,iVar6 + 1);
  BuildPatchServices::FInstallerAction::FInstallerAction
            ((FInstallerAction *)(local_3e8.Data + (longlong)iVar6 * 0x98),pFVar10);
  if (local_118.CloudSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.CloudSubdirectory.Data.AllocatorInstance.Data);
  }
  if (local_118.InstallSubdirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.InstallSubdirectory.Data.AllocatorInstance.Data);
  }
  local_118.InstallTags.HashSize = 0;
  if (local_118.InstallTags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.InstallTags.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.InstallTags.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.InstallManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.CurrentManifest.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8.SharedReferenceCount.ReferenceController);
  local_360.AllocatorInstance.Data = local_3e8.Data;
  local_360.ArrayNum = (int)local_3e0;
  local_360.ArrayMax = local_3e0._4_4_;
  local_3e0 = 0;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
            (&local_348,&local_360);
  _Src_00.Data = local_3a8.AllocatorInstance.Data;
  if ((local_3a8.ArrayNum == 0) && (local_348.StagingDirectory.Data.ArrayMax == 0)) {
    local_348.StagingDirectory.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3a8.ArrayNum,local_348.StagingDirectory.Data.ArrayMax,
               (ForAnyElementType *)&local_348.StagingDirectory,local_3a8.ArrayNum,
               &local_348.StagingDirectory.Data.ArrayMax);
    if (local_3a8.ArrayNum != 0) {
      memcpy(local_348.StagingDirectory.Data.AllocatorInstance.Data,_Src_00.Data,
             (longlong)local_3a8.ArrayNum * 2);
    }
  }
  local_3d8.Data.ArrayNum = (this->CloudURL).Data.ArrayNum;
  lVar9 = (longlong)local_3d8.Data.ArrayNum;
  _Src = (this->CloudURL).Data.AllocatorInstance.Data;
  local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_3d8.Data.ArrayNum == 0) {
    local_3d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3d8.Data.ArrayNum,0,(ForAnyElementType *)&local_3d8,local_3d8.Data.ArrayNum
               ,&local_3d8.Data.ArrayMax);
    memcpy(local_3d8.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  DestructItems<FString,int>
            ((FString *)local_348.CloudDirectories.AllocatorInstance.Data,
             local_348.CloudDirectories.ArrayNum);
  local_348.CloudDirectories.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,local_348.CloudDirectories.ArrayMax,
             &local_348.CloudDirectories.AllocatorInstance,1,&local_348.CloudDirectories.ArrayMax);
  ConstructItems<FString,FString,int>
            (local_348.CloudDirectories.AllocatorInstance.Data,&local_3d8,1);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  iVar6 = (int)this->_padding_;
  iVar15 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar15 = 0;
  }
  ::FString::AssignRange(&local_348.InstallDirectory,(wchar_t *)this->_padding_,iVar15);
  local_398.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_390.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_390.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*pIVar4 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_398,(FWriteAccessScope *)&local_298);
  local_280 = &local_390;
  puVar11 = UE::Core::Private::DelegateAllocate(0x50,&local_390);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy__PEAVUMobilePendingContent__VFOnContentInstallSucceeded__VFOnContentInstallFailed____6B_
    ;
    puVar11[1] = this;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_200);
    puVar11[3] = *(undefined8 *)&param_1->field_0x8;
    puVar11[4] = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_200);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_1e8);
    puVar11[6] = *(undefined8 *)&param_2->field_0x8;
    puVar11[7] = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1e8);
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[8] = uVar12;
    *puVar11 = &
               ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy__PEAVUMobilePendingContent__VFOnContentInstallSucceeded__VFOnContentInstallFailed____6B_
    ;
    puVar11[9] = OnInstallComplete;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  pFVar13 = BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
                      (&local_1d0,&local_348);
  puVar11 = (undefined8 *)(*pcVar3)(pIVar4,local_210,pFVar13,&local_398);
  local_3c0.ReferenceController = (TReferenceControllerBase<1> *)puVar11[1];
  local_3c8 = (IBuildInstaller *)*puVar11;
  if (local_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = &this->Installer;
  if (pTVar14 != (TSharedPtr<IBuildInstaller,1> *)&local_3c8) {
    pTVar14->Object = local_3c8;
    local_3c8 = (IBuildInstaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Installer).SharedReferenceCount,&local_3c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
  if ((pTVar14->Object == (IBuildInstaller *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*pTVar14->Object + 8))();
  DestructItems<FString,int>
            ((FString *)local_348.CloudDirectories.AllocatorInstance.Data,
             local_348.CloudDirectories.ArrayNum);
  if (local_348.CloudDirectories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.CloudDirectories.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_348.ChunkDatabaseFiles.AllocatorInstance.Data,
             local_348.ChunkDatabaseFiles.ArrayNum);
  if (local_348.ChunkDatabaseFiles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.ChunkDatabaseFiles.AllocatorInstance.Data);
  }
  if (local_348.BackupDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.BackupDirectory.Data.AllocatorInstance.Data);
  }
  if (local_348.StagingDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.StagingDirectory.Data.AllocatorInstance.Data);
  }
  if (local_348.InstallDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.InstallDirectory.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.SharedContext.SharedReferenceCount.ReferenceController);
  DestructItems<BuildPatchServices::FInstallerAction,int>
            ((FInstallerAction *)local_348.InstallerActions.AllocatorInstance.Data,
             local_348.InstallerActions.ArrayNum);
  if ((FInstallerAction *)local_348.InstallerActions.AllocatorInstance.Data !=
      (FInstallerAction *)0x0) {
    FMemory::Free(local_348.InstallerActions.AllocatorInstance.Data);
  }
  DestructItems<BuildPatchServices::FInstallerAction,int>
            ((FInstallerAction *)local_3e8.Data,(int)local_3e0);
  if ((FInstallerAction *)local_3e8.Data != (FInstallerAction *)0x0) {
    FMemory::Free(local_3e8.Data);
  }
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// StaticRegisterNativesUMobilePendingContent @ 14f0402e0

void __cdecl UMobilePendingContent::StaticRegisterNativesUMobilePendingContent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UMobilePendingContent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDownloadSize @ 14f040520

void __cdecl
UMobilePendingContent::execGetDownloadSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetDownloadSize((UMobilePendingContent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetDownloadSpeed @ 14f040560

void __cdecl
UMobilePendingContent::execGetDownloadSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[2].field_0x18 != (longlong *)0x0) {
    dVar1 = (double)(**(code **)(**(longlong **)&param_1[2].field_0x18 + 0x60))();
    dVar1 = FUnitConversion::Convert<double>(dVar1,Bytes,Megabytes);
    *(float *)param_3 = (float)dVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetDownloadStatusText @ 14f0405c0

void __cdecl
UMobilePendingContent::execGetDownloadStatusText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  undefined1 local_res10 [24];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FText::GetEmpty();
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = pFVar1->Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetInstallProgress @ 14f040640

void __cdecl
UMobilePendingContent::execGetInstallProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[2].field_0x18 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[2].field_0x18 + 0x90))();
    *(undefined4 *)param_3 = uVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetRequiredDiskSpace @ 14f040790

void __cdecl
UMobilePendingContent::execGetRequiredDiskSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  double dVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(param_1 + 3) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 3) + 0x78))();
    dVar2 = FUnitConversion::Convert<double>((double)lVar1,Bytes,Megabytes);
    *(float *)param_3 = (float)dVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetTotalDownloadedSize @ 14f0408b0

void __cdecl
UMobilePendingContent::execGetTotalDownloadedSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  double dVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[2].field_0x18 != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)&param_1[2].field_0x18 + 0x78))();
    dVar2 = FUnitConversion::Convert<double>((double)lVar1,Bytes,Megabytes);
    *(float *)param_3 = (float)dVar2;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execStartInstall @ 14f040c80

void __cdecl UMobilePendingContent::execStartInstall(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  undefined8 local_80;
  undefined8 local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  undefined8 local_68;
  undefined8 local_60;
  FOnContentInstallFailed local_58;
  FOnContentInstallSucceeded local_40;
  FReadAccessScope local_28;
  
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_68 = 0;
  local_60 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80 = 0;
  local_78 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_58._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_88,&local_28);
  local_58._8_8_ = local_80;
  local_58._16_8_ = local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_40._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_70,&local_28);
  local_40._8_8_ = local_68;
  local_40._16_8_ = local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  StartInstall((UMobilePendingContent *)param_1,&local_40,&local_58);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  return;
}

