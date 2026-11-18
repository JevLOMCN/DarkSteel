// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 38

// StartupModule @ 1431a78a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBuildPatchServicesModule::StartupModule(FBuildPatchServicesModule *this)

{
  FString *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  FOutputDeviceRedirector *pFVar11;
  FTSTicker *this_00;
  undefined8 *puVar12;
  ulong64 uVar13;
  TWeakPtr<FTSTicker::FElement,1> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulong64 *puVar17;
  longlong lVar18;
  undefined1 auStackY_158 [32];
  bool local_128 [8];
  undefined1 local_120 [8];
  FDelegateAllocation local_118;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  FString local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  undefined1 local_70 [24];
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  int local_40;
  FScriptContainerElement *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar16 = 0;
  bVar8 = false;
  lVar18 = 0x100;
  puVar17 = FRollingHashConst::HashTable;
  do {
    uVar15 = uVar16 >> 1 ^ 0xc96c5795d7870f42;
    if (!bVar8) {
      uVar15 = uVar16 >> 1;
    }
    uVar9 = uVar15 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar15 & 1) == 0) {
      uVar9 = uVar15 >> 1;
    }
    uVar15 = uVar9 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar9 & 1) == 0) {
      uVar15 = uVar9 >> 1;
    }
    uVar9 = uVar15 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar15 & 1) == 0) {
      uVar9 = uVar15 >> 1;
    }
    uVar15 = uVar9 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar9 & 1) == 0) {
      uVar15 = uVar9 >> 1;
    }
    uVar9 = uVar15 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar15 & 1) == 0) {
      uVar9 = uVar15 >> 1;
    }
    uVar15 = uVar9 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar9 & 1) == 0) {
      uVar15 = uVar9 >> 1;
    }
    uVar9 = uVar15 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar15 & 1) == 0) {
      uVar9 = uVar15 >> 1;
    }
    uVar16 = uVar16 + 1;
    bVar8 = (bool)(bVar8 ^ 1);
    *puVar17 = uVar9;
    lVar18 = lVar18 + -1;
    puVar17 = puVar17 + 1;
  } while (lVar18 != 0);
  local_58.DataPtr =
       (wchar_t *)
       FBuildPatchServices::InitSettings.ApplicationSettingsDir.Data.AllocatorInstance.Data;
  local_58.Size = FBuildPatchServices::InitSettings.ApplicationSettingsDir.Data.ArrayNum + -1;
  if (FBuildPatchServices::InitSettings.ApplicationSettingsDir.Data.ArrayNum == 0) {
    local_58.Size = 0;
  }
  local_48 = FBuildPatchServices::InitSettings.ProjectName.Data.AllocatorInstance.Data;
  local_40 = FBuildPatchServices::InitSettings.ProjectName.Data.ArrayNum + -1;
  if (FBuildPatchServices::InitSettings.ProjectName.Data.ArrayNum == 0) {
    local_40 = 0;
  }
  local_38 = FBuildPatchServices::InitSettings.LocalMachineConfigFileName.Data.AllocatorInstance.
             Data;
  local_30 = FBuildPatchServices::InitSettings.LocalMachineConfigFileName.Data.ArrayNum + -1;
  if (FBuildPatchServices::InitSettings.LocalMachineConfigFileName.Data.ArrayNum == 0) {
    local_30 = 0;
  }
  FPaths::CombineInternal(&local_f0,&local_58,3);
  pFVar1 = &this->LocalMachineConfigFile;
  if (pFVar1 != &local_f0) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
    (this->LocalMachineConfigFile).Data.ArrayNum = local_f0.Data.ArrayNum;
    (this->LocalMachineConfigFile).Data.ArrayMax = local_f0.Data.ArrayMax;
    local_f0.Data.ArrayNum = 0;
    local_f0.Data.ArrayMax = 0;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  FixupLegacyConfig(this);
  pwVar10 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar10,L"skipbuildpatchprereq");
  local_128[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"Portal.BuildPatch",L"skipbuildpatchprereq",local_128,&GEngineIni);
  if (bVar8) {
    pFVar11 = GetGlobalLogSingleton();
    FOutputDevice::Log((FOutputDevice *)pFVar11,
                       L"BuildPatchServicesModule: Setup to skip prerequisites install via commandline."
                      );
  }
  if (local_128[0] != false) {
    pFVar11 = GetGlobalLogSingleton();
    FOutputDevice::Log((FOutputDevice *)pFVar11,
                       L"BuildPatchServicesModule: Setup to skip prerequisites install via config.")
    ;
  }
  if ((bVar8) || (bVar8 = false, local_128[0] != false)) {
    bVar8 = true;
  }
  this->bForceSkipPrereqs = bVar8;
  this_00 = FTSTicker::GetCoreTicker();
  local_120 = (undefined1  [8])0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
             (FWriteAccessScope *)&local_b0);
  local_98 = &local_118;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_118);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFBuildPatchServicesModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[4] = Tick;
    puVar12[3] = this;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  pTVar14 = FTSTicker::AddTicker
                      (this_00,(TWeakPtr<FTSTicker::FElement,1> *)(local_70 + 8),
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_120,0.0);
  if (&this->TickDelegateHandle != pTVar14) {
    (this->TickDelegateHandle).Object = pTVar14->Object;
    pTVar14->Object = (FElement *)0x0;
    pTVar6 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar14->WeakReferenceCount).ReferenceController;
    (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  if ((longlong *)local_70._16_8_ != (longlong *)0x0) {
    LOCK();
    lVar18 = local_70._16_8_ + 0xc;
    iVar4 = *(int *)lVar18;
    *(int *)lVar18 = *(int *)lVar18 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*(longlong *)local_70._16_8_ + 8))(local_70._16_8_,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_120,
             (FWriteAccessScope *)&local_e0);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_120);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FBuildPatchServicesModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FBuildPatchServicesModule *)local_70,(pmf_4c1d94bc)this);
  bVar8 = CheckRollingHashAlgorithm();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CheckRollingHashAlgorithm()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchServicesModule.cpp"
                         ,0x5a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  BuildPatchServices::FManifestData::Init();
  local_108 = (undefined1  [8])0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_100;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_100);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy,`FBuildPatchServicesModule::StartupModule'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar12[3] = this;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InstallerStartDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_c8);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  return;
}

// ShutdownModule @ 1431a7dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBuildPatchServicesModule::ShutdownModule(FBuildPatchServicesModule *this)

{
  code *pcVar1;
  bool bVar2;
  FOutputDeviceRedirector *pFVar3;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  FOutputDevice::Log((FOutputDevice *)GWarn,L"BuildPatchServicesModule: Shutting Down");
  if ((this->BuildPatchInstallers).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildPatchInstallers.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchServicesModule.cpp"
                       ,0x6c,
                       L"BuildPatchServicesModule: FATAL ERROR: Core PreExit not called, or installer created during shutdown!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = GetGlobalLogSingleton();
  FOutputDevice::Log((FOutputDevice *)pFVar3,All,L"BuildPatchServicesModule: Removing Ticker");
  local_18.Object = (this->TickDelegateHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pFVar3 = GetGlobalLogSingleton();
  FOutputDevice::Log((FOutputDevice *)pFVar3,All,L"BuildPatchServicesModule: Finished shutting down"
                    );
  return;
}

// CreateBuildInstaller @ 1431a7e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<IBuildInstaller,1> * __thiscall
FBuildPatchServicesModule::CreateBuildInstaller
          (FBuildPatchServicesModule *this,TSharedRef<IBuildInstaller,1> *__return_storage_ptr__,
          FBuildInstallerConfiguration *param_1,
          TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy> *pTVar7;
  FBuildInstallerConfiguration *pFVar8;
  TSharedRef<IBuildInstaller,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<IAnalyticsProvider,1> local_168;
  undefined1 local_158 [64];
  undefined8 local_118;
  int local_110 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_108;
  TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy> local_f0
  ;
  FBuildInstallerConfiguration local_d8;
  
  if (this->bForceSkipPrereqs != false) {
    param_1->bRunRequiredPrereqs = false;
  }
  pTVar6 = ::operator_new(0x970);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBuildPatchInstaller_BuildPatchServices___00_SharedPointerInternals__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_108,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    pTVar7 = TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
                       (&local_f0,&this->InstallerStartDelegate);
    local_168.Object = Analytics.Object;
    local_168.SharedReferenceCount.ReferenceController =
         Analytics.SharedReferenceCount.ReferenceController;
    if (Analytics.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (Analytics.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(Analytics.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._32_8_ = 0;
    local_118 = 0;
    local_110[0] = 0;
    local_158._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_158._48_8_ = _UNK_150631d98;
    if ((TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
         *)local_158 != &this->AvailableInstallations) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(local_158 + 0x38),local_110,
                 (ForElementType<FSetElementId> *)&(this->AvailableInstallations).field_0x38,
                 *(int *)&(this->AvailableInstallations).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_158,
                  (TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->AvailableInstallations);
    }
    pFVar8 = BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
                       (&local_d8,param_1);
    BuildPatchServices::FBuildPatchInstaller::FBuildPatchInstaller
              ((FBuildPatchInstaller *)(pTVar6 + 1),pFVar8,
               (TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
                *)local_158,&this->LocalMachineConfigFile,&local_168,pTVar7,
               (TDelegate<void___cdecl(TSharedRef<IBuildInstaller,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_108);
    pTVar10 = pTVar6 + 1;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<IBuildInstaller,1> *)(*pcVar4)();
        return pTVar9;
      }
      goto LAB_1431a8087;
    }
  }
  if (((pTVar10[1]._padding_ == 0) || (*(longlong *)&pTVar10[1].SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10[1].SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10[1]._padding_ = (longlong)pTVar10;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar10[1].SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar10[1].SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar10[1].SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1431a8087:
  __return_storage_ptr__->Object = (IBuildInstaller *)pTVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  BuildPatchServices::FBuildInstallerConfiguration::~FBuildInstallerConfiguration(param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return __return_storage_ptr__;
}

// CreateBuildInstallerSharedContext @ 1431a80e0

TSharedRef<IBuildInstallerSharedContext,1> * __thiscall
FBuildPatchServicesModule::CreateBuildInstallerSharedContext
          (FBuildPatchServicesModule *this,
          TSharedRef<IBuildInstallerSharedContext,1> *__return_storage_ptr__,wchar_t *param_1)

{
  BuildPatchServices::FBuildInstallerSharedContextFactory::Create(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateBuildStatistics @ 1431a8110

TSharedRef<BuildPatchServices::IBuildStatistics,1> * __thiscall
FBuildPatchServicesModule::CreateBuildStatistics
          (FBuildPatchServicesModule *this,
          TSharedRef<BuildPatchServices::IBuildStatistics,1> *__return_storage_ptr__,
          TSharedRef<IBuildInstaller,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  IBuildStatistics *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<BuildPatchServices::IBuildStatistics,1> *pTVar5;
  TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> local_18;
  
  local_18.Object = (FBuildPatchInstaller *)param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar3 = BuildPatchServices::FBuildStatisticsFactory::Create(&local_18);
  __return_storage_ptr__->Object = pIVar3;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIBuildStatistics_BuildPatchServices__U__DefaultDeleter_VIBuildStatistics_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pIVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pIVar3 == (IBuildStatistics *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedRef<BuildPatchServices::IBuildStatistics,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// CreatePatchDataEnumeration @ 1431a81c0

TSharedRef<BuildPatchServices::IPatchDataEnumeration,1> * __thiscall
FBuildPatchServicesModule::CreatePatchDataEnumeration
          (FBuildPatchServicesModule *this,
          TSharedRef<BuildPatchServices::IPatchDataEnumeration,1> *__return_storage_ptr__,
          FPatchDataEnumerationConfiguration *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  IPatchDataEnumeration *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<BuildPatchServices::IPatchDataEnumeration,1> *pTVar6;
  
  pIVar4 = BuildPatchServices::FPatchDataEnumerationFactory::Create(param_1);
  __return_storage_ptr__->Object = pIVar4;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIPatchDataEnumeration_BuildPatchServices__U__DefaultDeleter_VIPatchDataEnumeration_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)pIVar4;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pIVar4 == (IPatchDataEnumeration *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<BuildPatchServices::IPatchDataEnumeration,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pFVar1 = (param_1->OutputFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InputFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// LoadManifestFromFile @ 1431a8280

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IBuildManifest,1> * __thiscall
FBuildPatchServicesModule::LoadManifestFromFile
          (FBuildPatchServicesModule *this,TSharedPtr<IBuildManifest,1> *__return_storage_ptr__,
          FString *param_1)

{
  char cVar1;
  FBuildPatchAppManifest *this_00;
  TRawPtrProxy<FBuildPatchAppManifest> local_res20;
  TSharedRef<FBuildPatchAppManifest,1> local_18;
  
  this_00 = ::operator_new(0x2b8);
  local_res20.Object = (FBuildPatchAppManifest *)0x0;
  if (this_00 != (FBuildPatchAppManifest *)0x0) {
    local_res20.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(this_00);
  }
  TSharedRef<FBuildPatchAppManifest,1>::TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_18,&local_res20);
  cVar1 = (**(code **)((local_18.Object)->_padding_ + 0x158))(local_18.Object,param_1);
  if (cVar1 == '\0') {
    __return_storage_ptr__->Object = (IBuildManifest *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (IBuildManifest *)local_18.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MakeManifestFromData @ 1431a8320

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IBuildManifest,1> * __thiscall
FBuildPatchServicesModule::MakeManifestFromData
          (FBuildPatchServicesModule *this,TSharedPtr<IBuildManifest,1> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  char cVar1;
  FBuildPatchAppManifest *this_00;
  TRawPtrProxy<FBuildPatchAppManifest> local_res20;
  TSharedRef<FBuildPatchAppManifest,1> local_18;
  
  this_00 = ::operator_new(0x2b8);
  local_res20.Object = (FBuildPatchAppManifest *)0x0;
  if (this_00 != (FBuildPatchAppManifest *)0x0) {
    local_res20.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(this_00);
  }
  TSharedRef<FBuildPatchAppManifest,1>::TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_18,&local_res20);
  cVar1 = (**(code **)((local_18.Object)->_padding_ + 0x160))(local_18.Object,param_1);
  if (cVar1 == '\0') {
    __return_storage_ptr__->Object = (IBuildManifest *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (IBuildManifest *)local_18.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// SaveManifestToFile @ 1431a83c0

bool __thiscall
FBuildPatchServicesModule::SaveManifestToFile
          (FBuildPatchServicesModule *this,FString *param_1,TSharedRef<IBuildManifest,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IBuildManifest *pIVar2;
  undefined1 uVar3;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (**(code **)((longlong)*pIVar2 + 0x170))(pIVar2,param_1,0x12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return (bool)uVar3;
}

// GetInstalledPrereqIds @ 1431a8420

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FBuildPatchServicesModule::GetInstalledPrereqIds
          (FBuildPatchServicesModule *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  IMachineConfig *pIVar1;
  
  pIVar1 = BuildPatchServices::FMachineConfigFactory::Create(&this->LocalMachineConfigFile,true);
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,__return_storage_ptr__);
  if (pIVar1 != (IMachineConfig *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  return __return_storage_ptr__;
}

// GetInstallers @ 1431a8480

TArray<TSharedRef<IBuildInstaller,1>,TSizedDefaultAllocator<32>_> * __thiscall
FBuildPatchServicesModule::GetInstallers(FBuildPatchServicesModule *this)

{
  return &this->BuildPatchInstallerInterfaces;
}

// SetStagingDirectory @ 1431a8490

void __thiscall
FBuildPatchServicesModule::SetStagingDirectory(FBuildPatchServicesModule *this,FString *param_1)

{
  ::FString::operator=(&StagingDirectory,param_1);
  return;
}

// SetCloudDirectory @ 1431a84b0

void __thiscall
FBuildPatchServicesModule::SetCloudDirectory(FBuildPatchServicesModule *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType local_28;
  undefined8 local_20;
  FScriptContainerElement *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_28,(int *)((longlong)&local_20 + 4));
  pFVar1 = local_28.Data + (longlong)local_10 * 0x10;
  local_10 = local_10 + 1;
  *(undefined8 *)pFVar1 = 0;
  *(FScriptContainerElement **)pFVar1 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + 8) = (param_1->Data).ArrayNum;
  *(int *)(pFVar1 + 0xc) = (param_1->Data).ArrayMax;
  local_18 = local_28.Data;
  local_c = local_20._4_4_;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 0x98))(this,&local_18);
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetCloudDirectories @ 1431a8590

void __thiscall
FBuildPatchServicesModule::SetCloudDirectories
          (FBuildPatchServicesModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FString local_28;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchServicesModule.cpp"
                       ,0x128,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != &CloudDirectories) {
    DestructItems<FString,int>
              ((FString *)CloudDirectories.AllocatorInstance.Data,CloudDirectories.ArrayNum);
    if (CloudDirectories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(CloudDirectories.AllocatorInstance.Data);
    }
    CloudDirectories.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    CloudDirectories.ArrayNum = param_1->ArrayNum;
    CloudDirectories.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  iVar2 = CloudDirectories.ArrayNum;
  uVar4 = (ulonglong)CloudDirectories.ArrayNum;
  pFVar5 = CloudDirectories.AllocatorInstance.Data + uVar4 * 0x10;
  this_00.Data = CloudDirectories.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00.Data == pFVar5) break;
    ::FString::ReplaceInline((FString *)this_00.Data,L"\\",L"/",IgnoreCase);
    bVar3 = ::FString::StartsWith((FString *)this_00.Data,L"//",2,IgnoreCase);
    ::FString::ReplaceInline((FString *)this_00.Data,L"://",L":////",IgnoreCase);
    ::FString::ReplaceInline((FString *)this_00.Data,L"//",L"/",IgnoreCase);
    if (bVar3) {
      ::FString::FString(&local_28,L"/");
      ::FString::InsertAt((FString *)this_00.Data,0,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    uVar4 = (ulonglong)(uint)CloudDirectories.ArrayNum;
    this_00.Data = this_00.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
    return;
  }
  return;
}

// SetBackupDirectory @ 1431a8760

void __thiscall
FBuildPatchServicesModule::SetBackupDirectory(FBuildPatchServicesModule *this,FString *param_1)

{
  ::FString::operator=(&BackupDirectory,param_1);
  return;
}

// SetAnalyticsProvider @ 1431a8780

void __thiscall
FBuildPatchServicesModule::SetAnalyticsProvider
          (FBuildPatchServicesModule *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedReferencer<1> FVar2;
  
  Analytics.Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = Analytics.SharedReferenceCount.ReferenceController;
  Analytics.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterAppInstallation @ 1431a87d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
FBuildPatchServicesModule::RegisterAppInstallation
          (FBuildPatchServicesModule *this,TSharedRef<IBuildManifest,1> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  TSharedRef<FBuildPatchAppManifest,1> local_18;
  
  FPaths::NormalizeDirectoryName(param_2);
  FPaths::CollapseRelativeDirectories(param_2,false);
  local_18.Object = (FBuildPatchAppManifest *)param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  ::Emplace<FString,TSharedRef<FBuildPatchAppManifest,1>_>
            ((TMapBase<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
              *)&this->AvailableInstallations,param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// UnregisterAppInstallation @ 1431a8860

bool __thiscall
FBuildPatchServicesModule::UnregisterAppInstallation
          (FBuildPatchServicesModule *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *pwVar5;
  
  FPaths::NormalizeDirectoryName(param_1);
  FPaths::CollapseRelativeDirectories(param_1,false);
  if (*(int *)&(this->AvailableInstallations).field_0x8 ==
      *(int *)&(this->AvailableInstallations).field_0x34) {
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar3 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
    iVar3 = TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>,FDefaultSetAllocator>
                        *)&this->AvailableInstallations,uVar2,param_1);
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    if (iVar3 == 1) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return true;
    }
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return false;
}

// CancelAllInstallers @ 1431a8900

void __thiscall
FBuildPatchServicesModule::CancelAllInstallers(FBuildPatchServicesModule *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsCalledFromMainThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchServicesModule.cpp"
                         ,0x160,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  for (iVar6 = 0;
      (fVar3 = __real_3c888889, -1 < iVar6 && (iVar6 < (this->BuildPatchInstallers).ArrayNum));
      iVar6 = iVar6 + 1) {
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(**(longlong **)
                   ((this->BuildPatchInstallers).AllocatorInstance.Data + (longlong)iVar6 * 0x10) +
                0xb8))();
  }
  if (param_1) {
    iVar6 = (this->BuildPatchInstallers).ArrayNum;
    while (0 < iVar6) {
      FWindowsPlatformProcess::Sleep(fVar3);
      for (uVar7 = 0; (-1 < (int)uVar7 && ((int)uVar7 < (this->BuildPatchInstallers).ArrayNum));
          uVar7 = uVar7 + 1) {
        if (((int)uVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = BuildPatchServices::FBuildPatchInstaller::Tick
                          (*(FBuildPatchInstaller **)
                            ((this->BuildPatchInstallers).AllocatorInstance.Data +
                            (longlong)(int)uVar7 * 0x10));
        if (!bVar4) {
          uVar5 = 0;
          if ((int)uVar7 < (this->BuildPatchInstallers).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
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
          _Dst = (this->BuildPatchInstallers).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(_Dst + 8));
          iVar6 = (this->BuildPatchInstallers).ArrayNum + ~uVar7;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + 0x10,(longlong)iVar6 << 4);
          }
          iVar6 = (this->BuildPatchInstallers).ArrayNum + -1;
          (this->BuildPatchInstallers).ArrayNum = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->BuildPatchInstallers).AllocatorInstance,iVar6,
                     &(this->BuildPatchInstallers).ArrayMax);
          uVar7 = uVar7 - 1;
        }
      }
      iVar6 = (this->BuildPatchInstallers).ArrayNum;
    }
  }
  DestructItems<TSharedRef<BuildPatchServices::FBuildPatchInstaller,1>,int>
            ((TSharedRef<BuildPatchServices::FBuildPatchInstaller,1> *)
             (this->BuildPatchInstallers).AllocatorInstance.Data,
             (this->BuildPatchInstallers).ArrayNum);
  piVar1 = &(this->BuildPatchInstallers).ArrayMax;
  (this->BuildPatchInstallers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->BuildPatchInstallers).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedRef<IBuildInstaller,1>,int>
            ((TSharedRef<IBuildInstaller,1> *)
             (this->BuildPatchInstallerInterfaces).AllocatorInstance.Data,
             (this->BuildPatchInstallerInterfaces).ArrayNum);
  piVar1 = &(this->BuildPatchInstallerInterfaces).ArrayMax;
  (this->BuildPatchInstallerInterfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->BuildPatchInstallerInterfaces).AllocatorInstance,0,piVar1);
  }
  return;
}

// ChunkBuildDirectory @ 1431a8bb0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchServicesModule::ChunkBuildDirectory
          (FBuildPatchServicesModule *this,FChunkBuildConfiguration *param_1)

{
  bool bVar1;
  
  bVar1 = FBuildDataGenerator::ChunkBuildDirectory(param_1);
  return bVar1;
}

// OptimiseChunkDelta @ 1431a8bc0

bool __thiscall
FBuildPatchServicesModule::OptimiseChunkDelta
          (FBuildPatchServicesModule *this,FChunkDeltaOptimiserConfiguration *param_1)

{
  undefined1 uVar1;
  IChunkDeltaOptimiser *pIVar2;
  
  pIVar2 = BuildPatchServices::FChunkDeltaOptimiserFactory::Create(param_1);
  uVar1 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  if (pIVar2 != (IChunkDeltaOptimiser *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return (bool)uVar1;
}

// CompactifyCloudDirectory @ 1431a8c10

bool __thiscall
FBuildPatchServicesModule::CompactifyCloudDirectory
          (FBuildPatchServicesModule *this,FCompactifyConfiguration *param_1)

{
  undefined1 uVar1;
  IPatchDataCompactifier *pIVar2;
  
  pIVar2 = BuildPatchServices::FPatchDataCompactifierFactory::Create(param_1);
  uVar1 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  if (pIVar2 != (IPatchDataCompactifier *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return (bool)uVar1;
}

// EnumeratePatchData @ 1431a8c60

bool __thiscall
FBuildPatchServicesModule::EnumeratePatchData
          (FBuildPatchServicesModule *this,FPatchDataEnumerationConfiguration *param_1)

{
  undefined1 uVar1;
  IPatchDataEnumeration *pIVar2;
  
  pIVar2 = BuildPatchServices::FPatchDataEnumerationFactory::Create(param_1);
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if (pIVar2 != (IPatchDataEnumeration *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return (bool)uVar1;
}

// VerifyChunkData @ 1431a8cb0

bool __thiscall
FBuildPatchServicesModule::VerifyChunkData
          (FBuildPatchServicesModule *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = FBuildVerifyChunkData::VerifyChunkData(param_1,param_2);
  return bVar1;
}

// PackageChunkData @ 1431a8cd0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
FBuildPatchServicesModule::PackageChunkData
          (FBuildPatchServicesModule *this,FPackageChunksConfiguration *param_1)

{
  undefined1 uVar1;
  IPackageChunks *pIVar2;
  
  pIVar2 = BuildPatchServices::FPackageChunksFactory::Create(param_1);
  uVar1 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  if (pIVar2 != (IPackageChunks *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return (bool)uVar1;
}

// MergeManifests @ 1431a8d20

bool __thiscall
FBuildPatchServicesModule::MergeManifests
          (FBuildPatchServicesModule *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5)

{
  bool bVar1;
  
  bVar1 = FBuildMergeManifests::MergeManifests(param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}

// DiffManifests @ 1431a8d50

bool __thiscall
FBuildPatchServicesModule::DiffManifests
          (FBuildPatchServicesModule *this,FDiffManifestsConfiguration *param_1)

{
  undefined1 uVar1;
  IDiffManifests *pIVar2;
  
  pIVar2 = BuildPatchServices::FDiffManifestsFactory::Create(param_1);
  uVar1 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
  if (pIVar2 != (IDiffManifests *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return (bool)uVar1;
}

// OnStartBuildInstall @ 1431a8da0

FSimpleEvent * __thiscall
FBuildPatchServicesModule::OnStartBuildInstall(FBuildPatchServicesModule *this)

{
  return &this->OnStartBuildInstallEvent;
}

// MakeManifestFromJSON @ 1431a8db0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<IBuildManifest,1> * __thiscall
FBuildPatchServicesModule::MakeManifestFromJSON
          (FBuildPatchServicesModule *this,TSharedPtr<IBuildManifest,1> *__return_storage_ptr__,
          FString *param_1)

{
  char cVar1;
  FBuildPatchAppManifest *this_00;
  TRawPtrProxy<FBuildPatchAppManifest> local_res20;
  TSharedRef<FBuildPatchAppManifest,1> local_18;
  
  this_00 = ::operator_new(0x2b8);
  local_res20.Object = (FBuildPatchAppManifest *)0x0;
  if (this_00 != (FBuildPatchAppManifest *)0x0) {
    local_res20.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(this_00);
  }
  TSharedRef<FBuildPatchAppManifest,1>::TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_18,&local_res20);
  cVar1 = (**(code **)((local_18.Object)->_padding_ + 0x168))(local_18.Object,param_1);
  if (cVar1 == '\0') {
    __return_storage_ptr__->Object = (IBuildManifest *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (IBuildManifest *)local_18.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 1431c0750

void __thiscall
`FBuildPatchServicesModule::StartupModule'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<IBuildInstaller,1> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  IBuildInstaller *local_38;
  TReferenceControllerBase<1> *local_30;
  FDestructionSentinel local_28;
  
  local_38 = param_1->Object;
  lVar1 = *(longlong *)this;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((*(IBuildInstaller ***)(lVar1 + 0x20) <= &local_38) &&
      (&local_38 < *(IBuildInstaller ***)(lVar1 + 0x20) + (longlong)*(int *)(lVar1 + 0x2c) * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = *(int *)(lVar1 + 0x28);
  if (iVar8 == *(int *)(lVar1 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
  }
  *(int *)(lVar1 + 0x28) = iVar8 + 1;
  puVar10 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 0x20));
  *puVar10 = local_38;
  puVar10[1] = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  lVar1 = *(longlong *)this;
  if (((*(TSharedRef<IBuildInstaller,1> **)(lVar1 + 0x30) <= param_1) &&
      (param_1 < *(TSharedRef<IBuildInstaller,1> **)(lVar1 + 0x30) + *(int *)(lVar1 + 0x3c))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = *(int *)(lVar1 + 0x38);
  if (iVar8 == *(int *)(lVar1 + 0x3c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0x30),(int *)(lVar1 + 0x3c));
  }
  *(int *)(lVar1 + 0x38) = iVar8 + 1;
  puVar10 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 0x30));
  *puVar10 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  puVar10[1] = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0xb8),
             (FWriteAccessScope *)&local_28);
  *(int *)(lVar1 + 0xd4) = *(int *)(lVar1 + 0xd4) + 1;
  bVar5 = false;
  uVar11 = *(int *)(lVar1 + 200) - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar11 < *(int *)(lVar1 + 200)) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(int *)(lVar12 + 8 + *(longlong *)(lVar1 + 0xc0)) == 0) ||
          (plVar3 = *(longlong **)(lVar12 + *(longlong *)(lVar1 + 0xc0)), plVar3 == (longlong *)0x0)
          ) || (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  *(int *)(lVar1 + 0xd4) = *(int *)(lVar1 + 0xd4) + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0xb8),false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// FixupLegacyConfig @ 1431dc3d0

