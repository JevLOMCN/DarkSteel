// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 222

// Analytics'' @ 140f4da20

void __cdecl `dynamic_initializer_for_'FBuildPatchServicesModule::Analytics__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBuildPatchServicesModule::Analytics__);
  return;
}

// BackupDirectory'' @ 140f4da40

void __cdecl `dynamic_initializer_for_'FBuildPatchServicesModule::BackupDirectory__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBuildPatchServicesModule::BackupDirectory__);
  return;
}

// CloudDirectories'' @ 140f4da60

void __cdecl `dynamic_initializer_for_'FBuildPatchServicesModule::CloudDirectories__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBuildPatchServicesModule::CloudDirectories__);
  return;
}

// StagingDirectory'' @ 140f4da80

void __cdecl `dynamic_initializer_for_'FBuildPatchServicesModule::StagingDirectory__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FBuildPatchServicesModule::StagingDirectory__);
  return;
}

// `dynamic_initializer_for_'CVarAllowMultipleFilesInFlight'' @ 140f4daa0

void __cdecl _dynamic_initializer_for__CVarAllowMultipleFilesInFlight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowMultipleFilesInFlight,
             L"BuildPatchFileConstructor.bCVarAllowMultipleFilesInFlight",
             &bCVarAllowMultipleFilesInFlight,
             L"Whether to allow multiple files to be constructed at the same time, though still sequentially."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowMultipleFilesInFlight__);
  return;
}

// `dynamic_initializer_for_'CVarRefDisableResumeBelowMB'' @ 140f4daf0

void __cdecl _dynamic_initializer_for__CVarRefDisableResumeBelowMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRefDisableResumeBelowMB,L"BuildPatchFileConstructor.DisableResumeBelowMB",
             &CVarDisableResumeBelowMB,
             L"If nonzero, installs (not patches) below this size will not create or check any resume data."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRefDisableResumeBelowMB__);
  return;
}

// `dynamic_initializer_for_'CVarSleepTimeWhenFileSystemThrottledSeconds'' @ 140f4db40

void __cdecl _dynamic_initializer_for__CVarSleepTimeWhenFileSystemThrottledSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSleepTimeWhenFileSystemThrottledSeconds,
             L"BuildPatchFileConstructor.SleepTimeWhenFileSystemThrottledSeconds",
             &SleepTimeWhenFileSystemThrottledSeconds,
             L"The amount of time to sleep if the destination filesystem is throttled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSleepTimeWhenFileSystemThrottledSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarStallWhenFileSystemThrottled'' @ 140f4db90

void __cdecl _dynamic_initializer_for__CVarStallWhenFileSystemThrottled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStallWhenFileSystemThrottled,
             L"BuildPatchFileConstructor.bStallWhenFileSystemThrottled",
             &bCVarStallWhenFileSystemThrottled,L"Whether to stall if the file system is throttled",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarStallWhenFileSystemThrottled__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 140f4dbe0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LogBPSInstallerConfig'' @ 140f4dc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBPSInstallerConfig__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBPSInstallerConfig,L"LogBPSInstallerConfig",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBPSInstallerConfig__);
  return;
}

// `dynamic_initializer_for_'LogBuildPatchServices'' @ 140f4dc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBuildPatchServices__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBuildPatchServices,L"LogBuildPatchServices",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBuildPatchServices__);
  return;
}

// `dynamic_initializer_for_'LogMergeManifests'' @ 140f4dc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMergeManifests__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMergeManifests,L"LogMergeManifests",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMergeManifests__);
  return;
}

// `dynamic_initializer_for_'LogPatchGeneration'' @ 140f4dcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPatchGeneration__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPatchGeneration,L"LogPatchGeneration",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPatchGeneration__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantBuildPatchServices'' @ 140f4dd00

void __cdecl _dynamic_initializer_for__ModuleRegistrantBuildPatchServices__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "BuildPatchServices";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"BuildPatchServices",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FBuildPatchServicesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 140f4dd50

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 140f4dd70

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_BuildPatchServices'' @ 140f4dd90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_BuildPatchServices__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7d5a8734;
  local_res8[0].DeclarationsHash = 0x8f40d428;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_BuildPatchServices,L"/Script/BuildPatchServices",
             &Z_Registration_Info_UPackage__Script_BuildPatchServices,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 1431a7860

void * __thiscall
IBuildPatchServicesModule::_scalar_deleting_destructor_
          (IBuildPatchServicesModule *this,uint param_1)

{
  *this = (IBuildPatchServicesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431a8e50

void * __thiscall
FBuildPatchServicesModule::_scalar_deleting_destructor_
          (FBuildPatchServicesModule *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStartBuildInstallEvent).field_0x8,
             *(int *)&(this->OnStartBuildInstallEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnStartBuildInstallEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStartBuildInstallEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InstallerStartDelegate);
  pTVar4 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  *(undefined4 *)&(this->AvailableInstallations).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AvailableInstallations).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvailableInstallations);
  DestructItems<TSharedRef<IBuildInstaller,1>,int>
            ((TSharedRef<IBuildInstaller,1> *)
             (this->BuildPatchInstallerInterfaces).AllocatorInstance.Data,
             (this->BuildPatchInstallerInterfaces).ArrayNum);
  pFVar5 = (this->BuildPatchInstallerInterfaces).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedRef<BuildPatchServices::FBuildPatchInstaller,1>,int>
            ((TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *)
             (this->BuildPatchInstallers).AllocatorInstance.Data,
             (this->BuildPatchInstallers).ArrayNum);
  pFVar5 = (this->BuildPatchInstallers).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->LocalMachineConfigFile).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// Accumulate<__int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,`FBuildPatchAppManifest::GetDataSize'::__l2::<lambda_1>_> @ 1431a95e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __cdecl
Algo::
Accumulate<__int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,_FBuildPatchAppManifest::GetDataSize_::__l2::<lambda_1>_>
          (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1,long64 param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  long64 lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar12 = *(int *)&(param_1->Elements).field_0x28;
  uVar5 = 1;
  iVar14 = 0;
  iVar10 = 0;
  iVar6 = 0;
  if (iVar12 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar13) {
        iVar10 = *(int *)&(param_1->Elements).field_0x28;
        iVar6 = iVar12;
        goto LAB_1431a9686;
      }
      uVar11 = puVar15[lVar7 + 1];
    }
    iVar10 = *(int *)&(param_1->Elements).field_0x28;
    uVar5 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar14;
    if (iVar10 < iVar6) {
      iVar6 = iVar12;
    }
  }
LAB_1431a9686:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar13);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar10 < (int)uVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    lVar8 = (*pcVar3)();
    return lVar8;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar5) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar12) goto LAB_1431a9780;
      uVar11 = *(uint *)(puVar9 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar11) {
      uVar11 = uVar5;
    }
  }
LAB_1431a9780:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar7 = (**(code **)((param_3.__this)->_padding_ + 0x1a8))
                      (param_3.__this,
                       *(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18)
    ;
    param_2 = param_2 + lVar7;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return param_2;
}

// Accumulate<__int64,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,`FBuildPatchAppManifest::GetFileSize'::__l2::<lambda_1>_> @ 1431a9810

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

long64 __cdecl
Algo::
Accumulate<__int64,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FBuildPatchAppManifest::GetFileSize_::__l2::<lambda_1>_>
          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,long64 param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  long64 lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  long64 local_res10;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_78 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_90) goto LAB_1431a98be;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1431a98be:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar16 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_res10 = param_2;
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    lVar10 = (*pcVar6)();
    return lVar10;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  lVar9 = local_res10;
  if (uVar13 != uVar4) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar14) goto LAB_1431a99c1;
      uVar13 = *(uint *)(puVar12 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1431a99c1:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    lVar11 = *(longlong *)&pTVar7->Elements;
    uVar5 = *(undefined8 *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    iVar3 = *(int *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x18 + 8);
    iStack_a0 = iVar3 + -1;
    if (iVar3 == 0) {
      iStack_a0 = 0;
    }
    local_b8 = (undefined4)uVar5;
    uStack_b4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    lVar11 = (**(code **)((param_3.__this)->_padding_ + 0xb0))(param_3.__this,&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    lVar9 = lVar9 + lVar11;
  }
  return lVar9;
}

// Accumulate<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,`BuildPatchServices::FBuildPatchManifestSet::GetDownloadSize'::__l2::<lambda_1>_> @ 1431a9a70

ulong64 __cdecl
Algo::
Accumulate<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,_BuildPatchServices::FBuildPatchManifestSet::GetDownloadSize_::__l2::<lambda_1>_>
          (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1,ulong64 param_2,
          <lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulong64 uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar12 = *(int *)&(param_1->Elements).field_0x28;
  uVar5 = 1;
  iVar14 = 0;
  iVar10 = 0;
  iVar6 = 0;
  if (iVar12 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar13) {
        iVar10 = *(int *)&(param_1->Elements).field_0x28;
        iVar6 = iVar12;
        goto LAB_1431a9b16;
      }
      uVar11 = puVar15[lVar7 + 1];
    }
    iVar10 = *(int *)&(param_1->Elements).field_0x28;
    uVar5 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar14;
    if (iVar10 < iVar6) {
      iVar6 = iVar12;
    }
  }
LAB_1431a9b16:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar13);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar10 < (int)uVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar5) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar12) goto LAB_1431a9c10;
      uVar11 = *(uint *)(puVar9 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar11) {
      uVar11 = uVar5;
    }
  }
LAB_1431a9c10:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar7 = (**(code **)((param_3.__this)->_padding_ + 0x28))
                      (param_3.__this,
                       *(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18)
    ;
    param_2 = param_2 + lVar7;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return param_2;
}