void __thiscall FBuildPatchServicesModule::FixupLegacyConfig(FBuildPatchServicesModule *this)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FString *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  iVar4 = FConfigCacheIni::GetArray
                    (GConfig,L"Portal.BuildPatch",L"InstalledPrereqs",&local_48,&GEngineIni);
  if ((iVar4 == 0) || (local_48.ArrayNum < 1)) goto LAB_1431dc6c5;
  pFVar9 = &this->LocalMachineConfigFile;
  bVar2 = false;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res20 = pFVar9;
  iVar4 = FConfigCacheIni::GetArray
                    (GConfig,L"Portal.BuildPatch",L"InstalledPrereqs",&local_58,pFVar9);
  if ((iVar4 == 0) || (local_58.ArrayNum < 1)) {
    DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    local_58.AllocatorInstance.Data = local_48.AllocatorInstance.Data;
    local_58.ArrayNum = local_48.ArrayNum;
    local_58.ArrayMax = local_48.ArrayMax;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_1431dc65e:
    FConfigCacheIni::SetArray(GConfig,L"Portal.BuildPatch",L"InstalledPrereqs",&local_58,pFVar9);
  }
  else {
    uVar6 = (ulonglong)local_48.ArrayNum;
    pFVar11 = local_48.AllocatorInstance.Data + uVar6 * 0x10;
    local_res18 = local_48.ArrayNum;
    uVar7 = uVar6;
    FVar10.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      iVar4 = local_58.ArrayNum;
      if ((int)uVar6 != (int)uVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
        iVar4 = local_58.ArrayNum;
      }
      FVar3.Data = local_58.AllocatorInstance.Data;
      if (FVar10.Data == pFVar11) break;
      pFVar12 = local_58.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      FVar8.Data = local_58.AllocatorInstance.Data;
      iVar5 = iVar4;
      if (local_58.AllocatorInstance.Data != pFVar12) {
        do {
          iVar5 = *(int *)(FVar8.Data + 8);
          if (iVar5 == *(int *)(FVar10.Data + 8)) {
            if (1 < iVar5) {
              iVar5 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar8.Data,*(wchar_t **)FVar10.Data);
              bVar13 = iVar5 == 0;
              goto LAB_1431dc513;
            }
LAB_1431dc525:
            iVar5 = (int)((longlong)FVar8.Data - (longlong)FVar3.Data >> 4);
            if (iVar5 != -1) goto LAB_1431dc5d6;
            break;
          }
          bVar13 = iVar5 + *(int *)(FVar10.Data + 8) == 1;
LAB_1431dc513:
          if (bVar13) goto LAB_1431dc525;
          FVar8.Data = FVar8.Data + 0x10;
        } while (FVar8.Data != pFVar12);
        iVar5 = local_58.ArrayNum;
      }
      if ((local_58.AllocatorInstance.Data <= FVar10.Data) &&
         (FVar10.Data < local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = local_58.ArrayNum;
      }
      if (iVar5 == local_58.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
      }
      local_58.ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                         (FString *)FVar10.Data);