// AddLambda<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_> @ 1431a9ca0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
AddLambda<_BuildPatchServices::FBuildPatchInstaller::RunInstallation_::__l149::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FBuildPatchInstaller *pFVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar6 = (FBuildPatchInstaller *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`149'::<lambda_2>_>
               ::_vftable_;
    uVar1 = in_R8[1];
    puVar4[3] = *in_R8;
    puVar4[4] = uVar1;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FBuildPatchInstaller *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar6 = (FBuildPatchInstaller *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar3 = *(int *)&this->field_0x10;
    param_1->__this = pFVar6;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_> @ 1431aaa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>,void>
             ::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_> @ 1431ab6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>,void>
             ::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    UE::Tasks::Private::FTaskBase::Init(pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_> *)
               local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_> @ 1431ac380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
* __cdecl Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>
                    (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                     *__return_storage_ptr__,EAsyncExecution param_1,
                    TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>
                    *param_2,TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar10;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar11;
  FTSTicker *this;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  code **ppcVar15;
  FPipe *pFVar16;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar17;
  FSharedReferencer<1> FVar18;
  longlong *plVar19;
  ForAnyElementType FVar20;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar21;
  Type TVar22;
  undefined1 auStackY_1d8 [32];
  EExtendedTaskPriority local_198;
  ETaskPriority local_197 [7];
  TPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  local_190;
  FRunnableThread *local_178;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *local_170;
  FRunnableThread *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *local_f8 [2];
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar21 = (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
             *)0x0;
  local_178 = (FRunnableThread *)((ulonglong)local_178 & 0xffffffff00000000);
  local_f8[0] = *(TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                  **)param_2;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_e8.EmptyEventRef.Object = *(TEventCount<unsigned_int> **)&param_2->field_0x20;
  local_e8.LastTask = *(atomic<UE::Tasks::Private::FTaskBase_*> *)&param_2->field_0x10;
  local_e8.TaskCount = *(atomic<unsigned___int64> *)&param_2->field_0x18;
  if (local_f8[0] !=
      (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    *(undefined8 *)param_2 = 0;
  }
  pTVar9 = operator_new(0x120);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    local_190.State.Object =
         (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          *)&DAT_00000010;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_190.bFutureRetrieved = true;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1______00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)(pTVar9 + 1),param_3);
    pTVar17 = (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
               *)(pTVar9 + 1);
    if ((pTVar17 ==
         (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    local_190.State.Object = pTVar17;
    local_190.State.SharedReferenceCount.ReferenceController = pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    local_190.bFutureRetrieved = true;
    if ((pTVar17 ==
         (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
  }
  FVar18.ReferenceController = local_190.State.SharedReferenceCount.ReferenceController;
  local_170 = local_190.State.Object;
  if (local_190.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar22 = GameThread;
    if (param_1 == TaskGraph) {
      TVar22 = AnyNormalThreadNormalTask;
    }
    pTVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pTVar17 = pTVar21;
    if (pTVar11 !=
        (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
         *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pTVar11,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TGraphTask_V__TAsyncGraphTask_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_______6B_
      ;
      pTVar17 = pTVar11;
    }
    *(TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
      **)((atomic<unsigned_char> *)(pTVar17->Result).Pad + 0x70) = local_f8[0];
    *(TReferenceControllerBase<1> **)((atomic<unsigned_char> *)(pTVar17->Result).Pad + 0x98) =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)
     ((atomic<unsigned_char> *)(pTVar17->Result).Pad + 0x80) = local_e8.LastTask;
    *(atomic<unsigned___int64> *)((atomic<unsigned_char> *)(pTVar17->Result).Pad + 0x88) =
         local_e8.TaskCount;
    *(TEventCount<unsigned_int> **)((atomic<unsigned_char> *)(pTVar17->Result).Pad + 0x90) =
         local_e8.EmptyEventRef.Object;
    if (*(longlong *)((atomic<unsigned_char> *)(pTVar17->Result).Pad + 0x70) != 0) {
      local_f8[0] = pTVar21;
    }
    pTVar17[1]._padding_ = (longlong)local_190.State.Object;
    *(TReferenceControllerBase<1> **)&pTVar17[1]._padding_ =
         local_190.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pTVar17[1]._padding_ = local_190.bFutureRetrieved;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object =
         (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          *)0x0;
    *(Type *)&pTVar17[1]._padding_ = TVar22;
    UE::Tasks::Private::TranslatePriority(TVar22,local_197,&local_198);
    UE::Tasks::Private::FTaskBase::Init
              ((FTaskBase *)pTVar17,L"GraphTask",local_197[0],local_198,None);
    if (pTVar17 ==
        (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
         *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      *(atomic<unsigned_int> *)&pTVar17->_padding_ =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)&pTVar17->_padding_ + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pTVar17,0x130);
      LOCK();
      paVar1 = (atomic<unsigned_int> *)&pTVar17->_padding_;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pTVar17->_padding_)(pTVar17,1);
      }
    }
    goto LAB_1431acd73;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8[0];
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_190.State.Object;
    local_90 = local_190.State.SharedReferenceCount.ReferenceController;
    local_88 = local_190.bFutureRetrieved;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8[0] = (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)0x0;
    local_190.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_190.State.Object =
         (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          *)0x0;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AU__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1___XZ____YA_AV__TFuture_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____W4EAsyncExecution____QEAV__TFunction___A6A_AU__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1___XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar15 = local_50 + 2;
    *ppcVar15 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar15 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar15 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar15 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar15 = local_50;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (((local_98 !=
          (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
         *)local_e8.DebugName !=
        (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
         *)0x0) {
      pFVar16 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar16 = local_a0;
      }
      (**(code **)((longlong)pFVar16->LastTask + 0x10))();
    }
    goto LAB_1431acd73;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pTVar12 = operator_new(0x70);
      pTVar17 = local_170;
      pTVar11 = pTVar21;
      if (pTVar12 !=
          (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pTVar12->_padding_ =
             &
             ___7__TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____6B_
        ;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pTVar12->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8[0];
        pTVar12->_padding_ =
             (longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pTVar12->_padding_ = (longlong)local_e8.LastTask;
        pTVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&((atomic<unsigned_int> *)&pTVar12->_padding_)->field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pTVar12->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8[0] = pTVar21;
        }
        *(TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          **)&((TEventCount<unsigned_int> *)&pTVar12->_padding_)->Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->_padding_ =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &((ForElementType<UE::Tasks::Private::FTaskBase_*> *)&pTVar12->_padding_)->field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object =
             (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
              *)0x0;
        ((atomic<unsigned___int64> *)&pTVar12->_padding_)->field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
          &pTVar12->_padding_)->Prerequisites).AllocatorInstance.InlineData = pTVar6;
        pTVar17 = pTVar21;
        pTVar21 = (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)&DAT_00000001;
        pTVar11 = pTVar12;
      }
      if (pTVar21 !=
          (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar17);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar20.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar11,(wchar_t *)FVar20.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_178);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
      goto LAB_1431acd73;
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar7) || (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar7)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pTVar12 = operator_new(0x70);
      pTVar17 = local_170;
      pTVar11 = pTVar21;
      if (pTVar12 !=
          (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                     *)(*pcVar5)();
          return pTVar10;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)&pTVar12->_padding_ =
             &
             ___7__TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____6B_
        ;
        ((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pTVar12->_padding_)->Object =
             (TEventCount<unsigned_int> *)local_f8[0];
        pTVar12->_padding_ =
             (longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pTVar12->_padding_ = (longlong)local_e8.LastTask;
        pTVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&((atomic<unsigned_int> *)&pTVar12->_padding_)->field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (((TSharedRef<UE::TEventCount<unsigned_int>,1> *)&pTVar12->_padding_)->Object !=
            (TEventCount<unsigned_int> *)0x0) {
          local_f8[0] = pTVar21;
        }
        *(TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          **)&((TEventCount<unsigned_int> *)&pTVar12->_padding_)->Count = local_190.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->_padding_ =
             local_190.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)
         &((ForElementType<UE::Tasks::Private::FTaskBase_*> *)&pTVar12->_padding_)->field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object =
             (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
              *)0x0;
        ((atomic<unsigned___int64> *)&pTVar12->_padding_)->field_0x0 = local_190.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
          &pTVar12->_padding_)->Prerequisites).AllocatorInstance.InlineData = pTVar6;
        pTVar17 = pTVar21;
        pTVar21 = (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)&DAT_00000002;
        pTVar11 = pTVar12;
      }
      if (pTVar21 !=
          (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar17);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar20.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar11,(wchar_t *)FVar20.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_168);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
      goto LAB_1431acd73;
    }
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                   *)(*pcVar5)();
        return pTVar10;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &
                   ___7__TAsyncQueuedWork_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____6B_
        ;
        puVar14[2] = local_f8[0];
        puVar14[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar14 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar14 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar14[6] = local_e8.EmptyEventRef.Object;
        if (puVar14[2] != 0) {
          local_f8[0] = pTVar21;
        }
        puVar14[8] = local_190.State.Object;
        puVar14[9] = local_190.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_190.bFutureRetrieved;
        local_190.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_190.State.Object =
             (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
              *)0x0;
        (*pcVar5)(GThreadPool,puVar14,3);
      }
      goto LAB_1431acd73;
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *)(*pcVar5)();
      return pTVar10;
    }
    goto LAB_1431acd73;
  }
  SetPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_&>
            (&local_190,
             (TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>
              *)local_f8);
LAB_1431acd73:
  *(TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
    **)__return_storage_ptr__ = local_170;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar18.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_190.State.Object !=
        (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
         *)0x0) && ((char)(local_190.State.Object)->_padding_ == '\0')) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TFuture<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.State.SharedReferenceCount.ReferenceController);
  if (local_f8[0] !=
      (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar19 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar19 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_> @ 1431ace70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> * __cdecl
Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>
          (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *__return_storage_ptr__,
          EAsyncExecution param_1,
          TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskBase *pFVar9;
  TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar10;
  FTaskBase *pFVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  FPipe *pFVar17;
  FSharedReferencer<1> FVar18;
  FTaskBase *pFVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  FTaskBase *pFVar22;
  Type TVar23;
  FTaskBase *pFVar24;
  FTaskBase *this_00;
  undefined1 auStackY_208 [32];
  EExtendedTaskPriority local_1c8;
  ETaskPriority local_1c7 [7];
  FTaskBase *local_1c0;
  FTaskBase *local_1b8;
  TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *local_1b0;
  FTaskBase *local_1a8;
  FRunnableThread *local_1a0;
  FRunnableThread *local_198;
  undefined8 local_190;
  TReferenceControllerBase<1> *local_188;
  undefined8 local_180;
  TReferenceControllerBase<1> *local_178;
  undefined8 local_170;
  TReferenceControllerBase<1> *local_168;
  TPromise<FRunnableThread_*> local_160;
  TPromise<FRunnableThread_*> local_148;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_2->field_0x28;
  pFVar22 = (FTaskBase *)0x0;
  local_f8 = *(FTaskBase **)param_2;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_e8.EmptyEventRef.Object = *(TEventCount<unsigned_int> **)&param_2->field_0x20;
  local_1c0 = (FTaskBase *)((ulonglong)local_1c0 & 0xffffffff00000000);
  local_e8.LastTask = *(atomic<UE::Tasks::Private::FTaskBase_*> *)&param_2->field_0x10;
  local_e8.TaskCount = *(atomic<unsigned___int64> *)&param_2->field_0x18;
  if (local_f8 != (FTaskBase *)0x0) {
    *(undefined8 *)param_2 = 0;
  }
  local_1b0 = __return_storage_ptr__;
  local_1a8 = (FTaskBase *)param_3;
  pFVar9 = operator_new(0x90);
  if (pFVar9 == (FTaskBase *)0x0) {
    local_1b8 = (FTaskBase *)0x0;
    local_1c0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar9 = pFVar22;
  }
  else {
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar9->_padding_)[1] = (atomic<int>)0x1;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TSharedPtr_VFBuildPatchAppManifest___00_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)&pFVar9->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar9->_padding_;
    local_1b8 = pFVar9;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
      return pTVar10;
    }
    LOCK();
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
    UNLOCK();
    local_1c0 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
      return pTVar10;
    }
    LOCK();
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar23 = GameThread;
    if (param_1 == TaskGraph) {
      TVar23 = AnyNormalThreadNormalTask;
    }
    pFVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar19 = pFVar22;
    if (pFVar11 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar11,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar11->_padding_ =
           (longlong)
           &___7__TGraphTask_V__TAsyncGraphTask_V__TSharedPtr_VFBuildPatchAppManifest___00______6B_;
      pFVar19 = pFVar11;
    }
    pFVar19[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar19[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar19[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar19[1]._padding_ = (longlong)local_e8.TaskCount;
    local_1c0 = (FTaskBase *)0x0;
    pFVar19[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar19[1]._padding_ != 0) {
      local_f8 = pFVar22;
    }
    *(FTaskBase **)&pFVar19[1].StateChangeEvent = local_1b8;
    pFVar19[1].Pipe = (FPipe *)this_00;
    *(undefined1 *)&pFVar19[1].ExecutingThreadId = 1;
    *(Type *)&pFVar19[1].TraceId = TVar23;
    UE::Tasks::Private::TranslatePriority(TVar23,local_1c7,&local_1c8);
    UE::Tasks::Private::FTaskBase::Init(pFVar19,L"GraphTask",local_1c7[0],local_1c8,None);
    if (pFVar19 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar19->RefCount = (atomic<unsigned_int>)((int)pFVar19->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x130);
      LOCK();
      paVar1 = &pFVar19->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar19->_padding_)(pFVar19,1);
      }
    }
    goto LAB_1431ad111;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1c0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar9;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AV__TSharedPtr_VFBuildPatchAppManifest___00__XZ____YA_AV__TFuture_V__TSharedPtr_VFBuildPatchAppManifest___00____W4EAsyncExecution____QEAV__TFunction___A6A_AV__TSharedPtr_VFBuildPatchAppManifest___00__XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar17 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar17 = local_a0;
      }
      (**(code **)((longlong)pFVar17->LastTask + 0x10))();
    }
LAB_1431ad111:
    pTVar10 = local_1b0;
    *(FTaskBase **)local_1b0 = this_00;
    *(FTaskBase **)&local_1b0->field_0x8 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_1431adb28;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_160);
      pFVar12 = operator_new(0x70);
      pFVar19 = local_1a8;
      pFVar11 = this_00;
      pFVar24 = pFVar22;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_160.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_160.State.Object;
        local_160.bFutureRetrieved = true;
        if ((local_160.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        if (local_160.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_160.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1c0 = (FTaskBase *)0x0;
        pFVar12->_padding_ =
             (longlong)&___7__TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&(pFVar12->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_160.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar12->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar12->ExecutingThreadId = pFVar9;
        (pFVar12->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar11 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000001;
        pFVar24 = pFVar12;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar21.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_1a0 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_160,&local_1a0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_160.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_160.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar11;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_190,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = local_190;
      *(TReferenceControllerBase<1> **)&this_00->LowLevelTask = local_188;
      local_188 = (TReferenceControllerBase<1> *)0x0;
      local_190 = 0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188)
      ;
      pFVar22 = this_00;
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar7) || (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar7)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_148);
      pFVar12 = operator_new(0x70);
      pFVar19 = local_1a8;
      pFVar11 = this_00;
      pFVar24 = pFVar22;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_148.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_148.State.Object;
        local_148.bFutureRetrieved = true;
        if ((local_148.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        if (local_148.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1c0 = (FTaskBase *)0x0;
        pFVar12->_padding_ =
             (longlong)&___7__TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&(pFVar12->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_148.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar12->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar12->ExecutingThreadId = pFVar9;
        (pFVar12->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar11 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000002;
        pFVar24 = pFVar12;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar21.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_198 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_148,&local_198);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_148.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_148.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar11;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_180,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = local_180;
      *(TReferenceControllerBase<1> **)&this_00->LowLevelTask = local_178;
      local_178 = (TReferenceControllerBase<1> *)0x0;
      local_180 = 0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178)
      ;
      pFVar22 = this_00;
    }
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
        pFVar22 = this_00;
      }
      else {
        puVar14[1] = 0;
        local_1c0 = (FTaskBase *)0x0;
        *puVar14 = &___7__TAsyncQueuedWork_V__TSharedPtr_VFBuildPatchAppManifest___00____6B_;
        puVar14[2] = local_f8;
        puVar14[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar14 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar14 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar14[6] = local_e8.EmptyEventRef.Object;
        if (puVar14[2] != 0) {
          local_f8 = pFVar22;
        }
        puVar14[8] = this_00;
        puVar14[9] = pFVar9;
        *(undefined1 *)(puVar14 + 10) = 1;
        (*pcVar5)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_170,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
        return pTVar10;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = local_170;
      *(TReferenceControllerBase<1> **)&this_00->LowLevelTask = local_168;
      local_168 = (TReferenceControllerBase<1> *)0x0;
      local_170 = 0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168)
      ;
      pFVar22 = this_00;
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    pFVar22 = this_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pTVar10 = local_1b0;
  *(FTaskBase **)local_1b0 = this_00;
  *(FTaskBase **)&local_1b0->field_0x8 = pFVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar22 != (FTaskBase *)0x0) &&
      ((char)(pFVar22->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar5)();
    return pTVar10;
  }
LAB_1431adb28:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1c0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 0x10))();
  }
  if (local_1a8->_padding_ != 0) {
    plVar20 = &local_1a8->_padding_;
    if ((longlong *)local_1a8->_padding_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_1a8->_padding_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return pTVar10;
}

// ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int> @ 1431adc40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __cdecl
ConstructItems<BuildPatchServices::FBuildPatchInstallerAction,BuildPatchServices::FBuildPatchInstallerAction,int>
          (void *param_1,FBuildPatchInstallerAction *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  FSharedReferencer<1> *pFVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)((longlong)param_1 + 0xa0);
    pFVar4 = &(param_2->CurrentManifest).SharedReferenceCount;
    do {
      BuildPatchServices::FInstallerAction::FInstallerAction
                ((FInstallerAction *)
                 ((longlong)param_1 + (-0xa0 - (longlong)param_2) + (longlong)pFVar4),
                 (FInstallerAction *)(pFVar4 + -0x14));
      plVar3[-1] = (longlong)((TSharedPtr<FBuildPatchAppManifest,1> *)(pFVar4 + -1))->Object;
      pTVar1 = pFVar4->ReferenceController;
      *plVar3 = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar3[1] = *(longlong *)(pFVar4 + 1);
      lVar2 = *(longlong *)(pFVar4 + 2);
      plVar3[2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[7] = 0;
      *(undefined4 *)(plVar3 + 8) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x44) = 0x80;
      *(undefined4 *)(plVar3 + 9) = 0xffffffff;
      *(undefined4 *)((longlong)plVar3 + 0x4c) = 0;
      plVar3[0xb] = 0;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(plVar3 + 3),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar4 + 3));
      plVar3[0xd] = 0;
      plVar3[0xe] = 0;
      plVar3[0x11] = 0;
      *(undefined4 *)(plVar3 + 0x12) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x94) = 0x80;
      *(undefined4 *)(plVar3 + 0x13) = 0xffffffff;
      *(undefined4 *)((longlong)plVar3 + 0x9c) = 0;
      plVar3[0x15] = 0;
      *(undefined4 *)(plVar3 + 0x16) = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(plVar3 + 0xd),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar4 + 0xd));
      plVar3 = plVar3 + 0x2b;
      pFVar4 = pFVar4 + 0x2b;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<BuildPatchServices::FFileManifest,BuildPatchServices::FFileManifest,int> @ 1431add90

void __cdecl
ConstructItems<BuildPatchServices::FFileManifest,BuildPatchServices::FFileManifest,int>
          (void *param_1,FFileManifest *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x50);
    piVar7 = &(param_2->ChunkParts).ArrayNum;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x50 - (longlong)param_2) + (longlong)piVar7),
                       (FString *)(piVar7 + -0x14));
      FString::FString((FString *)(piVar6 + -0x10),(FString *)(piVar7 + -0x10));
      uVar5 = *(undefined8 *)(piVar7 + -10);
      pFVar1 = (ForAnyElementType *)(piVar6 + -6);
      *(undefined8 *)(piVar6 + -0xc) = *(undefined8 *)(piVar7 + -0xc);
      *(undefined8 *)(piVar6 + -10) = uVar5;
      piVar6[-8] = piVar7[-8];
      *(char *)(piVar6 + -7) = (char)piVar7[-7];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-4];
      pFVar4 = *(FString **)(piVar7 + -6);
      piVar6[-4] = iVar3;
      if (iVar3 == 0) {
        piVar6[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,0,pFVar1,iVar3,piVar6 + -3);
        ConstructItems<FString,FString,int>(pFVar1->Data,pFVar4,iVar3);
      }
      piVar6[-2] = 0;
      piVar6[-1] = 0;
      iVar3 = *piVar7;
      _Src = (((TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))
             ->AllocatorInstance).Data;
      *piVar6 = iVar3;
      if (iVar3 == 0) {
        piVar6[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar3,0,(ForAnyElementType *)(piVar6 + -2),iVar3,piVar6 + 1);
        memcpy(((ForAnyElementType *)(piVar6 + -2))->Data,_Src,(longlong)iVar3 * 0x18);
      }
      piVar2 = piVar7 + 2;
      piVar7 = piVar7 + 0x18;
      *(undefined8 *)(piVar6 + 2) = *(undefined8 *)piVar2;
      piVar6 = piVar6 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FChunkBackingStore::FBackingStoreFreeSpan,int> @ 1431ae100

void __cdecl
DefaultConstructItems<FChunkBackingStore::FBackingStoreFreeSpan,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<BuildPatchServices::FPreReqInfo,int> @ 1431ae130

void __cdecl DefaultConstructItems<BuildPatchServices::FPreReqInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      *(undefined8 *)(lVar1 + 0x7c) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined8 *)(lVar1 + 0x8c) = 0;
      lVar1 = lVar1 + 0xa8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRequestInfo::FRequestSplat,int> @ 1431ae1b0

void __cdecl DefaultConstructItems<FRequestInfo::FRequestSplat,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::FMutex,int> @ 1431ae1c0

void __cdecl DefaultConstructItems<UE::FMutex,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DestructItems<TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>,int> @ 1431ae220

void __cdecl
DestructItems<TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>,int>
          (TTuple<BuildPatchServices::FBuildPatchInstallerAction_&,TUniquePtr<BuildPatchServices::IOptimisedDelta,TDefaultDelete<BuildPatchServices::IOptimisedDelta>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x8;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<BuildPatchServices::FBuildPatchInstallerAction,int> @ 1431ae260

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __cdecl
DestructItems<BuildPatchServices::FBuildPatchInstallerAction,int>
          (FBuildPatchInstallerAction *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->TaggedFiles).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar1[-0x13]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar1[-0x15]);
      BuildPatchServices::FInstallerAction::~FInstallerAction((FInstallerAction *)(pFVar1 + -0x29));
      pFVar1 = pFVar1 + 0x2b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<BuildPatchServices::FDownload,int> @ 1431ae300

void __cdecl DestructItems<BuildPatchServices::FDownload,int>(FDownload *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Data).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<BuildPatchServices::FFileManifest,int> @ 1431ae340

void __cdecl
DestructItems<BuildPatchServices::FFileManifest,int>(FFileManifest *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InstallTags;
    do {
      pFVar1 = (((TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))
               ->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -4) + 8));
      }
      pTVar2 = pTVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<BuildPatchServices::FFileSpan,int> @ 1431ae3b0

void __cdecl DestructItems<BuildPatchServices::FFileSpan,int>(FFileSpan *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SymlinkTarget).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Filename).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<BuildPatchServices::FInstallerAction,int> @ 1431ae400

void __cdecl
DestructItems<BuildPatchServices::FInstallerAction,int>(FInstallerAction *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->InstallTags).Hash.SecondaryData;
    do {
      if (pFVar1[4] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[4]);
      }
      if (pFVar1[2] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar1[-9]);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar1[-0xb]);
      pFVar1 = pFVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<BuildPatchServices::FMatchEntry,int> @ 1431ae490

void __cdecl DestructItems<BuildPatchServices::FMatchEntry,int>(FMatchEntry *param_1,int param_2)

{
  FBlockStructure *this;
  
  if (param_2 != 0) {
    this = &param_1->BlockStructure;
    do {
      BuildPatchServices::FBlockStructure::~FBlockStructure(this);
      this = this + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<BuildPatchServices::FPreReqInfo,int> @ 1431ae4d0

void __cdecl DestructItems<BuildPatchServices::FPreReqInfo,int>(FPreReqInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->AppName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-2].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-3].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined4 *)((ForElementType<FSetElementId> *)(pFVar2 + -4) + 1) = 0;
      if (*(ForElementType<FSetElementId> *)(pFVar2 + -4) != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*(ForElementType<FSetElementId> *)(pFVar2 + -4));
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar2 + -8));
      pFVar2 = (FString *)((longlong)(pFVar2 + 10) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,int> @ 1431ae580

void __cdecl
DestructItems<TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_>,int>
          (TArray<TUniqueFunction<void___cdecl(bool)>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TUniqueFunction<void___cdecl(bool)>,int>
              ((TUniqueFunction<void___cdecl(bool)> *)(param_1->AllocatorInstance).Data,
               param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FBuildPatchAppManifest,1>,int> @ 1431ae5d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FBuildPatchAppManifest,1>,int>
          (TSharedPtr<FBuildPatchAppManifest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<BuildPatchServices::FBuildPatchInstaller,1>,int> @ 1431ae610

void __cdecl
DestructItems<TSharedRef<BuildPatchServices::FBuildPatchInstaller,1>,int>
          (TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<IBuildInstaller,1>,int> @ 1431ae650

void __cdecl
DestructItems<TSharedRef<IBuildInstaller,1>,int>(TSharedRef<IBuildInstaller,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniqueFunction<void___cdecl(bool)>,int> @ 1431ae690

void __cdecl
DestructItems<TUniqueFunction<void___cdecl(bool)>,int>
          (TUniqueFunction<void___cdecl(bool)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_>,int> @ 1431ae6e0

void __cdecl
DestructItems<TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_>,int>
          (TUniquePtr<FBatchState,TDefaultDelete<FBatchState>_> *param_1,int param_2)

{
  FBatchState *pFVar1;
  void *pvVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FBatchState *)0x0) {
      *(undefined4 *)&(pFVar1->Requests).field_0x48 = 0;
      pvVar2 = *(void **)&(pFVar1->Requests).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,FRequestInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar1->Requests);
      operator_delete(pFVar1,0xa0);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int> @ 1431ae760

void __cdecl
DestructItems<TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_>,int>
          (TUniquePtr<FFileConstructionState,TDefaultDelete<FFileConstructionState>_> *param_1,
          int param_2)

{
  FFileConstructionState *pFVar1;
  FScriptContainerElement *pFVar2;
  FArchive *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FFileConstructionState *)0x0) {
      pFVar2 = (pFVar1->NewFilename).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = (pFVar1->NewFile).Ptr;
      if (pFVar3 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
      FSHA1::~FSHA1(&pFVar1->HashState);
      operator_delete(pFVar1,0xf8);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<BuildPatchServices::FScannerDetails,TDefaultDelete<BuildPatchServices::FScannerDetails>_>,int> @ 1431ae7e0

void __cdecl
DestructItems<TUniquePtr<BuildPatchServices::FScannerDetails,TDefaultDelete<BuildPatchServices::FScannerDetails>_>,int>
          (TUniquePtr<BuildPatchServices::FScannerDetails,TDefaultDelete<BuildPatchServices::FScannerDetails>_>
           *param_1,int param_2)

{
  FScannerDetails *pFVar1;
  IDataScanner *pIVar2;
  FScriptContainerElement *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FScannerDetails *)0x0) {
      pIVar2 = (pFVar1->Scanner).Ptr;
      if (pIVar2 != (IDataScanner *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
      BuildPatchServices::FBlockStructure::~FBlockStructure(&pFVar1->Structure);
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      operator_delete(pFVar1,0x48);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FromHexString<FSHAHash> @ 1431b35a0

bool __cdecl FromHexString<FSHAHash>(FString *param_1,FSHAHash *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0x28) {
    HexToBytes(param_1,param_2->Hash);
    return true;
  }
  return false;
}

// FromStringBlob<unsigned_char> @ 1431b35e0

bool __cdecl FromStringBlob<unsigned_char>(FString *param_1,uchar *param_2)

{
  bool bVar1;
  
  bVar1 = FString::ToBlob(param_1,param_2,1);
  return bVar1;
}

// FromStringBlob<int> @ 1431b3600

bool __cdecl FromStringBlob<int>(FString *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = FString::ToBlob(param_1,(uchar *)param_2,4);
  return bVar1;
}

// FromStringBlob<unsigned_int> @ 1431b3620

bool __cdecl FromStringBlob<unsigned_int>(FString *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = FString::ToBlob(param_1,(uchar *)param_2,4);
  return bVar1;
}

// FromStringBlob<double> @ 1431b3640

bool __cdecl FromStringBlob<double>(FString *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = FString::ToBlob(param_1,(uchar *)param_2,8);
  return bVar1;
}

// FromStringBlob<__int64> @ 1431b3660

bool __cdecl FromStringBlob<__int64>(FString *param_1,long64 *param_2)

{
  bool bVar1;
  
  bVar1 = FString::ToBlob(param_1,(uchar *)param_2,8);
  return bVar1;
}

// FromStringBlob<unsigned___int64> @ 1431b3680

bool __cdecl FromStringBlob<unsigned___int64>(FString *param_1,ulong64 *param_2)

{
  bool bVar1;
  
  bVar1 = FString::ToBlob(param_1,(uchar *)param_2,8);
  return bVar1;
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TGreater<unsigned_int>_> @ 1431b3b50

void __cdecl
AlgoImpl::HeapSortInternal<unsigned_int,int,FIdentityFunctor,TGreater<unsigned_int>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,TGreater<unsigned_int> param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1431b3c2e:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[iVar6] < param_1[(longlong)iVar4 + 2]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8];
                if (uVar1 <= param_1[iVar6]) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7] < param_1[(longlong)iVar5 + 2]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4];
    if (uVar1 <= param_1[iVar7]) goto LAB_1431b3c2e;
    param_1[iVar4] = param_1[iVar7];
    param_1[iVar7] = uVar1;
    iVar5 = iVar7 * 2 + 1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,`BuildPatchServices::TBlockData<unsigned_char>::AddData'::__l21::<lambda_1>,TLess<void>_> @ 1431b3ce0

void __cdecl
AlgoImpl::
HeapSortInternal<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,_BuildPatchServices::TBlockData<unsigned_char>::AddData_::__l21::<lambda_1>,TLess<void>_>
          (FBlockToCopy *param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FBlockToCopy *pFVar13;
  FBlockToCopy *pFVar14;
  int iVar15;
  int iVar16;
  FBlockToCopy *pFVar17;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar15 = iVar10;
  iVar16 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_1431b3de9:
      if (iVar16 == 0) {
        iVar10 = param_2 + -1;
        lVar12 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar17 = param_1 + lVar12;
          do {
            uVar2 = (pFVar17->CopyBlockRange).First;
            uVar3 = param_1->SortOffset;
            uVar4 = (param_1->CopyBlockRange).First;
            uVar5 = (param_1->CopyBlockRange).Size;
            puVar6 = param_1->DataPtr;
            param_1->SortOffset = pFVar17->SortOffset;
            (param_1->CopyBlockRange).First = uVar2;
            puVar7 = pFVar17->DataPtr;
            (param_1->CopyBlockRange).Size = (pFVar17->CopyBlockRange).Size;
            param_1->DataPtr = puVar7;
            pFVar17->SortOffset = uVar3;
            (pFVar17->CopyBlockRange).First = uVar4;
            (pFVar17->CopyBlockRange).Size = uVar5;
            pFVar17->DataPtr = puVar6;
            iVar15 = 0;
            if (1 < iVar10) {
              do {
                iVar16 = iVar15 * 2;
                iVar9 = iVar16 + 1;
                if (iVar16 + 2 < iVar10) {
                  if (param_1[(longlong)iVar16 + 2].SortOffset < param_1[iVar9].SortOffset) {
                    iVar9 = iVar16;
                  }
                  iVar9 = iVar9 + 1;
                }
                pFVar13 = param_1 + iVar9;
                pFVar14 = param_1 + iVar15;
                if (pFVar13->SortOffset <= pFVar14->SortOffset) break;
                uVar2 = (pFVar13->CopyBlockRange).First;
                uVar3 = pFVar14->SortOffset;
                uVar4 = (pFVar14->CopyBlockRange).First;
                uVar5 = (pFVar14->CopyBlockRange).Size;
                puVar6 = pFVar14->DataPtr;
                pFVar14->SortOffset = pFVar13->SortOffset;
                (pFVar14->CopyBlockRange).First = uVar2;
                puVar7 = pFVar13->DataPtr;
                (pFVar14->CopyBlockRange).Size = (pFVar13->CopyBlockRange).Size;
                pFVar14->DataPtr = puVar7;
                pFVar13->SortOffset = uVar3;
                (pFVar13->CopyBlockRange).First = uVar4;
                (pFVar13->CopyBlockRange).Size = uVar5;
                pFVar13->DataPtr = puVar6;
                iVar15 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar12 = lVar12 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar9 = iVar16 + -1;
      iVar10 = iVar15 + -2;
      iVar15 = iVar10;
      iVar16 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[(longlong)iVar10 + 2].SortOffset < param_1[iVar11].SortOffset) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar17 = param_1 + iVar11;
    pFVar13 = param_1 + iVar9;
    if (pFVar17->SortOffset <= pFVar13->SortOffset) goto LAB_1431b3de9;
    uVar2 = (pFVar17->CopyBlockRange).First;
    iVar10 = iVar11 * 2 + 1;
    uVar3 = pFVar13->SortOffset;
    uVar4 = (pFVar13->CopyBlockRange).First;
    uVar5 = (pFVar13->CopyBlockRange).Size;
    puVar6 = pFVar13->DataPtr;
    pFVar13->SortOffset = pFVar17->SortOffset;
    (pFVar13->CopyBlockRange).First = uVar2;
    puVar7 = pFVar17->DataPtr;
    (pFVar13->CopyBlockRange).Size = (pFVar17->CopyBlockRange).Size;
    pFVar13->DataPtr = puVar7;
    pFVar17->SortOffset = uVar3;
    (pFVar17->CopyBlockRange).First = uVar4;
    (pFVar17->CopyBlockRange).Size = uVar5;
    pFVar17->DataPtr = puVar6;
    iVar9 = iVar11;
  } while( true );
}

// HeapSortInternal<`BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile'::__l2::FNeededChunk,int,UE::Core::Private::TProjectionMemberData<int_`BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile'::__l2::FNeededChunk::*>,TGreater<int>_> @ 1431b3ef0

void __cdecl
AlgoImpl::
HeapSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk,int,UE::Core::Private::TProjectionMemberData<int__BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk::*>,TGreater<int>_>
          (FNeededChunk *param_1,int param_2,
          TProjectionMemberData<int__private:_bool___cdecl_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile(FString_const_&)_::_2_::FNeededChunk::*>
          param_3,TGreater<int> param_4)

{
  FNeededChunk *pFVar1;
  FNeededChunk *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  FNeededChunk *pFVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  
  lVar17 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar15 = iVar14 * 2 + 1;
  iVar16 = iVar15;
  iVar18 = iVar14;
  do {
    while (param_2 <= iVar15) {
LAB_1431b403a:
      if (iVar18 == 0) {
        iVar15 = param_2 + -1;
        lVar22 = (longlong)iVar15;
        if (0 < iVar15) {
          pFVar19 = param_1 + lVar22;
          do {
            uVar4 = (pFVar19->Id).B;
            uVar5 = (pFVar19->Id).C;
            uVar6 = (pFVar19->Id).D;
            iVar16 = param_1->ChunkSize;
            iVar21 = 0;
            iVar18 = param_1->LastUsageIndex;
            iVar20 = param_1->NextUsageIndex;
            uVar7 = (param_1->Id).A;
            uVar8 = (param_1->Id).B;
            uVar9 = (param_1->Id).C;
            uVar10 = (param_1->Id).D;
            (param_1->Id).A = (pFVar19->Id).A;
            (param_1->Id).B = uVar4;
            (param_1->Id).C = uVar5;
            (param_1->Id).D = uVar6;
            iVar14 = pFVar19->NextUsageIndex;
            param_1->LastUsageIndex = pFVar19->LastUsageIndex;
            param_1->NextUsageIndex = iVar14;
            param_1->ChunkSize = pFVar19->ChunkSize;
            (pFVar19->Id).A = uVar7;
            (pFVar19->Id).B = uVar8;
            (pFVar19->Id).C = uVar9;
            (pFVar19->Id).D = uVar10;
            pFVar19->LastUsageIndex = iVar18;
            pFVar19->NextUsageIndex = iVar20;
            pFVar19->ChunkSize = iVar16;
            if (1 < iVar15) {
              do {
                iVar14 = iVar21 * 2;
                iVar16 = iVar14 + 1;
                if (iVar14 + 2 < iVar15) {
                  if (*(int *)((longlong)&param_1[iVar16].Id.A + lVar17) <
                      *(int *)((longlong)&param_1[(longlong)iVar14 + 2].Id.A + lVar17)) {
                    iVar16 = iVar14;
                  }
                  iVar16 = iVar16 + 1;
                }
                if (*(int *)((longlong)&param_1[iVar21].Id.A + lVar17) <=
                    *(int *)((longlong)&param_1[iVar16].Id.A + lVar17)) break;
                pFVar1 = param_1 + iVar16;
                uVar4 = (pFVar1->Id).B;
                uVar5 = (pFVar1->Id).C;
                uVar6 = (pFVar1->Id).D;
                iVar14 = param_1[iVar21].ChunkSize;
                pFVar2 = param_1 + iVar21;
                uVar7 = (pFVar2->Id).A;
                uVar8 = (pFVar2->Id).B;
                uVar9 = (pFVar2->Id).C;
                uVar10 = (pFVar2->Id).D;
                iVar20 = param_1[iVar21].LastUsageIndex;
                iVar11 = param_1[iVar21].NextUsageIndex;
                pFVar2 = param_1 + iVar21;
                (pFVar2->Id).A = (pFVar1->Id).A;
                (pFVar2->Id).B = uVar4;
                (pFVar2->Id).C = uVar5;
                (pFVar2->Id).D = uVar6;
                iVar18 = param_1[iVar16].NextUsageIndex;
                param_1[iVar21].LastUsageIndex = param_1[iVar16].LastUsageIndex;
                param_1[iVar21].NextUsageIndex = iVar18;
                param_1[iVar21].ChunkSize = param_1[iVar16].ChunkSize;
                pFVar1 = param_1 + iVar16;
                (pFVar1->Id).A = uVar7;
                (pFVar1->Id).B = uVar8;
                (pFVar1->Id).C = uVar9;
                (pFVar1->Id).D = uVar10;
                param_1[iVar16].LastUsageIndex = iVar20;
                param_1[iVar16].NextUsageIndex = iVar11;
                param_1[iVar16].ChunkSize = iVar14;
                iVar21 = iVar16;
              } while (iVar16 * 2 + 1 < iVar15);
            }
            iVar15 = iVar15 + -1;
            lVar22 = lVar22 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar22);
        }
        return;
      }
      iVar14 = iVar18 + -1;
      iVar15 = iVar16 + -2;
      iVar16 = iVar15;
      iVar18 = iVar14;
    }
    iVar15 = iVar14 * 2;
    iVar20 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      if (*(int *)((longlong)&param_1[iVar20].Id.A + lVar17) <
          *(int *)((longlong)&param_1[(longlong)iVar15 + 2].Id.A + lVar17)) {
        iVar20 = iVar15;
      }
      iVar20 = iVar20 + 1;
    }
    if (*(int *)((longlong)&param_1[iVar14].Id.A + lVar17) <=
        *(int *)((longlong)&param_1[iVar20].Id.A + lVar17)) goto LAB_1431b403a;
    pFVar19 = param_1 + iVar20;
    uVar4 = (pFVar19->Id).B;
    uVar5 = (pFVar19->Id).C;
    uVar6 = (pFVar19->Id).D;
    iVar21 = param_1[iVar14].ChunkSize;
    pFVar1 = param_1 + iVar14;
    uVar7 = (pFVar1->Id).A;
    uVar8 = (pFVar1->Id).B;
    uVar9 = (pFVar1->Id).C;
    uVar10 = (pFVar1->Id).D;
    iVar11 = param_1[iVar14].LastUsageIndex;
    iVar12 = param_1[iVar14].NextUsageIndex;
    pFVar1 = param_1 + iVar14;
    (pFVar1->Id).A = (pFVar19->Id).A;
    (pFVar1->Id).B = uVar4;
    (pFVar1->Id).C = uVar5;
    (pFVar1->Id).D = uVar6;
    iVar15 = param_1[iVar20].NextUsageIndex;
    param_1[iVar14].LastUsageIndex = param_1[iVar20].LastUsageIndex;
    param_1[iVar14].NextUsageIndex = iVar15;
    param_1[iVar14].ChunkSize = param_1[iVar20].ChunkSize;
    iVar15 = iVar20 * 2 + 1;
    pFVar19 = param_1 + iVar20;
    (pFVar19->Id).A = uVar7;
    (pFVar19->Id).B = uVar8;
    (pFVar19->Id).C = uVar9;
    (pFVar19->Id).D = uVar10;
    param_1[iVar20].LastUsageIndex = iVar11;
    param_1[iVar20].NextUsageIndex = iVar12;
    param_1[iVar20].ChunkSize = iVar21;
    iVar14 = iVar20;
  } while( true );
}

// HeapSortInternal<`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range,int,UE::Core::Private::TProjectionMemberData<unsigned___int64_`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range::*>,TLess<unsigned___int64>_> @ 1431b4180

void __cdecl
AlgoImpl::
HeapSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range,int,UE::Core::Private::TProjectionMemberData<unsigned___int64__BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range::*>,TLess<unsigned___int64>_>
          (Range *param_1,int param_2,
          TProjectionMemberData<unsigned___int64__private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range::*>
          param_3,TLess<unsigned___int64> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  Range *pRVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  lVar8 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar12 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1431b4298:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar13 = (longlong)iVar7;
        if (0 < iVar7) {
          pRVar10 = param_1 + lVar13;
          do {
            uVar2 = pRVar10->End;
            iVar12 = 0;
            uVar3 = param_1->Start;
            uVar4 = param_1->End;
            param_1->Start = pRVar10->Start;
            param_1->End = uVar2;
            pRVar10->Start = uVar3;
            pRVar10->End = uVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar12 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  if (*(ulonglong *)((longlong)&param_1[(longlong)iVar9 + 2].Start + lVar8) <
                      *(ulonglong *)((longlong)&param_1[iVar6].Start + lVar8)) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (*(ulonglong *)((longlong)&param_1[iVar6].Start + lVar8) <=
                    *(ulonglong *)((longlong)&param_1[iVar12].Start + lVar8)) break;
                uVar2 = param_1[iVar12].Start;
                uVar3 = param_1[iVar12].End;
                uVar4 = param_1[iVar6].End;
                param_1[iVar12].Start = param_1[iVar6].Start;
                param_1[iVar12].End = uVar4;
                param_1[iVar6].Start = uVar2;
                param_1[iVar6].End = uVar3;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar13 = lVar13 + -1;
            pRVar10 = pRVar10 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(ulonglong *)((longlong)&param_1[(longlong)iVar7 + 2].Start + lVar8) <
          *(ulonglong *)((longlong)&param_1[iVar11].Start + lVar8)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(ulonglong *)((longlong)&param_1[iVar11].Start + lVar8) <=
        *(ulonglong *)((longlong)&param_1[iVar6].Start + lVar8)) goto LAB_1431b4298;
    uVar2 = param_1[iVar6].Start;
    uVar3 = param_1[iVar6].End;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = param_1[iVar11].End;
    param_1[iVar6].Start = param_1[iVar11].Start;
    param_1[iVar6].End = uVar4;
    param_1[iVar11].Start = uVar2;
    param_1[iVar11].End = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TGreater<unsigned_int>_> @ 1431b4390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TGreater<unsigned_int>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,TGreater<unsigned_int> param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  uint *local_338;
  uint *local_328;
  uint *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_1431b4440:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_1431b4470:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x0001431b4479;
          goto LAB_1431b4480;
        }
        for (; puVar4 = puVar9, puVar1 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar1 = puVar1 + 1, puVar1 <= puVar8) {
            if (*puVar1 < *puVar4) {
              puVar4 = puVar1;
            }
          }
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_1431b4539;
      }
LAB_1431b4527:
      local_338 = puVar1;
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TGreater<unsigned_int>_>
                (puVar4,iVar3,param_3,param_4);
LAB_1431b4539:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x0001431b4479:
  if (*puVar9 <= *puVar4) goto LAB_1431b4470;
LAB_1431b4480:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar6 <= *puVar9);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_1431b4470;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-4 - (longlong)puVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_1431b4539;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_1431b4539;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_1431b4527;
  goto LAB_1431b4440;
}