LAB_1431dc5d6:
      if ((bVar2) || (iVar4 <= iVar5)) {
        uVar6 = local_48._8_8_ & 0xffffffff;
        bVar2 = true;
        FVar10.Data = FVar10.Data + 0x10;
        uVar7 = (ulonglong)local_res18;
      }
      else {
        uVar6 = local_48._8_8_ & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
        uVar7 = (ulonglong)local_res18;
      }
    }
    pFVar9 = local_res20;
    if (bVar2) goto LAB_1431dc65e;
  }
  FConfigCacheIni::RemoveKey(GConfig,L"Portal.BuildPatch",L"InstalledPrereqs",&GEngineIni);
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_1431dc6c5:
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// GetBackupDirectory @ 1431dd0e0

FString * __cdecl FBuildPatchServicesModule::GetBackupDirectory(void)

{
  return &BackupDirectory;
}

// GetCloudDirectories @ 1431ddfd0

/* WARNING: Removing unreachable block (ram,0x0001431de20d) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FBuildPatchServicesModule::GetCloudDirectories
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_28;
  FString local_18;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (CloudDirectories.ArrayNum < 1) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    if (CloudDirectories.ArrayNum == 0) {
      pFVar7 = FPaths::CloudDir(&local_18);
      if (&local_28 != pFVar7) {
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        local_28.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_28.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = *(int *)(CloudDirectories.AllocatorInstance.Data + 8) + -1;
      if (*(int *)(CloudDirectories.AllocatorInstance.Data + 8) == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_28,*(wchar_t **)CloudDirectories.AllocatorInstance.Data,iVar5);
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar8 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_28.Data.ArrayMax;
  }
  else if (__return_storage_ptr__ != &CloudDirectories) {
    DestructItems<FString,int>((FString *)0x0,0);
    iVar5 = CloudDirectories.ArrayNum;
    FVar3 = CloudDirectories.AllocatorInstance;
    __return_storage_ptr__->ArrayNum = CloudDirectories.ArrayNum;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,&__return_storage_ptr__->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FString,FString,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)FVar3.Data,iVar5);
    }
  }
  return __return_storage_ptr__;
}

// GetCloudDirectory @ 1431de220

FString * __cdecl
FBuildPatchServicesModule::GetCloudDirectory(FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (CloudDirectories.ArrayNum == 0) {
    pFVar6 = FPaths::CloudDir(&local_18);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  uVar7 = param_1 % CloudDirectories.ArrayNum;
  uVar5 = 0;
  if ((int)uVar7 < CloudDirectories.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar1 = *(int *)(CloudDirectories.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 8);
  uVar5 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  ::FString::AssignRange
            (__return_storage_ptr__,
             *(wchar_t **)(CloudDirectories.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10),
             uVar5);
  return __return_storage_ptr__;
}

// GetStagingDirectory @ 1431e3210

FString * __cdecl FBuildPatchServicesModule::GetStagingDirectory(void)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  if (StagingDirectory.Data.ArrayNum < 2) {
    pFVar1 = FPaths::ProjectDir(&local_18);
    ::FString::ConcatFC(&local_28,pFVar1,L"BuildStaging/");
    if (StagingDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(StagingDirectory.Data.AllocatorInstance.Data);
    }
    StagingDirectory.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    StagingDirectory.Data.ArrayNum = local_28.Data.ArrayNum;
    StagingDirectory.Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return &StagingDirectory;
}

// NormalizeCloudPaths @ 1431eb550

void __thiscall
FBuildPatchServicesModule::NormalizeCloudPaths
          (FBuildPatchServicesModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FString local_28;
  
  iVar1 = param_1->ArrayNum;
  this_00 = (param_1->AllocatorInstance).Data;
  pFVar3 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_00 == pFVar3) break;
    ::FString::ReplaceInline((FString *)this_00,L"\\",L"/",IgnoreCase);
    bVar2 = ::FString::StartsWith((FString *)this_00,L"//",2,IgnoreCase);
    ::FString::ReplaceInline((FString *)this_00,L"://",L":////",IgnoreCase);
    ::FString::ReplaceInline((FString *)this_00,L"//",L"/",IgnoreCase);
    if (bVar2) {
      ::FString::FString(&local_28,L"/");
      ::FString::InsertAt((FString *)this_00,0,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    this_00 = this_00 + 0x10;
  }
  return;
}

// PreExit @ 1431ec300

void __thiscall FBuildPatchServicesModule::PreExit(FBuildPatchServicesModule *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSharedReferencer<1> local_10;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < (this->BuildPatchInstallers).ArrayNum)); iVar3 = iVar3 + 1
      ) {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    BuildPatchServices::FBuildPatchInstaller::PreExit
              (*(FBuildPatchInstaller **)
                ((this->BuildPatchInstallers).AllocatorInstance.Data + (longlong)iVar3 * 0x10));
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Analytics.Object = (IAnalyticsProvider *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Analytics.SharedReferenceCount,&local_10)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return;
}

// Tick @ 1431fc300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBuildPatchServicesModule::Tick(FBuildPatchServicesModule *this,float param_1)

{
  TArray<TSharedRef<BuildPatchServices::FBuildPatchInstaller,1>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<TSharedRef<IBuildInstaller,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_bool___cdecl_FBuildPatchServicesModule::Tick(float)_::_2_::FStat_STAT_FBuildPatchServicesModule_Tick>
  FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  uint uVar20;
  undefined1 local_res20 [8];
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  
  uVar20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FBuildPatchServicesModule_Tick ==
          (FThreadSafeStaticStat<_private:_bool___cdecl_FBuildPatchServicesModule::Tick(float)_::_2_::FStat_STAT_FBuildPatchServicesModule_Tick>
           )0x0) {
        pFVar12 = ::FName::FName(&local_68,"STAT_FBuildPatchServicesModule_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBuildPatchServicesModule_Tick,
                   *pFVar12,L"STAT_FBuildPatchServicesModule_Tick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_FBuildPatchServicesModule_Tick;
  if (StatPtr_STAT_FBuildPatchServicesModule_Tick ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FBuildPatchServicesModule::Tick(float)_::_2_::FStat_STAT_FBuildPatchServicesModule_Tick>
       )0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_FBuildPatchServicesModule_Tick");
    FVar13 = (FThreadSafeStaticStat<_private:_bool___cdecl_FBuildPatchServicesModule::Tick(float)_::_2_::FStat_STAT_FBuildPatchServicesModule_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FBuildPatchServicesModule_Tick,
                          *pFVar12,L"STAT_FBuildPatchServicesModule_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar6 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_70.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchServicesModule.cpp"
                   ,200);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_1431fc497;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar16 = local_58;
LAB_1431fc497:
  pTVar1 = &this->BuildPatchInstallers;
  for (; -1 < (int)uVar20; uVar20 = uVar20 + 1) {
    piVar2 = &(this->BuildPatchInstallers).ArrayNum;
    if ((this->BuildPatchInstallers).ArrayNum <= (int)uVar20) break;
    if ((int)uVar20 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    bVar8 = BuildPatchServices::FBuildPatchInstaller::Tick
                      (*(FBuildPatchInstaller **)
                        ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10));
    if (!bVar8) {
      uVar10 = 0;
      if ((int)uVar20 < *piVar2) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar17 + 8));
      iVar14 = *piVar2 + ~uVar20;
      if (iVar14 != 0) {
        memmove(pFVar17,pFVar17 + 0x10,(longlong)iVar14 << 4);
      }
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar1->AllocatorInstance,*piVar2,&(this->BuildPatchInstallers).ArrayMax);
      uVar20 = uVar20 - 1;
    }
  }
  uVar20 = (this->BuildPatchInstallers).ArrayNum;
  uVar10 = (this->BuildPatchInstallerInterfaces).ArrayNum;
  if (uVar20 != uVar10) {
    pTVar3 = &this->BuildPatchInstallerInterfaces;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    DestructItems<TSharedRef<IBuildInstaller,1>,int>
              ((TSharedRef<IBuildInstaller,1> *)(pTVar3->AllocatorInstance).Data,uVar10);
    piVar2 = &(this->BuildPatchInstallerInterfaces).ArrayMax;
    (this->BuildPatchInstallerInterfaces).ArrayNum = 0;
    if (*piVar2 != uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar20,&pTVar3->AllocatorInstance,0,piVar2);
    }
    piVar19 = &(this->BuildPatchInstallers).ArrayNum;
    iVar14 = *piVar19;
    pFVar17 = (pTVar1->AllocatorInstance).Data;
    pFVar18 = pFVar17 + (longlong)iVar14 * 0x10;
    while( true ) {
      if (*piVar19 != iVar14) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<BuildPatchServices::FBuildPatchInstaller,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar17 == pFVar18) break;
      local_48 = *(undefined8 *)pFVar17;
      local_40 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar15 = (pTVar3->AllocatorInstance).Data;
      if ((pFVar15 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar15 + (longlong)*piVar2 * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      iVar11 = (this->BuildPatchInstallerInterfaces).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->BuildPatchInstallerInterfaces).ArrayNum = iVar11 + 1;
      pFVar15 = (pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar15 = local_48;
      *(TReferenceControllerBase<1> **)(pFVar15 + 8) = local_40;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      pFVar17 = pFVar17 + 0x10;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return true;
}