// IntroSortInternal<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,`BuildPatchServices::TBlockData<unsigned_char>::AddData'::__l21::<lambda_1>,TLess<void>_> @ 1431b45d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,_BuildPatchServices::TBlockData<unsigned_char>::AddData_::__l21::<lambda_1>,TLess<void>_>
          (FBlockToCopy *param_1,int param_2,<lambda_1> param_3,TLess<void> param_4)

{
  FBlockToCopy *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  int iVar8;
  FBlockToCopy *pFVar9;
  FBlockToCopy **ppFVar10;
  FBlockToCopy *pFVar11;
  FBlockToCopy *pFVar12;
  FBlockToCopy *pFVar13;
  FBlockToCopy *pFVar14;
  FBlockToCopy *pFVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  FBlockToCopy *local_338;
  FBlockToCopy *local_328;
  FBlockToCopy *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar16;
    memset(local_310,0,0x2e8);
    ppFVar10 = &local_328;
    do {
      pFVar13 = ppFVar10[1];
      pFVar15 = *ppFVar10;
      pFVar1 = ppFVar10[2];
      iVar8 = (int)((longlong)pFVar13 - (longlong)pFVar15 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar14 = pFVar15;
      if ((int)local_338 != 0) {
LAB_1431b4680:
        if (8 < iVar8) {
          uVar2 = (pFVar14->CopyBlockRange).First;
          pFVar11 = pFVar13 + 1;
          pFVar15 = pFVar14 + iVar8 / 2;
          uVar3 = pFVar15->SortOffset;
          uVar4 = (pFVar15->CopyBlockRange).First;
          uVar5 = (pFVar15->CopyBlockRange).Size;
          puVar6 = pFVar15->DataPtr;
          pFVar15->SortOffset = pFVar14->SortOffset;
          (pFVar15->CopyBlockRange).First = uVar2;
          puVar7 = pFVar14->DataPtr;
          (pFVar15->CopyBlockRange).Size = (pFVar14->CopyBlockRange).Size;
          pFVar15->DataPtr = puVar7;
          pFVar14->SortOffset = uVar3;
          (pFVar14->CopyBlockRange).First = uVar4;
          (pFVar14->CopyBlockRange).Size = uVar5;
          pFVar14->DataPtr = puVar6;
          pFVar15 = pFVar14;
LAB_1431b46c0:
          pFVar9 = pFVar15;
          pFVar15 = pFVar9 + 1;
          if (pFVar15 <= pFVar13) goto code_r0x0001431b46c9;
          goto LAB_1431b46d1;
        }
        for (; pFVar15 = pFVar14, pFVar1 = pFVar14, pFVar14 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar13) {
            if (pFVar15->SortOffset < pFVar1->SortOffset) {
              pFVar15 = pFVar1;
            }
          }
          uVar2 = pFVar15->SortOffset;
          uVar3 = (pFVar15->CopyBlockRange).First;
          uVar4 = (pFVar15->CopyBlockRange).Size;
          puVar6 = pFVar15->DataPtr;
          uVar5 = (pFVar13->CopyBlockRange).First;
          pFVar15->SortOffset = pFVar13->SortOffset;
          (pFVar15->CopyBlockRange).First = uVar5;
          puVar7 = pFVar13->DataPtr;
          (pFVar15->CopyBlockRange).Size = (pFVar13->CopyBlockRange).Size;
          pFVar15->DataPtr = puVar7;
          pFVar13->SortOffset = uVar2;
          (pFVar13->CopyBlockRange).First = uVar3;
          (pFVar13->CopyBlockRange).Size = uVar4;
          pFVar13->DataPtr = puVar6;
        }
        goto LAB_1431b47b7;
      }
LAB_1431b47a5:
      local_338 = pFVar1;
      HeapSortInternal<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,_BuildPatchServices::TBlockData<unsigned_char>::AddData_::__l21::<lambda_1>,TLess<void>_>
                (pFVar15,iVar8,param_3,param_4);
LAB_1431b47b7:
      ppFVar10 = ppFVar10 + -3;
    } while (&local_328 <= ppFVar10);
  }
  return;
code_r0x0001431b46c9:
  if (pFVar15->SortOffset <= pFVar14->SortOffset) goto LAB_1431b46c0;
LAB_1431b46d1:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar14) break;
  } while (pFVar14->SortOffset <= pFVar11->SortOffset);
  uVar2 = pFVar12[-1].CopyBlockRange.First;
  if (pFVar15 <= pFVar11) {
    uVar3 = pFVar15->SortOffset;
    uVar4 = pFVar9[1].CopyBlockRange.First;
    uVar5 = pFVar9[1].CopyBlockRange.Size;
    puVar6 = pFVar9[1].DataPtr;
    pFVar15->SortOffset = pFVar11->SortOffset;
    pFVar9[1].CopyBlockRange.First = uVar2;
    puVar7 = pFVar12[-1].DataPtr;
    pFVar9[1].CopyBlockRange.Size = pFVar12[-1].CopyBlockRange.Size;
    pFVar9[1].DataPtr = puVar7;
    pFVar11->SortOffset = uVar3;
    pFVar12[-1].CopyBlockRange.First = uVar4;
    pFVar12[-1].CopyBlockRange.Size = uVar5;
    pFVar12[-1].DataPtr = puVar6;
    goto LAB_1431b46c0;
  }
  uVar3 = pFVar14->SortOffset;
  uVar4 = (pFVar14->CopyBlockRange).First;
  uVar5 = (pFVar14->CopyBlockRange).Size;
  puVar6 = pFVar14->DataPtr;
  pFVar14->SortOffset = pFVar11->SortOffset;
  (pFVar14->CopyBlockRange).First = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  puVar7 = pFVar12[-1].DataPtr;
  (pFVar14->CopyBlockRange).Size = pFVar12[-1].CopyBlockRange.Size;
  pFVar14->DataPtr = puVar7;
  pFVar11->SortOffset = uVar3;
  pFVar12[-1].CopyBlockRange.First = uVar4;
  pFVar12[-1].CopyBlockRange.Size = uVar5;
  pFVar12[-1].DataPtr = puVar6;
  if ((longlong)((longlong)pFVar11 + (-0x20 - (longlong)pFVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar13 - (longlong)pFVar15 & 0xffffffffffffffe0U)) {
    if (pFVar15 < pFVar13) {
      *ppFVar10 = pFVar15;
      ppFVar10[1] = pFVar13;
      *(int *)(ppFVar10 + 2) = (int)local_338;
      ppFVar10 = ppFVar10 + 3;
    }
    if (pFVar11 <= pFVar14 + 1) goto LAB_1431b47b7;
    pFVar13 = pFVar12 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar11) {
      *ppFVar10 = pFVar14;
      ppFVar10[1] = pFVar12 + -2;
      *(int *)(ppFVar10 + 2) = (int)local_338;
      ppFVar10 = ppFVar10 + 3;
    }
    if (pFVar13 <= pFVar15) goto LAB_1431b47b7;
  }
  iVar8 = (int)((longlong)pFVar13 - (longlong)pFVar15 >> 5) + 1;
  pFVar14 = pFVar15;
  if ((int)local_338 == 0) goto LAB_1431b47a5;
  goto LAB_1431b4680;
}

// IntroSortInternal<`BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile'::__l2::FNeededChunk,int,UE::Core::Private::TProjectionMemberData<int_`BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile'::__l2::FNeededChunk::*>,TGreater<int>_> @ 1431b4850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk,int,UE::Core::Private::TProjectionMemberData<int__BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk::*>,TGreater<int>_>
          (FNeededChunk *param_1,int param_2,
          TProjectionMemberData<int__private:_bool___cdecl_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile(FString_const_&)_::_2_::FNeededChunk::*>
          param_3,TGreater<int> param_4)

{
  FNeededChunk *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FNeededChunk *pFVar18;
  FNeededChunk *pFVar19;
  FNeededChunk *pFVar20;
  FNeededChunk *pFVar21;
  FNeededChunk *pFVar22;
  FNeededChunk *pFVar23;
  FNeededChunk **ppFVar24;
  float fVar25;
  undefined1 auStack_388 [48];
  FNeededChunk *local_358;
  FNeededChunk *local_348;
  FNeededChunk *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    lVar17 = (longlong)(int)param_3.DataMemberPtr;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar25 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar25;
    memset(local_330,0,0x2e8);
    ppFVar24 = &local_348;
    do {
      pFVar18 = ppFVar24[1];
      pFVar23 = *ppFVar24;
      pFVar1 = ppFVar24[2];
      local_358._0_4_ = (int)pFVar1;
      iVar16 = (int)(((longlong)pFVar18 - (longlong)pFVar23) / 0x1c) + 1;
      pFVar22 = pFVar23;
      if ((int)local_358 != 0) {
LAB_1431b4930:
        if (8 < iVar16) {
          uVar6 = (pFVar22->Id).B;
          uVar7 = (pFVar22->Id).C;
          uVar8 = (pFVar22->Id).D;
          pFVar20 = pFVar18 + 1;
          pFVar23 = pFVar22 + iVar16 / 2;
          uVar10 = (pFVar23->Id).A;
          uVar11 = (pFVar23->Id).B;
          uVar12 = (pFVar23->Id).C;
          uVar13 = (pFVar23->Id).D;
          iVar16 = pFVar23->ChunkSize;
          iVar14 = pFVar23->LastUsageIndex;
          iVar15 = pFVar23->NextUsageIndex;
          (pFVar23->Id).A = (pFVar22->Id).A;
          (pFVar23->Id).B = uVar6;
          (pFVar23->Id).C = uVar7;
          (pFVar23->Id).D = uVar8;
          iVar9 = pFVar22->NextUsageIndex;
          pFVar23->LastUsageIndex = pFVar22->LastUsageIndex;
          pFVar23->NextUsageIndex = iVar9;
          pFVar23->ChunkSize = pFVar22->ChunkSize;
          (pFVar22->Id).A = uVar10;
          (pFVar22->Id).B = uVar11;
          (pFVar22->Id).C = uVar12;
          (pFVar22->Id).D = uVar13;
          pFVar22->LastUsageIndex = iVar14;
          pFVar22->NextUsageIndex = iVar15;
          pFVar22->ChunkSize = iVar16;
          pFVar23 = pFVar22;
LAB_1431b4983:
          pFVar19 = pFVar23;
          pFVar23 = pFVar19 + 1;
          if (pFVar23 <= pFVar18) goto code_r0x0001431b498c;
          goto LAB_1431b4996;
        }
        for (; pFVar23 = pFVar22, pFVar1 = pFVar22, pFVar22 < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar18) {
            if (*(int *)((longlong)&(pFVar1->Id).A + lVar17) <
                *(int *)((longlong)&(pFVar23->Id).A + lVar17)) {
              pFVar23 = pFVar1;
            }
          }
          uVar10 = (pFVar23->Id).A;
          uVar11 = (pFVar23->Id).B;
          uVar12 = (pFVar23->Id).C;
          uVar13 = (pFVar23->Id).D;
          iVar16 = pFVar23->ChunkSize;
          iVar14 = pFVar23->LastUsageIndex;
          iVar15 = pFVar23->NextUsageIndex;
          uVar6 = (pFVar18->Id).B;
          uVar7 = (pFVar18->Id).C;
          uVar8 = (pFVar18->Id).D;
          (pFVar23->Id).A = (pFVar18->Id).A;
          (pFVar23->Id).B = uVar6;
          (pFVar23->Id).C = uVar7;
          (pFVar23->Id).D = uVar8;
          iVar9 = pFVar18->NextUsageIndex;
          pFVar23->LastUsageIndex = pFVar18->LastUsageIndex;
          pFVar23->NextUsageIndex = iVar9;
          pFVar23->ChunkSize = pFVar18->ChunkSize;
          (pFVar18->Id).A = uVar10;
          (pFVar18->Id).B = uVar11;
          (pFVar18->Id).C = uVar12;
          (pFVar18->Id).D = uVar13;
          pFVar18->LastUsageIndex = iVar14;
          pFVar18->NextUsageIndex = iVar15;
          pFVar18->ChunkSize = iVar16;
        }
        goto LAB_1431b4ada;
      }
LAB_1431b4acb:
      local_358 = pFVar1;
      HeapSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk,int,UE::Core::Private::TProjectionMemberData<int__BuildPatchServices::FBuildPatchFileConstructor::HarvestChunksForCompletedFile_::__l2::FNeededChunk::*>,TGreater<int>_>
                (pFVar23,iVar16,param_3,param_4);
LAB_1431b4ada:
      ppFVar24 = ppFVar24 + -3;
    } while (&local_348 <= ppFVar24);
  }
  return;
code_r0x0001431b498c:
  if (*(int *)((longlong)&(pFVar22->Id).A + lVar17) <= *(int *)((longlong)&(pFVar23->Id).A + lVar17)
     ) goto LAB_1431b4983;
LAB_1431b4996:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if (pFVar20 <= pFVar22) break;
  } while (*(int *)((longlong)&(pFVar20->Id).A + lVar17) <=
           *(int *)((longlong)&(pFVar22->Id).A + lVar17));
  uVar2 = (pFVar20->Id).A;
  uVar3 = (pFVar20->Id).B;
  uVar4 = pFVar21[-1].Id.C;
  uVar5 = pFVar21[-1].Id.D;
  if (pFVar23 <= pFVar20) {
    uVar6 = (pFVar23->Id).A;
    uVar7 = (pFVar23->Id).B;
    uVar8 = pFVar19[1].Id.C;
    uVar10 = pFVar19[1].Id.D;
    iVar16 = pFVar19[1].ChunkSize;
    iVar14 = pFVar19[1].LastUsageIndex;
    iVar15 = pFVar19[1].NextUsageIndex;
    (pFVar23->Id).A = uVar2;
    (pFVar23->Id).B = uVar3;
    pFVar19[1].Id.C = uVar4;
    pFVar19[1].Id.D = uVar5;
    iVar9 = pFVar21[-1].NextUsageIndex;
    pFVar19[1].LastUsageIndex = pFVar21[-1].LastUsageIndex;
    pFVar19[1].NextUsageIndex = iVar9;
    pFVar19[1].ChunkSize = pFVar21[-1].ChunkSize;
    (pFVar20->Id).A = uVar6;
    (pFVar20->Id).B = uVar7;
    pFVar21[-1].Id.C = uVar8;
    pFVar21[-1].Id.D = uVar10;
    pFVar21[-1].LastUsageIndex = iVar14;
    pFVar21[-1].NextUsageIndex = iVar15;
    pFVar21[-1].ChunkSize = iVar16;
    goto LAB_1431b4983;
  }
  iVar16 = pFVar22->ChunkSize;
  local_358._0_4_ = (int)local_358 + -1;
  uVar6 = (pFVar22->Id).A;
  uVar7 = (pFVar22->Id).B;
  uVar8 = (pFVar22->Id).C;
  uVar10 = (pFVar22->Id).D;
  iVar14 = pFVar22->LastUsageIndex;
  iVar15 = pFVar22->NextUsageIndex;
  (pFVar22->Id).A = uVar2;
  (pFVar22->Id).B = uVar3;
  (pFVar22->Id).C = uVar4;
  (pFVar22->Id).D = uVar5;
  iVar9 = pFVar21[-1].NextUsageIndex;
  pFVar22->LastUsageIndex = pFVar21[-1].LastUsageIndex;
  pFVar22->NextUsageIndex = iVar9;
  pFVar22->ChunkSize = pFVar21[-1].ChunkSize;
  (pFVar20->Id).A = uVar6;
  (pFVar20->Id).B = uVar7;
  pFVar21[-1].Id.C = uVar8;
  pFVar21[-1].Id.D = uVar10;
  pFVar21[-1].LastUsageIndex = iVar14;
  pFVar21[-1].NextUsageIndex = iVar15;
  pFVar21[-1].ChunkSize = iVar16;
  if (((longlong)pFVar20 + (-0x1c - (longlong)pFVar22)) / 0x1c <
      ((longlong)pFVar18 - (longlong)pFVar23) / 0x1c) {
    if (pFVar23 < pFVar18) {
      *ppFVar24 = pFVar23;
      ppFVar24[1] = pFVar18;
      *(int *)(ppFVar24 + 2) = (int)local_358;
      ppFVar24 = ppFVar24 + 3;
    }
    if (pFVar20 <= pFVar22 + 1) goto LAB_1431b4ada;
    pFVar18 = pFVar21 + -2;
    pFVar23 = pFVar22;
  }
  else {
    if (pFVar22 + 1 < pFVar20) {
      *ppFVar24 = pFVar22;
      ppFVar24[1] = pFVar21 + -2;
      *(int *)(ppFVar24 + 2) = (int)local_358;
      ppFVar24 = ppFVar24 + 3;
    }
    if (pFVar18 <= pFVar23) goto LAB_1431b4ada;
  }
  iVar16 = (int)(((longlong)pFVar18 - (longlong)pFVar23) / 0x1c) + 1;
  pFVar22 = pFVar23;
  if ((int)local_358 == 0) goto LAB_1431b4acb;
  goto LAB_1431b4930;
}

// IntroSortInternal<`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range,int,UE::Core::Private::TProjectionMemberData<unsigned___int64_`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range::*>,TLess<unsigned___int64>_> @ 1431b4bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range,int,UE::Core::Private::TProjectionMemberData<unsigned___int64__BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range::*>,TLess<unsigned___int64>_>
          (Range *param_1,int param_2,
          TProjectionMemberData<unsigned___int64__private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range::*>
          param_3,TLess<unsigned___int64> param_4)

{
  Range *pRVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  int iVar5;
  Range *pRVar6;
  longlong lVar7;
  Range *pRVar8;
  Range *pRVar9;
  Range *pRVar10;
  Range *pRVar11;
  Range *pRVar12;
  Range **ppRVar13;
  float fVar14;
  undefined1 auStack_378 [48];
  Range *local_348;
  Range *local_338;
  Range *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    lVar7 = (longlong)(int)param_3.DataMemberPtr;
    local_338 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar14;
    memset(local_320,0,0x2e8);
    ppRVar13 = &local_338;
    do {
      pRVar10 = ppRVar13[1];
      pRVar12 = *ppRVar13;
      pRVar1 = ppRVar13[2];
      iVar5 = (int)((longlong)pRVar10 - (longlong)pRVar12 >> 4) + 1;
      local_348._0_4_ = (int)pRVar1;
      pRVar11 = pRVar12;
      if ((int)local_348 != 0) {
LAB_1431b4c60:
        if (8 < iVar5) {
          uVar2 = pRVar11->End;
          pRVar8 = pRVar10 + 1;
          uVar3 = pRVar11[iVar5 / 2].Start;
          uVar4 = pRVar11[iVar5 / 2].End;
          pRVar11[iVar5 / 2].Start = pRVar11->Start;
          pRVar11[iVar5 / 2].End = uVar2;
          pRVar11->Start = uVar3;
          pRVar11->End = uVar4;
          pRVar12 = pRVar11;
LAB_1431b4c90:
          pRVar6 = pRVar12;
          pRVar12 = pRVar6 + 1;
          if (pRVar12 <= pRVar10) goto code_r0x0001431b4c99;
          goto LAB_1431b4ca3;
        }
        for (; pRVar12 = pRVar11, pRVar1 = pRVar11, pRVar11 < pRVar10; pRVar10 = pRVar10 + -1) {
          while (pRVar1 = pRVar1 + 1, pRVar1 <= pRVar10) {
            if (*(ulonglong *)((longlong)&pRVar12->Start + lVar7) <
                *(ulonglong *)((longlong)&pRVar1->Start + lVar7)) {
              pRVar12 = pRVar1;
            }
          }
          uVar2 = pRVar12->Start;
          uVar3 = pRVar12->End;
          uVar4 = pRVar10->End;
          pRVar12->Start = pRVar10->Start;
          pRVar12->End = uVar4;
          pRVar10->Start = uVar2;
          pRVar10->End = uVar3;
        }
        goto LAB_1431b4d64;
      }
LAB_1431b4d53:
      local_348 = pRVar1;
      HeapSortInternal<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range,int,UE::Core::Private::TProjectionMemberData<unsigned___int64__BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range::*>,TLess<unsigned___int64>_>
                (pRVar12,iVar5,param_3,param_4);
LAB_1431b4d64:
      ppRVar13 = ppRVar13 + -3;
    } while (&local_338 <= ppRVar13);
  }
  return;
code_r0x0001431b4c99:
  if (*(ulonglong *)((longlong)&pRVar12->Start + lVar7) <=
      *(ulonglong *)((longlong)&pRVar11->Start + lVar7)) goto LAB_1431b4c90;
LAB_1431b4ca3:
  do {
    pRVar9 = pRVar8;
    pRVar8 = pRVar9 + -1;
    if (pRVar8 <= pRVar11) break;
  } while (*(ulonglong *)((longlong)&pRVar11->Start + lVar7) <=
           *(ulonglong *)((longlong)&pRVar8->Start + lVar7));
  uVar2 = pRVar9[-1].End;
  if (pRVar12 <= pRVar8) {
    uVar3 = pRVar12->Start;
    uVar4 = pRVar6[1].End;
    pRVar12->Start = pRVar8->Start;
    pRVar6[1].End = uVar2;
    pRVar8->Start = uVar3;
    pRVar9[-1].End = uVar4;
    goto LAB_1431b4c90;
  }
  uVar3 = pRVar11->Start;
  uVar4 = pRVar11->End;
  local_348._0_4_ = (int)local_348 + -1;
  pRVar11->Start = pRVar8->Start;
  pRVar11->End = uVar2;
  pRVar8->Start = uVar3;
  pRVar9[-1].End = uVar4;
  if ((longlong)((longlong)pRVar8 + (-0x10 - (longlong)pRVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pRVar10 - (longlong)pRVar12 & 0xfffffffffffffff0U)) {
    if (pRVar12 < pRVar10) {
      *ppRVar13 = pRVar12;
      ppRVar13[1] = pRVar10;
      *(int *)(ppRVar13 + 2) = (int)local_348;
      ppRVar13 = ppRVar13 + 3;
    }
    if (pRVar8 <= pRVar11 + 1) goto LAB_1431b4d64;
    pRVar10 = pRVar9 + -2;
    pRVar12 = pRVar11;
  }
  else {
    if (pRVar11 + 1 < pRVar8) {
      *ppRVar13 = pRVar11;
      ppRVar13[1] = pRVar9 + -2;
      *(int *)(ppRVar13 + 2) = (int)local_348;
      ppRVar13 = ppRVar13 + 3;
    }
    if (pRVar10 <= pRVar12) goto LAB_1431b4d64;
  }
  iVar5 = (int)((longlong)pRVar10 - (longlong)pRVar12 >> 4) + 1;
  pRVar11 = pRVar12;
  if ((int)local_348 == 0) goto LAB_1431b4d53;
  goto LAB_1431b4c60;
}

// LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[14],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 1431b5060

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,wchar_t_[14],TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,wchar_t (*param_3) [14],
          FKeyForward param_4,FLocKeySortedMapLess param_5)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  int iVar5;
  FString local_38;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar5;
      ::FString::FString(&local_38,*param_3);
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
      _Str2.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        _Str2.Data = local_38.Data.AllocatorInstance.Data;
      }
      if (*(int *)&param_1[iVar1].field_0x8 == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(param_1 + iVar1);
      }
      iVar4 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar4 < 0) {
        iVar5 = iVar1 + (param_2 & 1U);
      }
      if (FVar3.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar3.Data);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar5;
}

// LowerBoundInternal<FChunkBackingStore::FBackingStoreFreeSpan_const_,int,unsigned_int,unsigned_int_FChunkBackingStore::FBackingStoreFreeSpan::*,TLess<void>_> @ 1431b5130

int __cdecl
AlgoImpl::
LowerBoundInternal<FChunkBackingStore::FBackingStoreFreeSpan_const_,int,unsigned_int,unsigned_int_FChunkBackingStore::FBackingStoreFreeSpan::*,TLess<void>_>
          (FBackingStoreFreeSpan *param_1,int param_2,uint *param_3,pdm_79fdd540 param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)((longlong)&param_1[iVar1].StartEntryIndex + (longlong)(int)param_4) < *param_3)
      {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range>_> @ 1431b5420

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range>_> @ 1431b5630

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles_::__l2::Range>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_void___cdecl_BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles(FResumeData_const_&)_::_2_::Range>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 4) {
    iVar2 = 3;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l2::Range>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// SetPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_&> @ 1431b5c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
SetPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_&>
          (TPromise<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *param_1,
          TUniqueFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>
          *param_2)

{
  code *pcVar1;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *this;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar5 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_2->field_0x28;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(&local_b8,uVar4);
  if ((param_1->State).Object ==
      (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
       *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object ==
        (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
         *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->_padding_ != (TAtomic<bool>)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Result).Pad[0] = '\0';
  (this->Result).Pad[1] = '\0';
  (this->Result).Pad[2] = '\0';
  (this->Result).Pad[3] = '\0';
  (this->Result).Pad[4] = '\0';
  (this->Result).Pad[5] = '\0';
  (this->Result).Pad[6] = '\0';
  (this->Result).Pad[7] = '\0';
  (this->Result).Pad[8] = '\0';
  (this->Result).Pad[9] = '\0';
  (this->Result).Pad[10] = '\0';
  (this->Result).Pad[0xb] = '\0';
  (this->Result).Pad[0xc] = '\0';
  (this->Result).Pad[0xd] = '\0';
  (this->Result).Pad[0xe] = '\0';
  (this->Result).Pad[0xf] = '\0';
  (this->Result).Pad[0x20] = '\0';
  (this->Result).Pad[0x21] = '\0';
  (this->Result).Pad[0x22] = '\0';
  (this->Result).Pad[0x23] = '\0';
  (this->Result).Pad[0x24] = '\0';
  (this->Result).Pad[0x25] = '\0';
  (this->Result).Pad[0x26] = '\0';
  (this->Result).Pad[0x27] = '\0';
  (this->Result).Pad[0x28] = '\0';
  (this->Result).Pad[0x29] = '\0';
  (this->Result).Pad[0x2a] = '\0';
  (this->Result).Pad[0x2b] = '\0';
  (this->Result).Pad[0x2c] = 0x80;
  (this->Result).Pad[0x2d] = '\0';
  (this->Result).Pad[0x2e] = '\0';
  (this->Result).Pad[0x2f] = '\0';
  (this->Result).Pad[0x30] = 0xff;
  (this->Result).Pad[0x31] = 0xff;
  (this->Result).Pad[0x32] = 0xff;
  (this->Result).Pad[0x33] = 0xff;
  (this->Result).Pad[0x34] = '\0';
  (this->Result).Pad[0x35] = '\0';
  (this->Result).Pad[0x36] = '\0';
  (this->Result).Pad[0x37] = '\0';
  (this->Result).Pad[0x40] = '\0';
  (this->Result).Pad[0x41] = '\0';
  (this->Result).Pad[0x42] = '\0';
  (this->Result).Pad[0x43] = '\0';
  (this->Result).Pad[0x44] = '\0';
  (this->Result).Pad[0x45] = '\0';
  (this->Result).Pad[0x46] = '\0';
  (this->Result).Pad[0x47] = '\0';
  (this->Result).Pad[0x48] = '\0';
  (this->Result).Pad[0x49] = '\0';
  (this->Result).Pad[0x4a] = '\0';
  (this->Result).Pad[0x4b] = '\0';
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&this->Result,
             &local_b8);
  pTVar2 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
           ((this->Result).Pad + 0x50);
  *(undefined8 *)&pTVar2->Elements = 0;
  (this->Result).Pad[0x58] = '\0';
  (this->Result).Pad[0x59] = '\0';
  (this->Result).Pad[0x5a] = '\0';
  (this->Result).Pad[0x5b] = '\0';
  (this->Result).Pad[0x5c] = '\0';
  (this->Result).Pad[0x5d] = '\0';
  (this->Result).Pad[0x5e] = '\0';
  (this->Result).Pad[0x5f] = '\0';
  (this->Result).Pad[0x70] = '\0';
  (this->Result).Pad[0x71] = '\0';
  (this->Result).Pad[0x72] = '\0';
  (this->Result).Pad[0x73] = '\0';
  (this->Result).Pad[0x74] = '\0';
  (this->Result).Pad[0x75] = '\0';
  (this->Result).Pad[0x76] = '\0';
  (this->Result).Pad[0x77] = '\0';
  (this->Result).Pad[0x78] = '\0';
  (this->Result).Pad[0x79] = '\0';
  (this->Result).Pad[0x7a] = '\0';
  (this->Result).Pad[0x7b] = '\0';
  (this->Result).Pad[0x7c] = 0x80;
  (this->Result).Pad[0x7d] = '\0';
  (this->Result).Pad[0x7e] = '\0';
  (this->Result).Pad[0x7f] = '\0';
  (this->Result).Pad[0x80] = 0xff;
  (this->Result).Pad[0x81] = 0xff;
  (this->Result).Pad[0x82] = 0xff;
  (this->Result).Pad[0x83] = 0xff;
  (this->Result).Pad[0x84] = '\0';
  (this->Result).Pad[0x85] = '\0';
  (this->Result).Pad[0x86] = '\0';
  (this->Result).Pad[0x87] = '\0';
  (this->Result).Pad[0x90] = '\0';
  (this->Result).Pad[0x91] = '\0';
  (this->Result).Pad[0x92] = '\0';
  (this->Result).Pad[0x93] = '\0';
  (this->Result).Pad[0x94] = '\0';
  (this->Result).Pad[0x95] = '\0';
  (this->Result).Pad[0x96] = '\0';
  (this->Result).Pad[0x97] = '\0';
  (this->Result).Pad[0x98] = '\0';
  (this->Result).Pad[0x99] = '\0';
  (this->Result).Pad[0x9a] = '\0';
  (this->Result).Pad[0x9b] = '\0';
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(pTVar2,&local_68);
  FFutureState::MarkComplete((FFutureState *)this);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  return;
}

// SetPromise<TSharedPtr<FBuildPatchAppManifest,1>,TUniqueFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_&> @ 1431b5e30

void __cdecl
SetPromise<TSharedPtr<FBuildPatchAppManifest,1>,TUniqueFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_&>
          (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *param_1,
          TUniqueFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_18,uVar3);
  if ((param_1->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)(this->Result).Pad = local_18;
  *(TReferenceControllerBase<1> **)((this->Result).Pad + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = 0;
  FFutureState::MarkComplete((FFutureState *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// ToHexString<FSHAHash> @ 1431b5f40

FString * __cdecl ToHexString<FSHAHash>(FString *__return_storage_ptr__,FSHAHash *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  BytesToHex(param_1->Hash,0x14,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToStringBlob<unsigned_char> @ 1431b5f80

FString * __cdecl ToStringBlob<unsigned_char>(FString *__return_storage_ptr__,uchar *param_1)

{
  FString::FromBlob(__return_storage_ptr__,param_1,1);
  return __return_storage_ptr__;
}

// ToStringBlob<int> @ 1431b5fb0

FString * __cdecl ToStringBlob<int>(FString *__return_storage_ptr__,int *param_1)

{
  FString::FromBlob(__return_storage_ptr__,(uchar *)param_1,4);
  return __return_storage_ptr__;
}

// ToStringBlob<unsigned_int> @ 1431b5fe0

FString * __cdecl ToStringBlob<unsigned_int>(FString *__return_storage_ptr__,uint *param_1)

{
  FString::FromBlob(__return_storage_ptr__,(uchar *)param_1,4);
  return __return_storage_ptr__;
}

// ToStringBlob<double> @ 1431b6010

FString * __cdecl ToStringBlob<double>(FString *__return_storage_ptr__,double *param_1)

{
  FString::FromBlob(__return_storage_ptr__,(uchar *)param_1,8);
  return __return_storage_ptr__;
}

// ToStringBlob<__int64> @ 1431b6040

FString * __cdecl ToStringBlob<__int64>(FString *__return_storage_ptr__,long64 *param_1)

{
  FString::FromBlob(__return_storage_ptr__,(uchar *)param_1,8);
  return __return_storage_ptr__;
}

// ToStringBlob<unsigned___int64> @ 1431b6070

FString * __cdecl ToStringBlob<unsigned___int64>(FString *__return_storage_ptr__,ulong64 *param_1)

{
  FString::FromBlob(__return_storage_ptr__,(uchar *)param_1,8);
  return __return_storage_ptr__;
}

// Transform<TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_>,TArray<FGuid,TSizedDefaultAllocator<32>_>_&,FGuid_BuildPatchServices::FChunkInfo::*> @ 1431b60a0

void __cdecl
Algo::
Transform<TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_>,TArray<FGuid,TSizedDefaultAllocator<32>_>_&,FGuid_BuildPatchServices::FChunkInfo::*>
          (TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2,pdm_d9a74a90 param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar8 + (int)param_3;
    if ((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_2->ArrayMax * 0x10)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar7;
    }
    param_2->ArrayNum = iVar7 + 1;
    uVar5 = *(undefined8 *)(pFVar1 + 8);
    pFVar8 = pFVar8 + 0x40;
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = *(undefined8 *)pFVar1;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
  }
  return;
}

// Transform<TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_&,FGuid_BuildPatchServices::FChunkInfo::*> @ 1431b61d0

void __cdecl
Algo::
Transform<TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_&,FGuid_BuildPatchServices::FChunkInfo::*>
          (TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2,pdm_d9a74a90 param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FChunkInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
              (param_2,(FGuid *)&stack0x00000020,(bool *)(pFVar2 + (int)param_3));
    pFVar2 = pFVar2 + 0x40;
  }
  return;
}

// Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_>_&,FString_BuildPatchServices::FFileManifest::*> @ 1431b6250

void __cdecl
Algo::
Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_>_&,FString_BuildPatchServices::FFileManifest::*>
          (TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_2,pdm_24d01d25 param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    local_38 = *(undefined8 *)(pFVar7 + (int)param_3);
    iStack_30 = *(int *)(pFVar7 + (longlong)(int)param_3 + 8) + -1;
    if (*(int *)(pFVar7 + (longlong)(int)param_3 + 8) == 0) {
      iStack_30 = 0;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_2->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar7 = pFVar7 + 0x60;
    pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar2 = local_38;
    *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,iStack_30);
  }
  return;
}

// Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,FString_BuildPatchServices::FFileManifest::*> @ 1431b63b0

void __cdecl
Algo::
Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,FString_BuildPatchServices::FFileManifest::*>
          (TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,pdm_24d01d25 param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar7 + (int)param_3;
    if ((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_2->ArrayMax * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)pFVar1);
    pFVar7 = pFVar7 + 0x60;
  }
  return;
}

// Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_BuildPatchServices::FFileManifest::*> @ 1431b64e0

void __cdecl
Algo::
Transform<TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_BuildPatchServices::FFileManifest::*>
          (TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          pdm_24d01d25 param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_2,(FString *)&stack0x00000020,(bool *)(pFVar2 + (int)param_3));
    pFVar2 = pFVar2 + 0x60;
  }
  return;
}

// Transform<TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::*> @ 1431b6560

void __cdecl
Algo::
Transform<TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::*>
          (TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,
          pdm_493efb4e param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 local_res8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_a8 [16];
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar11 = *puVar12;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1431b660d;
      uVar11 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_84 = (int)lVar8 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1431b660d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res10 = param_2;
  local_a8._8_8_ = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this = local_res10;
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1431b6710;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1431b6710:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (this,(FString *)local_a8,
               (bool *)((longlong)(int)param_3 + (longlong)TStack_68.CurrentBitIndex * 0x28 +
                       *(longlong *)pTVar6));
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,`BuildPatchServices::FBuildPatchManifestSet::GetOutdatedFiles'::__l9::<lambda_1>_> @ 1431b6790

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __cdecl
Algo::
Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,_BuildPatchServices::FBuildPatchManifestSet::GetOutdatedFiles_::__l9::<lambda_1>_>
          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  FString *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_res10;
  undefined1 local_b8 [8];
  FString local_b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_1431b683e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = (int)lVar10 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_1431b683e:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res10 = param_2;
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this = local_res10;
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1431b6940;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1431b6940:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_68.CurrentBitIndex;
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    lVar5 = *(longlong *)&pTVar7->Elements;
    pFVar9 = BuildPatchServices::FInstallerAction::GetInstallSubdirectory
                       (&(param_3.InstallerAction)->InstallerAction);
    ::operator/(&local_b0,pFVar9,(FString *)(lVar5 + lVar10 * 0x18));
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              (this,(FString *)local_b8,(bool *)&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// WriteToString<40,FGuid_&> @ 1431b75a0

TStringBuilderWithBuffer<wchar_t,40> * __cdecl
WriteToString<40,FGuid_&>
          (TStringBuilderWithBuffer<wchar_t,40> *__return_storage_ptr__,FGuid *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FGuid::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                      DigitsWithHyphensLower);
  return __return_storage_ptr__;
}

// WriteToString<40,FGuid_const_&> @ 1431b75f0

TStringBuilderWithBuffer<wchar_t,40> * __cdecl
WriteToString<40,FGuid_const_&>
          (TStringBuilderWithBuffer<wchar_t,40> *__return_storage_ptr__,FGuid *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FGuid::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                      DigitsWithHyphensLower);
  return __return_storage_ptr__;
}

// WriteToString<64,FGuid_&> @ 1431b7640

TStringBuilderWithBuffer<wchar_t,64> * __cdecl
WriteToString<64,FGuid_&>
          (TStringBuilderWithBuffer<wchar_t,64> *__return_storage_ptr__,FGuid *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FGuid::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                      DigitsWithHyphensLower);
  return __return_storage_ptr__;
}

// ~<lambda_1> @ 1431bd0f0

void __thiscall
`Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431bd157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1431bd170

void __thiscall
`Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431bd1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1431bd1f0

void __thiscall
`Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431bd257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1431bd270

void __thiscall
`Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431bd2d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::__l2::<lambda_1>,0,0> @ 1431bd410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::__l2::<lambda_1>,1,1> @ 1431bd430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBuildPatchAppManifest::EnumerateProducibleChunks'::__l2::<lambda_1>,0,0> @ 1431bd450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildPatchAppManifest::EnumerateProducibleChunks'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FBuildPatchAppManifest::EnumerateProducibleChunks_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildPatchAppManifest::EnumerateProducibleChunks'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_1>,0,0> @ 1431bd470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FBuildMergeManifests::MergeManifests_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>,1,0> @ 1431bd490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>,1,0> @ 1431bd4b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1431bd4d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1431bd4f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'::__l4::<lambda_1>,1,1> @ 1431bd510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AU__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1___XZ____YA_AV__TFuture_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____W4EAsyncExecution____QEAV__TFunction___A6A_AU__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1___XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>,1,1> @ 1431bd530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AV__TSharedPtr_VFBuildPatchAppManifest___00__XZ____YA_AV__TFuture_V__TSharedPtr_VFBuildPatchAppManifest___00____W4EAsyncExecution____QEAV__TFunction___A6A_AV__TSharedPtr_VFBuildPatchAppManifest___00__XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::__l5::<lambda_1>,1,0> @ 1431bd550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchInstaller::StartInstallation_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l23::<lambda_1>,0,0> @ 1431bd570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l23::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchInstaller::RunInstallation_::__l23::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`23'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l50::<lambda_1>,1,1> @ 1431bd590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l50::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor_::__l50::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::`50'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l2::<lambda_2>,1,0> @ 1431bd5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_2>,0,0> @ 1431bd5d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FBuildMergeManifests::MergeManifests_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_3>,0,0> @ 1431bd5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FBuildMergeManifests::MergeManifests_::__l2::<lambda_3>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'[::D]::<lambda_3>,1,0> @ 1431bd610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'[::D]::<lambda_3>,1,0>
::
~TFunction_OwnedObject<_BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor_[::D]::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1431c1690

/* [thunk]:public: virtual void * __ptr64 __cdecl BuildPatchServices::FBuildPatchInstaller::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
BuildPatchServices::FBuildPatchInstaller::_vector_deleting_destructor__adjustor_8__
          (FBuildPatchInstaller *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FBuildPatchInstaller *)&this[-1].CachedVerifyErrorCounts.field_0x48,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1431c16a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c16d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1700

void * __thiscall
TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
::_scalar_deleting_destructor_
          (TAsyncQueuedWork<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                  *)0x0) && ((char)pTVar3->_padding_ == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c17d0

void * __thiscall
TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_>::_scalar_deleting_destructor_
          (TAsyncQueuedWork<TSharedPtr<FBuildPatchAppManifest,1>_> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar3->_padding_ == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c18a0

void * __thiscall
TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
::_scalar_deleting_destructor_
          (TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *this,uint param_1)

{
  TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
  *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                  *)0x0) && ((char)pTVar1->_padding_ == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1950

void * __thiscall
TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::_scalar_deleting_destructor_
          (TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_> *this,uint param_1)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) &&
     ((char)pTVar1->_padding_ == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1a00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1a30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l149::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1a60

void * __thiscall
TBaseRawMethodDelegateInstance<0,BuildPatchServices::FBuildPatchFileConstructor,void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,BuildPatchServices::FBuildPatchFileConstructor,void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1a90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FBuildPatchServicesModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FBuildPatchServicesModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1ac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FBuildPatchServicesModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FBuildPatchServicesModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1af0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1b20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1b50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(bool),1,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(bool),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AX_N_Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::CreateWriteRequest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildPatchAppManifest::EnumerateProducibleChunks'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildPatchAppManifest::EnumerateProducibleChunks'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>::Run'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TSharedPtr_VFBuildPatchAppManifest___00____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TSharedPtr<FBuildPatchAppManifest,1>_>::Run'::__l2::<lambda_1>_>'::__l4::
  <lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AU__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1___XZ____YA_AV__TFuture_U__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1_____W4EAsyncExecution____QEAV__TFunction___A6A_AU__TTuple_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator____V1___XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>___cdecl(void)>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V__TFunction___A6A_AV__TSharedPtr_VFBuildPatchAppManifest___00__XZ____YA_AV__TFuture_V__TSharedPtr_VFBuildPatchAppManifest___00____W4EAsyncExecution____QEAV__TFunction___A6A_AV__TSharedPtr_VFBuildPatchAppManifest___00__XZ__V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<TFunction<TSharedPtr<FBuildPatchAppManifest,1>___cdecl(void)>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::StartInstallation'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::__l23::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchInstaller::RunInstallation'::`23'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l50::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::`50'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBuildMergeManifests::MergeManifests'::`2'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c1fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`BuildPatchServices::FBuildPatchFileConstructor::FBuildPatchFileConstructor'[::D]::<lambda_3>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2010

void * __thiscall
TGraphTask<TAsyncGraphTask<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2070

void * __thiscall
TGraphTask<TAsyncGraphTask<TSharedPtr<FBuildPatchAppManifest,1>_>_>::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<TSharedPtr<FBuildPatchAppManifest,1>_>_> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c20d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2110

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2150

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<BuildPatchServices::FBuildPatchInstaller,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<BuildPatchServices::FBuildPatchInstaller,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x970);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2190

void * __thiscall
BuildPatchServices::TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc>::
_scalar_deleting_destructor_
          (TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc> *this,uint param_1)

{
  *this = (TPlatform<FWindowsPlatformProcess,FWindowsPlatformMisc>)
          &___7IPlatform_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c21d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBuildPatchAppManifest,SharedPointerInternals::DefaultDeleter<FBuildPatchAppManifest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBuildPatchAppManifest,SharedPointerInternals::DefaultDeleter<FBuildPatchAppManifest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2210

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBuildPatchCustomField,SharedPointerInternals::DefaultDeleter<FBuildPatchCustomField>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBuildPatchCustomField,SharedPointerInternals::DefaultDeleter<FBuildPatchCustomField>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2250

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::IBuildStatistics,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IBuildStatistics>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<BuildPatchServices::IBuildStatistics,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IBuildStatistics>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2290

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::IPatchDataEnumeration,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IPatchDataEnumeration>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<BuildPatchServices::IPatchDataEnumeration,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IPatchDataEnumeration>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c22d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void * __thiscall
FBuildPatchAppManifest::_scalar_deleting_destructor_(FBuildPatchAppManifest *this,uint param_1)

{
  ~FBuildPatchAppManifest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2310

void * __thiscall
FBuildPatchCustomField::_scalar_deleting_destructor_(FBuildPatchCustomField *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CustomValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IManifestField__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2360

void * __thiscall
BuildPatchServices::FBuildPatchFileConstructor::_scalar_deleting_destructor_
          (FBuildPatchFileConstructor *this,uint param_1)

{
  ~FBuildPatchFileConstructor(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c23a0

void * __thiscall
BuildPatchServices::FBuildPatchInstaller::_scalar_deleting_destructor_
          (FBuildPatchInstaller *this,uint param_1)

{
  ~FBuildPatchInstaller(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x960);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c23e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void * __thiscall
BuildPatchServices::FBuildPatchManifestSet::_scalar_deleting_destructor_
          (FBuildPatchManifestSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<BuildPatchServices::FBuildPatchInstallerAction,int>
            ((FBuildPatchInstallerAction *)(this->InstallerActions).AllocatorInstance.Data,
             (this->InstallerActions).ArrayNum);
  pFVar1 = (this->InstallerActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NewFileLookup).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NewFileLookup).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewFileLookup);
  *(undefined4 *)&(this->CurrentFileLookup).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CurrentFileLookup).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentFileLookup);
  *(undefined4 *)&(this->DataLookup).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DataLookup).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataLookup);
  this->_padding_ = (longlong)&___7IBuildManifestSet_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c24c0

void * __thiscall
BuildPatchServices::FBuildPatchProgress::_scalar_deleting_destructor_
          (FBuildPatchProgress *this,uint param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  this->_padding_ = (longlong)&___7IControllable_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2510

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FChunkBackingStore::_scalar_deleting_destructor_(FChunkBackingStore *this,uint param_1)

{
  IFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  char cVar4;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar5;
  wchar_t *pwVar6;
  
  this->_padding_ = (longlong)&___7FChunkBackingStore__6B_;
  pIVar1 = (this->BackingStoreFileHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->BackingStoreFileHandle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
    this_00 = FPlatformFileManager::Get();
    pIVar5 = FPlatformFileManager::GetPlatformFile(this_00);
    if ((this->BackingStoreFileName).Data.ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->BackingStoreFileName).Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar5 + 0x88))(pIVar5,pwVar6);
    if ((cVar4 == '\0') && (2 < (byte)LogBuildPatchServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_virtual___cdecl_FChunkBackingStore::~FChunkBackingStore(void)___ptr64'::
                  __l9::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    if (5 < (byte)LogBuildPatchServices._0_1_) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:_virtual___cdecl_FChunkBackingStore::~FChunkBackingStore(void)___ptr64'::
                  __l27::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  pFVar2 = (this->BackingStoreFileName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar1 = (this->BackingStoreFileHandle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->FreeDiskSpans).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->UsedDiskSpans).field_0x48 = 0;
  pvVar3 = *(void **)&(this->UsedDiskSpans).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FBackingStoreUsedSpan>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UsedDiskSpans);
  *(undefined4 *)&(this->StoredChunks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->StoredChunks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FStoredChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FStoredChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FChunkBackingStore::FStoredChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredChunks);
  this->_padding_ = (longlong)&___7IConstructorChunkSource_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c26a0

void * __thiscall IBuildInstaller::_scalar_deleting_destructor_(IBuildInstaller *this,uint param_1)

{
  *this = (IBuildInstaller)&___7IBuildInstaller__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c26e0

void * __thiscall IBuildManifest::_scalar_deleting_destructor_(IBuildManifest *this,uint param_1)

{
  *this = (IBuildManifest)&___7IBuildManifest__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2720

void * __thiscall
BuildPatchServices::IBuildManifestSet::_scalar_deleting_destructor_
          (IBuildManifestSet *this,uint param_1)

{
  *this = (IBuildManifestSet)&___7IBuildManifestSet_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2760

void * __thiscall
BuildPatchServices::IConstructorChunkSource::_scalar_deleting_destructor_
          (IConstructorChunkSource *this,uint param_1)

{
  *this = (IConstructorChunkSource)&___7IConstructorChunkSource_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c27a0

void * __thiscall
BuildPatchServices::IControllable::_scalar_deleting_destructor_(IControllable *this,uint param_1)

{
  *this = (IControllable)&___7IControllable_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c27e0

void * __thiscall IManifestField::_scalar_deleting_destructor_(IManifestField *this,uint param_1)

{
  *this = (IManifestField)&___7IManifestField__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431c2820

void * __thiscall
BuildPatchServices::IPlatform::_scalar_deleting_destructor_(IPlatform *this,uint param_1)

{
  *this = (IPlatform)&___7IPlatform_BuildPatchServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// BufferIsJsonManifest @ 1431c3880

bool __cdecl BufferIsJsonManifest(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  lVar2 = 0;
  while( true ) {
    if (param_1->ArrayNum <= iVar1) {
      return false;
    }
    if ((param_1->AllocatorInstance).Data[lVar2] == (FScriptContainerElement)0x7b) break;
    iVar1 = iVar1 + 1;
    lVar2 = lVar2 + 1;
    if (3 < iVar1) {
      return false;
    }
  }
  return true;
}

// BuildCloudSourceConfig @ 1431c38c0

FConstructorCloudChunkSourceConfig * __cdecl
BuildPatchServices::BuildCloudSourceConfig
          (FConstructorCloudChunkSourceConfig *__return_storage_ptr__,
          FBuildInstallerConfiguration *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FConstructorCloudChunkSourceConfig *pFVar10;
  wchar_t *_Str;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  ForAnyElementType local_98;
  int local_90 [2];
  ForAnyElementType local_88;
  int local_80 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78 [5];
  
  FConstructorCloudChunkSourceConfig::FConstructorCloudChunkSourceConfig
            (__return_storage_ptr__,&param_1->CloudDirectories);
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"ChunkRetries",&__return_storage_ptr__->MaxRetryCount,
             &GEngineIni);
  iVar8 = 1000;
  if (__return_storage_ptr__->MaxRetryCount < 1000) {
    iVar8 = __return_storage_ptr__->MaxRetryCount;
  }
  iVar7 = -1;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  uVar13 = 0;
  __return_storage_ptr__->MaxRetryCount = iVar7;
  local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78[0].ArrayNum = 0;
  local_78[0].ArrayMax = 0;
  FConfigCacheIni::GetArray(GConfig,L"Portal.BuildPatch",L"RetryTimes",local_78,&GEngineIni);
  lVar12 = (longlong)local_78[0].ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  bVar6 = 0 < local_78[0].ArrayNum;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_78[0].ArrayNum,&local_88,local_80,local_80 + 1);
  memset(local_88.Data + (longlong)iVar8 * 4,0,lVar12 << 2);
  fVar4 = __real_43960000;
  fVar16 = __real_3f000000;
  uVar14 = uVar13;
  uVar15 = uVar13;
  if (0 < local_78[0].ArrayNum) {
    do {
      if (!bVar6) goto LAB_1431c3b27;
      uVar11 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar11 < local_78[0].ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FConstructorCloudChunkSourceConfig *)(*pcVar3)();
        return pFVar10;
      }
      if (*(int *)(local_78[0].AllocatorInstance.Data + uVar14 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(local_78[0].AllocatorInstance.Data + uVar14);
      }
      dVar17 = _wtof(_Str);
      fVar18 = (float)dVar17;
      if (fVar18 <= 0.0) {
        bVar6 = false;
      }
      else {
        if (fVar4 <= fVar18) {
          fVar18 = fVar4;
        }
        uVar9 = 0;
        if ((int)uVar11 < local_80[0]) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if (fVar18 <= fVar16) {
          fVar18 = fVar16;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FConstructorCloudChunkSourceConfig *)(*pcVar3)();
          return pFVar10;
        }
        *(float *)(local_88.Data + uVar15 * 4) = fVar18;
      }
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 0x10;
      uVar15 = uVar15 + 1;
    } while ((int)(uVar11 + 1) < local_78[0].ArrayNum);
  }
  if ((bVar6) &&
     (pTVar1 = &__return_storage_ptr__->RetryDelayTimes,
     pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_88)) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Data;
    (__return_storage_ptr__->RetryDelayTimes).ArrayNum = local_80[0];
    (__return_storage_ptr__->RetryDelayTimes).ArrayMax = local_80[1];
    local_80[0] = 0;
    local_80[1] = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
LAB_1431c3b27:
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&local_98,local_90,local_90 + 1);
  *(undefined8 *)(local_98.Data + (longlong)iVar8 * 4) = 0;
  *(undefined8 *)(local_98.Data + (longlong)iVar8 * 4 + 8) = 0;
  *(undefined4 *)(local_98.Data + (longlong)iVar8 * 4 + 0x10) = 0;
  if ((local_90[0] < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FConstructorCloudChunkSourceConfig *)(*pcVar3)();
    return pFVar10;
  }
  bVar6 = FConfigCacheIni::GetFloat
                    (GConfig,L"Portal.BuildPatch",L"OKHealth",(float *)(local_98.Data + 8),
                     &GEngineIni);
  if (bVar6) {
    if ((local_90[0] < 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FConstructorCloudChunkSourceConfig *)(*pcVar3)();
      return pFVar10;
    }
    bVar6 = FConfigCacheIni::GetFloat
                      (GConfig,L"Portal.BuildPatch",L"GoodHealth",(float *)(local_98.Data + 0xc),
                       &GEngineIni);
    if (bVar6) {
      if ((local_90[0] < 5) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FConstructorCloudChunkSourceConfig *)(*pcVar3)();
        return pFVar10;
      }
      bVar6 = FConfigCacheIni::GetFloat
                        (GConfig,L"Portal.BuildPatch",L"ExcellentHealth",
                         (float *)(local_98.Data + 0x10),&GEngineIni);
      if ((bVar6) &&
         (pTVar1 = &__return_storage_ptr__->HealthPercentages,
         pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_98)) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = local_98.Data;
        (__return_storage_ptr__->HealthPercentages).ArrayNum = local_90[0];
        (__return_storage_ptr__->HealthPercentages).ArrayMax = local_90[1];
        local_90[0] = 0;
        local_90[1] = 0;
        local_98.Data = (FScriptContainerElement *)0x0;
      }
    }
  }
  FConfigCacheIni::GetFloat
            (GConfig,L"Portal.BuildPatch",L"DisconnectedDelay",
             &__return_storage_ptr__->DisconnectedDelay,&GEngineIni);
  fVar16 = __return_storage_ptr__->DisconnectedDelay;
  if (__real_41f00000 <= __return_storage_ptr__->DisconnectedDelay) {
    fVar16 = __real_41f00000;
  }
  if (fVar16 <= __real_3f800000) {
    fVar16 = __real_3f800000;
  }
  __return_storage_ptr__->DisconnectedDelay = fVar16;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  DestructItems<FString,int>((FString *)local_78[0].AllocatorInstance.Data,local_78[0].ArrayNum);
  if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildOptimisedDeltaConfig @ 1431c4130

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FOptimisedDeltaConfiguration * __cdecl
ConfigHelpers::BuildOptimisedDeltaConfig
          (FOptimisedDeltaConfiguration *__return_storage_ptr__,
          FBuildInstallerConfiguration *param_1,FBuildPatchInstallerAction *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FBuildPatchAppManifest *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FOptimisedDeltaConfiguration *pFVar8;
  FString *pFVar9;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar10;
  FScriptContainerElement *this;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 local_res8 [8];
  TSharedRef<FBuildPatchAppManifest,1> local_38;
  
  bVar7 = BuildPatchServices::FInstallerAction::IsUpdate(&param_2->InstallerAction);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstallerAction.IsUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                         ,0x65,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FOptimisedDeltaConfiguration *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_2->InstallManifest).Object == (FBuildPatchAppManifest *)0x0) {
    pTVar10 = &param_2->CurrentManifest;
    if (((param_2->CurrentManifest).Object == (FBuildPatchAppManifest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FOptimisedDeltaConfiguration *)(*pcVar5)();
      return pFVar8;
    }
  }
  else {
    pTVar10 = &param_2->InstallManifest;
  }
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  local_38.Object = pTVar10->Object;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38.Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FOptimisedDeltaConfiguration *)(*pcVar5)();
    return pFVar8;
  }
  BuildPatchServices::FOptimisedDeltaConfiguration::FOptimisedDeltaConfiguration
            (__return_storage_ptr__,&local_38);
  pTVar3 = (param_2->CurrentManifest).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_2->CurrentManifest).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (__return_storage_ptr__->SourceManifest).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SourceManifest).Object = pFVar4;
  (__return_storage_ptr__->SourceManifest).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->CloudDirectories,&param_1->CloudDirectories);
  pFVar9 = BuildPatchServices::FInstallerAction::GetCloudSubdirectory(&param_2->InstallerAction);
  if (1 < (pFVar9->Data).ArrayNum) {
    this = (__return_storage_ptr__->CloudDirectories).AllocatorInstance.Data;
    iVar1 = (__return_storage_ptr__->CloudDirectories).ArrayNum;
    pFVar11 = this + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((__return_storage_ptr__->CloudDirectories).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this == pFVar11) break;
      pFVar9 = BuildPatchServices::FInstallerAction::GetCloudSubdirectory(&param_2->InstallerAction)
      ;
      iVar2 = (pFVar9->Data).ArrayNum;
      iVar12 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar12 = 0;
      }
      ::FString::PathAppend((FString *)this,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar12)
      ;
      this = this + 0x10;
    }
  }
  __return_storage_ptr__->DeltaPolicy = param_1->DeltaPolicy;
  __return_storage_ptr__->InstallMode = param_1->InstallMode;
  return __return_storage_ptr__;
}

// BuildOptimisedDeltaDependencies @ 1431c4320

FOptimisedDeltaDependencies * __cdecl
InstallerHelpers::BuildOptimisedDeltaDependencies
          (FOptimisedDeltaDependencies *__return_storage_ptr__,
          TUniquePtr<BuildPatchServices::IDownloadService,TDefaultDelete<BuildPatchServices::IDownloadService>_>
          *param_1)

{
  __return_storage_ptr__->DownloadService = (IDownloadService *)0x0;
  *(undefined8 *)&__return_storage_ptr__->OnComplete = 0;
  *(undefined8 *)&(__return_storage_ptr__->OnComplete).field_0x28 = 0;
  __return_storage_ptr__->DownloadService = param_1->Ptr;
  return __return_storage_ptr__;
}

// CalculateRequiredDiskSpace @ 1431c46b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

ulong64 __cdecl
BuildPatchServices::CalculateRequiredDiskSpace
          (TSharedPtr<IBuildManifest,1> *param_1,TSharedRef<IBuildManifest,1> *param_2,
          EInstallMode *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  ulong64 uVar1;
  TSharedPtr<FBuildPatchAppManifest,1> local_28;
  TSharedRef<FBuildPatchAppManifest,1> local_18;
  
  local_18.Object = (FBuildPatchAppManifest *)param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (FBuildPatchAppManifest *)param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar1 = FileConstructorHelpers::CalculateRequiredDiskSpace(&local_28,&local_18,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return uVar1;
}

// CalculateRequiredDiskSpace @ 1431c4720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

ulong64 __cdecl
FileConstructorHelpers::CalculateRequiredDiskSpace
          (TSharedPtr<FBuildPatchAppManifest,1> *param_1,
          TSharedRef<FBuildPatchAppManifest,1> *param_2,EInstallMode *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  FBuildPatchAppManifest *pFVar1;
  EInstallMode *pEVar2;
  undefined8 uVar3;
  code *pcVar4;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar5;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  longlong lVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  byte bVar17;
  int iVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  undefined8 *puVar25;
  uint uVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  uint *puVar29;
  bool bVar30;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2c8 [4];
  uint local_2c4;
  FString local_2c0;
  uint local_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  undefined4 local_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  uint local_290;
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_288;
  undefined4 local_280;
  int iStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  TSharedPtr<FBuildPatchAppManifest,1> *local_270;
  TSharedRef<FBuildPatchAppManifest,1> *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  undefined8 uStack_240;
  int local_238;
  undefined4 uStack_234;
  undefined8 local_228;
  int iStack_220;
  undefined4 uStack_21c;
  void *local_218;
  undefined8 local_210;
  int local_208;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  FSparseArrayAllocationInfo local_1a8;
  undefined8 local_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong local_160;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  uint local_150;
  int iStack_14c;
  ulonglong uStack_148;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  puVar25 = (undefined8 *)0x0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  iVar18 = 0;
  local_110 = 0;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_10c = 0x80;
  local_108 = -1;
  local_270 = param_1;
  local_268 = param_2;
  local_228 = param_3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_138,param_4);
  if (local_138._8_4_ == local_104) {
    (**(code **)(param_2->Object->_padding_ + 0xc0))(param_2->Object,local_138);
  }
  ::FString::FString(&local_2c0,L"");
  if (local_104 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,1,(ForAnyElementType *)local_138,(int *)(local_138 + 8),
                        (int *)(local_138 + 0xc));
    iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),1);
    FVar27 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar27 = local_118;
    }
    uVar11 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar11;
    puVar29 = (uint *)((longlong)FVar27 + (longlong)(iVar9 >> 5) * 4);
    *puVar29 = *puVar29 & ~(1 << (((byte)iVar9 & 0x1f) - (char)uVar11 & 0x1f));
    iVar9 = local_108;
  }
  else {
    local_104 = local_104 + -1;
    iVar9 = *(int *)(local_138._0_8_ + (longlong)local_108 * 0x18 + 4);
    iVar10 = local_108;
    if (local_104 != 0) {
      *(undefined4 *)(local_138._0_8_ + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  local_108 = iVar9;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_138,&local_1a8,iVar10);
  if (local_1a8.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_1a8.Pointer = 0;
    *(FScriptContainerElement **)local_1a8.Pointer = local_2c0.Data.AllocatorInstance.Data;
    local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_1a8.Pointer + 8) = local_2c0.Data.ArrayNum;
    *(int *)((longlong)local_1a8.Pointer + 0xc) = local_2c0.Data.ArrayMax;
    local_2c0.Data.ArrayNum = 0;
    local_2c0.Data.ArrayMax = 0;
    *(undefined4 *)((longlong)local_1a8.Pointer + 0x10) = 0xffffffff;
    puVar25 = local_1a8.Pointer;
  }
  if (*(int *)(puVar25 + 1) == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = (wchar_t *)*puVar25;
    iVar18 = *(int *)(puVar25 + 1) + -1;
  }
  local_2c4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar24);
  if ((local_138._8_4_ - local_104 != 1) && (local_138._8_4_ != local_104)) {
    FVar19.Data = (FScriptContainerElement *)local_100;
    if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
      FVar19.Data = local_f8.Data;
    }
    iVar18 = *(int *)((longlong)FVar19.Data + (ulonglong)(local_f0 - 1 & local_2c4) * 4);
    pFVar22 = (FScriptContainerElement *)local_138._0_8_;
    while (iVar18 != -1) {
      lVar14 = (longlong)iVar18 * 0x18;
      iVar10 = *(int *)(pFVar22 + lVar14 + 8);
      if (iVar10 == *(int *)(puVar25 + 1)) {
        if (1 < iVar10) {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(pFVar22 + lVar14),(wchar_t *)*puVar25);
          bVar30 = iVar10 == 0;
          pFVar22 = (FScriptContainerElement *)local_138._0_8_;
          goto LAB_1431c49cf;
        }
LAB_1431c49e2:
        if (iVar18 != -1) {
          if (*(void **)(pFVar22 + (longlong)iVar18 * 0x18) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar22 + (longlong)iVar18 * 0x18));
          }
          memmove(pFVar22 + (longlong)iVar18 * 0x18,puVar25,0x10);
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_138,local_1a8.Index,1);
          local_1a8.Index = iVar18;
        }
        if (iVar18 != -1) goto LAB_1431c4cd5;
        break;
      }
      bVar30 = iVar10 + *(int *)(puVar25 + 1) == 1;
LAB_1431c49cf:
      if (bVar30) goto LAB_1431c49e2;
      iVar18 = *(int *)(pFVar22 + lVar14 + 0x10);
    }
  }
  uVar11 = local_2c4;
  uVar20 = 0;
  uVar26 = 1;
  uVar21 = local_138._8_4_ - local_104;
  if (3 < uVar21) {
    uVar23 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_2c4 = (uint)lVar14;
    uVar26 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar26 <= (int)local_f0)) {
    uVar11 = local_f0 - 1 & uVar11;
    *(uint *)((longlong)puVar25 + 0x14) = uVar11;
    FVar19.Data = (FScriptContainerElement *)local_100;
    if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
      FVar19.Data = local_f8.Data;
    }
    uVar20 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar11;
    *(undefined4 *)(puVar25 + 2) = *(undefined4 *)((longlong)FVar19.Data + uVar20 * 4);
    *(int *)((longlong)FVar19.Data + uVar20 * 4) = local_1a8.Index;
    goto LAB_1431c4cd5;
  }
  local_f0 = uVar26;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
  }
  if (uVar26 != 0) {
    uVar11 = uVar26;
    if (uVar26 < 2) {
      if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_1431c4abe;
      }
    }
    else {
LAB_1431c4abe:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar11,4);
    }
    if (0 < (int)uVar26) {
      uVar28 = (ulonglong)uVar26;
      uVar23 = uVar20;
      do {
        FVar19.Data = (FScriptContainerElement *)local_100;
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_f8.Data;
        }
        uVar12 = uVar23 & (longlong)(int)uVar26 - 1U;
        uVar23 = uVar23 + 1;
        *(undefined4 *)((longlong)FVar19.Data + uVar12 * 4) = 0xffffffff;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
  }
  if (local_f0 != 0) {
    pTStack_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    local_2b0 = 0;
    uStack_2ac = 1;
    uStack_29c = 0;
    uStack_298 = 0;
    if (local_110 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_118;
      }
      uVar11 = *(uint *)FVar27;
      uVar23 = uVar20;
      while (uVar11 == 0) {
        uStack_298 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_298;
        iVar18 = (int)uVar20;
        local_2b0 = iVar18 + 1;
        uVar20 = (ulonglong)local_2b0;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2b0)
        goto LAB_1431c4bcc;
        uVar11 = ((uint *)((longlong)FVar27 + 4))[iVar18];
      }
      uStack_2ac = -uVar11 & uVar11;
      uVar20 = (ulonglong)uStack_2ac * 2 + 1;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_208 = (int)lVar14;
      uStack_29c = local_208 + -1 + uStack_298;
      uVar20 = (ulonglong)uStack_29c;
      if ((int)local_110 < (int)uStack_29c) {
LAB_1431c4bcc:
        uVar20 = (ulonglong)local_110;
        uStack_29c = local_110;
      }
    }
    local_2a0 = 0xffffffff;
    local_200 = (longlong *)local_138;
    local_1f8._padding_ = CONCAT44(uStack_2ac,local_2b0);
    local_1f8.CurrentBitIndex = uStack_29c;
    local_1f8.UnvisitedBitMask = 0xffffffff;
    local_1f8._28_4_ = uStack_294;
    local_1f8.BaseBitIndex = uStack_298;
    local_1f8.Array = pTStack_2a8;
    if ((int)uVar20 < (int)local_110) {
      do {
        iVar10 = (int)uVar20;
        puVar25 = (undefined8 *)(*local_200 + (longlong)iVar10 * 0x18);
        iVar18 = *(int *)(*local_200 + 8 + (longlong)iVar10 * 0x18);
        if (iVar18 == 0) {
          pwVar24 = L"";
          iVar18 = 0;
        }
        else {
          pwVar24 = (wchar_t *)*puVar25;
          iVar18 = iVar18 + -1;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar24);
        uVar11 = local_f0 - 1 & uVar11;
        *(uint *)((longlong)puVar25 + 0x14) = uVar11;
        FVar19.Data = (FScriptContainerElement *)local_100;
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_f8.Data;
        }
        uVar20 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar25 + 2) = *(undefined4 *)((longlong)FVar19.Data + uVar20 * 4);
        *(int *)((longlong)FVar19.Data + uVar20 * 4) = iVar10;
        local_1f8.UnvisitedBitMask = local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
        uVar20 = (ulonglong)(uint)local_1f8.CurrentBitIndex;
      } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
    }
  }
LAB_1431c4cd5:
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  pTVar6 = local_268;
  uVar13 = 0;
  local_98._44_4_ = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  (**(code **)(local_268->Object->_padding_ + 0x1d0))(local_268->Object,local_138,&local_98);
  pTVar5 = local_270;
  pFVar1 = pTVar6->Object;
  local_218 = (void *)0x0;
  local_210 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  (**(code **)(pFVar1->_padding_ + 0x130))(pFVar1,local_270->Object,&local_218,&local_98);
  iVar18 = local_c0;
  if ((*local_228 == DestructiveInstall) && (pTVar5->Object != (FBuildPatchAppManifest *)0x0)) {
    pTStack_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_290 = 0;
    uStack_28c = 1;
    iStack_27c = 0;
    uStack_278 = 0;
    if (local_c0 != 0) {
      puVar29 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar29 = local_c8;
      }
      uVar11 = *puVar29;
      uVar16 = uVar13;
      uVar15 = uVar13;
      while (uVar11 == 0) {
        uStack_278 = (int)uVar15 + 0x20;
        uVar15 = (ulong64)uStack_278;
        iVar10 = (int)uVar16;
        local_290 = iVar10 + 1;
        uVar16 = (ulong64)local_290;
        if ((int)(local_c0 + -1 + (local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_290) {
          iStack_27c = local_c0;
          goto LAB_1431c4e8f;
        }
        uVar11 = puVar29[(longlong)iVar10 + 1];
      }
      uStack_28c = -uVar11 & uVar11;
      uVar20 = (ulonglong)uStack_28c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStack_27c = (uStack_278 - 1) + (int)lVar14;
      local_270 = (TSharedPtr<FBuildPatchAppManifest,1> *)CONCAT44(local_270._4_4_,(int)lVar14);
      if (local_c0 < iStack_27c) {
        iStack_27c = local_c0;
      }
    }
LAB_1431c4e8f:
    local_280 = 0xffffffff;
    TStack_1d0._padding_ = CONCAT44(uStack_28c,local_290);
    local_1d8 = (longlong *)local_e8;
    TStack_1d0.CurrentBitIndex = iStack_27c;
    TStack_1d0.UnvisitedBitMask = 0xffffffff;
    uStack_240._4_4_ = uStack_274;
    uStack_240._0_4_ = uStack_278;
    local_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    bVar17 = (byte)local_c0 & 0x1f;
    local_238 = local_e8._8_4_ - local_b4;
    local_260._padding_ = CONCAT44(1 << bVar17,local_c0 >> 5);
    local_260.CurrentBitIndex = local_c0;
    local_260.UnvisitedBitMask = -1 << bVar17;
    local_260._24_8_ = CONCAT44(iStack_27c,local_c0) & 0xffffffffffffffe0;
    uStack_1b0 = CONCAT44(uStack_234,local_238);
    TStack_1d0.Array = pTStack_288;
    TStack_1d0._24_8_ = uStack_240;
    if ((local_c0 < 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar30)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return uVar13;
    }
    if (iVar18 != local_c0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
    }
    pTVar7 = local_260.Array;
    pTVar6 = local_268;
    local_160 = local_260._padding_;
    pTStack_158 = local_260.Array;
    local_150 = local_260.UnvisitedBitMask;
    iStack_14c = local_260.CurrentBitIndex;
    uVar3 = _local_150;
    uStack_148 = local_260._24_8_;
    iStack_14c = local_260.CurrentBitIndex;
    iVar18 = iStack_14c;
    uVar16 = uVar13;
    _local_150 = uVar3;
    while( true ) {
      plVar8 = local_1d8;
      if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
        local_2c8[0] = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2c8);
      }
      if (((TStack_1d0.CurrentBitIndex == iVar18) && (TStack_1d0.Array == pTVar7)) &&
         (plVar8 == (longlong *)local_e8)) break;
      puVar25 = (undefined8 *)(*plVar8 + (longlong)TStack_1d0.CurrentBitIndex * 0x18);
      pEVar2 = (EInstallMode *)*puVar25;
      iStack_220 = *(int *)(puVar25 + 1) + -1;
      if (*(int *)(puVar25 + 1) == 0) {
        iStack_220 = 0;
      }
      local_228._0_4_ = SUB84(pEVar2,0);
      local_228._4_4_ = (undefined4)((ulonglong)pEVar2 >> 0x20);
      local_188 = (undefined4)local_228;
      uStack_184 = local_228._4_4_;
      uStack_17c = uStack_21c;
      local_228 = pEVar2;
      iStack_180 = iStack_220;
      lVar14 = (**(code **)(pTVar6->Object->_padding_ + 0xb0))(pTVar6->Object,&local_188);
      uVar13 = uVar13 + lVar14;
      uVar15 = uVar13;
      if ((longlong)uVar13 <= (longlong)uVar16) {
        uVar15 = uVar16;
      }
      if ((pTVar5->Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar30)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return uVar13;
      }
      uVar3 = *puVar25;
      iStack_190 = *(int *)(puVar25 + 1) + -1;
      if (*(int *)(puVar25 + 1) == 0) {
        iStack_190 = 0;
      }
      local_198._0_4_ = (undefined4)uVar3;
      local_198._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_178 = (undefined4)local_198;
      uStack_174 = local_198._4_4_;
      uStack_16c = uStack_18c;
      local_198 = uVar3;
      iStack_170 = iStack_190;
      lVar14 = (**(code **)(pTVar5->Object->_padding_ + 0xb0))(pTVar5->Object,&local_178);
      uVar13 = uVar13 - lVar14;
      TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
      uVar16 = uVar15;
    }
  }
  else {
    pFVar1 = pTVar6->Object;
    uVar16 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,local_e8);
  }
  uVar13 = 0;
  if (0 < (longlong)uVar16) {
    uVar13 = uVar16;
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  local_f0 = 0;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  return uVar13;
}

// CheckRollingHashAlgorithm @ 1431c64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl CheckRollingHashAlgorithm(void)

{
  longlong *plVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  FScriptContainerElement FVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStack_198 [32];
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  char local_158;
  longlong local_150;
  ulonglong *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  FScriptContainerElement *local_98;
  int local_90 [2];
  FScriptContainerElement *local_88;
  int local_80;
  int local_7c;
  FScriptContainerElement *local_78;
  int local_70;
  int local_6c;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  FScriptContainerElement *local_58;
  int local_50;
  int local_4c;
  FScriptContainerElement *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38 [2];
  ulonglong uVar26;
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_98 = (void *)0x0;
  local_88 = (void *)0x0;
  local_78 = (void *)0x0;
  local_68 = (void *)0x0;
  local_58 = (void *)0x0;
  local_48 = (void *)0x0;
  FString::FString(&local_130,"123456");
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  local_98 = local_130.Data.AllocatorInstance.Data;
  local_90[0] = local_130.Data.ArrayNum;
  local_90[1] = local_130.Data.ArrayMax;
  local_130.Data.ArrayNum = 0;
  local_130.Data.ArrayMax = 0;
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FString::FString(&local_120,"7890-=");
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  local_88 = local_120.Data.AllocatorInstance.Data;
  local_80 = local_120.Data.ArrayNum;
  local_7c = local_120.Data.ArrayMax;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FString::FString(&local_110,"qwerty");
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  local_78 = local_110.Data.AllocatorInstance.Data;
  local_70 = local_110.Data.ArrayNum;
  local_6c = local_110.Data.ArrayMax;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FString::FString(&local_100,"uiop[]");
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  local_68 = local_100.Data.AllocatorInstance.Data;
  local_60 = local_100.Data.ArrayNum;
  local_5c = local_100.Data.ArrayMax;
  local_100.Data.ArrayNum = 0;
  local_100.Data.ArrayMax = 0;
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FString::FString(&local_f0,"asdfgh");
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  local_58 = local_f0.Data.AllocatorInstance.Data;
  local_50 = local_f0.Data.ArrayNum;
  local_4c = local_f0.Data.ArrayMax;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FString::FString(&local_e0,"jkl;\'#");
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = local_e0.Data.AllocatorInstance.Data;
  local_40 = local_e0.Data.ArrayNum;
  local_160 = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    local_160 = local_e0.Data.AllocatorInstance.Data;
  }
  local_3c = local_e0.Data.ArrayMax;
  local_168 = (FScriptContainerElement *)L"";
  if (local_50 != 0) {
    local_168 = local_58;
  }
  local_170 = (FScriptContainerElement *)L"";
  if (local_60 != 0) {
    local_170 = local_68;
  }
  local_178 = (FScriptContainerElement *)L"";
  if (local_70 != 0) {
    local_178 = local_78;
  }
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  FString::PrintfImpl(&local_140,L"%s%s%s%s%s%s");
  local_148 = &local_d0;
  local_150 = 6;
  piVar19 = local_90;
  uVar23 = 0;
  do {
    iVar18 = 0;
    iVar15 = *piVar19 + -1;
    if (*piVar19 == 0) {
      iVar15 = iVar18;
    }
    if (iVar15 < 1) {
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar15);
      local_178 = (FScriptContainerElement *)((ulonglong)local_178 & 0xffffffff00000000);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    bVar22 = **(byte **)(piVar19 + -2);
    iVar15 = *piVar19 + -1;
    if (*piVar19 == 0) {
      iVar15 = iVar18;
    }
    if (iVar15 < 2) {
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar15);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,1);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    bVar3 = *(byte *)(*(longlong *)(piVar19 + -2) + 2);
    iVar15 = *piVar19 + -1;
    if (*piVar19 == 0) {
      iVar15 = iVar18;
    }
    if (iVar15 < 3) {
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar15);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,2);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    bVar4 = *(byte *)(*(longlong *)(piVar19 + -2) + 4);
    iVar15 = *piVar19 + -1;
    if (*piVar19 == 0) {
      iVar15 = iVar18;
    }
    if (iVar15 < 4) {
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar15);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,3);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    bVar5 = *(byte *)(*(longlong *)(piVar19 + -2) + 6);
    iVar15 = *piVar19 + -1;
    if (*piVar19 == 0) {
      iVar15 = 0;
    }
    if (iVar15 < 5) {
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar15);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,4);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    bVar6 = *(byte *)(*(longlong *)(piVar19 + -2) + 8);
    iVar15 = *piVar19 + -1;
    if (*piVar19 == 0) {
      iVar15 = iVar18;
    }
    if (iVar15 < 6) {
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar15);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,5);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    plVar1 = (longlong *)(piVar19 + -2);
    piVar19 = piVar19 + 4;
    uVar17 = (FRollingHashConst::HashTable[bVar22] >> 0x3f |
             FRollingHashConst::HashTable[bVar22] << 1) ^ FRollingHashConst::HashTable[bVar3];
    uVar17 = (uVar17 >> 0x3f | uVar17 << 1) ^ FRollingHashConst::HashTable[bVar4];
    uVar17 = (uVar17 >> 0x3f | uVar17 << 1) ^ FRollingHashConst::HashTable[bVar5];
    uVar17 = (uVar17 >> 0x3f | uVar17 << 1) ^ FRollingHashConst::HashTable[bVar6];
    *local_148 = (uVar17 >> 0x3f | uVar17 << 1) ^
                 FRollingHashConst::HashTable[*(byte *)(*plVar1 + 10)];
    local_148 = local_148 + 1;
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  lVar21 = 6;
  puVar14 = operator_new__(6);
  local_150 = 6;
  uVar20 = 0;
  *(undefined4 *)puVar14 = 0;
  *(undefined2 *)((longlong)puVar14 + 4) = 0;
  uVar17 = uVar20;
  uVar24 = uVar20;
  uVar26 = uVar23;
  local_148 = puVar14;
  do {
    iVar18 = (int)uVar20;
    iVar15 = local_140.Data.ArrayNum;
    if (iVar18 < 0) {
LAB_1431c6946:
      iVar11 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar11 = 0;
      }
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar11);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,iVar18);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      puVar14 = local_148;
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      iVar11 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar11 = 0;
      }
      if (iVar11 <= iVar18) goto LAB_1431c6946;
    }
    uVar20 = (ulonglong)(iVar18 + 1);
    FVar7 = local_140.Data.AllocatorInstance.Data[(longlong)iVar18 * 2];
    if ((5 < (uint)uVar26) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed < WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x6f,L""), puVar14 = local_148, bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    uVar25 = (uint)uVar26 + 1;
    uVar26 = (ulonglong)uVar25;
    *(FScriptContainerElement *)(uVar24 + (longlong)puVar14) = FVar7;
    uVar24 = (ulonglong)(((int)uVar24 + 1U) % 6);
    uVar12 = (int)uVar17 + 1;
    uVar17 = 0;
    uVar16 = 6;
    if (uVar12 < 6) {
      uVar16 = uVar12;
    }
    if (uVar16 != 0) {
      uVar17 = (ulonglong)uVar16;
    }
    uVar23 = (uVar23 >> 0x3f | uVar23 << 1) ^ FRollingHashConst::HashTable[(byte)FVar7];
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  if ((uVar25 != 6) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("NumBytesConsumed == WindowSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                         ,0x2d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    uVar10 = (*pcVar8)();
    return (bool)uVar10;
  }
  local_158 = local_d0 == uVar23;
  local_150 = 6;
  do {
    iVar11 = (int)uVar17;
    iVar18 = (int)uVar20;
    iVar15 = local_140.Data.ArrayNum;
    if (iVar18 < 0) {
LAB_1431c6a66:
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar13);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,iVar18);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      if (iVar13 <= iVar18) goto LAB_1431c6a66;
    }
    uVar20 = (ulonglong)(iVar18 + 1);
    FVar7 = local_140.Data.AllocatorInstance.Data[(longlong)iVar18 * 2];
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x4b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    bVar22 = 0;
    if (iVar11 == 0) {
      uVar16 = 0;
    }
    else {
      bVar22 = *(byte *)((ulonglong)((((int)uVar24 - iVar11) + 6U) % 6) + (longlong)local_148);
      uVar12 = 6;
      if (iVar11 - 1U < 6) {
        uVar12 = iVar11 - 1U;
      }
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
    }
    uVar17 = 0;
    *(FScriptContainerElement *)(uVar24 + (longlong)local_148) = FVar7;
    uVar24 = (ulonglong)(((int)uVar24 + 1U) % 6);
    uVar12 = 6;
    if (uVar16 + 1 < 6) {
      uVar12 = uVar16 + 1;
    }
    if (uVar12 != 0) {
      uVar17 = (ulonglong)uVar12;
    }
    uVar23 = (FRollingHashConst::HashTable[bVar22] >> 0x3a |
             FRollingHashConst::HashTable[bVar22] << 6) ^ FRollingHashConst::HashTable[(byte)FVar7]
             ^ (uVar23 >> 0x3f | uVar23 << 1);
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  if (local_158 == '\0') {
LAB_1431c6bb6:
    local_158 = '\0';
  }
  else {
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x2d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    local_158 = '\x01';
    if (local_c8 != uVar23) goto LAB_1431c6bb6;
  }
  local_150 = 6;
  do {
    iVar11 = (int)uVar17;
    iVar18 = (int)uVar20;
    iVar15 = local_140.Data.ArrayNum;
    if (iVar18 < 0) {
LAB_1431c6bd6:
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar13);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,iVar18);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      if (iVar13 <= iVar18) goto LAB_1431c6bd6;
    }
    uVar20 = (ulonglong)(iVar18 + 1);
    FVar7 = local_140.Data.AllocatorInstance.Data[(longlong)iVar18 * 2];
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x4b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    bVar22 = 0;
    if (iVar11 == 0) {
      uVar16 = 0;
    }
    else {
      bVar22 = *(byte *)((ulonglong)((((int)uVar24 - iVar11) + 6U) % 6) + (longlong)local_148);
      uVar12 = 6;
      if (iVar11 - 1U < 6) {
        uVar12 = iVar11 - 1U;
      }
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
    }
    uVar17 = 0;
    *(FScriptContainerElement *)(uVar24 + (longlong)local_148) = FVar7;
    uVar24 = (ulonglong)(((int)uVar24 + 1U) % 6);
    uVar12 = 6;
    if (uVar16 + 1 < 6) {
      uVar12 = uVar16 + 1;
    }
    if (uVar12 != 0) {
      uVar17 = (ulonglong)uVar12;
    }
    uVar23 = (FRollingHashConst::HashTable[bVar22] >> 0x3a |
             FRollingHashConst::HashTable[bVar22] << 6) ^ FRollingHashConst::HashTable[(byte)FVar7]
             ^ (uVar23 >> 0x3f | uVar23 << 1);
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  if (local_158 == '\0') {
LAB_1431c6d26:
    local_158 = '\0';
  }
  else {
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x2d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    local_158 = '\x01';
    if (local_c0 != uVar23) goto LAB_1431c6d26;
  }
  local_150 = 6;
  do {
    iVar11 = (int)uVar17;
    iVar18 = (int)uVar20;
    iVar15 = local_140.Data.ArrayNum;
    if (iVar18 < 0) {
LAB_1431c6d46:
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar13);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,iVar18);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      if (iVar13 <= iVar18) goto LAB_1431c6d46;
    }
    uVar20 = (ulonglong)(iVar18 + 1);
    FVar7 = local_140.Data.AllocatorInstance.Data[(longlong)iVar18 * 2];
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x4b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    bVar22 = 0;
    if (iVar11 == 0) {
      uVar16 = 0;
    }
    else {
      bVar22 = *(byte *)((ulonglong)((((int)uVar24 - iVar11) + 6U) % 6) + (longlong)local_148);
      uVar12 = 6;
      if (iVar11 - 1U < 6) {
        uVar12 = iVar11 - 1U;
      }
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
    }
    uVar17 = 0;
    *(FScriptContainerElement *)(uVar24 + (longlong)local_148) = FVar7;
    uVar24 = (ulonglong)(((int)uVar24 + 1U) % 6);
    uVar12 = 6;
    if (uVar16 + 1 < 6) {
      uVar12 = uVar16 + 1;
    }
    if (uVar12 != 0) {
      uVar17 = (ulonglong)uVar12;
    }
    uVar23 = (FRollingHashConst::HashTable[bVar22] >> 0x3a |
             FRollingHashConst::HashTable[bVar22] << 6) ^ FRollingHashConst::HashTable[(byte)FVar7]
             ^ (uVar23 >> 0x3f | uVar23 << 1);
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  if (local_158 == '\0') {
LAB_1431c6e96:
    local_158 = '\0';
  }
  else {
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x2d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    local_158 = '\x01';
    if (local_b8 != uVar23) goto LAB_1431c6e96;
  }
  local_150 = 6;
  do {
    iVar11 = (int)uVar17;
    iVar18 = (int)uVar20;
    iVar15 = local_140.Data.ArrayNum;
    if (iVar18 < 0) {
LAB_1431c6eb6:
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar13);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,iVar18);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      if (iVar13 <= iVar18) goto LAB_1431c6eb6;
    }
    uVar20 = (ulonglong)(iVar18 + 1);
    FVar7 = local_140.Data.AllocatorInstance.Data[(longlong)iVar18 * 2];
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x4b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    bVar22 = 0;
    if (iVar11 == 0) {
      uVar16 = 0;
    }
    else {
      bVar22 = *(byte *)((ulonglong)((((int)uVar24 - iVar11) + 6U) % 6) + (longlong)local_148);
      uVar12 = 6;
      if (iVar11 - 1U < 6) {
        uVar12 = iVar11 - 1U;
      }
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
    }
    uVar17 = 0;
    *(FScriptContainerElement *)(uVar24 + (longlong)local_148) = FVar7;
    uVar24 = (ulonglong)(((int)uVar24 + 1U) % 6);
    uVar12 = 6;
    if (uVar16 + 1 < 6) {
      uVar12 = uVar16 + 1;
    }
    if (uVar12 != 0) {
      uVar17 = (ulonglong)uVar12;
    }
    uVar23 = (FRollingHashConst::HashTable[bVar22] >> 0x3a |
             FRollingHashConst::HashTable[bVar22] << 6) ^ FRollingHashConst::HashTable[(byte)FVar7]
             ^ (uVar23 >> 0x3f | uVar23 << 1);
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  if (local_158 == '\0') {
LAB_1431c7006:
    local_158 = '\0';
  }
  else {
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x2d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    local_158 = '\x01';
    if (local_b0 != uVar23) goto LAB_1431c7006;
  }
  local_150 = 6;
  do {
    iVar11 = (int)uVar17;
    iVar18 = (int)uVar20;
    iVar15 = local_140.Data.ArrayNum;
    if (iVar18 < 0) {
LAB_1431c7026:
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      local_170 = (FScriptContainerElement *)CONCAT44(local_170._4_4_,iVar13);
      local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,iVar18);
      bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    else {
      iVar13 = iVar15 + -1;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      if (iVar13 <= iVar18) goto LAB_1431c7026;
    }
    uVar20 = (ulonglong)(iVar18 + 1);
    FVar7 = local_140.Data.AllocatorInstance.Data[(longlong)iVar18 * 2];
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x4b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    bVar22 = 0;
    if (iVar11 == 0) {
      uVar16 = 0;
    }
    else {
      bVar22 = *(byte *)((ulonglong)((((int)uVar24 - iVar11) + 6U) % 6) + (longlong)local_148);
      uVar12 = 6;
      if (iVar11 - 1U < 6) {
        uVar12 = iVar11 - 1U;
      }
      uVar16 = 0;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
    }
    uVar17 = 0;
    *(FScriptContainerElement *)(uVar24 + (longlong)local_148) = FVar7;
    uVar24 = (ulonglong)(((int)uVar24 + 1U) % 6);
    uVar12 = 6;
    if (uVar16 + 1 < 6) {
      uVar12 = uVar16 + 1;
    }
    if (uVar12 != 0) {
      uVar17 = (ulonglong)uVar12;
    }
    uVar23 = (FRollingHashConst::HashTable[bVar22] >> 0x3a |
             FRollingHashConst::HashTable[bVar22] << 6) ^ FRollingHashConst::HashTable[(byte)FVar7]
             ^ (uVar23 >> 0x3f | uVar23 << 1);
    local_150 = local_150 + -1;
  } while (local_150 != 0);
  if (local_158 != '\0') {
    if ((uVar25 != 6) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("NumBytesConsumed == WindowSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchHash.cpp"
                           ,0x2d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    if (local_a8 == uVar23) {
      bVar9 = true;
      goto LAB_1431c717b;
    }
  }
  bVar9 = false;
LAB_1431c717b:
  operator_delete__(local_148);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  puVar14 = local_38;
  do {
    puVar2 = puVar14 + -2;
    puVar14 = puVar14 + -2;
    lVar21 = lVar21 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar21 != 0);
  return bVar9;
}

// CopyFileDataFromManifestToArray @ 1431d37e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
MergeHelpers::CopyFileDataFromManifestToArray
          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          TSharedPtr<FBuildPatchAppManifest,1> *param_2,
          TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  FFileManifest *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FFileManifest *pFVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res20 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar18 = 0;
  bVar8 = true;
  uVar9 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar11 != 0) {
    puVar19 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar18;
      iVar17 = iVar17 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iVar18) goto LAB_1431d3891;
      uVar16 = puVar19[lVar12 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar17 + -1 + (int)lVar12;
    if (iVar11 < iVar10) {
      iVar10 = iVar11;
    }
  }
LAB_1431d3891:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar18);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_74,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar11 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar9) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar16 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar18) goto LAB_1431d3990;
      uVar16 = *(uint *)(puVar14 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_1431d3990:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar12 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return bVar8;
    }
    lVar3 = *(longlong *)&param_1->Elements;
    if (param_2->Object == (FBuildPatchAppManifest *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchMergeManifests.cpp"
                         ,0x28,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar13 = (FFileManifest *)
              (**(code **)(param_2->Object->_padding_ + 0x1f8))
                        (param_2->Object,lVar3 + lVar12 * 0x18);
    if (pFVar13 == (FFileManifest *)0x0) {
      if (1 < (byte)LogMergeManifests._0_1_) {
        if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        (**(code **)(param_2->Object->_padding_ + 0x18))();
        if ((param_2->Object == (FBuildPatchAppManifest *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        (**(code **)(param_2->Object->_padding_ + 0x10))();
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
      }
      bVar8 = false;
    }
    else {
      pFVar4 = (FFileManifest *)(param_3->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar13) && (pFVar13 < pFVar4 + param_3->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar11 = param_3->ArrayNum;
      if (iVar11 == param_3->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar11 + 1;
      BuildPatchServices::FFileManifest::FFileManifest
                ((FFileManifest *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 0x60),
                 pFVar13);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// DetermineInstallMaxDiskSizeIfDeletingChunkDbs @ 1431d8f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
BuildPatchServices::DetermineInstallMaxDiskSizeIfDeletingChunkDbs
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,IBuildManifestSet *param_2,
          IFileSystem *param_3,FString *param_4,TArray<FString,TSizedDefaultAllocator<32>_> *param_5
          ,bool param_6)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  IChunkReferenceTracker *pIVar5;
  longlong lVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [4];
  int local_194;
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_170;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_160;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_148;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_f8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  (**(code **)((longlong)*param_2 + 0x50))(param_2,&local_a8);
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  (**(code **)((longlong)*param_2 + 0x58))(param_2,param_4,&local_f8);
  GenerateFilesToConstruct(&local_148,param_2,param_5,&local_a8,&local_f8,param_6);
  pIVar5 = FChunkReferenceTrackerFactory::Create(param_2,&local_148);
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,&local_160);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array(&local_148,&local_180);
  iVar2 = local_180.ArrayNum;
  local_194 = 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  pFVar9 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 0x10;
  FVar8.Data = local_180.AllocatorInstance.Data;
  while( true ) {
    if (local_180.ArrayNum != iVar2) {
      local_198[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (FVar8.Data == pFVar9) break;
    lVar6 = (**(code **)((longlong)*param_2 + 0x70))(param_2,FVar8.Data);
    if (lVar6 != 0) {
      local_194 = local_194 + *(int *)(lVar6 + 0x50);
      if (((local_190.AllocatorInstance.Data <= (FScriptContainerElement *)&local_194) &&
          ((FScriptContainerElement *)&local_194 <
           local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      iVar4 = local_190.ArrayNum;
      if (local_190.ArrayNum == local_190.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_190.AllocatorInstance,&local_190.ArrayMax);
      }
      local_190.ArrayNum = iVar4 + 1;
      *(int *)(local_190.AllocatorInstance.Data + (longlong)iVar4 * 4) = local_194;
    }
    FVar8.Data = FVar8.Data + 0x10;
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  uVar7 = IConstructorChunkDbChunkSource::GetChunkDbSizesAtIndexes
                    (param_1,param_3,&local_160,&local_190,&local_170);
  uVar7 = FBuildPatchUtils::CalculateDiskSpaceRequirementsWithDeleteDuringInstall
                    (&local_180,0,param_2,&local_170,uVar7);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (pIVar5 != (IChunkReferenceTracker *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  local_148.HashSize = 0;
  if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148.Elements);
  return uVar7;
}

// DownloadSpeedAverageTime @ 1431d9b30

float __cdecl ConfigHelpers::DownloadSpeedAverageTime(void)

{
  float local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 10.0;
      FConfigCacheIni::GetFloat
                (GConfig,L"Portal.BuildPatch",L"DownloadSpeedAverageTime",local_res8,&GEngineIni);
      AverageTime = local_res8[0];
      if (__real_41f00000 <= local_res8[0]) {
        AverageTime = __real_41f00000;
      }
      if (AverageTime <= __real_3f800000) {
        AverageTime = __real_3f800000;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  return AverageTime;
}

// EmptyLinkFunctionForGeneratedCodeBuildPatchServices_init @ 1431da2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeBuildPatchServices_init(void)

{
  return;
}

// FeatureLevelFromString @ 1431db610

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __cdecl BuildPatchServices::FeatureLevelFromString(wchar_t *param_1,EFeatureLevel *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  
  iVar1 = FGenericPlatformStricmp::Strnicmp(param_1,L"EFeatureLevel::",0xf);
  pwVar2 = param_1 + 0xf;
  if (iVar1 != 0) {
    pwVar2 = param_1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Original");
  if (iVar1 == 0) {
    *param_2 = Original;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"CustomFields");
  if (iVar1 == 0) {
    *param_2 = CustomFields;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StartStoringVersion");
  if (iVar1 == 0) {
    *param_2 = StartStoringVersion;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"DataFileRenames");
  if (iVar1 == 0) {
    *param_2 = DataFileRenames;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresIfChunkOrFileData");
  if (iVar1 == 0) {
    *param_2 = StoresIfChunkOrFileData;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresDataGroupNumbers");
  if (iVar1 == 0) {
    *param_2 = StoresDataGroupNumbers;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"ChunkCompressionSupport");
  if (iVar1 == 0) {
    *param_2 = ChunkCompressionSupport;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresPrerequisitesInfo");
  if (iVar1 == 0) {
    *param_2 = StoresPrerequisitesInfo;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresChunkFileSizes");
  if (iVar1 == 0) {
LAB_1431db956:
    *param_2 = LatestNoChunks;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoredAsCompressedUClass");
  if (iVar1 == 0) {
    *param_2 = StoredAsCompressedUClass;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresChunkDataShaHashes");
  if (iVar1 == 0) {
    *param_2 = StoresChunkDataShaHashes;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresPrerequisiteIds");
  if (iVar1 == 0) {
LAB_1431db93e:
    *param_2 = LatestJson;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoredAsBinaryData");
  if (iVar1 == 0) {
    *param_2 = StoredAsBinaryData;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"VariableSizeChunks");
  if (iVar1 == 0) {
    *param_2 = VariableSizeChunks;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"UsesRuntimeGeneratedBuildId");
  if (iVar1 != 0) {
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"UsesBuildTimeGeneratedBuildId");
    if (iVar1 != 0) {
      iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Latest");
      if (iVar1 != 0) {
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"LatestNoChunks");
        if (iVar1 == 0) goto LAB_1431db956;
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"LatestJson");
        if (iVar1 == 0) goto LAB_1431db93e;
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"FirstOptimisedDelta");
        if (iVar1 != 0) {
          iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"StoresUniqueBuildId");
          if (iVar1 != 0) {
            return false;
          }
        }
        goto LAB_1431db926;
      }
    }
    *param_2 = Latest;
    return true;
  }
LAB_1431db926:
  *param_2 = FirstOptimisedDelta;
  return true;
}

// FeatureLevelToString @ 1431db980

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

wchar_t * __cdecl BuildPatchServices::FeatureLevelToString(EFeatureLevel *param_1)

{
  switch(*param_1) {
  case Original:
    return L"EFeatureLevel::Original";
  case CustomFields:
    return L"EFeatureLevel::CustomFields";
  case StartStoringVersion:
    return L"EFeatureLevel::StartStoringVersion";
  case DataFileRenames:
    return L"EFeatureLevel::DataFileRenames";
  case StoresIfChunkOrFileData:
    return L"EFeatureLevel::StoresIfChunkOrFileData";
  case StoresDataGroupNumbers:
    return L"EFeatureLevel::StoresDataGroupNumbers";
  case ChunkCompressionSupport:
    return L"EFeatureLevel::ChunkCompressionSupport";
  case StoresPrerequisitesInfo:
    return L"EFeatureLevel::StoresPrerequisitesInfo";
  case LatestNoChunks:
    return L"EFeatureLevel::StoresChunkFileSizes";
  case StoredAsCompressedUClass:
    return L"EFeatureLevel::StoredAsCompressedUClass";
  default:
    return L"Invalid";
  case StoresChunkDataShaHashes:
    return L"EFeatureLevel::StoresChunkDataShaHashes";
  case LatestJson:
    return L"EFeatureLevel::StoresPrerequisiteIds";
  case StoredAsBinaryData:
    return L"EFeatureLevel::StoredAsBinaryData";
  case VariableSizeChunks:
    return L"EFeatureLevel::VariableSizeChunks";
  case FirstOptimisedDelta:
    return L"EFeatureLevel::UsesRuntimeGeneratedBuildId";
  case Latest:
    return L"EFeatureLevel::UsesBuildTimeGeneratedBuildId";
  }
}

// GenerateFilesToConstruct @ 1431dc7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
BuildPatchServices::GenerateFilesToConstruct
          (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,
          IBuildManifestSet *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_5,bool param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar8;
  FScriptContainerElement *pFVar9;
  FString *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FPreReqInfo *pFVar13;
  int iVar14;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FPreReqInfo *local_170;
  undefined8 local_168;
  undefined1 local_160 [24];
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_160._0_8_ = param_5;
  bVar6 = 1 < param_1->HashSize;
  if (!bVar6) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(param_1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
  puVar1 = &(param_1->Elements).field_0xc;
  *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  iVar14 = *(int *)&(param_1->Elements).field_0x2c;
  *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  if ((iVar14 < 0) || (0x80 < iVar14)) {
    *(undefined4 *)&(param_1->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10,0);
  }
  iVar14 = 1;
  if (bVar6) {
    param_1->HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
  iVar3 = param_3->ArrayNum;
  if (iVar3 == 0) {
    if (param_6) {
      local_170 = (FPreReqInfo *)0x0;
      local_168 = 0;
      (**(code **)((longlong)*param_2 + 0x88))(param_2,&local_170);
      iVar14 = (int)local_168;
      pFVar10 = &local_170->Path;
      pFVar13 = local_170 + (int)local_168;
      while( true ) {
        if ((int)local_168 != iVar14) {
          `TCheckedPointerIterator<BuildPatchServices::FPreReqInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_178);
        }
        if ((FPreReqInfo *)(pFVar10 + -6) == pFVar13) break;
        local_148._0_8_ = (FScriptContainerElement *)0x0;
        local_148._8_8_ = 0;
        local_128 = (void *)0x0;
        local_120 = 0;
        local_11c = 0x80;
        local_118 = 0xffffffff;
        local_114 = 0;
        local_108 = (ForElementType<FSetElementId>)0x0;
        local_100 = 0;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_148,
                   (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar10 + -6));
        ::FString::FString(&local_f8,pFVar10 + -1);
        ::FString::FString(&local_e8,pFVar10);
        ::FString::FString(&local_d8,pFVar10 + 1);
        ::FString::FString(&local_c8,pFVar10 + 2);
        ::FString::FString(&local_b8,pFVar10 + 3);
        local_a8 = *(undefined1 *)(pFVar10 + 4);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_1,(FString *)local_160,(bool *)&local_e8);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_100 = 0;
        if (local_108 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_108);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_148,0,local_148._8_4_);
        iVar3 = SUB84(local_148._8_8_,4);
        local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
        }
        local_118 = 0xffffffff;
        local_114 = 0;
        local_120 = 0;
        if (0x80 < local_11c) {
          local_11c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
        }
        if (local_128 != (void *)0x0) {
          FMemory::Free(local_128);
        }
        if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._0_8_);
        }
        pFVar10 = (FString *)&pFVar10[10].Data.ArrayNum;
      }
      DestructItems<BuildPatchServices::FPreReqInfo,int>(local_170,(int)local_168);
      if (local_170 != (FPreReqInfo *)0x0) {
        FMemory::Free(local_170);
      }
    }
    else {
      pTVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                          local_160._0_8_,&local_98,param_4);
      if (param_1 != pTVar8) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
        Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(param_1,pTVar8);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  else {
    pFVar9 = (param_3->AllocatorInstance).Data;
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar11 = uVar7 + iVar3;
    if (uVar7 < uVar11) {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
      }
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1,uVar11);
      if (3 < uVar11) {
        uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar4 & 0x1f);
      }
      if ((param_1->HashSize == 0) || (param_1->HashSize < iVar14)) {
        param_1->HashSize = iVar14;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(param_1);
      }
    }
    pFVar12 = pFVar9 + (longlong)iVar3 * 0x10;
    for (; pFVar9 != pFVar12; pFVar9 = pFVar9 + 0x10) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1,(FString *)(local_160 + 8),(bool *)pFVar9);
    }
  }
  return;
}

// GetActionTypeLog @ 1431dcf10

wchar_t * __cdecl InstallerHelpers::GetActionTypeLog(FInstallerAction *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = BuildPatchServices::FInstallerAction::IsInstall(param_1);
  if (bVar1) {
    return L"Install";
  }
  bVar1 = BuildPatchServices::FInstallerAction::IsUpdate(param_1);
  if (bVar1) {
    return L"Update";
  }
  bVar1 = BuildPatchServices::FInstallerAction::IsRepair(param_1);
  if (bVar1) {
    return L"Repair";
  }
  bVar1 = BuildPatchServices::FInstallerAction::IsUninstall(param_1);
  pwVar2 = L"Invalid";
  if (bVar1) {
    pwVar2 = L"Uninstall";
  }
  return pwVar2;
}

// GetChunkDeltaFilename @ 1431dd9d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
BuildPatchServices::GetChunkDeltaFilename
          (FString *__return_storage_ptr__,TSharedRef<IBuildManifest,1> *param_1,
          TSharedRef<IBuildManifest,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FBuildPatchAppManifest *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FBuildPatchAppManifest *pFVar4;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = (FBuildPatchAppManifest *)param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = (FBuildPatchAppManifest *)param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBuildPatchUtils::GetChunkDeltaFilename(__return_storage_ptr__,pFVar4,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetManifestLog @ 1431e0fe0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __cdecl
InstallerHelpers::GetManifestLog
          (FString *__return_storage_ptr__,TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1->Object == (FBuildPatchAppManifest *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"NULL");
    return __return_storage_ptr__;
  }
  (**(code **)(param_1->Object->_padding_ + 0x150))();
  if ((param_1->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (**(code **)(param_1->Object->_padding_ + 0x18))();
  if ((param_1->Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (**(code **)(param_1->Object->_padding_ + 0x10))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s (%s)");
  return __return_storage_ptr__;
}

// GetMaxScannerBacklogCount @ 1431e1100

int __cdecl PatchGenerationHelpers::GetMaxScannerBacklogCount(void)

{
  int iVar1;
  int iVar2;
  int local_res8 [8];
  
  local_res8[0] = 0x4b;
  FConfigCacheIni::GetInt(GConfig,L"BuildPatchServices",L"MaxScannerBacklog",local_res8,&GEngineIni)
  ;
  iVar2 = 500;
  if (local_res8[0] < 500) {
    iVar2 = local_res8[0];
  }
  iVar1 = 5;
  if (5 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetMultipleReferencedChunks @ 1431e1160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __cdecl
InstallerHelpers::GetMultipleReferencedChunks
          (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          IBuildManifestSet *param_1)

{
  bool *pbVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar8;
  ulong64 uVar9;
  byte bVar11;
  uint *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  bool *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_167 [7];
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  undefined1 local_12c [12];
  IBuildManifestSet *local_120;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  longlong lVar10;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar17 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_120 = param_1;
  (**(code **)((longlong)*param_1 + 0x50))(param_1,local_e8);
  uVar18 = local_c0;
  uStack_154 = 1;
  local_140 = 0;
  uStack_144 = local_140;
  if (local_c0 != 0) {
    puVar12 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar12 = local_c8;
    }
    uVar16 = *puVar12;
    local_140 = 0;
    uVar17 = 0;
    while (uVar16 == 0) {
      lVar7 = (longlong)(int)uVar17;
      local_140 = local_140 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_144 = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < (int)uVar17)
      goto LAB_1431e1292;
      uVar16 = puVar12[lVar7 + 1];
    }
    uStack_154 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_130 = (int)lVar7;
    uStack_144 = (local_140 - 1) + local_130;
    if ((int)local_c0 < (int)uStack_144) {
      uStack_144 = local_c0;
    }
  }
LAB_1431e1292:
  local_160 = (longlong *)local_e8;
  local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uVar16 = local_c0 & 0xffffffe0;
  iStack_138 = local_e8._8_4_ - local_b4;
  uStack_148 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_144;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_154,uVar17);
  iVar14 = (int)local_c0 >> 5;
  TStack_110._28_4_ = uStack_144;
  TStack_110.BaseBitIndex = local_140;
  uStack_f0 = CONCAT44(uStack_134,iStack_138);
  bVar11 = (byte)local_c0;
  uStack_158 = uVar17;
  uStack_13c = uStack_144;
  local_118 = local_160;
  TStack_110.Array = local_150;
  if (((int)local_c0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(*pcVar3)();
    return pTVar8;
  }
  if (uVar18 != local_c0) {
    puVar12 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar12 = local_c8;
    }
    uVar17 = -1 << (bVar11 & 0x1f) & puVar12[iVar14];
    while (uVar17 == 0) {
      lVar7 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = local_c0;
      if ((int)(((int)(local_c0 - 1) >> 0x1f & 0x1fU) + (local_c0 - 1)) >> 5 < iVar14)
      goto LAB_1431e13a0;
      uVar17 = puVar12[lVar7 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar18 = (int)lVar7 + -1 + uVar16;
    if ((int)local_c0 < (int)uVar18) {
      uVar18 = local_c0;
    }
  }
LAB_1431e13a0:
  do {
    plVar4 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_168);
    }
    if (((TStack_110.CurrentBitIndex == uVar18) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar4 == (longlong *)local_e8)) {
      local_a0 = 0;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return __return_storage_ptr__;
    }
    lVar7 = (**(code **)((longlong)*param_1 + 0x70))
                      (param_1,*plVar4 + (longlong)TStack_110.CurrentBitIndex * 0x18);
    if (lVar7 != 0) {
      iVar14 = *(int *)(lVar7 + 0x50);
      pbVar15 = *(bool **)(lVar7 + 0x48);
      pbVar1 = pbVar15 + (longlong)iVar14 * 0x18;
LAB_1431e1410:
      if (*(int *)(lVar7 + 0x50) != iVar14) {
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_167);
      }
      param_1 = local_120;
      if (pbVar15 != pbVar1) {
        uVar9 = CityHash64(pbVar15,0x10);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          iVar6 = *(int *)((longlong)FVar13 +
                          ((ulonglong)(local_98.HashSize - 1) & uVar9 & 0xffffffff) * 4);
          if (iVar6 != -1) {
            do {
              lVar10 = (longlong)iVar6;
              if (((*(int *)(pbVar15 + 0xc) ==
                    *(int *)(local_98.Elements._0_8_ + 0xc + lVar10 * 0x18) &&
                   *(int *)(pbVar15 + 8) == *(int *)(local_98.Elements._0_8_ + 8 + lVar10 * 0x18))
                  && *(int *)(pbVar15 + 4) == *(int *)(local_98.Elements._0_8_ + 4 + lVar10 * 0x18))
                  && *(int *)pbVar15 == *(int *)(local_98.Elements._0_8_ + lVar10 * 0x18)) {
                TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                          (__return_storage_ptr__,(FGuid *)local_12c,pbVar15);
                pbVar15 = pbVar15 + 0x18;
                goto LAB_1431e1410;
              }
              iVar6 = *(int *)(local_98.Elements._0_8_ + 0x10 + lVar10 * 0x18);
            } while (iVar6 != -1);
          }
        }
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&local_98,(FGuid *)(local_12c + 4),pbVar15);
        pbVar15 = pbVar15 + 0x18;
        goto LAB_1431e1410;
      }
    }
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  } while( true );
}

// GetShaForDataSet @ 1431e31d0

FSHAHash * __cdecl
PatchGenerationHelpers::GetShaForDataSet
          (FSHAHash *__return_storage_ptr__,uchar *param_1,uint param_2)

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  FSHA1::HashBuffer(param_1,(ulonglong)param_2,__return_storage_ptr__->Hash);
  return __return_storage_ptr__;
}

// GetVerifyErrorCode @ 1431e3f00

wchar_t * __cdecl InstallerHelpers::GetVerifyErrorCode(EVerifyResult *param_1)

{
  EVerifyResult EVar1;
  
  EVar1 = *param_1;
  if (EVar1 == FileMissing) {
    return BuildPatchServices::VerifyErrorCodes::FileMissing;
  }
  if (EVar1 == OpenFileFailed) {
    return BuildPatchServices::VerifyErrorCodes::OpenFileFailed;
  }
  if (EVar1 == HashCheckFailed) {
    return BuildPatchServices::VerifyErrorCodes::HashCheckFailed;
  }
  if (EVar1 != FileSizeFailed) {
    return BuildPatchServices::VerifyErrorCodes::UnknownFail;
  }
  return BuildPatchServices::VerifyErrorCodes::FileSizeFailed;
}

// LoadDownloadSpeedAverageTime @ 1431e7ec0

float __cdecl ConfigHelpers::LoadDownloadSpeedAverageTime(void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  FConfigCacheIni::GetFloat
            (GConfig,L"Portal.BuildPatch",L"DownloadSpeedAverageTime",local_res8,&GEngineIni);
  if (__real_41f00000 <= local_res8[0]) {
    local_res8[0] = __real_41f00000;
  }
  if (local_res8[0] <= __real_3f800000) {
    local_res8[0] = __real_3f800000;
  }
  return local_res8[0];
}

// LoadManifestFile @ 1431e7f90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __cdecl
MergeHelpers::LoadManifestFile
          (TSharedPtr<FBuildPatchAppManifest,1> *__return_storage_ptr__,FString *param_1,
          FWindowsRecursiveMutex *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar4;
  FBuildPatchAppManifest *this;
  TRawPtrProxy<FBuildPatchAppManifest> local_res18 [2];
  TSharedPtr<FBuildPatchAppManifest,1> local_18;
  
  if (param_2 == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UObjectAllocationLock != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchMergeManifests.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FBuildPatchAppManifest,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_2);
  this = ::operator_new(0x2b8);
  local_res18[0].Object = (FBuildPatchAppManifest *)0x0;
  if (this != (FBuildPatchAppManifest *)0x0) {
    local_res18[0].Object = FBuildPatchAppManifest::FBuildPatchAppManifest(this);
  }
  TSharedPtr<FBuildPatchAppManifest,1>::TSharedPtr<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_18,local_res18);
  LeaveCriticalSection((LPCRITICAL_SECTION)param_2);
  if (local_18.Object == (FBuildPatchAppManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FBuildPatchAppManifest,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  cVar3 = (**(code **)((local_18.Object)->_padding_ + 0x158))(local_18.Object,param_1);
  if (cVar3 == '\0') {
    __return_storage_ptr__->Object = (FBuildPatchAppManifest *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = local_18.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// LoadNumFileMoveRetries @ 1431e80a0

int __cdecl ConfigHelpers::LoadNumFileMoveRetries(void)

{
  int iVar1;
  int iVar2;
  int local_res8 [8];
  
  local_res8[0] = 5;
  FConfigCacheIni::GetInt(GConfig,L"Portal.BuildPatch",L"NumFileMoveRetries",local_res8,&GEngineIni)
  ;
  iVar2 = 0x32;
  if (local_res8[0] < 0x32) {
    iVar2 = local_res8[0];
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// LoadNumInstallerRetries @ 1431e8100

int __cdecl ConfigHelpers::LoadNumInstallerRetries(void)

{
  int iVar1;
  int iVar2;
  int local_res8 [8];
  
  local_res8[0] = 5;
  FConfigCacheIni::GetInt
            (GConfig,L"Portal.BuildPatch",L"NumInstallerRetries",local_res8,&GEngineIni);
  iVar2 = 0x32;
  if (local_res8[0] < 0x32) {
    iVar2 = local_res8[0];
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// LogAdditionalVerifyErrors @ 1431e8160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InstallerHelpers::LogAdditionalVerifyErrors(EVerifyError param_1,int param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  EVerifyResult local_res18 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar1 = BuildPatchServices::TryConvertToVerifyResult(param_1,local_res18);
  if (bVar1) {
    ::FString::FString(&local_18,InstallErrorPrefixes::ErrorTypeStrings[4]);
    pwVar2 = BuildPatchServices::VerifyErrorCodes::FileMissing;
    if ((((local_res18[0] != FileMissing) &&
         (pwVar2 = BuildPatchServices::VerifyErrorCodes::OpenFileFailed,
         local_res18[0] != OpenFileFailed)) &&
        (pwVar2 = BuildPatchServices::VerifyErrorCodes::HashCheckFailed,
        local_res18[0] != HashCheckFailed)) &&
       (pwVar2 = BuildPatchServices::VerifyErrorCodes::FileSizeFailed,
       local_res18[0] != FileSizeFailed)) {
      pwVar2 = BuildPatchServices::VerifyErrorCodes::UnknownFail;
    }
    ::FString::FString(&local_28,pwVar2);
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      ::FString::ConcatFF(&local_38,&local_18,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogBuildConfiguration @ 1431e8260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __cdecl
InstallerHelpers::LogBuildConfiguration(FBuildInstallerConfiguration *param_1,FGuid *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  TSharedRef<IBuildManifest,1> *pTVar7;
  undefined8 *puVar8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar9;
  FString *pFVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  FInstallerAction *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FBuildPatchAppManifest *pFVar20;
  wchar_t *pwVar21;
  uint uVar22;
  IBuildManifest *pIVar23;
  FScriptContainerElement *pFVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint *puVar27;
  FInstallerAction *this;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [4];
  uint local_200;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FString local_1c8;
  TReferenceControllerBase<1> *local_1b8;
  FString local_1b0;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  FBuildInstallerConfiguration *local_190;
  FInstallerAction *local_188;
  TSharedPtr<FBuildPatchAppManifest,1> local_180;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  undefined1 *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TSharedRef<IBuildManifest,1> local_110;
  TSharedRef<IBuildManifest,1> local_100;
  FString local_f0 [2];
  undefined4 local_c4;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  if (4 < (byte)LogBPSInstallerConfig._0_1_) {
    local_190 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DoNotInterleaveLogs,4000);
      atexit(`InstallerHelpers::LogBuildConfiguration'::__l2::
             _dynamic_atexit_destructor_for__DoNotInterleaveLogs__);
      _Init_thread_footer(&::_TSS0);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DoNotInterleaveLogs);
    if (4 < (byte)LogBPSInstallerConfig._0_1_) {
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      FGuid::AppendString(param_2,&local_1c8,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    local_200 = (param_1->InstallerActions).ArrayNum;
    uVar12 = (ulonglong)(int)local_200;
    this = (FInstallerAction *)(param_1->InstallerActions).AllocatorInstance.Data;
    local_188 = this + uVar12;
    while( true ) {
      pFVar17 = local_188;
      if ((param_1->InstallerActions).ArrayNum != (int)uVar12) {
        local_208 = 0;
        `TCheckedPointerIterator<BuildPatchServices::FInstallerAction_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_208);
      }
      if (this == pFVar17) break;
      bVar6 = BuildPatchServices::FInstallerAction::IsUpdate(this);
      if (((bVar6) || (bVar6 = BuildPatchServices::FInstallerAction::IsRepair(this), bVar6)) ||
         (bVar6 = BuildPatchServices::FInstallerAction::IsUninstall(this), bVar6)) {
        pTVar7 = BuildPatchServices::FInstallerAction::GetCurrentManifest(this,&local_110);
        pTVar16 = (pTVar7->SharedReferenceCount).ReferenceController;
        pIVar23 = pTVar7->Object;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b8 = pTVar16;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110.SharedReferenceCount.ReferenceController);
      }
      else {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        local_1b8 = (TReferenceControllerBase<1> *)0x0;
        pIVar23 = (IBuildManifest *)0x0;
      }
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      bVar6 = BuildPatchServices::FInstallerAction::IsInstall(this);
      if (((bVar6) || (bVar6 = BuildPatchServices::FInstallerAction::IsUpdate(this), bVar6)) ||
         (bVar6 = BuildPatchServices::FInstallerAction::IsRepair(this), bVar6)) {
        pTVar7 = BuildPatchServices::FInstallerAction::GetInstallManifest(this,&local_100);
        pTVar16 = (pTVar7->SharedReferenceCount).ReferenceController;
        pFVar20 = (FBuildPatchAppManifest *)pTVar7->Object;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.SharedReferenceCount.ReferenceController);
      }
      else {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        pFVar20 = (FBuildPatchAppManifest *)0x0;
      }
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_180.Object = pFVar20;
      local_180.SharedReferenceCount.ReferenceController = pTVar16;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      if (4 < (byte)LogBPSInstallerConfig._0_1_) {
        bVar6 = BuildPatchServices::FInstallerAction::IsInstall(this);
        if (((!bVar6) && (bVar6 = BuildPatchServices::FInstallerAction::IsUpdate(this), !bVar6)) &&
           (bVar6 = BuildPatchServices::FInstallerAction::IsRepair(this), !bVar6)) {
          BuildPatchServices::FInstallerAction::IsUninstall(this);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
        if (4 < (byte)LogBPSInstallerConfig._0_1_) {
          if (pIVar23 == (IBuildManifest *)0x0) {
            ::FString::FString(&local_1b0,L"NULL");
          }
          else {
            puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar23 + 0x150))(pIVar23);
            if (*(int *)(puVar8 + 1) == 0) {
              pwVar21 = L"";
            }
            else {
              pwVar21 = (wchar_t *)*puVar8;
            }
            (**(code **)((longlong)*pIVar23 + 0x18))(pIVar23);
            (**(code **)((longlong)*pIVar23 + 0x10))(pIVar23);
            local_218 = pwVar21;
            ::FString::PrintfImpl(&local_1b0,L"%s %s (%s)");
          }
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogBPSInstallerConfig._0_1_) {
            GetManifestLog(local_f0,&local_180);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
            if (local_f0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0[0].Data.AllocatorInstance.Data);
            }
          }
        }
      }
      pTVar9 = BuildPatchServices::FInstallerAction::GetInstallTags(this);
      iVar15 = *(int *)&(pTVar9->Elements).field_0x28;
      iStack_1f0 = 0;
      local_1d8 = 0;
      uStack_1ec = 1;
      puVar1 = &(pTVar9->Elements).field_0x10;
      uStack_1dc = 0;
      if (iVar15 != 0) {
        puVar26 = *(uint **)&(pTVar9->Elements).field_0x20;
        puVar27 = (uint *)puVar1;
        if (puVar26 != (uint *)0x0) {
          puVar27 = puVar26;
        }
        uVar22 = *puVar27;
        while (uVar22 == 0) {
          lVar13 = (longlong)iStack_1f0;
          local_1d8 = local_1d8 + 0x20;
          iStack_1f0 = iStack_1f0 + 1;
          uStack_1dc = iVar15;
          if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
          goto LAB_1431e865d;
          uVar22 = puVar27[lVar13 + 1];
        }
        uStack_1ec = -uVar22 & uVar22;
        uVar12 = (ulonglong)uStack_1ec * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1a0 = (int)lVar13;
        uStack_1dc = local_1a0 + -1 + local_1d8;
        if (iVar15 < (int)uStack_1dc) {
          uStack_1dc = iVar15;
        }
      }
LAB_1431e865d:
      uVar22 = *(uint *)&(pTVar9->Elements).field_0x28;
      uStack_1d4 = local_c4;
      uVar19 = uVar22 & 0xffffffe0;
      iStack_1d0 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
      TStack_168._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
      uStack_1e0 = 0xffffffff;
      TStack_168.CurrentBitIndex = uStack_1dc;
      TStack_168.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar22 >> 5;
      TStack_168._28_4_ = local_c4;
      TStack_168.BaseBitIndex = local_1d8;
      uStack_148 = CONCAT44(uStack_1cc,iStack_1d0);
      local_1f8 = pTVar9;
      local_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_170 = pTVar9;
      TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar22 < 0) || (iVar15 < (int)uVar22)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(uint *)&(pTVar9->Elements).field_0x28;
      if (uVar22 != uVar2) {
        puVar3 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
        puVar25 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar25 = puVar3;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar14 * 4);
        while (uVar22 == 0) {
          lVar13 = (longlong)iVar14;
          uVar19 = uVar19 + 0x20;
          iVar14 = iVar14 + 1;
          uVar22 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1431e8770;
          uVar22 = *(uint *)(puVar25 + lVar13 * 4 + 4);
        }
        uVar12 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_19c = (int)lVar13;
        uVar22 = local_19c + -1 + uVar19;
        if ((int)uVar2 < (int)uVar22) {
          uVar22 = uVar2;
        }
      }
LAB_1431e8770:
      while( true ) {
        pTVar5 = local_170;
        if (*(int *)&(local_170->Elements).field_0x8 - *(int *)&(local_170->Elements).field_0x34 !=
            (int)uStack_148) {
          local_207 = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_207);
        }
        if (((TStack_168.CurrentBitIndex == uVar22) &&
            (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar5 == pTVar9)) break;
        if (4 < (byte)LogBPSInstallerConfig._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
        }
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      }
      local_6c = 0x80;
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      pFVar17 = (FInstallerAction *)&this->InstallManifest;
      if ((((this->InstallManifest).Object == (IBuildManifest *)0x0) &&
          (pFVar17 = this, (this->CurrentManifest).Object == (IBuildManifest *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar23 = (pFVar17->CurrentManifest).Object;
      pTVar16 = (pFVar17->CurrentManifest).SharedReferenceCount.ReferenceController;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar23 == (IBuildManifest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)((longlong)*pIVar23 + 0xc0))(pIVar23,local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      uVar22 = local_70;
      iStack_1f0 = 0;
      uStack_1ec = 1;
      local_1d8 = 0;
      uStack_1dc = 0;
      if (local_70 != 0) {
        puVar26 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar26 = local_78;
        }
        uVar19 = *puVar26;
        while (uVar19 == 0) {
          lVar13 = (longlong)iStack_1f0;
          local_1d8 = local_1d8 + 0x20;
          iStack_1f0 = iStack_1f0 + 1;
          uStack_1dc = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
          goto LAB_1431e8941;
          uVar19 = (puVar26 + 1)[lVar13];
        }
        uStack_1ec = -uVar19 & uVar19;
        uVar12 = (ulonglong)uStack_1ec * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_198 = (int)lVar13;
        uStack_1dc = local_1d8 + -1 + local_198;
        if ((int)local_70 < (int)uStack_1dc) {
          uStack_1dc = local_70;
        }
      }
LAB_1431e8941:
      local_1f8 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
      uStack_1d4 = local_a4;
      local_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      iStack_1d0 = local_98._8_4_ - local_64;
      uVar19 = local_70 & 0xffffffe0;
      TStack_138._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
      uStack_1e0 = 0xffffffff;
      TStack_138.CurrentBitIndex = uStack_1dc;
      TStack_138.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)local_70 >> 5;
      TStack_138._28_4_ = local_a4;
      TStack_138.BaseBitIndex = local_1d8;
      uStack_118 = CONCAT44(uStack_1cc,iStack_1d0);
      bVar11 = (byte)local_70;
      local_140 = (undefined1 *)local_1f8;
      TStack_138.Array = local_1e8;
      if (((int)local_70 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar22 != local_70) {
        puVar26 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar26 = local_78;
        }
        uVar22 = -1 << (bVar11 & 0x1f) & puVar26[iVar15];
        while (uVar22 == 0) {
          lVar13 = (longlong)iVar15;
          uVar19 = uVar19 + 0x20;
          iVar15 = iVar15 + 1;
          uVar22 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_1431e8a70;
          uVar22 = (puVar26 + 1)[lVar13];
        }
        uVar12 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_194 = (int)lVar13;
        uVar22 = (uVar19 - 1) + local_194;
        if ((int)local_70 < (int)uVar22) {
          uVar22 = local_70;
        }
      }
LAB_1431e8a70:
      while( true ) {
        puVar1 = local_140;
        if (*(int *)(local_140 + 8) - *(int *)(local_140 + 0x34) != (int)uStack_118) {
          local_206 = 0;
          `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_206);
        }
        if (((TStack_138.CurrentBitIndex == uVar22) &&
            (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
           (puVar1 == local_98)) break;
        if (4 < (byte)LogBPSInstallerConfig._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
        }
        TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
      }
      pFVar10 = BuildPatchServices::FInstallerAction::GetInstallSubdirectory(this);
      if ((1 < (pFVar10->Data).ArrayNum) && (4 < (byte)LogBuildPatchServices._0_1_)) {
        BuildPatchServices::FInstallerAction::GetInstallSubdirectory(this);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Build_Config__I_150a71030,
                   (FLogCategoryBase *)&LogBuildPatchServices);
      }
      pFVar10 = BuildPatchServices::FInstallerAction::GetCloudSubdirectory(this);
      if ((1 < (pFVar10->Data).ArrayNum) && (4 < (byte)LogBuildPatchServices._0_1_)) {
        BuildPatchServices::FInstallerAction::GetCloudSubdirectory(this);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b8)
      ;
      uVar12 = (ulonglong)local_200;
      this = this + 1;
      param_1 = local_190;
    }
    if (((4 < (byte)LogBPSInstallerConfig._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig)
        , 4 < (byte)LogBPSInstallerConfig._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig),
       4 < (byte)LogBPSInstallerConfig._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
    }
    iVar15 = (param_1->ChunkDatabaseFiles).ArrayNum;
    pFVar18 = (param_1->ChunkDatabaseFiles).AllocatorInstance.Data;
    pFVar24 = pFVar18 + (longlong)iVar15 * 0x10;
    while( true ) {
      if ((param_1->ChunkDatabaseFiles).ArrayNum != iVar15) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_205);
      }
      if (pFVar18 == pFVar24) break;
      if (4 < (byte)LogBPSInstallerConfig._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
      }
      pFVar18 = pFVar18 + 0x10;
    }
    iVar15 = (param_1->CloudDirectories).ArrayNum;
    pFVar18 = (param_1->CloudDirectories).AllocatorInstance.Data;
    pFVar24 = pFVar18 + (longlong)iVar15 * 0x10;
    while( true ) {
      if ((param_1->CloudDirectories).ArrayNum != iVar15) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_204);
      }
      if (pFVar18 == pFVar24) break;
      if (4 < (byte)LogBPSInstallerConfig._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
      }
      pFVar18 = pFVar18 + 0x10;
    }
    if (((4 < (byte)LogBPSInstallerConfig._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig)
        , 4 < (byte)LogBPSInstallerConfig._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig),
       4 < (byte)LogBPSInstallerConfig._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
    }
    if ((4 < (byte)LogBPSInstallerConfig._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig),
       4 < (byte)LogBPSInstallerConfig._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBPSInstallerConfig);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DoNotInterleaveLogs);
  }
  return;
}

// LogBuildStatInfo @ 1431e8f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl InstallerHelpers::LogBuildStatInfo(FBuildInstallStats *param_1,FGuid *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FText *pFVar7;
  uint uVar8;
  FString local_3c8;
  TSharedPtr<FCulture,1> local_3b8;
  TSharedPtr<FCulture,1> local_3a8;
  TSharedPtr<FCulture,1> local_398;
  TSharedPtr<FCulture,1> local_388;
  TSharedPtr<FCulture,1> local_378;
  TSharedPtr<FCulture,1> local_368;
  TSharedPtr<FCulture,1> local_358;
  TSharedPtr<FCulture,1> local_348;
  TSharedPtr<FCulture,1> local_338;
  TSharedPtr<FCulture,1> local_328;
  TSharedPtr<FCulture,1> local_318;
  TSharedPtr<FCulture,1> local_308;
  TSharedPtr<FCulture,1> local_2f8;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  FText local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FText local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DoNotInterleaveLogs,4000);
    atexit(`InstallerHelpers::LogBuildStatInfo'::__l2::
           _dynamic_atexit_destructor_for__DoNotInterleaveLogs__);
    _Init_thread_footer(&::_TSS0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DoNotInterleaveLogs);
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.Data.ArrayNum = 0;
    local_3c8.Data.ArrayMax = 0;
    FGuid::AppendString(param_2,&local_3c8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if ((((((4 < (byte)LogBuildPatchServices._0_1_) &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
           4 < (byte)LogBuildPatchServices._0_1_)) &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
          4 < (byte)LogBuildPatchServices._0_1_)) &&
         (((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
           4 < (byte)LogBuildPatchServices._0_1_ &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
           4 < (byte)LogBuildPatchServices._0_1_)) &&
          ((UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
           4 < (byte)LogBuildPatchServices._0_1_ &&
           ((UE::Logging::Private::BasicLog<5>
                       (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
            4 < (byte)LogBuildPatchServices._0_1_ &&
            (UE::Logging::Private::BasicLog<5>
                       ((FStaticBasicLogRecord *)&PTR_u_Build_Stat__Chu_150a6f470,
                        (FLogCategoryBase *)&LogBuildPatchServices),
            4 < (byte)LogBuildPatchServices._0_1_)))))))) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices)
        , 4 < (byte)LogBuildPatchServices._0_1_)) &&
       (((((((UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
             4 < (byte)LogBuildPatchServices._0_1_ &&
             (UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
             4 < (byte)LogBuildPatchServices._0_1_)) &&
            (UE::Logging::Private::BasicLog<5>
                       (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
            4 < (byte)LogBuildPatchServices._0_1_)) &&
           ((UE::Logging::Private::BasicLog<5>
                       (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
            4 < (byte)LogBuildPatchServices._0_1_ &&
            (UE::Logging::Private::BasicLog<5>
                       (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
            4 < (byte)LogBuildPatchServices._0_1_)))) &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
          4 < (byte)LogBuildPatchServices._0_1_)) &&
         ((UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
          4 < (byte)LogBuildPatchServices._0_1_ &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
          4 < (byte)LogBuildPatchServices._0_1_)))) &&
        ((UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
         4 < (byte)LogBuildPatchServices._0_1_ &&
         ((UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
          4 < (byte)LogBuildPatchServices._0_1_ &&
          (UE::Logging::Private::BasicLog<5>
                     (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
          4 < (byte)LogBuildPatchServices._0_1_)))))))) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
  }
  dVar3 = __real_43e0000000000000;
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    dVar1 = param_1->AverageDownloadSpeed;
    lVar6 = 0;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar6 = -0x8000000000000000;
    }
    pFVar7 = FText::AsMemory(&local_2c8,(longlong)dVar1 + lVar6,IEC);
    FText::ToString(pFVar7);
    dVar1 = param_1->AverageDownloadSpeed;
    lVar6 = 0;
    if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
      lVar6 = -0x8000000000000000;
    }
    pFVar7 = FText::AsMemory(&local_2d8,(longlong)dVar1 + lVar6,SI);
    FText::ToString(pFVar7);
    local_3b8.Object = (FCulture *)0x0;
    local_3b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_2e8,param_1->AverageDownloadSpeed,
                             (FNumberFormattingOptions *)0x0,&local_3b8);
    FText::ToString(pFVar7);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b8.SharedReferenceCount.ReferenceController);
    if (local_2d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
    }
    if (local_2c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
    }
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      dVar1 = param_1->PeakDownloadSpeed;
      lVar6 = 0;
      if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
        lVar6 = -0x8000000000000000;
      }
      pFVar7 = FText::AsMemory(&local_298,(longlong)dVar1 + lVar6,IEC);
      FText::ToString(pFVar7);
      dVar1 = param_1->PeakDownloadSpeed;
      lVar6 = 0;
      if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
        lVar6 = -0x8000000000000000;
      }
      pFVar7 = FText::AsMemory(&local_2a8,(longlong)dVar1 + lVar6,SI);
      FText::ToString(pFVar7);
      local_3a8.Object = (FCulture *)0x0;
      local_3a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar7 = FText::AsNumber(&local_2b8,param_1->PeakDownloadSpeed,(FNumberFormattingOptions *)0x0
                               ,&local_3a8);
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_2b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3a8.SharedReferenceCount.ReferenceController);
      if (local_2a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
      }
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
      if (4 < (byte)LogBuildPatchServices._0_1_) {
        local_398.Object = (FCulture *)0x0;
        local_398.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar7 = FText::AsNumber(&local_288,param_1->TotalReadData,(FNumberFormattingOptions *)0x0,
                                 &local_398);
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        if (local_288.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_398.SharedReferenceCount.ReferenceController);
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          dVar1 = param_1->AverageDiskReadSpeed;
          lVar6 = 0;
          if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
            lVar6 = -0x8000000000000000;
          }
          pFVar7 = FText::AsMemory(&local_258,(longlong)dVar1 + lVar6,IEC);
          FText::ToString(pFVar7);
          dVar1 = param_1->AverageDiskReadSpeed;
          lVar6 = 0;
          if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
            lVar6 = -0x8000000000000000;
          }
          pFVar7 = FText::AsMemory(&local_268,(longlong)dVar1 + lVar6,SI);
          FText::ToString(pFVar7);
          local_388.Object = (FCulture *)0x0;
          local_388.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = FText::AsNumber(&local_278,param_1->AverageDiskReadSpeed,
                                   (FNumberFormattingOptions *)0x0,&local_388);
          FText::ToString(pFVar7);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          if (local_278.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_388.SharedReferenceCount.ReferenceController);
          if (local_268.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
          }
          if (local_258.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
          }
          if (4 < (byte)LogBuildPatchServices._0_1_) {
            dVar1 = param_1->PeakDiskReadSpeed;
            lVar6 = 0;
            if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
              lVar6 = -0x8000000000000000;
            }
            pFVar7 = FText::AsMemory(&local_228,(longlong)dVar1 + lVar6,IEC);
            FText::ToString(pFVar7);
            dVar1 = param_1->PeakDiskReadSpeed;
            lVar6 = 0;
            if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
              lVar6 = -0x8000000000000000;
            }
            pFVar7 = FText::AsMemory(&local_238,(longlong)dVar1 + lVar6,SI);
            FText::ToString(pFVar7);
            local_378.Object = (FCulture *)0x0;
            local_378.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar7 = FText::AsNumber(&local_248,param_1->PeakDiskReadSpeed,
                                     (FNumberFormattingOptions *)0x0,&local_378);
            FText::ToString(pFVar7);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            if (local_248.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_378.SharedReferenceCount.ReferenceController);
            if (local_238.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
            }
            if (local_228.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
            }
            if (4 < (byte)LogBuildPatchServices._0_1_) {
              local_368.Object = (FCulture *)0x0;
              local_368.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar7 = FText::AsNumber(&local_218,param_1->TotalWrittenData,
                                       (FNumberFormattingOptions *)0x0,&local_368);
              FText::ToString(pFVar7);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
              if (local_218.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_368.SharedReferenceCount.ReferenceController);
              if (4 < (byte)LogBuildPatchServices._0_1_) {
                dVar1 = param_1->AverageDiskWriteSpeed;
                lVar6 = 0;
                if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
                  lVar6 = -0x8000000000000000;
                }
                pFVar7 = FText::AsMemory(&local_1e8,(longlong)dVar1 + lVar6,IEC);
                FText::ToString(pFVar7);
                dVar1 = param_1->AverageDiskWriteSpeed;
                lVar6 = 0;
                if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
                  lVar6 = -0x8000000000000000;
                }
                pFVar7 = FText::AsMemory(&local_1f8,(longlong)dVar1 + lVar6,SI);
                FText::ToString(pFVar7);
                local_358.Object = (FCulture *)0x0;
                local_358.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                pFVar7 = FText::AsNumber(&local_208,param_1->AverageDiskWriteSpeed,
                                         (FNumberFormattingOptions *)0x0,&local_358);
                FText::ToString(pFVar7);
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                if (local_208.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_358.SharedReferenceCount.ReferenceController);
                if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
                }
                if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
                }
                if (4 < (byte)LogBuildPatchServices._0_1_) {
                  dVar1 = param_1->PeakDiskWriteSpeed;
                  lVar6 = 0;
                  if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
                    lVar6 = -0x8000000000000000;
                  }
                  pFVar7 = FText::AsMemory(&local_1b8,(longlong)dVar1 + lVar6,IEC);
                  FText::ToString(pFVar7);
                  dVar1 = param_1->PeakDiskWriteSpeed;
                  lVar6 = 0;
                  if ((dVar3 <= dVar1) && (dVar1 = dVar1 - dVar3, dVar1 < dVar3)) {
                    lVar6 = -0x8000000000000000;
                  }
                  pFVar7 = FText::AsMemory(&local_1c8,(longlong)dVar1 + lVar6,SI);
                  FText::ToString(pFVar7);
                  local_348.Object = (FCulture *)0x0;
                  local_348.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  pFVar7 = FText::AsNumber(&local_1d8,param_1->PeakDiskWriteSpeed,
                                           (FNumberFormattingOptions *)0x0,&local_348);
                  FText::ToString(pFVar7);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                  if (local_1d8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_348.SharedReferenceCount.ReferenceController)
                  ;
                  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
                  }
                  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
                  }
                  if ((4 < (byte)LogBuildPatchServices._0_1_) &&
                     (UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
                     4 < (byte)LogBuildPatchServices._0_1_)) {
                    FGenericPlatformTime::PrettyTime(&local_1a8,(double)param_1->InitializeTime);
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                    }
                    if (4 < (byte)LogBuildPatchServices._0_1_) {
                      FGenericPlatformTime::PrettyTime
                                (&local_198,(double)param_1->TheoreticalDownloadTime);
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_198.Data.AllocatorInstance.Data);
                      }
                      if (4 < (byte)LogBuildPatchServices._0_1_) {
                        FGenericPlatformTime::PrettyTime(&local_188,(double)param_1->ConstructTime);
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_188.Data.AllocatorInstance.Data);
                        }
                        if (4 < (byte)LogBuildPatchServices._0_1_) {
                          FGenericPlatformTime::PrettyTime
                                    (&local_178,(double)param_1->MoveFromStageTime);
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                          if (local_178.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_178.Data.AllocatorInstance.Data);
                          }
                          if (4 < (byte)LogBuildPatchServices._0_1_) {
                            FGenericPlatformTime::PrettyTime
                                      (&local_168,(double)param_1->FileAttributesTime);
                            UE::Logging::Private::BasicLog<5>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                            if (local_168.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_168.Data.AllocatorInstance.Data);
                            }
                            if (4 < (byte)LogBuildPatchServices._0_1_) {
                              FGenericPlatformTime::PrettyTime
                                        (&local_158,(double)param_1->VerifyTime);
                              UE::Logging::Private::BasicLog<5>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                              if (local_158.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_158.Data.AllocatorInstance.Data);
                              }
                              if (4 < (byte)LogBuildPatchServices._0_1_) {
                                FGenericPlatformTime::PrettyTime
                                          (&local_148,(double)param_1->CleanUpTime);
                                UE::Logging::Private::BasicLog<5>
                                          (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices)
                                ;
                                if (local_148.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                                }
                                if (4 < (byte)LogBuildPatchServices._0_1_) {
                                  FGenericPlatformTime::PrettyTime
                                            (&local_138,(double)param_1->PrereqTime);
                                  UE::Logging::Private::BasicLog<5>
                                            (&::LOG_Static,
                                             (FLogCategoryBase *)&LogBuildPatchServices);
                                  if (local_138.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_138.Data.AllocatorInstance.Data);
                                  }
                                  if (4 < (byte)LogBuildPatchServices._0_1_) {
                                    FGenericPlatformTime::PrettyTime
                                              (&local_128,(double)param_1->ProcessPausedTime);
                                    UE::Logging::Private::BasicLog<5>
                                              (&::LOG_Static,
                                               (FLogCategoryBase *)&LogBuildPatchServices);
                                    if (local_128.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_128.Data.AllocatorInstance.Data);
                                    }
                                    if (4 < (byte)LogBuildPatchServices._0_1_) {
                                      FGenericPlatformTime::PrettyTime
                                                (&local_118,(double)param_1->ProcessActiveTime);
                                      UE::Logging::Private::BasicLog<5>
                                                (&::LOG_Static,
                                                 (FLogCategoryBase *)&LogBuildPatchServices);
                                      if (local_118.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_118.Data.AllocatorInstance.Data);
                                      }
                                      if (4 < (byte)LogBuildPatchServices._0_1_) {
                                        FGenericPlatformTime::PrettyTime
                                                  (&local_108,(double)param_1->ProcessExecuteTime);
                                        UE::Logging::Private::BasicLog<5>
                                                  (&::LOG_Static,
                                                   (FLogCategoryBase *)&LogBuildPatchServices);
                                        if (local_108.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_108.Data.AllocatorInstance.Data);
                                        }
                                        if (((4 < (byte)LogBuildPatchServices._0_1_) &&
                                            (UE::Logging::Private::BasicLog<5>
                                                       (&::LOG_Static,
                                                        (FLogCategoryBase *)&LogBuildPatchServices),
                                            4 < (byte)LogBuildPatchServices._0_1_)) &&
                                           (UE::Logging::Private::BasicLog<5>
                                                      (&::LOG_Static,
                                                       (FLogCategoryBase *)&LogBuildPatchServices),
                                           4 < (byte)LogBuildPatchServices._0_1_)) {
                                          FText::BuildSourceString
                                                    (&param_1->FailureReasonText,&local_f8);
                                          UE::Logging::Private::BasicLog<5>
                                                    (&::LOG_Static,
                                                     (FLogCategoryBase *)&LogBuildPatchServices);
                                          if (local_f8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                                          }
                                          if (4 < (byte)LogBuildPatchServices._0_1_) {
                                            BuildPatchServices::EnumToString
                                                      (&local_e8,&param_1->FailureType);
                                            UE::Logging::Private::BasicLog<5>
                                                      (&::LOG_Static,
                                                       (FLogCategoryBase *)&LogBuildPatchServices);
                                            if (local_e8.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                                            }
                                            if (4 < (byte)LogBuildPatchServices._0_1_) {
                                              UE::Logging::Private::BasicLog<5>
                                                        (&::LOG_Static,
                                                         (FLogCategoryBase *)&LogBuildPatchServices)
                                              ;
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
            }
          }
        }
      }
    }
  }
  if (4 < (byte)LogBuildPatchServices._0_1_) {
    local_338.Object = (FCulture *)0x0;
    local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_d8,param_1->MaxDiskSpaceNeededWhenDeletingChunkDbsIfRequested,
                             (FNumberFormattingOptions *)0x0,&local_338);
    FText::ToString(pFVar7);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_338.SharedReferenceCount.ReferenceController);
  }
  if (((param_1->NumInstallRetries != (param_1->RetryFailureTypes).ArrayNum) ||
      (param_1->NumInstallRetries != (param_1->RetryErrorCodes).ArrayNum)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuildStats.NumInstallRetries == BuildStats.RetryFailureTypes.Num() && BuildStats.NumInstallRetries == BuildStats.RetryErrorCodes.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchInstaller.cpp"
                         ,0xaf,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  if (param_1->NumInstallRetries != 0) {
    do {
      if (4 < (byte)LogBuildPatchServices._0_1_) {
        uVar5 = 0;
        if ((int)uVar8 < (param_1->RetryFailureTypes).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        BuildPatchServices::EnumToString
                  (&local_c8,
                   (EBuildPatchInstallError *)
                   ((param_1->RetryFailureTypes).AllocatorInstance.Data + (longlong)(int)uVar8 * 4))
        ;
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          uVar5 = 0;
          if ((int)uVar8 < (param_1->RetryErrorCodes).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_1->NumInstallRetries);
  }
  if (((4 < (byte)LogBuildPatchServices._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
      4 < (byte)LogBuildPatchServices._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
     4 < (byte)LogBuildPatchServices._0_1_)) {
    FGenericPlatformTime::PrettyTime(&local_b8,(double)param_1->ExcellentDownloadHealthTime);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogBuildPatchServices._0_1_) {
      FGenericPlatformTime::PrettyTime(&local_a8,(double)param_1->GoodDownloadHealthTime);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogBuildPatchServices._0_1_) {
        FGenericPlatformTime::PrettyTime(&local_98,(double)param_1->OkDownloadHealthTime);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogBuildPatchServices._0_1_) {
          FGenericPlatformTime::PrettyTime(&local_88,(double)param_1->PoorDownloadHealthTime);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogBuildPatchServices._0_1_) {
            FGenericPlatformTime::PrettyTime
                      (&local_78,(double)param_1->DisconnectedDownloadHealthTime);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if ((4 < (byte)LogBuildPatchServices._0_1_) &&
               (UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices),
               4 < (byte)LogBuildPatchServices._0_1_)) {
              local_328.Object = (FCulture *)0x0;
              local_328.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar7 = FText::AsNumber(&local_68,param_1->MemoryStoreSizePeakBytes,
                                       (FNumberFormattingOptions *)0x0,&local_328);
              FText::ToString(pFVar7);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
              if (local_68.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_328.SharedReferenceCount.ReferenceController);
              if (4 < (byte)LogBuildPatchServices._0_1_) {
                local_318.Object = (FCulture *)0x0;
                local_318.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                pFVar7 = FText::AsNumber(&local_58,param_1->MemoryStoreSizeLimitBytes,
                                         (FNumberFormattingOptions *)0x0,&local_318);
                FText::ToString(pFVar7);
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                if (local_58.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_318.SharedReferenceCount.ReferenceController);
                if (4 < (byte)LogBuildPatchServices._0_1_) {
                  local_308.Object = (FCulture *)0x0;
                  local_308.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  pFVar7 = FText::AsNumber(&local_48,param_1->ProcessRequiredDiskSpace,
                                           (FNumberFormattingOptions *)0x0,&local_308);
                  FText::ToString(pFVar7);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                  if (local_48.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_308.SharedReferenceCount.ReferenceController)
                  ;
                  if (4 < (byte)LogBuildPatchServices._0_1_) {
                    local_2f8.Object = (FCulture *)0x0;
                    local_2f8.SharedReferenceCount.ReferenceController =
                         (TReferenceControllerBase<1> *)0x0;
                    pFVar7 = FText::AsNumber(local_38,param_1->ProcessAvailableDiskSpace,
                                             (FNumberFormattingOptions *)0x0,&local_2f8);
                    FText::ToString(pFVar7);
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
                    if (local_38[0].TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_38[0].TextData.Reference + 0x10))();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_2f8.SharedReferenceCount.ReferenceController);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DoNotInterleaveLogs);
  return;
}

// MergeDeltaManifest @ 1431ea670

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IBuildManifest,1> * __cdecl
BuildPatchServices::MergeDeltaManifest
          (TSharedPtr<IBuildManifest,1> *__return_storage_ptr__,
          TSharedRef<IBuildManifest,1> *param_1,TSharedRef<IBuildManifest,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar4;
  TSharedRef<FBuildPatchAppManifest,1> local_38;
  TSharedRef<FBuildPatchAppManifest,1> local_28;
  TSharedPtr<FBuildPatchAppManifest,1> local_18;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_38.Object = (FBuildPatchAppManifest *)param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = (FBuildPatchAppManifest *)param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar4 = FBuildMergeManifests::MergeDeltaManifest(&local_18,&local_28,&local_38);
  __return_storage_ptr__->Object = (IBuildManifest *)pTVar4->Object;
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// NumFileMoveRetries @ 1431eb660

int __cdecl ConfigHelpers::NumFileMoveRetries(void)

{
  int iVar1;
  int local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 5;
      FConfigCacheIni::GetInt
                (GConfig,L"Portal.BuildPatch",L"NumFileMoveRetries",local_res8,&GEngineIni);
      iVar1 = 0x32;
      if (local_res8[0] < 0x32) {
        iVar1 = local_res8[0];
      }
      MoveRetries = 1;
      if (1 < iVar1) {
        MoveRetries = iVar1;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  return MoveRetries;
}

// NumInstallerRetries @ 1431eb710

int __cdecl ConfigHelpers::NumInstallerRetries(void)

{
  int iVar1;
  int local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 5;
      FConfigCacheIni::GetInt
                (GConfig,L"Portal.BuildPatch",L"NumInstallerRetries",local_res8,&GEngineIni);
      iVar1 = 0x32;
      if (local_res8[0] < 0x32) {
        iVar1 = local_res8[0];
      }
      InstallerRetries = 1;
      if (1 < iVar1) {
        InstallerRetries = iVar1;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  return InstallerRetries;
}

// ReinitialiseChunkInfoList @ 1431ef300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
MergeHelpers::ReinitialiseChunkInfoList
          (TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FBuildPatchAppManifest,1> *param_2,
          TSharedPtr<FBuildPatchAppManifest,1> *param_3,
          TArray<BuildPatchServices::FChunkInfo,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  FBuildPatchAppManifest *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FGuid *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  FGuid *this;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_138 [32];
  undefined1 local_e7;
  undefined1 local_e6 [2];
  uint local_e4;
  FScriptContainerElement *local_e0;
  FString local_d8;
  undefined1 local_c8 [16];
  FGuid *local_b8;
  FScriptContainerElement *local_b0;
  TArray<BuildPatchServices::FFileManifest,TSizedDefaultAllocator<32>_> *local_a8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  local_c8._8_8_ = param_2;
  local_a8 = param_1;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  local_e4 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_e4;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_b0 = pFVar11 + uVar12 * 0x60;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  pFVar14 = pFVar11 + 0x50;
  do {
    pFVar4 = local_b0;
    local_e0 = pFVar11;
    if (param_1->ArrayNum != (int)uVar12) {
      local_e7 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FFileManifest_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_e7);
    }
    if (pFVar11 == pFVar4) {
      bVar8 = true;
LAB_1431ef5ef:
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return bVar8;
    }
    iVar2 = *(int *)pFVar14;
    this = *(FGuid **)(pFVar14 + -8);
    local_b8 = (FGuid *)((longlong)this + (longlong)iVar2 * 0x18);
    while( true ) {
      pFVar7 = local_b8;
      if (*(int *)pFVar14 != iVar2) {
        local_e6[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_e6);
      }
      if (this == pFVar7) break;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_98,(FGuid *)local_c8,(bool *)this);
      if ((param_3->Object == (FBuildPatchAppManifest *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar11 = (FScriptContainerElement *)
                (**(code **)(param_3->Object->_padding_ + 0x218))(param_3->Object,this);
      if ((pFVar11 == (FScriptContainerElement *)0x0) &&
         ((pFVar3 = *(FBuildPatchAppManifest **)local_c8._8_8_,
          pFVar3 == (FBuildPatchAppManifest *)0x0 ||
          (pFVar11 = (FScriptContainerElement *)
                     (**(code **)(pFVar3->_padding_ + 0x218))(pFVar3,this),
          pFVar11 == (FScriptContainerElement *)0x0)))) {
        if (1 < (byte)LogMergeManifests._0_1_) {
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          FGuid::AppendString(this,&local_d8,Digits);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMergeManifests);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            bVar8 = false;
            goto LAB_1431ef5ef;
          }
        }
        bVar8 = false;
        goto LAB_1431ef5ef;
      }
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)*piVar1 * 0x40)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iVar10 = param_4->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar10 + 1;
      uVar6 = *(undefined8 *)(pFVar11 + 8);
      pFVar4 = (param_4->AllocatorInstance).Data;
      lVar13 = (longlong)iVar10 * 0x40;
      *(undefined8 *)(pFVar4 + lVar13) = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar4 + lVar13 + 8) = uVar6;
      uVar6 = *(undefined8 *)(pFVar11 + 0x18);
      *(undefined8 *)(pFVar4 + lVar13 + 0x10) = *(undefined8 *)(pFVar11 + 0x10);
      *(undefined8 *)(pFVar4 + lVar13 + 0x10 + 8) = uVar6;
      uVar6 = *(undefined8 *)(pFVar11 + 0x28);
      *(undefined8 *)(pFVar4 + lVar13 + 0x20) = *(undefined8 *)(pFVar11 + 0x20);
      *(undefined8 *)(pFVar4 + lVar13 + 0x20 + 8) = uVar6;
      uVar6 = *(undefined8 *)(pFVar11 + 0x38);
      *(undefined8 *)(pFVar4 + lVar13 + 0x30) = *(undefined8 *)(pFVar11 + 0x30);
      *(undefined8 *)(pFVar4 + lVar13 + 0x30 + 8) = uVar6;
      this = (FGuid *)&this[1].C;
    }
    pFVar11 = local_e0 + 0x60;
    pFVar14 = pFVar14 + 0x60;
    uVar12 = (ulonglong)local_e4;
    param_1 = local_a8;
  } while( true );
}

// ScannerArrayFull @ 1431f8270

bool __cdecl
PatchGenerationHelpers::ScannerArrayFull
          (TArray<TUniquePtr<BuildPatchServices::FScannerDetails,TDefaultDelete<BuildPatchServices::FScannerDetails>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int iVar1;
  int iVar2;
  int local_res10 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res10[0] = 0x4b;
      FConfigCacheIni::GetInt
                (GConfig,L"BuildPatchServices",L"MaxScannerBacklog",local_res10,&GEngineIni);
      iVar1 = 500;
      if (local_res10[0] < 500) {
        iVar1 = local_res10[0];
      }
      MaxScannerBacklogCount = 5;
      if (5 < iVar1) {
        MaxScannerBacklogCount = iVar1;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = BuildPatchServices::FDataScannerCounter::GetNumIncompleteScanners();
  iVar2 = BuildPatchServices::FDataScannerCounter::GetNumRunningScanners();
  if ((iVar1 <= iVar2) && (param_1->ArrayNum < MaxScannerBacklogCount)) {
    return false;
  }
  return true;
}

// WaitWhilePaused @ 1431fed30

void __cdecl
FileConstructorHelpers::WaitWhilePaused(FThreadSafeBool *param_1,FThreadSafeBool *param_2)

{
  FThreadSafeBool FVar1;
  float fVar2;
  
  fVar2 = __real_3f000000;
  FVar1 = *param_1;
  while ((FVar1 != (FThreadSafeBool)0x0 && (*param_2 == (FThreadSafeBool)0x0))) {
    FWindowsPlatformProcess::Sleep(fVar2);
    FVar1 = *param_1;
  }
  return;
}

// Z_Construct_UPackage__Script_BuildPatchServices @ 1431feef0

UPackage * __cdecl Z_Construct_UPackage__Script_BuildPatchServices(void)

{
  if (Z_Registration_Info_UPackage__Script_BuildPatchServices.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_BuildPatchServices.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_BuildPatchServices.OuterSingleton;
}

// begin @ 1431fef30

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestIterator * __cdecl
BuildPatchServices::begin
          (FManifestIterator *__return_storage_ptr__,FBuildPatchInstallerAction *param_1)

{
  FBuildPatchAppManifest *pFVar1;
  
  pFVar1 = (param_1->CurrentManifest).Object;
  __return_storage_ptr__->InstallerAction = param_1;
  if (pFVar1 == (FBuildPatchAppManifest *)0x0) {
    pFVar1 = (param_1->InstallManifest).Object;
  }
  __return_storage_ptr__->Current = pFVar1;
  return __return_storage_ptr__;
}

// end @ 1431fef60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestIterator * __cdecl
BuildPatchServices::end
          (FManifestIterator *__return_storage_ptr__,FBuildPatchInstallerAction *param_1)

{
  __return_storage_ptr__->InstallerAction = (FBuildPatchInstallerAction *)0x0;
  __return_storage_ptr__->Current = (FBuildPatchAppManifest *)0x0;
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_BuildPatchServices @ 1431fef80

void __cdecl IMPLEMENT_MODULE_BuildPatchServices(void)

{
  return;
}

// Analytics'' @ 150360d50

void __cdecl `dynamic_atexit_destructor_for_'FBuildPatchServicesModule::Analytics__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FBuildPatchServicesModule::Analytics.SharedReferenceCount.ReferenceController);
  return;
}

// BackupDirectory'' @ 150360d70

void __cdecl `dynamic_atexit_destructor_for_'FBuildPatchServicesModule::BackupDirectory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBuildPatchServicesModule::BackupDirectory.Data.AllocatorInstance.Data;
  if (FBuildPatchServicesModule::BackupDirectory.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBuildPatchServicesModule::BackupDirectory.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// CloudDirectories'' @ 150360d90

void __cdecl `dynamic_atexit_destructor_for_'FBuildPatchServicesModule::CloudDirectories__(void)

{
  DestructItems<FString,int>
            ((FString *)FBuildPatchServicesModule::CloudDirectories.AllocatorInstance.Data,
             FBuildPatchServicesModule::CloudDirectories.ArrayNum);
  if (FBuildPatchServicesModule::CloudDirectories.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FBuildPatchServicesModule::CloudDirectories.AllocatorInstance.Data);
    return;
  }
  return;
}

// StagingDirectory'' @ 150360dd0

void __cdecl `dynamic_atexit_destructor_for_'FBuildPatchServicesModule::StagingDirectory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FBuildPatchServicesModule::StagingDirectory.Data.AllocatorInstance.Data;
  if (FBuildPatchServicesModule::StagingDirectory.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FBuildPatchServicesModule::StagingDirectory.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowMultipleFilesInFlight'' @ 150360df0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowMultipleFilesInFlight__(void)

{
  CVarAllowMultipleFilesInFlight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowMultipleFilesInFlight);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRefDisableResumeBelowMB'' @ 150360e10

void __cdecl _dynamic_atexit_destructor_for__CVarRefDisableResumeBelowMB__(void)

{
  CVarRefDisableResumeBelowMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRefDisableResumeBelowMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSleepTimeWhenFileSystemThrottledSeconds'' @ 150360e30

void __cdecl _dynamic_atexit_destructor_for__CVarSleepTimeWhenFileSystemThrottledSeconds__(void)

{
  CVarSleepTimeWhenFileSystemThrottledSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSleepTimeWhenFileSystemThrottledSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStallWhenFileSystemThrottled'' @ 150360e50

void __cdecl _dynamic_atexit_destructor_for__CVarStallWhenFileSystemThrottled__(void)

{
  CVarStallWhenFileSystemThrottled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStallWhenFileSystemThrottled);
  return;
}

// `dynamic_atexit_destructor_for_'DoNotInterleaveLogs'' @ 150360e70

void __cdecl
`InstallerHelpers::LogBuildConfiguration'::__l2::
_dynamic_atexit_destructor_for__DoNotInterleaveLogs__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150360e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DoNotInterleaveLogs);
  return;
}

// `dynamic_atexit_destructor_for_'DoNotInterleaveLogs'' @ 150360e90

void __cdecl
`InstallerHelpers::LogBuildStatInfo'::__l2::_dynamic_atexit_destructor_for__DoNotInterleaveLogs__
          (void)

{
                    /* WARNING: Could not recover jumptable at 0x000150360e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DoNotInterleaveLogs);
  return;
}

// `dynamic_atexit_destructor_for_'DownloadSpeedFormat'' @ 150360eb0

void __cdecl
`BuildPatchServices::FBuildPatchInstaller::GetDownloadSpeedText'::__l2::
_dynamic_atexit_destructor_for__DownloadSpeedFormat__(void)

{
  if (DownloadSpeedFormat.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150360ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DownloadSpeedFormat.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogBPSInstallerConfig'' @ 150360ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBPSInstallerConfig__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBPSInstallerConfig);
  return;
}

// `dynamic_atexit_destructor_for_'LogBuildPatchServices'' @ 150360ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBuildPatchServices__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBuildPatchServices);
  return;
}

// `dynamic_atexit_destructor_for_'LogMergeManifests'' @ 150360f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMergeManifests__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMergeManifests);
  return;
}

// `dynamic_atexit_destructor_for_'LogPatchGeneration'' @ 150360f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPatchGeneration__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPatchGeneration);
  return;
}

// `dynamic_atexit_destructor_for_'PleaseWait'' @ 150360f50

void __cdecl
`BuildPatchServices::FBuildPatchInstaller::GetPercentageText'::__l2::
_dynamic_atexit_destructor_for__PleaseWait__(void)

{
  if (PleaseWait.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150360f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*PleaseWait.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SingletonFunctionLockCS'' @ 150360f70

void __cdecl
`BuildPatchServices::FBuildPatchInstaller::Run'::__l2::
_dynamic_atexit_destructor_for__SingletonFunctionLockCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150360f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&SingletonFunctionLockCS);
  return;
}

// `dynamic_atexit_destructor_for_'SingletonFunctionLockCS'' @ 150360f90

void __cdecl
`BuildPatchServices::FBuildPatchInstaller::RunVerification'::__l2::
_dynamic_atexit_destructor_for__SingletonFunctionLockCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150360f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&SingletonFunctionLockCS);
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter4043'' @ 150360fb0

void __cdecl
`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l147::
_dynamic_atexit_destructor_for____TraceCounter4043__(void)

{
  if ((__TraceCounter4043.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter4043.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__TraceCounter4044'' @ 150360fd0

void __cdecl
`BuildPatchServices::FBuildPatchFileConstructor::ConstructFiles'::__l147::
_dynamic_atexit_destructor_for____TraceCounter4044__(void)

{
  if ((__TraceCounter4044.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__TraceCounter4044.CounterName);
    return;
  }
  return;
}

