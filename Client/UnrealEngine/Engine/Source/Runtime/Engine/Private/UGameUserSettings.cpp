// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 167

// StaticClass @ 147c18c00

UClass * __cdecl UGameUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameUserSettings",
               &Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton,
               StaticRegisterNativesUGameUserSettings,0x170,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"GameUserSettings",InternalConstructor<UGameUserSettings>,
               InternalVTableHelperCtorCaller<UGameUserSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton;
}

// UGameUserSettings @ 147c2d7d0

UGameUserSettings * __thiscall
UGameUserSettings::UGameUserSettings(UGameUserSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameUserSettings__6B_;
  (this->ScalabilityQuality).CPUBenchmarkResults = -1.0;
  (this->ScalabilityQuality).GPUBenchmarkResults = -1.0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayNum = 0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayMax = 0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayNum = 0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&this->ScalabilityQuality);
  (this->WindowPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowPositions).ArrayNum = 0;
  (this->WindowPositions).ArrayMax = 0;
  (this->LastCPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastCPUBenchmarkSteps).ArrayNum = 0;
  (this->LastCPUBenchmarkSteps).ArrayMax = 0;
  (this->LastGPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastGPUBenchmarkSteps).ArrayNum = 0;
  (this->LastGPUBenchmarkSteps).ArrayMax = 0;
  this->bEnableScalabilitySettings = true;
  *(undefined8 *)&this->OnUpdateGameUserSettingsFileFromCloud = 0;
  *(undefined8 *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateCloudDataFromGameUserSettings = 0;
  *(undefined8 *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x10 = 0;
  *(undefined8 *)&this->OnGameUserSettingsUINeedsUpdate = 0;
  *(undefined8 *)&(this->OnGameUserSettingsUINeedsUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnGameUserSettingsUINeedsUpdate).field_0x10 = 0;
  return this;
}

// UGameUserSettings @ 147c2d8a0

UGameUserSettings * __thiscall
UGameUserSettings::UGameUserSettings(UGameUserSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameUserSettings__6B_;
  (this->ScalabilityQuality).CPUBenchmarkResults = -1.0;
  (this->ScalabilityQuality).GPUBenchmarkResults = -1.0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayNum = 0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayMax = 0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayNum = 0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&this->ScalabilityQuality);
  (this->WindowPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowPositions).ArrayNum = 0;
  (this->WindowPositions).ArrayMax = 0;
  (this->LastCPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastCPUBenchmarkSteps).ArrayNum = 0;
  (this->LastCPUBenchmarkSteps).ArrayMax = 0;
  (this->LastGPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastGPUBenchmarkSteps).ArrayNum = 0;
  (this->LastGPUBenchmarkSteps).ArrayMax = 0;
  this->bEnableScalabilitySettings = true;
  *(undefined8 *)&this->OnUpdateGameUserSettingsFileFromCloud = 0;
  *(undefined8 *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateCloudDataFromGameUserSettings = 0;
  *(undefined8 *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x10 = 0;
  *(undefined8 *)&this->OnGameUserSettingsUINeedsUpdate = 0;
  *(undefined8 *)&(this->OnGameUserSettingsUINeedsUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnGameUserSettingsUINeedsUpdate).field_0x10 = 0;
  SetToDefaults(this);
  return this;
}

// ~UGameUserSettings @ 147c31530

void __thiscall UGameUserSettings::~UGameUserSettings(UGameUserSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGameUserSettings__6B_;
  pvVar1 = *(void **)&(this->OnGameUserSettingsUINeedsUpdate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGameUserSettingsUINeedsUpdate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnUpdateCloudDataFromGameUserSettings);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnUpdateGameUserSettingsFileFromCloud);
  pFVar2 = (this->LastGPUBenchmarkSteps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastCPUBenchmarkSteps).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WindowPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyHardwareBenchmarkResults @ 147c359c0

void __thiscall UGameUserSettings::ApplyHardwareBenchmarkResults(UGameUserSettings *this)

{
  Scalability::SetQualityLevels(&this->ScalabilityQuality,false);
  if (this->bEnableScalabilitySettings != false) {
    Scalability::SaveState(&GGameUserSettingsIni);
  }
                    /* WARNING: Could not recover jumptable at 0x000147c359f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))(this);
  return;
}

// ApplyNonResolutionSettings @ 147c35a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameUserSettings::ApplyNonResolutionSettings(UGameUserSettings *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  IConsoleVariable *pIVar9;
  UEngine *this_00;
  bool bVar10;
  char cVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::ApplyNonResolutionSettings(void)_::_2_::FStat_GameUserSettings_ApplyNonResolutionSettings>
  FVar14;
  undefined8 uVar15;
  FAudioQualitySettings *pFVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  IConsoleManager *pIVar17;
  ForAnyElementType FVar18;
  undefined *puVar19;
  FNameEntryId FVar20;
  FName FVar21;
  float fVar22;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  FName local_res20;
  LARGE_INTEGER local_c0;
  FString local_b8;
  FStatMessage local_a8;
  FAudioDeviceHandle local_98;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  FName local_64;
  FName local_5c;
  undefined1 local_54 [20];
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_GameUserSettings_ApplyNonResolutionSettings ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::ApplyNonResolutionSettings(void)_::_2_::FStat_GameUserSettings_ApplyNonResolutionSettings>
           )0x0) {
        pFVar13 = ::FName::FName(&local_64,"GameUserSettings_ApplyNonResolutionSettings");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_GameUserSettings_ApplyNonResolutionSettings
                   ,*pFVar13,L"GameUserSettings_ApplyNonResolutionSettings","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_GameUserSettings_ApplyNonResolutionSettings;
  if (StatPtr_GameUserSettings_ApplyNonResolutionSettings ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::ApplyNonResolutionSettings(void)_::_2_::FStat_GameUserSettings_ApplyNonResolutionSettings>
       )0x0) {
    pFVar13 = ::FName::FName(&local_5c,"GameUserSettings_ApplyNonResolutionSettings");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::ApplyNonResolutionSettings(void)_::_2_::FStat_GameUserSettings_ApplyNonResolutionSettings>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_GameUserSettings_ApplyNonResolutionSettings,*pFVar13,
                          L"GameUserSettings_ApplyNonResolutionSettings","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar12 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.Value;
        local_res20.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                   ,0x1b8);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar20.Value;
      uStackX_14 = uVar12;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar7 = true;
      goto LAB_147c35b73;
    }
  }
  bVar7 = false;
  FVar21.ComparisonIndex.Value = 0;
  FVar21.Number = 0;
LAB_147c35b73:
  (**(code **)(this->_padding_ + 0x2e8))(this);
  ::FString::FString(&local_b8,L"SystemSettings");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar18.Data = local_b8.Data.AllocatorInstance.Data;
  }
  local_res10 = 0;
  bVar10 = FConfigCacheIni::GetInt
                     (GConfig,(wchar_t *)FVar18.Data,L"r.Vsync",(int *)&local_res10,&GEngineIni);
  if (!bVar10) {
    if (*(int *)(lVar3 + 0x9d4c) < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        pIVar17 = IConsoleManager::Get();
        ::CVar = (IConsoleVariable *)(**(code **)((longlong)*pIVar17 + 0xc0))(pIVar17,L"r.VSync",1);
        _Init_thread_footer(&::_TSS1);
      }
    }
    pIVar9 = ::CVar;
    bVar10 = this->bUseVSync;
    local_80 = 0x3000000;
    local_7c = 0;
    lVar3 = *(longlong *)::CVar;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0xf000000;
    local_68 = 0x1000000;
    uVar15 = (**(code **)(lVar3 + 0xa8))(::CVar,local_54,&local_80);
    puVar19 = &u_0;
    if (bVar10 != false) {
      puVar19 = &u_1;
    }
    (**(code **)(lVar3 + 0xb0))(pIVar9,puVar19,uVar15);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  bVar10 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
  this_00 = GEngine;
  GEngine->bDynamicResolutionEnableUserSetting = bVar10;
  UEngine::UpdateDynamicResolutionStatus(this_00);
  fVar22 = (float)(**(code **)(this->_padding_ + 0x368))(this);
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  (**(code **)(GEngine->_padding_ + 800))(GEngine,fVar22);
  cVar11 = (**(code **)(GEngine->_padding_ + 0x2c0))();
  if ((cVar11 != '\0') && (this->bEnableScalabilitySettings != false)) {
    Scalability::SetQualityLevels(&this->ScalabilityQuality,false);
  }
  UEngine::GetMainAudioDevice(GEngine,&local_98);
  bVar10 = FAudioDeviceHandle::IsValid(&local_98);
  if (bVar10) {
    bVar10 = FAudioDeviceHandle::IsValid(&local_98);
    if (!bVar10) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                          ,0x60,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar16 = FAudioDevice::GetQualityLevelSettings();
    pIVar4 = (pFVar16->DisplayName).TextData.Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
    }
    iVar2 = pFVar16->MaxChannels;
    bVar10 = FAudioDeviceHandle::IsValid(&local_98);
    if (!bVar10) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                          ,0x60,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FAudioDevice::SetMaxChannels(local_98.Device,iVar2);
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  bVar10 = IsHDRAllowed();
  if ((bVar10) && (this->bUseHDRDisplayOutput != false)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  EnableHDRDisplayOutputInternal(this,bVar10,this->HDRDisplayOutputNits,true);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_98);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_a8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// ApplyResolutionSettings @ 147c36b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameUserSettings::ApplyResolutionSettings(UGameUserSettings *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_void___cdecl_UGameUserSettings::ApplyResolutionSettings(bool)_::_2_::FStat_GameUserSettings_ApplyResolutionSettings>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  Type TVar12;
  uint local_res18;
  uint uStackX_1c;
  Type local_res20 [2];
  uint local_78 [2];
  FColor_u_0 local_70 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  TVar12 = Fullscreen;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_GameUserSettings_ApplyResolutionSettings ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UGameUserSettings::ApplyResolutionSettings(bool)_::_2_::FStat_GameUserSettings_ApplyResolutionSettings>
         )0x0) {
      pFVar7 = ::FName::FName(&local_58,"GameUserSettings_ApplyResolutionSettings");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_GameUserSettings_ApplyResolutionSettings,
                 *pFVar7,L"GameUserSettings_ApplyResolutionSettings","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_GameUserSettings_ApplyResolutionSettings;
  if (StatPtr_GameUserSettings_ApplyResolutionSettings ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UGameUserSettings::ApplyResolutionSettings(bool)_::_2_::FStat_GameUserSettings_ApplyResolutionSettings>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"GameUserSettings_ApplyResolutionSettings");
    FVar8 = (FThreadSafeStaticStat<_public:_void___cdecl_UGameUserSettings::ApplyResolutionSettings(bool)_::_2_::FStat_GameUserSettings_ApplyResolutionSettings>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_GameUserSettings_ApplyResolutionSettings,*pFVar7,
                         L"GameUserSettings_ApplyResolutionSettings","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_70[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_70[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar10.Value;
        local_68.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                   ,499);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar10.Value;
      uStackX_1c = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_147c36ccd;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_147c36ccd:
  (**(code **)(this->_padding_ + 0x2e8))(this);
  if ((this->FullscreenMode != 0) && (TVar12 = Windowed, this->FullscreenMode == 1)) {
    TVar12 = WindowedFullscreen;
  }
  local_res18 = this->ResolutionSizeY;
  local_78[0] = this->ResolutionSizeX;
  local_res20[0] = TVar12;
  if (param_1) {
    UGameEngine::ConditionallyOverrideSettings((int *)local_78,(int *)&local_res18,local_res20);
  }
  FSystemResolution::RequestResolutionChange(local_78[0],local_res18,local_res20[0]);
  if (TVar12 < Windowed) {
    SetPreferredFullscreenMode(this,(uint)(TVar12 != Fullscreen));
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ApplySettings @ 147c36f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGameUserSettings::ApplySettings(UGameUserSettings *this,bool param_1)

{
  undefined1 auStack_98 [32];
  FGlobalComponentRecreateRenderStateContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext(&local_78);
  ApplyResolutionSettings(this,param_1);
  (**(code **)(this->_padding_ + 0x2b8))(this);
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(&local_78)
  ;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnGameUserSettingsUINeedsUpdate,(void *)0x0);
  (**(code **)(this->_padding_ + 0x2f8))(this);
  return;
}

// ConfirmVideoMode @ 147c3ec50

void __thiscall UGameUserSettings::ConfirmVideoMode(UGameUserSettings *this)

{
  this->LastConfirmedFullscreenMode = this->FullscreenMode;
  this->LastUserConfirmedResolutionSizeX = this->ResolutionSizeX;
  this->LastUserConfirmedResolutionSizeY = this->ResolutionSizeY;
  return;
}

// EnableHDRDisplayOutput @ 147c4d680

void __thiscall
UGameUserSettings::EnableHDRDisplayOutput(UGameUserSettings *this,bool param_1,int param_2)

{
  EnableHDRDisplayOutputInternal(this,param_1,param_2,false);
  return;
}

// EnableHDRDisplayOutputInternal @ 147c4d690

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameUserSettings::EnableHDRDisplayOutputInternal
          (UGameUserSettings *this,bool param_1,int param_2,bool param_3)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  int iVar3;
  EConsoleVariableFlags EVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    CVarHDROutputEnabled =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.HDR.EnableHDROutput",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (CVarHDROutputEnabled == (IConsoleVariable *)0x0) {
    return;
  }
  if (param_1) {
    if ((GRHIGlobals.SupportsHDROutput != false) && (bVar1 = IsHDRAllowed(), bVar1)) {
      iVar3 = 1;
      EVar4 = ECVF_SetByCode;
      if (param_3) {
        EVar4 = ECVF_SetByGameSetting;
      }
      goto LAB_147c4d756;
    }
    if (3 < (byte)LogGameUserSettings._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
    }
    param_1 = false;
  }
  EVar4 = ECVF_SetByCode;
  if (param_3) {
    EVar4 = ECVF_SetByGameSetting;
  }
  iVar3 = 0;
LAB_147c4d756:
  IConsoleVariable::Set<int>(CVarHDROutputEnabled,iVar3,EVar4,(FName)0x0);
  this->bUseHDRDisplayOutput = param_1;
  this->HDRDisplayOutputNits = param_2;
  return;
}

// FindResolutionQualityForScreenSize @ 147c50c80

float __thiscall
UGameUserSettings::FindResolutionQualityForScreenSize
          (UGameUserSettings *this,float param_1,float param_2)

{
  TIntPoint<int>_u_0 TVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint local_res8;
  uint uStackX_c;
  
  if (this->FullscreenMode == 1) {
    TVar1._s_0 = (TIntPoint<int>_u_0_s_0)GetDesktopResolution(this);
  }
  else {
    local_res8 = this->ResolutionSizeX;
    uStackX_c = this->ResolutionSizeY;
    TVar1 = (TIntPoint<int>_u_0)&local_res8;
  }
  fVar5 = param_1 / param_2;
  iVar2 = (int)((ulonglong)*(undefined8 *)TVar1 >> 0x20);
  fVar3 = (float)(int)*(undefined8 *)TVar1 / (float)iVar2;
  fVar4 = (float)iVar2;
  if (__real_322bcc77 < (float)((uint)(fVar3 - fVar5) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (fVar5 <= fVar3) {
      param_2 = SQRT(param_2 * param_2 * fVar5 * (__real_3f800000 / fVar3));
    }
    else {
      param_2 = fVar5 * param_2 * (__real_3f800000 / fVar3);
    }
  }
  if (param_2 < fVar4) {
    return (param_2 / fVar4) * __real_42c80000;
  }
  return __real_42c80000;
}

// GetAntiAliasingQuality @ 147c54d90

int __thiscall UGameUserSettings::GetAntiAliasingQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).AntiAliasingQuality;
}

// GetCurrentHDRDisplayNits @ 147c55c90

int __thiscall UGameUserSettings::GetCurrentHDRDisplayNits(UGameUserSettings *this)

{
  if (this->bUseHDRDisplayOutput != false) {
    return this->HDRDisplayOutputNits;
  }
  return 0;
}

// GetDefaultResolution @ 147c561b0

TIntPoint<int> __cdecl UGameUserSettings::GetDefaultResolution(void)

{
  TIntPoint<int>_u_0 in_RCX;
  
  *(TIntPoint<int>_u_0 *)in_RCX =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return (TIntPoint<int>)in_RCX;
}

// GetDefaultResolutionScale @ 147c561d0

float __thiscall UGameUserSettings::GetDefaultResolutionScale(UGameUserSettings *this)

{
  TIntPoint<int>_u_0 TVar1;
  TIntPoint<int> TVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  if (this->FullscreenMode == 1) {
    TVar1._s_0 = (TIntPoint<int>_u_0_s_0)GetDesktopResolution(this);
  }
  else {
    TVar1 = (TIntPoint<int>_u_0)&this->ResolutionSizeX;
  }
  iVar4 = *(int *)TVar1;
  if (this->FullscreenMode == 1) {
    TVar2 = GetDesktopResolution(this);
    uVar3 = *(uint *)((longlong)TVar2.field0_0x0 + 4);
  }
  else {
    uVar3 = this->ResolutionSizeY;
  }
  if ((iVar4 < 1) || (this->DesiredScreenWidth <= iVar4)) {
    iVar4 = this->DesiredScreenWidth;
  }
  if (((int)uVar3 < 1) || (this->DesiredScreenHeight <= (int)uVar3)) {
    uVar3 = this->DesiredScreenHeight;
  }
  fVar5 = FindResolutionQualityForScreenSize(this,(float)iVar4,(float)(int)uVar3);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}

// GetDefaultWindowMode @ 147c56270

Type __cdecl UGameUserSettings::GetDefaultWindowMode(void)

{
  return WindowedFullscreen;
}

// GetDefaultWindowPosition @ 147c56280

TIntPoint<int> __cdecl UGameUserSettings::GetDefaultWindowPosition(void)

{
  TIntPoint<int>_u_0 in_RCX;
  
  *(undefined8 *)in_RCX = 0xffffffffffffffff;
  return (TIntPoint<int>)in_RCX;
}

// GetDesktopResolution @ 147c562a0

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __thiscall UGameUserSettings::GetDesktopResolution(UGameUserSettings *this)

{
  FSlateApplication *pFVar1;
  wchar_t *pwVar2;
  TIntPoint<int>_u_0 in_RDX;
  FDisplayMetrics local_88;
  
  local_88.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.MonitorInfo.ArrayNum = 0;
  local_88.MonitorInfo.ArrayMax = 0;
  local_88.PrimaryDisplayWorkAreaRect.Left = 0;
  local_88.PrimaryDisplayWorkAreaRect.Top = 0;
  local_88.PrimaryDisplayWorkAreaRect.Right = 0;
  local_88.PrimaryDisplayWorkAreaRect.Bottom = 0;
  local_88.VirtualDisplayRect.Left = 0;
  local_88.VirtualDisplayRect.Top = 0;
  local_88.VirtualDisplayRect.Right = 0;
  local_88.VirtualDisplayRect.Bottom = 0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      FDisplayMetrics::RebuildDisplayMetrics(&local_88);
    }
    else {
      local_88.PrimaryDisplayWidth = 0;
      local_88.PrimaryDisplayHeight = 0;
    }
  }
  else {
    pFVar1 = FSlateApplication::Get();
    (**(code **)(*(longlong *)pFVar1 + 0x1d0))(pFVar1,&local_88);
  }
  *(int *)in_RDX = local_88.PrimaryDisplayWidth;
  *(int *)((longlong)in_RDX + 4) = local_88.PrimaryDisplayHeight;
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data,
             local_88.MonitorInfo.ArrayNum);
  if ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
    FMemory::Free(local_88.MonitorInfo.AllocatorInstance.Data);
  }
  return (TIntPoint<int>)in_RDX;
}

// GetEffectiveFrameRateLimit @ 147c56570

float __thiscall UGameUserSettings::GetEffectiveFrameRateLimit(UGameUserSettings *this)

{
  return this->FrameRateLimit;
}

// GetFoliageQuality @ 147c56d80

int __thiscall UGameUserSettings::GetFoliageQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).FoliageQuality;
}

// GetFramePace @ 147c56dd0

int __cdecl UGameUserSettings::GetFramePace(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  IConsoleManager *pIVar5;
  int iVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      SyncIntervalCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"rhi.SyncInterval",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<407854045798072331>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\GenericPlatform\\GenericPlatformFramePacer.cpp"
                       ,0xb,"SyncIntervalCVar != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    iVar3 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))();
    if (0 < iVar3) {
      iVar6 = 0x7fffffff;
      if (iVar3 < 0x7fffffff) {
        iVar6 = iVar3;
      }
      iVar4 = FWindowsPlatformMisc::GetMaxRefreshRate();
      iVar3 = 1;
      if (1 < iVar6) {
        iVar3 = iVar6;
      }
      return iVar4 / iVar3;
    }
  }
  return 0;
}

// GetFrameRateLimit @ 147c56de0

float __thiscall UGameUserSettings::GetFrameRateLimit(UGameUserSettings *this)

{
  return this->FrameRateLimit;
}

// GetFullscreenMode @ 147c56df0

Type __thiscall UGameUserSettings::GetFullscreenMode(UGameUserSettings *this)

{
  if (this->FullscreenMode == 0) {
    return Fullscreen;
  }
  if (this->FullscreenMode != 1) {
    return Windowed;
  }
  return WindowedFullscreen;
}

// GetGameUserSettings @ 147c56f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameUserSettings * __cdecl UGameUserSettings::GetGameUserSettings(void)

{
  UGameUserSettings *pUVar1;
  
  pUVar1 = UEngine::GetGameUserSettings(GEngine);
  return pUVar1;
}

// GetGlobalIlluminationQuality @ 147c57110

int __thiscall UGameUserSettings::GetGlobalIlluminationQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).GlobalIlluminationQuality;
}

// GetLastConfirmedFullscreenMode @ 147c573f0

Type __thiscall UGameUserSettings::GetLastConfirmedFullscreenMode(UGameUserSettings *this)

{
  if (this->LastConfirmedFullscreenMode == 0) {
    return Fullscreen;
  }
  if (this->LastConfirmedFullscreenMode != 1) {
    return Windowed;
  }
  return WindowedFullscreen;
}

// GetLastConfirmedScreenResolution @ 147c57420

TIntPoint<int> __thiscall
UGameUserSettings::GetLastConfirmedScreenResolution(UGameUserSettings *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(uint *)in_RDX = this->LastUserConfirmedResolutionSizeX;
  *(uint *)((longlong)in_RDX + 4) = this->LastUserConfirmedResolutionSizeY;
  return (TIntPoint<int>)in_RDX;
}

// GetMaxNumWindowPositionSaveSlots @ 147c57930

int __thiscall UGameUserSettings::GetMaxNumWindowPositionSaveSlots(UGameUserSettings *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVar_GameUserSettings_WindowPositionsMaxSize.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetOverallScalabilityLevel @ 147c57ec0

int __thiscall UGameUserSettings::GetOverallScalabilityLevel(UGameUserSettings *this)

{
  int iVar1;
  
  iVar1 = Scalability::FQualityLevels::GetSingleQualityLevel(&this->ScalabilityQuality);
  return iVar1;
}

// GetPostProcessingQuality @ 147c59d10

int __thiscall UGameUserSettings::GetPostProcessingQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).PostProcessQuality;
}

// GetPreferredFullscreenMode @ 147c59d20

Type __thiscall UGameUserSettings::GetPreferredFullscreenMode(UGameUserSettings *this)

{
  return (Type)(this->PreferredFullscreenMode != 0);
}

// GetPrivateStaticClass @ 147c5a190

UClass * __cdecl UGameUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameUserSettings",
               &Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton,
               StaticRegisterNativesUGameUserSettings,0x170,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"GameUserSettings",InternalConstructor<UGameUserSettings>,
               InternalVTableHelperCtorCaller<UGameUserSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameUserSettings.InnerSingleton;
}

// GetRecommendedResolutionScale @ 147c5a740

float __thiscall UGameUserSettings::GetRecommendedResolutionScale(UGameUserSettings *this)

{
  float fVar1;
  
  fVar1 = FindResolutionQualityForScreenSize
                    (this,this->LastRecommendedScreenWidth,this->LastRecommendedScreenHeight);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetReflectionQuality @ 147c5a770

int __thiscall UGameUserSettings::GetReflectionQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).ReflectionQuality;
}

// GetResolutionScaleInformationEx @ 147c5a780

void __thiscall
UGameUserSettings::GetResolutionScaleInformationEx
          (UGameUserSettings *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = __real_42c80000;
  *param_2 = (this->ScalabilityQuality).ResolutionQuality;
  *param_3 = 0.0;
  *param_4 = 100.0;
  *param_1 = (*param_2 - *param_3) / (fVar1 - *param_3);
  return;
}

// GetResolutionScaleNormalized @ 147c5a7c0

float __thiscall UGameUserSettings::GetResolutionScaleNormalized(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).ResolutionQuality * __real_3c23d70a;
}

// GetScreenResolution @ 147c5a8a0

TIntPoint<int> __thiscall UGameUserSettings::GetScreenResolution(UGameUserSettings *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(uint *)in_RDX = this->ResolutionSizeX;
  *(uint *)((longlong)in_RDX + 4) = this->ResolutionSizeY;
  return (TIntPoint<int>)in_RDX;
}

// GetShadingQuality @ 147c5aca0

int __thiscall UGameUserSettings::GetShadingQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).ShadingQuality;
}

// GetShadowQuality @ 147c5acb0

int __thiscall UGameUserSettings::GetShadowQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).ShadowQuality;
}

// GetSyncInterval @ 147c5c5f0

int __cdecl UGameUserSettings::GetSyncInterval(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      SyncIntervalCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"rhi.syncinterval",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7438083208559723253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                       ,0x2f5,"SyncIntervalCVar");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c5c65e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))();
  return iVar3;
}

// GetTextureQuality @ 147c5cb20

int __thiscall UGameUserSettings::GetTextureQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).TextureQuality;
}

// GetViewDistanceQuality @ 147c5e290

int __thiscall UGameUserSettings::GetViewDistanceQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).ViewDistanceQuality;
}

// GetVisualEffectQuality @ 147c5e400

int __thiscall UGameUserSettings::GetVisualEffectQuality(UGameUserSettings *this)

{
  return (this->ScalabilityQuality).EffectsQuality;
}

// GetWindowPosition @ 147c5ea40

TIntPoint<int> __thiscall UGameUserSettings::GetWindowPosition(UGameUserSettings *this,int param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TIntPoint<int> TVar6;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar7;
  uint in_R8D;
  
  TVar7._s_0.Y = in_register_00000014;
  TVar7._s_0.X = param_1;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->WindowPositions).ArrayNum)) {
    uVar5 = 0;
    if ((int)in_R8D < (this->WindowPositions).ArrayNum) {
      uVar5 = ~in_R8D >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar6.field0_0x0;
      }
    }
    uVar1 = *(undefined4 *)
             ((this->WindowPositions).AllocatorInstance.Data + (longlong)(int)in_R8D * 8 + 4);
    uVar5 = 0;
    if ((int)in_R8D < (this->WindowPositions).ArrayNum) {
      uVar5 = ~in_R8D >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar3)();
        return (TIntPoint<int>)TVar6.field0_0x0;
      }
    }
    pFVar2 = (this->WindowPositions).AllocatorInstance.Data;
    *(undefined4 *)((longlong)TVar7 + 4) = uVar1;
    *(undefined4 *)TVar7 = *(undefined4 *)(pFVar2 + (longlong)(int)in_R8D * 8);
    return (TIntPoint<int>)TVar7;
  }
  *(undefined8 *)TVar7 = 0xffffffffffffffff;
  return (TIntPoint<int>)TVar7;
}

// GetWindowPosition @ 147c5eb60

TIntPoint<int> __thiscall UGameUserSettings::GetWindowPosition(UGameUserSettings *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  (**(code **)(this->_padding_ + 0x318))(this,in_RDX,0);
  return (TIntPoint<int>)in_RDX;
}

// IsDirty @ 147c68dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameUserSettings::IsDirty(UGameUserSettings *this)

{
  UGameViewportClient *pUVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (GEngine != (UEngine *)0x0) {
    pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if ((pUVar1 != (UGameViewportClient *)0x0) && (pUVar1->ViewportFrame != (FViewportFrame *)0x0))
    {
      if (this->ResolutionSizeX != GSystemResolution.ResX) {
        return true;
      }
      if (this->ResolutionSizeY != GSystemResolution.ResY) {
        return true;
      }
    }
    if (((GEngine != (UEngine *)0x0) &&
        (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0)
        ) && (pUVar1->ViewportFrame != (FViewportFrame *)0x0)) {
      iVar3 = (**(code **)(pUVar1->Viewport->_padding_ + 0x140))();
      if (this->FullscreenMode == 0) {
        iVar4 = 0;
      }
      else if (this->FullscreenMode == 1) {
        iVar4 = 1;
      }
      else {
        iVar4 = 2;
      }
      if (iVar3 != iVar4) {
        return true;
      }
    }
  }
  bVar2 = IsVSyncDirty(this);
  if ((!bVar2) &&
     (((GEngine == (UEngine *)0x0 ||
       (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 == (UGameViewportClient *)0x0))
      || ((pUVar1->ViewportFrame == (FViewportFrame *)0x0 ||
          (this->bUseDynamicResolution == GEngine->bDynamicResolutionEnableUserSetting)))))) {
    return false;
  }
  return true;
}

// IsDynamicResolutionDirty @ 147c68ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameUserSettings::IsDynamicResolutionDirty(UGameUserSettings *this)

{
  UGameViewportClient *pUVar1;
  
  if (((GEngine != (UEngine *)0x0) &&
      (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
     && (pUVar1->ViewportFrame != (FViewportFrame *)0x0)) {
    return this->bUseDynamicResolution != GEngine->bDynamicResolutionEnableUserSetting;
  }
  return false;
}

// IsDynamicResolutionEnabled @ 147c68f00

bool __thiscall UGameUserSettings::IsDynamicResolutionEnabled(UGameUserSettings *this)

{
  return this->bUseDynamicResolution;
}

// IsFullscreenModeDirty @ 147c69040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameUserSettings::IsFullscreenModeDirty(UGameUserSettings *this)

{
  UGameViewportClient *pUVar1;
  int iVar2;
  
  if (((GEngine == (UEngine *)0x0) ||
      (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 == (UGameViewportClient *)0x0))
     || (pUVar1->ViewportFrame == (FViewportFrame *)0x0)) {
    return false;
  }
  iVar2 = (**(code **)(pUVar1->Viewport->_padding_ + 0x140))();
  if (this->FullscreenMode == 0) {
    return iVar2 != 0;
  }
  if (this->FullscreenMode != 1) {
    return iVar2 != 2;
  }
  return iVar2 != 1;
}

// IsHDREnabled @ 147c69210

bool __thiscall UGameUserSettings::IsHDREnabled(UGameUserSettings *this)

{
  return this->bUseHDRDisplayOutput;
}

// IsScreenResolutionDirty @ 147c6a070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameUserSettings::IsScreenResolutionDirty(UGameUserSettings *this)

{
  UGameViewportClient *pUVar1;
  
  if ((((GEngine != (UEngine *)0x0) &&
       (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
      && (pUVar1->ViewportFrame != (FViewportFrame *)0x0)) &&
     ((this->ResolutionSizeX != GSystemResolution.ResX ||
      (this->ResolutionSizeY != GSystemResolution.ResY)))) {
    return true;
  }
  return false;
}

// IsVSyncDirty @ 147c6a1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameUserSettings::IsVSyncDirty(UGameUserSettings *this)

{
  bool bVar1;
  UGameViewportClient *pUVar2;
  bool bVar3;
  TConsoleVariableData<int> *pTVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  
  if (((GEngine == (UEngine *)0x0) ||
      (pUVar2 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar2 == (UGameViewportClient *)0x0))
     || (pUVar2->ViewportFrame == (FViewportFrame *)0x0)) {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar5 = IConsoleManager::Get();
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.VSync",1);
    pTVar7 = (TConsoleVariableData<int> *)0x0;
    if (plVar6 != (longlong *)0x0) {
      pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
    }
    ::CVar = pTVar7;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar7 = ::CVar;
  bVar1 = this->bUseVSync;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pTVar4 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (!bVar3) goto LAB_147c6a273;
  }
  pTVar4 = (TConsoleVariableData<int> *)0x0;
LAB_147c6a273:
  return bVar1 != (*(int *)((longlong)pTVar7->ShadowedValue + (longlong)pTVar4->ShadowedValue) != 0)
  ;
}

// IsVSyncEnabled @ 147c6a300

bool __thiscall UGameUserSettings::IsVSyncEnabled(UGameUserSettings *this)

{
  return this->bUseVSync;
}

// IsVersionValid @ 147c6a310

bool __thiscall UGameUserSettings::IsVersionValid(UGameUserSettings *this)

{
  return this->Version == 5;
}

// LoadConfigIni @ 147c6c460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UGameUserSettings::LoadConfigIni(bool param_1)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStackY_298 [32];
  FString local_248;
  FString local_238;
  longlong local_228;
  longlong local_220;
  FConfigContext local_218;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) goto LAB_147c6c4b5;
  bVar1 = FPaths::ShouldSaveToUserDir();
  if ((bVar1) && (bVar1 = FWindowsPlatformProcess::ShouldExpectLowIntegrityLevel(), bVar1)) {
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,L"AutomigrateUserDataToLowIntegrity");
    if (!bVar1) goto LAB_147c6c7ca;
    bShouldAutomigrateUserData = true;
  }
  else {
LAB_147c6c7ca:
    bShouldAutomigrateUserData = false;
  }
  _Init_thread_footer(&::_TSS0);
LAB_147c6c4b5:
  if ((bShouldAutomigrateUserData != false) && (bAttemptedSettingsMigration == false)) {
    bAttemptedSettingsMigration = true;
    pFVar2 = FPaths::GeneratedConfigDir(&local_248);
    iVar9 = 0;
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pwVar6 = L"";
    if (GGameUserSettingsIni.Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance;
    }
    FConfigCacheIni::GetDestIniFilename(&local_238,pwVar6,(wchar_t *)0x0,pwVar3);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    pwVar3 = FWindowsPlatformProcess::UserSettingsDir();
    if (pwVar3 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar3);
      iVar9 = (int)sVar4;
    }
    bVar1 = ::FString::StartsWith(&local_238,pwVar3,iVar9,IgnoreCase);
    if (bVar1) {
      pwVar3 = FWindowsPlatformProcess::UserSettingsDirMediumIntegrity();
      pwVar6 = FWindowsPlatformProcess::UserSettingsDir();
      ::FString::Replace(&local_238,&local_248,pwVar6,pwVar3,IgnoreCase);
      bVar1 = FPaths::FileExists(&local_248);
      if (bVar1) {
        local_220 = 0;
        local_228 = 0;
        pIVar5 = IFileManager::Get();
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_238.Data.ArrayNum != 0) {
          FVar8.Data = local_238.Data.AllocatorInstance.Data;
        }
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_248.Data.ArrayNum != 0) {
          FVar7.Data = local_248.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar5 + 0xe0))(pIVar5,FVar7.Data,FVar8.Data,&local_220);
        if (local_228 < local_220) {
          if (4 < (byte)LogGameUserSettings._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
          }
          pIVar5 = IFileManager::Get();
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            FVar8.Data = local_248.Data.AllocatorInstance.Data;
          }
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_238.Data.ArrayNum != 0) {
            FVar7.Data = local_238.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,FVar7.Data,FVar8.Data,1);
        }
        else if (4 < (byte)LogGameUserSettings._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
        }
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  FConfigContext::FConfigContext(&local_218,GConfig,true,&local_248,(FConfigFile *)0x0);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  local_218.bForceReload = param_1;
  FConfigContext::Load(&local_218,L"GameUserSettings",&GGameUserSettingsIni);
  FConfigContext::~FConfigContext(&local_218);
  return;
}

// LoadSettings @ 147c6d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameUserSettings::LoadSettings(UGameUserSettings *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::LoadSettings(bool)_::_2_::FStat_GameUserSettings_LoadSettings>
  FVar9;
  FString *pFVar10;
  FQualityLevels *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  FNameEntryId FVar15;
  FName FVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  FString local_198;
  FName local_188;
  FStatMessage local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FName local_100;
  FString local_f8;
  FString local_e8;
  FReadAccessScope local_d8;
  FReadAccessScope local_c0;
  FQualityLevels local_a8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_GameUserSettings_LoadSettings ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::LoadSettings(bool)_::_2_::FStat_GameUserSettings_LoadSettings>
         )0x0) {
      pFVar8 = ::FName::FName(&local_108,"GameUserSettings_LoadSettings");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_GameUserSettings_LoadSettings,*pFVar8,
                 L"GameUserSettings_LoadSettings","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_GameUserSettings_LoadSettings;
  if (StatPtr_GameUserSettings_LoadSettings ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::LoadSettings(bool)_::_2_::FStat_GameUserSettings_LoadSettings>
       )0x0) {
    pFVar8 = ::FName::FName(&local_100,"GameUserSettings_LoadSettings");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::LoadSettings(bool)_::_2_::FStat_GameUserSettings_LoadSettings>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_GameUserSettings_LoadSettings,*pFVar8
                         ,L"GameUserSettings_LoadSettings","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar12 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar15.Value;
        local_res8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                   ,0x219);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar15.Value;
      uStackX_1c = uVar12;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_147c6d830;
    }
  }
  bVar4 = false;
  FVar16 = local_188;
LAB_147c6d830:
  pwVar18 = L"";
  if (param_1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUpdateGameUserSettingsFileFromCloud,&local_d8);
    if (((*(int *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x10 == 0) ||
        (plVar13 = *(longlong **)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x8,
        plVar13 == (longlong *)0x0)) || (cVar6 = (**(code **)(*plVar13 + 0x38))(), cVar6 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      ::FString::FString(&local_118,".ini");
      ::FString::FString(&local_128,"/");
      ::FString::FString(&local_138,"Windows");
      pFVar10 = FPaths::GeneratedConfigDir(&local_f8);
      ::FString::ConcatFF(&local_148,pFVar10,&local_138);
      ::FString::ConcatFF(&local_158,&local_148,&local_128);
      ::FString::ConcatFF(&local_168,&local_158,&GGameUserSettingsIni);
      ::FString::ConcatFF(&local_198,&local_168,&local_118);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (5 < (byte)LogGameUserSettings._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_198.Data.ArrayNum != 0) {
        FVar14.Data = local_198.Data.AllocatorInstance.Data;
      }
      pFVar10 = ::FString::FString(&local_e8,(wchar_t *)FVar14.Data);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnUpdateGameUserSettingsFileFromCloud,&local_c0);
      if (*(int *)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x10 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)&(this->OnUpdateGameUserSettingsFileFromCloud).field_0x8;
      }
      cVar6 = (**(code **)(*plVar13 + 0x60))(plVar13,pFVar10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if ((cVar6 == '\0') && (2 < (byte)LogGameUserSettings._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
    LoadConfigIni(true);
  }
  pwVar17 = L"";
  if (GGameUserSettingsIni.Data.ArrayNum != 0) {
    pwVar17 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance.Data;
  }
  UObject::LoadConfig((UObject *)this,(UClass *)this->_padding_,pwVar17,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
  pFVar11 = Scalability::GetQualityLevels(&local_a8);
  Scalability::FQualityLevels::operator=(&this->ScalabilityQuality,pFVar11);
  if (local_a8.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_a8.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if ((this->ResolutionSizeX == 0) || (this->ResolutionSizeY == 0)) {
    (**(code **)(this->_padding_ + 0x2c8))(this);
  }
  SetPreferredFullscreenMode(this,this->PreferredFullscreenMode);
  local_res18 = this->WindowPosX_DEPRECATED;
  uStackX_1c = this->WindowPosY_DEPRECATED;
  if ((local_res18 != -1) || (uStackX_1c != -1)) {
    if ((this->WindowPositions).ArrayNum == 0) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,&(this->WindowPositions).AllocatorInstance,&(this->WindowPositions).ArrayNum,
                 &(this->WindowPositions).ArrayMax);
    }
    if (((this->WindowPositions).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(ulonglong *)(this->WindowPositions).AllocatorInstance.Data = CONCAT44(uStackX_1c,local_res18);
    if (GGameUserSettingsIni.Data.ArrayNum != 0) {
      pwVar18 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance;
    }
    UObject::SaveConfig((UObject *)this,0x4000,pwVar18,GConfig,true);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_178.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_178.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_178.StatData.Pad[4] = '\0';
      local_178.StatData.Pad[5] = '\0';
      local_178.StatData.Pad[6] = '\0';
      local_178.StatData.Pad[7] = '\0';
      local_178.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_178.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_178.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_178.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_178);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PreloadResolutionSettings @ 147c73bd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UGameUserSettings::PreloadResolutionSettings(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  ForAnyElementType FVar4;
  Type TVar5;
  bool local_res10 [8];
  bool local_res18 [8];
  int local_res20 [2];
  int local_f8 [2];
  FString local_f0;
  int local_e0;
  int local_dc;
  Type local_d8 [2];
  int local_d0 [2];
  int local_c8 [2];
  undefined8 local_c0;
  FString local_b8;
  FDisplayMetrics local_a8;
  
  LoadConfigIni(false);
  ::FString::FString(&local_b8,L"/Script/Engine.Engine");
  ::FString::FString(&local_f0,L"/Script/Engine.GameUserSettings");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar4.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::GetString
            (GConfig,(wchar_t *)FVar4.Data,L"GameUserSettingsClassName",&local_f0,&GEngineIni);
  local_f8[0] = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar4.Data = local_f0.Data.AllocatorInstance.Data;
  }
  TVar5 = WindowedFullscreen;
  local_res20[0] = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  local_res10[0] = false;
  local_res18[0] = false;
  local_e0 = 0;
  bVar2 = FConfigCacheIni::GetInt
                    (GConfig,(wchar_t *)FVar4.Data,L"Version",&local_e0,&GGameUserSettingsIni);
  if ((bVar2) && (local_e0 == 5)) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar4.Data = local_f0.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::GetBool
              (GConfig,(wchar_t *)FVar4.Data,L"bUseDesktopResolution",local_res10,
               &GGameUserSettingsIni);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar4.Data = local_f0.Data.AllocatorInstance.Data;
    }
    local_dc = 1;
    FConfigCacheIni::GetInt
              (GConfig,(wchar_t *)FVar4.Data,L"FullscreenMode",&local_dc,&GGameUserSettingsIni);
    TVar5 = Fullscreen;
    if ((local_dc != 0) && (TVar5 = WindowedFullscreen, local_dc != 1)) {
      TVar5 = Windowed;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar4.Data = local_f0.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::GetInt
              (GConfig,(wchar_t *)FVar4.Data,L"ResolutionSizeX",local_f8,&GGameUserSettingsIni);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar4.Data = local_f0.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::GetInt
              (GConfig,(wchar_t *)FVar4.Data,L"ResolutionSizeY",local_res20,&GGameUserSettingsIni);
    if ((((local_res10[0] != false) && (local_f8[0] == 0)) && (local_res20[0] == 0)) &&
       (TVar5 != Windowed)) {
      local_a8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.MonitorInfo.ArrayNum = 0;
      local_a8.MonitorInfo.ArrayMax = 0;
      local_a8.PrimaryDisplayWorkAreaRect.Left = 0;
      local_a8.PrimaryDisplayWorkAreaRect.Top = 0;
      local_a8.PrimaryDisplayWorkAreaRect.Right = 0;
      local_a8.PrimaryDisplayWorkAreaRect.Bottom = 0;
      local_a8.VirtualDisplayRect.Left = 0;
      local_a8.VirtualDisplayRect.Top = 0;
      local_a8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
      local_a8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
      local_a8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
      local_a8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
      local_a8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
      local_a8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
      local_a8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
      local_a8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
      local_a8.VirtualDisplayRect.Right = 0;
      local_a8.VirtualDisplayRect.Bottom = 0;
      FDisplayMetrics::RebuildDisplayMetrics(&local_a8);
      local_f8[0] = local_a8.PrimaryDisplayWidth;
      local_res20[0] = local_a8.PrimaryDisplayHeight;
      DestructItems<FMonitorInfo,int>
                ((FMonitorInfo *)local_a8.MonitorInfo.AllocatorInstance.Data,
                 local_a8.MonitorInfo.ArrayNum);
      if ((FMonitorInfo *)local_a8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
        FMemory::Free(local_a8.MonitorInfo.AllocatorInstance.Data);
      }
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_f0.Data.ArrayNum != 0) {
      FVar4.Data = local_f0.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::GetBool
              (GConfig,(wchar_t *)FVar4.Data,L"bUseHDRDisplayOutput",local_res18,
               &GGameUserSettingsIni);
  }
  bVar2 = IsHDRAllowed();
  if (bVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar3 = IConsoleManager::Get();
      CVarHDROutputEnabled =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.HDR.EnableHDROutput",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (CVarHDROutputEnabled != (IConsoleVariable *)0x0) {
      local_c0 = 0;
      IConsoleVariable::Set<int>
                (CVarHDROutputEnabled,(uint)(local_res18[0] != false),ECVF_SetByGameSetting,
                 (FName)0x0);
    }
  }
  local_d0[0] = local_res20[0];
  local_c8[0] = local_f8[0];
  local_d8[0] = TVar5;
  if (param_1) {
    UGameEngine::ConditionallyOverrideSettings(local_c8,local_d0,local_d8);
  }
  FSystemResolution::RequestResolutionChange(local_c8[0],local_d0[0],local_d8[0]);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// ReloadWindowPositions @ 147c7b510

void __thiscall UGameUserSettings::ReloadWindowPositions(UGameUserSettings *this)

{
  UStruct *this_00;
  FName *pFVar1;
  FProperty *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  
  this_00 = (UStruct *)this->_padding_;
  pFVar1 = ::FName::FName(&local_res8,0xf,L"WindowPositions",FNAME_Add);
  pFVar2 = UStruct::FindPropertyByName(this_00,*pFVar1);
  if (pFVar2 != (FProperty *)0x0) {
    LoadConfigIni(false);
    pwVar3 = L"";
    if (GGameUserSettingsIni.Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance;
    }
    UObject::ReloadConfig((UObject *)this,(UClass *)this->_padding_,pwVar3,0,pFVar2);
  }
  return;
}

// RequestResolutionChange @ 147c7d7f0

void __cdecl
UGameUserSettings::RequestResolutionChange(int param_1,int param_2,Type param_3,bool param_4)

{
  int local_res8 [2];
  int local_res10 [2];
  Type local_res18 [4];
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_4) {
    UGameEngine::ConditionallyOverrideSettings(local_res8,local_res10,local_res18);
  }
  FSystemResolution::RequestResolutionChange(local_res8[0],local_res10[0],local_res18[0]);
  return;
}

// ResetToCurrentSettings @ 147c7df20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameUserSettings::ResetToCurrentSettings(UGameUserSettings *this)

{
  UGameViewportClient *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  TConsoleVariableData<int> *pTVar5;
  atomic<int> aVar6;
  Type TVar7;
  SWindow *pSVar8;
  FQualityLevels *pFVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  SWindow *pSVar12;
  SWindow *pSVar13;
  SWindow *pSVar14;
  bool bVar15;
  uint uStackX_14;
  FQualityLevels local_68;
  
  pSVar12 = (SWindow *)0x0;
  if ((GEngine == (UEngine *)0x0) ||
     (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 == (UGameViewportClient *)0x0)) {
    pSVar14 = (SWindow *)((ulonglong)uStackX_14 << 0x20);
    pSVar8 = pSVar12;
LAB_147c7dfa6:
    bVar15 = false;
  }
  else {
    pSVar14 = (SWindow *)(pUVar1->Window).WeakReferenceCount.ReferenceController;
    pSVar13 = pSVar12;
    if (pSVar14 != (SWindow *)0x0) {
      aVar3 = *(atomic<int> *)&pSVar14->_padding_;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pSVar8 = (SWindow *)&DAT_00000001;
          pSVar14 = pSVar12;
          goto LAB_147c7dfa6;
        }
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar14->_padding_;
        bVar15 = aVar3 == aVar6;
        if (bVar15) {
          *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar15);
      pSVar13 = (pUVar1->Window).Object;
    }
    pSVar8 = (SWindow *)&DAT_00000001;
    if (pSVar13 == (SWindow *)0x0) goto LAB_147c7dfa6;
    bVar15 = true;
  }
  if (pSVar8 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
  }
  if (!bVar15) {
    return;
  }
  pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  pSVar14 = (SWindow *)(pUVar1->Window).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar12;
  pSVar13 = pSVar14;
  if (pSVar14 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar14->_padding_;
    do {
      pSVar13 = pSVar12;
      if (aVar3 == (atomic<int>)0x0) goto LAB_147c7e005;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar14->_padding_;
      bVar15 = aVar3 == aVar6;
      if (bVar15) {
        *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar15);
    pSVar8 = (pUVar1->Window).Object;
    pSVar13 = pSVar14;
    if (pSVar8 != (SWindow *)0x0) goto LAB_147c7e02b;
  }
LAB_147c7e005:
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar14 = pSVar13;
  if (bVar15) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147c7e02b:
  if (((pSVar8->NativeWindow).Object == (FGenericWindow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar7 = (**(code **)(((pSVar8->NativeWindow).Object)->_padding_ + 0x68))();
  TVar7 = GetWindowModeType(TVar7);
  SetFullscreenMode(this,TVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  iVar4 = GSystemResolution.ResY;
  if ((this->ResolutionSizeX != GSystemResolution.ResX) ||
     (this->ResolutionSizeY != GSystemResolution.ResY)) {
    this->ResolutionSizeX = GSystemResolution.ResX;
    this->ResolutionSizeY = iVar4;
    UpdateResolutionQuality(this);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar10 = IConsoleManager::Get();
    plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.VSync",1);
    if (plVar11 != (longlong *)0x0) {
      pSVar12 = (SWindow *)(**(code **)(*plVar11 + 0x68))(plVar11);
    }
    CVarVSync = (TConsoleVariableData<int> *)pSVar12;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar5 = CVarVSync;
  bVar15 = IsInParallelGameThread();
  if (((!bVar15) && (bVar15 = IsInGameThread(), !bVar15)) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->bUseVSync = pTVar5->ShadowedValue[0] != 0;
  this->bUseDynamicResolution = GEngine->bDynamicResolutionEnableUserSetting;
  (**(code **)(this->_padding_ + 0x2c8))(this);
  this->LastUserConfirmedDesiredScreenWidth = this->DesiredScreenWidth;
  this->LastUserConfirmedDesiredScreenHeight = this->DesiredScreenHeight;
  pFVar9 = Scalability::GetQualityLevels(&local_68);
  Scalability::FQualityLevels::operator=(&this->ScalabilityQuality,pFVar9);
  if (local_68.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_68.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  this->AudioQualityLevel = this->LastConfirmedAudioQualityLevel;
  UpdateResolutionQuality(this);
  return;
}

// RevertVideoMode @ 147c7ed50

void __thiscall UGameUserSettings::RevertVideoMode(UGameUserSettings *this)

{
  this->FullscreenMode = this->LastConfirmedFullscreenMode;
  this->ResolutionSizeX = this->LastUserConfirmedResolutionSizeX;
  this->ResolutionSizeY = this->LastUserConfirmedResolutionSizeY;
  return;
}

// RunHardwareBenchmark @ 147c7ed80

void __thiscall
UGameUserSettings::RunHardwareBenchmark
          (UGameUserSettings *this,int param_1,float param_2,float param_3)

{
  FQualityLevels *pFVar1;
  FQualityLevels local_78;
  
  pFVar1 = Scalability::BenchmarkQualityLevels(&local_78,param_1,param_2,param_3);
  Scalability::FQualityLevels::operator=(&this->ScalabilityQuality,pFVar1);
  if (local_78.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_78.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  this->LastCPUBenchmarkResult = (this->ScalabilityQuality).CPUBenchmarkResults;
  this->LastGPUBenchmarkResult = (this->ScalabilityQuality).GPUBenchmarkResults;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->LastCPUBenchmarkSteps,&(this->ScalabilityQuality).CPUBenchmarkSteps);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->LastGPUBenchmarkSteps,&(this->ScalabilityQuality).GPUBenchmarkSteps);
  this->LastGPUBenchmarkMultiplier = param_3;
  return;
}

// SaveSettings @ 147c7f2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameUserSettings::SaveSettings(UGameUserSettings *this)

{
  int *piVar1;
  UStruct *this_00;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::SaveSettings(void)_::_2_::FStat_GameUserSettings_SaveSettings>
  FVar8;
  FProperty *pFVar9;
  FString *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  TAlignedBytes<8,8> TVar12;
  FNameEntryId FVar13;
  FName FVar14;
  wchar_t *pwVar15;
  FNameEntryId FVar16;
  longlong *plVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_d8;
  FName local_c8;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  plVar17 = (longlong *)0x0;
  FVar16.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_GameUserSettings_SaveSettings ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::SaveSettings(void)_::_2_::FStat_GameUserSettings_SaveSettings>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"GameUserSettings_SaveSettings");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_GameUserSettings_SaveSettings,*pFVar7,
                 L"GameUserSettings_SaveSettings","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_GameUserSettings_SaveSettings;
  if (StatPtr_GameUserSettings_SaveSettings ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::SaveSettings(void)_::_2_::FStat_GameUserSettings_SaveSettings>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"GameUserSettings_SaveSettings");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UGameUserSettings::SaveSettings(void)_::_2_::FStat_GameUserSettings_SaveSettings>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_GameUserSettings_SaveSettings,*pFVar7
                         ,L"GameUserSettings_SaveSettings","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                   ,0x25d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar11;
      local_c8 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      FVar16.Value = local_c8.ComparisonIndex.Value;
      goto LAB_147c7f41c;
    }
  }
  bVar4 = false;
  FVar14 = local_c8;
LAB_147c7f41c:
  if (this->bEnableScalabilitySettings != false) {
    Scalability::SaveState(&GGameUserSettingsIni);
  }
  this_00 = (UStruct *)this->_padding_;
  pFVar7 = ::FName::FName((FName *)&local_res8.s,0xf,L"WindowPositions",FNAME_Add);
  pFVar9 = UStruct::FindPropertyByName(this_00,*pFVar7);
  if (pFVar9 != (FProperty *)0x0) {
    LoadConfigIni(false);
    pwVar15 = L"";
    if (GGameUserSettingsIni.Data.ArrayNum != 0) {
      pwVar15 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance;
    }
    UObject::ReloadConfig((UObject *)this,(UClass *)this->_padding_,pwVar15,0,pFVar9);
  }
  pwVar15 = L"";
  if (GGameUserSettingsIni.Data.ArrayNum != 0) {
    pwVar15 = (wchar_t *)GGameUserSettingsIni.Data.AllocatorInstance.Data;
  }
  UObject::SaveConfig((UObject *)this,0x4000,pwVar15,GConfig,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnUpdateCloudDataFromGameUserSettings,&local_b8);
  if (((*(int *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x8,
      plVar2 == (longlong *)0x0)) || (cVar6 = (**(code **)(*plVar2 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
    ::FString::FString((FString *)&local_a0,".ini");
    ::FString::FString(&local_48,"/");
    ::FString::FString(&local_58,"Windows");
    pFVar10 = FPaths::GeneratedConfigDir((FString *)&local_b8);
    ::FString::ConcatFF(&local_68,pFVar10,&local_58);
    ::FString::ConcatFF(&local_78,&local_68,&local_48);
    ::FString::ConcatFF(&local_88,&local_78,&GGameUserSettingsIni);
    ::FString::ConcatFF((FString *)&local_d8,&local_88,(FString *)&local_a0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((void *)local_b8.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8.DestructionSentinel._0_8_);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((void *)local_a0.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a0.DestructionSentinel._0_8_);
    }
    if (5 < (byte)LogGameUserSettings._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
    }
    TVar12.Pad = (uchar  [8])L"";
    if (local_d8.NameAndInfo.Index.Value != 0) {
      TVar12.Pad = local_d8.StatData.Pad;
    }
    pFVar10 = ::FString::FString((FString *)&local_b8,(wchar_t *)TVar12.Pad);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnUpdateCloudDataFromGameUserSettings,&local_a0);
    if (*(int *)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x10 != 0) {
      plVar17 = *(longlong **)&(this->OnUpdateCloudDataFromGameUserSettings).field_0x8;
    }
    cVar6 = (**(code **)(*plVar17 + 0x60))(plVar17,pFVar10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    if ((void *)local_b8.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8.DestructionSentinel._0_8_);
    }
    if ((cVar6 == '\0') && (2 < (byte)LogGameUserSettings._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
    }
    if (local_d8.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_d8.StatData.Pad);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d8.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_d8.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_d8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetAntiAliasingQuality @ 147c7fb10

void __thiscall UGameUserSettings::SetAntiAliasingQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetAntiAliasingQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetAudioQualityLevel @ 147c7fb20

void __thiscall UGameUserSettings::SetAudioQualityLevel(UGameUserSettings *this,int param_1)

{
  if (this->AudioQualityLevel != param_1) {
    this->AudioQualityLevel = param_1;
    USoundCue::StaticAudioQualityChanged(param_1);
    return;
  }
  return;
}

// SetBenchmarkFallbackValues @ 147c7fc20

void __thiscall UGameUserSettings::SetBenchmarkFallbackValues(UGameUserSettings *this)

{
  Scalability::FQualityLevels::SetBenchmarkFallback(&this->ScalabilityQuality);
  return;
}

// SetDynamicResolutionEnabled @ 147c80140

void __thiscall UGameUserSettings::SetDynamicResolutionEnabled(UGameUserSettings *this,bool param_1)

{
  this->bUseDynamicResolution = param_1;
  return;
}

// SetFoliageQuality @ 147c80310

void __thiscall UGameUserSettings::SetFoliageQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetFoliageQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetFrameRateLimit @ 147c803a0

void __thiscall UGameUserSettings::SetFrameRateLimit(UGameUserSettings *this,float param_1)

{
  this->FrameRateLimit = param_1;
  return;
}

// SetFrameRateLimitCVar @ 147c803b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UGameUserSettings::SetFrameRateLimitCVar(float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147c803c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GEngine->_padding_ + 800))(GEngine,param_1);
  return;
}

// SetFullscreenMode @ 147c803e0

void __thiscall UGameUserSettings::SetFullscreenMode(UGameUserSettings *this,Type param_1)

{
  float fVar1;
  
  if (this->FullscreenMode != param_1) {
    if (param_1 == Fullscreen) {
      this->FullscreenMode = 0;
    }
    else if (param_1 == WindowedFullscreen) {
      this->FullscreenMode = 1;
    }
    else {
      this->FullscreenMode = 2;
    }
    UKismetSystemLibrary::GetMinYResolutionFor3DView();
    if (this->FullscreenMode == 1) {
      GetDesktopResolution(this);
      if (this->FullscreenMode == 1) {
        GetDesktopResolution(this);
      }
    }
    this->MinResolutionScale = 0.0;
    if (this->bUseDesiredScreenHeight != false) {
      fVar1 = (float)(**(code **)(this->_padding_ + 0x330))(this);
      (this->ScalabilityQuality).ResolutionQuality = fVar1;
      return;
    }
    fVar1 = (this->ScalabilityQuality).ResolutionQuality;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    (this->ScalabilityQuality).ResolutionQuality = fVar1;
  }
  return;
}

// SetGlobalIlluminationQuality @ 147c805a0

void __thiscall UGameUserSettings::SetGlobalIlluminationQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetGlobalIlluminationQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetOverallScalabilityLevel @ 147c814f0

void __thiscall UGameUserSettings::SetOverallScalabilityLevel(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetFromSingleQualityLevel(&this->ScalabilityQuality,param_1);
  return;
}

// SetPostProcessingQuality @ 147c816f0

void __thiscall UGameUserSettings::SetPostProcessingQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetPostProcessQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetPreferredFullscreenMode @ 147c81700

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UGameUserSettings::SetPreferredFullscreenMode(UGameUserSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *this_00;
  
  this->PreferredFullscreenMode = param_1;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.FullScreenMode",1);
  if (this_00 != (IConsoleVariable *)0x0) {
    IConsoleVariable::Set<int>(this_00,param_1,ECVF_SetByGameSetting,(FName)0x0);
    return;
  }
  return;
}

// SetReflectionQuality @ 147c817a0

void __thiscall UGameUserSettings::SetReflectionQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetReflectionQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetResolutionScaleNormalized @ 147c817b0

void __thiscall
UGameUserSettings::SetResolutionScaleNormalized(UGameUserSettings *this,float param_1)

{
  SetResolutionScaleValueEx(this,param_1 * __real_42c80000);
  return;
}

// SetResolutionScaleValueEx @ 147c817d0

void __thiscall UGameUserSettings::SetResolutionScaleValueEx(UGameUserSettings *this,float param_1)

{
  int iVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int> TVar3;
  uint uVar4;
  
  iVar1 = this->FullscreenMode;
  if (__real_42c80000 <= param_1) {
    param_1 = __real_42c80000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  (this->ScalabilityQuality).ResolutionQuality = param_1;
  if (iVar1 == 1) {
    TVar2._s_0 = (TIntPoint<int>_u_0_s_0)GetDesktopResolution(this);
  }
  else {
    TVar2 = (TIntPoint<int>_u_0)&this->ResolutionSizeX;
  }
  iVar1 = *(int *)TVar2;
  if (this->FullscreenMode == 1) {
    TVar3 = GetDesktopResolution(this);
    uVar4 = *(uint *)((longlong)TVar3.field0_0x0 + 4);
  }
  else {
    uVar4 = this->ResolutionSizeY;
  }
  this->DesiredScreenWidth =
       (int)((float)iVar1 * (this->ScalabilityQuality).ResolutionQuality * __real_3c23d70a);
  this->DesiredScreenHeight =
       (int)((float)(int)uVar4 * (this->ScalabilityQuality).ResolutionQuality * __real_3c23d70a);
  return;
}

// SetScreenResolution @ 147c81880

void __thiscall
UGameUserSettings::SetScreenResolution(UGameUserSettings *this,TIntPoint<int> param_1)

{
  if ((this->ResolutionSizeX == param_1.field0_0x0._0_4_) &&
     (this->ResolutionSizeY == param_1.field0_0x0._4_4_)) {
    return;
  }
  this->ResolutionSizeX = param_1.field0_0x0._0_4_;
  this->ResolutionSizeY = param_1.field0_0x0._4_4_;
  UpdateResolutionQuality(this);
  return;
}

// SetShadingQuality @ 147c818c0

void __thiscall UGameUserSettings::SetShadingQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetShadingQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetShadowQuality @ 147c818d0

void __thiscall UGameUserSettings::SetShadowQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetShadowQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetSyncTypeCVar @ 147c823d0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UGameUserSettings::SetSyncTypeCVar(int param_1)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      SyncIntervalCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.GTSyncType",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7438083208559722850>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                       ,0x162,"SyncIntervalCVar");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    IConsoleVariable::Set<int>(SyncIntervalCVar,param_1,ECVF_SetByCode,(FName)0x0);
  }
  return;
}

// SetTextureQuality @ 147c824b0

void __thiscall UGameUserSettings::SetTextureQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetTextureQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetToDefaults @ 147c824c0

void __thiscall UGameUserSettings::SetToDefaults(UGameUserSettings *this)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  void *pvVar4;
  bool bVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar3 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  this->LastUserConfirmedResolutionSizeX = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  pTVar8 = (TConsoleVariableData<int> *)0x0;
  this->ResolutionSizeX = uVar3;
  uVar3 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  this->LastUserConfirmedResolutionSizeY = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  this->ResolutionSizeY = uVar3;
  this->WindowPosX_DEPRECATED = -1;
  this->WindowPosY_DEPRECATED = -1;
  piVar1 = &(this->WindowPositions).ArrayMax;
  (this->WindowPositions).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->WindowPositions).AllocatorInstance,0,piVar1);
  }
  this->FullscreenMode = 1;
  this->FrameRateLimit = 0.0;
  this->MinResolutionScale = 0.0;
  piVar1 = &(this->LastCPUBenchmarkSteps).ArrayMax;
  this->DesiredScreenWidth = 0x500;
  this->DesiredScreenHeight = 0x2d0;
  this->LastUserConfirmedDesiredScreenWidth = 0x500;
  this->LastUserConfirmedDesiredScreenHeight = 0x2d0;
  this->LastCPUBenchmarkResult = -1.0;
  this->LastGPUBenchmarkResult = -1.0;
  (this->LastCPUBenchmarkSteps).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LastCPUBenchmarkSteps).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->LastGPUBenchmarkSteps).ArrayMax;
  (this->LastGPUBenchmarkSteps).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LastGPUBenchmarkSteps).AllocatorInstance,0,piVar1);
  }
  pvVar4 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  this->LastGPUBenchmarkMultiplier = 1.0;
  this->LastRecommendedScreenWidth = -1.0;
  this->LastRecommendedScreenHeight = -1.0;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar10 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.FullScreenMode",1);
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    ::CVar = pTVar8;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar8 = ::CVar;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->PreferredFullscreenMode = pTVar8->ShadowedValue[0];
  Scalability::FQualityLevels::SetDefaults(&this->ScalabilityQuality);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar9 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar9,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    UKismetSystemLibrary::GetMinYResolutionFor3DView();
    if ((this->FullscreenMode == 1) && (GetDesktopResolution(this), this->FullscreenMode == 1)) {
      GetDesktopResolution(this);
    }
    this->MinResolutionScale = 0.0;
    if (this->bUseDesiredScreenHeight == false) {
      fVar11 = (this->ScalabilityQuality).ResolutionQuality;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      (this->ScalabilityQuality).ResolutionQuality = fVar11;
    }
    else {
      fVar11 = (float)(**(code **)(this->_padding_ + 0x330))(this);
      (this->ScalabilityQuality).ResolutionQuality = fVar11;
    }
  }
  this->bUseDynamicResolution = false;
  this->bUseHDRDisplayOutput = false;
  this->HDRDisplayOutputNits = 1000;
  return;
}

// SetVSyncEnabled @ 147c827e0

void __thiscall UGameUserSettings::SetVSyncEnabled(UGameUserSettings *this,bool param_1)

{
  this->bUseVSync = param_1;
  return;
}

// SetViewDistanceQuality @ 147c827f0

void __thiscall UGameUserSettings::SetViewDistanceQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetViewDistanceQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetVisualEffectQuality @ 147c82bf0

void __thiscall UGameUserSettings::SetVisualEffectQuality(UGameUserSettings *this,int param_1)

{
  Scalability::FQualityLevels::SetEffectsQuality(&this->ScalabilityQuality,param_1);
  return;
}

// SetWindowPosition @ 147c82c00

void __thiscall
UGameUserSettings::SetWindowPosition(UGameUserSettings *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147c82c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x308))();
  return;
}

// SetWindowPosition @ 147c82c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameUserSettings::SetWindowPosition(UGameUserSettings *this,int param_1,int param_2,int param_3)

{
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_28 [2];
  
  pTVar4 = CVar_GameUserSettings_WindowPositionsMaxSize.Ref;
  if (param_3 < 0) goto LAB_147c82de2;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_147c82c75:
    lVar8 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    lVar8 = 4;
    if (bVar5) goto LAB_147c82c75;
  }
  if (param_3 < *(int *)((longlong)pTVar4->ShadowedValue + lVar8)) {
    pTVar1 = &this->WindowPositions;
    uVar6 = (param_3 - (this->WindowPositions).ArrayNum) + 1;
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    if (0 < (int)uVar6) {
      uVar9 = (ulonglong)uVar6;
      do {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        local_28[0] = 0xffffffffffffffff;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar2 + (longlong)(this->WindowPositions).ArrayMax * 8)) &&
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
        iVar7 = (this->WindowPositions).ArrayNum;
        if (iVar7 == (this->WindowPositions).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar1->AllocatorInstance,&(this->WindowPositions).ArrayMax);
        }
        (this->WindowPositions).ArrayNum = iVar7 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar6 = 0;
    if (param_3 < (this->WindowPositions).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)param_3 * 8) = param_1;
    uVar6 = 0;
    if (param_3 < (this->WindowPositions).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)param_3 * 8 + 4) = param_2;
    return;
  }
LAB_147c82de2:
  if (2 < (byte)LogGameUserSettings._0_1_) {
    bVar5 = IsInParallelGameThread();
    if (!bVar5) {
      IsInGameThread();
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameUserSettings);
  }
  return;
}

// StaticRegisterNativesUGameUserSettings @ 147c88010

void __cdecl UGameUserSettings::StaticRegisterNativesUGameUserSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x48;
  local_18.DataPtr = Z_Construct_UClass_UGameUserSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsHDRDisplayOutput @ 147c89610

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UGameUserSettings::SupportsHDRDisplayOutput(UGameUserSettings *this)

{
  return GRHIGlobals.SupportsHDROutput;
}

// UpdateResolutionQuality @ 147c8ee70

void __thiscall UGameUserSettings::UpdateResolutionQuality(UGameUserSettings *this)

{
  float fVar1;
  
  UKismetSystemLibrary::GetMinYResolutionFor3DView();
  if (this->FullscreenMode == 1) {
    GetDesktopResolution(this);
    if (this->FullscreenMode == 1) {
      GetDesktopResolution(this);
    }
  }
  this->MinResolutionScale = 0.0;
  if (this->bUseDesiredScreenHeight != false) {
    fVar1 = (float)(**(code **)(this->_padding_ + 0x330))(this);
    (this->ScalabilityQuality).ResolutionQuality = fVar1;
    return;
  }
  fVar1 = (this->ScalabilityQuality).ResolutionQuality;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (this->ScalabilityQuality).ResolutionQuality = fVar1;
  return;
}

// UpdateVersion @ 147c8f110

void __thiscall UGameUserSettings::UpdateVersion(UGameUserSettings *this)

{
  this->Version = 5;
  return;
}

// ValidateSettings @ 147c8f980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameUserSettings::ValidateSettings(UGameUserSettings *this)

{
  char cVar1;
  int iVar2;
  FName *pFVar3;
  FConfigBranch *this_00;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  FName local_res8;
  FString local_18;
  
  cVar1 = (**(code **)(this->_padding_ + 0x358))();
  if (cVar1 == '\0') {
    (**(code **)(this->_padding_ + 0x2f0))(this,1);
    cVar1 = (**(code **)(this->_padding_ + 0x358))(this);
    if (cVar1 == '\0') {
      (**(code **)(this->_padding_ + 0x328))(this);
      pTVar6 = (TConsoleVariableData<int> *)0x0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar4 = IConsoleManager::Get();
        plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.VSync",1);
        if (plVar5 != (longlong *)0x0) {
          pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
        }
        CVarVSync = pTVar6;
        _Init_thread_footer(&::_TSS0);
      }
      iVar2 = TConsoleVariableData<int>::GetValueOnGameThread(CVarVSync);
      this->bUseVSync = iVar2 != 0;
      if (GEngine != (UEngine *)0x0) {
        this->bUseDynamicResolution = GEngine->bDynamicResolutionEnableUserSetting;
      }
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      pFVar3 = ::FName::FName(&local_res8,"GameUserSettings");
      this_00 = FConfigCacheIni::FindBranch(GConfig,*pFVar3,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FConfigBranch::Delete(this_00);
      (**(code **)(this->_padding_ + 0x2f0))(this,1);
    }
  }
  iVar2 = GSystemResolution.ResY;
  if ((this->ResolutionSizeX == 0) || (this->ResolutionSizeY == 0)) {
    if ((this->ResolutionSizeX != GSystemResolution.ResX) ||
       (this->ResolutionSizeY != GSystemResolution.ResY)) {
      this->ResolutionSizeX = GSystemResolution.ResX;
      this->ResolutionSizeY = iVar2;
      UpdateResolutionQuality(this);
    }
    this->LastConfirmedFullscreenMode = this->FullscreenMode;
    this->LastUserConfirmedResolutionSizeX = this->ResolutionSizeX;
    this->LastUserConfirmedResolutionSizeY = this->ResolutionSizeY;
  }
  if ((this->FullscreenMode == 1) && (GetDesktopResolution(this), this->FullscreenMode == 1)) {
    GetDesktopResolution(this);
  }
  this->LastUserConfirmedDesiredScreenWidth = this->DesiredScreenWidth;
  this->LastUserConfirmedDesiredScreenHeight = this->DesiredScreenHeight;
  if ((this->bUseHDRDisplayOutput != false) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x350))(this), cVar1 == '\0')) {
    this->bUseHDRDisplayOutput = false;
  }
  this->LastConfirmedAudioQualityLevel = this->AudioQualityLevel;
                    /* WARNING: Could not recover jumptable at 0x000147c8fb59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x360))(this);
  return;
}

// execApplyHardwareBenchmarkResults @ 147c90aa0

void __cdecl
UGameUserSettings::execApplyHardwareBenchmarkResults(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c90ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x348))();
  return;
}

// execApplyNonResolutionSettings @ 147c90ad0

void __cdecl
UGameUserSettings::execApplyNonResolutionSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c90ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

// execApplyResolutionSettings @ 147c91680

void __cdecl
UGameUserSettings::execApplyResolutionSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ApplyResolutionSettings((UGameUserSettings *)param_1,local_res10[0] != 0);
  return;
}

// execApplySettings @ 147c91710

void __cdecl UGameUserSettings::execApplySettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8[0] != 0);
  return;
}

// execConfirmVideoMode @ 147c93f40

void __cdecl UGameUserSettings::execConfirmVideoMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c93f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c8))();
  return;
}

// execEnableHDRDisplayOutput @ 147c94f70

void __cdecl
UGameUserSettings::execEnableHDRDisplayOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnableHDRDisplayOutputInternal((UGameUserSettings *)param_1,bVar2,local_res20[0],false);
  return;
}

// execGetAntiAliasingQuality @ 147c96510

void __cdecl
UGameUserSettings::execGetAntiAliasingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x10;
  return;
}

// execGetAudioQualityLevel @ 147c96540

void __cdecl
UGameUserSettings::execGetAudioQualityLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[4].field_0x20;
  return;
}

// execGetCurrentHDRDisplayNits @ 147c96a50

void __cdecl
UGameUserSettings::execGetCurrentHDRDisplayNits(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[7].field_0x4 != '\0') {
    *(undefined4 *)param_3 = *(undefined4 *)&param_1[7].field_0x8;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetDefaultResolution @ 147c96e70

void __cdecl
UGameUserSettings::execGetDefaultResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(TIntPoint<int>_u_0 *)param_3 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return;
}

// execGetDefaultResolutionScale @ 147c96ea0

void __cdecl
UGameUserSettings::execGetDefaultResolutionScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x330))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetDefaultWindowMode @ 147c96ee0

void __cdecl
UGameUserSettings::execGetDefaultWindowMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetDefaultWindowPosition @ 147c96f00

void __cdecl
UGameUserSettings::execGetDefaultWindowPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0xffffffffffffffff;
  return;
}

// execGetDesktopResolution @ 147c96f30

void __cdecl
UGameUserSettings::execGetDesktopResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  TIntPoint<int> TVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar1 = GetDesktopResolution((UGameUserSettings *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)TVar1.field0_0x0;
  return;
}

// execGetFoliageQuality @ 147c97040

void __cdecl
UGameUserSettings::execGetFoliageQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x4;
  return;
}

// execGetFramePace @ 147c97070

void __cdecl UGameUserSettings::execGetFramePace(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = FGenericPlatformRHIFramePacer::GetFramePaceFromSyncInterval();
  *(int *)param_3 = iVar1;
  return;
}

// execGetFrameRateLimit @ 147c970a0

void __cdecl
UGameUserSettings::execGetFrameRateLimit(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 5);
  return;
}

// execGetFullscreenMode @ 147c970d0

void __cdecl
UGameUserSettings::execGetFullscreenMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[4].field_0x10 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (*(int *)&param_1[4].field_0x10 != 1) {
    *(undefined1 *)param_3 = 2;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetGameUserSettings @ 147c97320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGameUserSettings::execGetGameUserSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  UGameUserSettings *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UEngine::GetGameUserSettings(GEngine);
  *(UGameUserSettings **)param_3 = pUVar1;
  return;
}

// execGetGlobalIlluminationQuality @ 147c97360

void __cdecl
UGameUserSettings::execGetGlobalIlluminationQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x18;
  return;
}

// execGetLastConfirmedFullscreenMode @ 147c97790

void __cdecl
UGameUserSettings::execGetLastConfirmedFullscreenMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[4].field_0x14 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (*(int *)&param_1[4].field_0x14 != 1) {
    *(undefined1 *)param_3 = 2;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetLastConfirmedScreenResolution @ 147c977d0

void __cdecl
UGameUserSettings::execGetLastConfirmedScreenResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x18;
  return;
}

// execGetOverallScalabilityLevel @ 147c97cf0

void __cdecl
UGameUserSettings::execGetOverallScalabilityLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetPostProcessingQuality @ 147c98870

void __cdecl
UGameUserSettings::execGetPostProcessingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x20;
  return;
}

// execGetPreferredFullscreenMode @ 147c988a0

void __cdecl
UGameUserSettings::execGetPreferredFullscreenMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(int *)&param_1[4].field_0x18 != 0;
  return;
}

// execGetRecommendedResolutionScale @ 147c98980

void __cdecl
UGameUserSettings::execGetRecommendedResolutionScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x338))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetReflectionQuality @ 147c989c0

void __cdecl
UGameUserSettings::execGetReflectionQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x1c;
  return;
}

// execGetResolutionScaleInformationEx @ 147c989f0

void __cdecl
UGameUserSettings::execGetResolutionScaleInformationEx
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  float fVar3;
  uchar *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float local_res8 [2];
  float local_res10 [2];
  float local_res20 [2];
  uchar local_38 [16];
  
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar5 = local_res8;
  if (pfVar1 != (float *)0x0) {
    pfVar5 = pfVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar6 = local_res10;
  if (pfVar1 != (float *)0x0) {
    pfVar6 = pfVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = local_res20;
  if (pfVar1 != (float *)0x0) {
    pfVar7 = pfVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  fVar3 = __real_42c80000;
  puVar4 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pfVar6 = *(float *)&param_1[1].field_0x8;
  *pfVar7 = 0.0;
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = 200;
  puVar4[3] = 'B';
  *pfVar5 = (*pfVar6 - *pfVar7) / (fVar3 - *pfVar7);
  return;
}

// execGetResolutionScaleNormalized @ 147c98bb0

void __cdecl
UGameUserSettings::execGetResolutionScaleNormalized(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = *(float *)&param_1[1].field_0x8 * __real_3c23d70a;
  return;
}

// execGetScreenResolution @ 147c98be0

void __cdecl
UGameUserSettings::execGetScreenResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x10;
  return;
}

// execGetShadingQuality @ 147c98c60

void __cdecl
UGameUserSettings::execGetShadingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x8;
  return;
}

// execGetShadowQuality @ 147c98c90

void __cdecl UGameUserSettings::execGetShadowQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x14;
  return;
}

// execGetSyncInterval @ 147c99000

void __cdecl UGameUserSettings::execGetSyncInterval(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  IConsoleManager *pIVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)_tls_index;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      SyncIntervalCVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"rhi.syncinterval",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (SyncIntervalCVar == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7438083208559723253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameUserSettings.cpp"
                       ,0x2f5,"SyncIntervalCVar");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)param_3 = 0;
    return;
  }
  uVar3 = (**(code **)(*(longlong *)SyncIntervalCVar + 200))();
  *(undefined4 *)param_3 = uVar3;
  return;
}

// execGetTextureQuality @ 147c990f0

void __cdecl
UGameUserSettings::execGetTextureQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x24;
  return;
}

// execGetViewDistanceQuality @ 147c99280

void __cdecl
UGameUserSettings::execGetViewDistanceQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0xc;
  return;
}

// execGetVisualEffectQuality @ 147c99750

void __cdecl
UGameUserSettings::execGetVisualEffectQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 2);
  return;
}

// execIsDirty @ 147c9a250

void __cdecl UGameUserSettings::execIsDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsDynamicResolutionDirty @ 147c9a290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGameUserSettings::execIsDynamicResolutionDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  UGameViewportClient *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((GEngine != (UEngine *)0x0) &&
      (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
     && (pUVar1->ViewportFrame != (FViewportFrame *)0x0)) {
    *(bool *)param_3 = (bool)param_1[1].field_0x1 != GEngine->bDynamicResolutionEnableUserSetting;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsDynamicResolutionEnabled @ 147c9a2f0

void __cdecl
UGameUserSettings::execIsDynamicResolutionEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsFullscreenModeDirty @ 147c9a330

void __cdecl
UGameUserSettings::execIsFullscreenModeDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsFullscreenModeDirty((UGameUserSettings *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsHDREnabled @ 147c9a430

void __cdecl UGameUserSettings::execIsHDREnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x4;
  return;
}

// execIsScreenResolutionDirty @ 147c9a460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGameUserSettings::execIsScreenResolutionDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  UGameViewportClient *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((GEngine != (UEngine *)0x0) &&
       (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
      && (pUVar1->ViewportFrame != (FViewportFrame *)0x0)) &&
     ((*(int *)&param_1[3].field_0x10 != GSystemResolution.ResX ||
      (*(int *)&param_1[3].field_0x14 != GSystemResolution.ResY)))) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsVSyncDirty @ 147c9a5a0

void __cdecl UGameUserSettings::execIsVSyncDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsVSyncDirty((UGameUserSettings *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsVSyncEnabled @ 147c9a5e0

void __cdecl UGameUserSettings::execIsVSyncEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 1);
  return;
}

// execLoadSettings @ 147c9a8b0

void __cdecl UGameUserSettings::execLoadSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f0))(param_1,local_res8[0] != 0);
  return;
}

// execResetToCurrentSettings @ 147c9d830

void __cdecl
UGameUserSettings::execResetToCurrentSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9d848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x300))();
  return;
}

// execRevertVideoMode @ 147c9db60

void __cdecl UGameUserSettings::execRevertVideoMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x10 = *(undefined4 *)&param_1[4].field_0x14;
  *(undefined4 *)&param_1[3].field_0x10 = *(undefined4 *)&param_1[3].field_0x18;
  *(undefined4 *)&param_1[3].field_0x14 = *(undefined4 *)&param_1[3].field_0x1c;
  return;
}

// execRunHardwareBenchmark @ 147c9dba0

void __cdecl
UGameUserSettings::execRunHardwareBenchmark(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x340))(param_1,local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execSaveSettings @ 147c9e030

void __cdecl UGameUserSettings::execSaveSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c9e048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f8))();
  return;
}

// execSetAntiAliasingQuality @ 147c9e1d0

void __cdecl
UGameUserSettings::execSetAntiAliasingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetAntiAliasingQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetAudioQualityLevel @ 147c9e260

void __cdecl
UGameUserSettings::execSetAudioQualityLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[4].field_0x20 != local_res8[0]) {
    *(int *)&param_1[4].field_0x20 = local_res8[0];
    USoundCue::StaticAudioQualityChanged(local_res8[0]);
  }
  return;
}

// execSetBenchmarkFallbackValues @ 147c9e470

void __cdecl
UGameUserSettings::execSetBenchmarkFallbackValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetBenchmarkFallback((FQualityLevels *)&param_1[1].field_0x8);
  return;
}

// execSetDynamicResolutionEnabled @ 147c9e530

void __cdecl
UGameUserSettings::execSetDynamicResolutionEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x1 = local_res8[0] != 0;
  return;
}

// execSetFoliageQuality @ 147c9e6c0

void __cdecl
UGameUserSettings::execSetFoliageQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetFoliageQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetFrameRateLimit @ 147c9e850

void __cdecl
UGameUserSettings::execSetFrameRateLimit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 5) = local_res8[0];
  return;
}

// execSetFullscreenMode @ 147c9e8e0

void __cdecl
UGameUserSettings::execSetFullscreenMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFullscreenMode((UGameUserSettings *)param_1,(uint)local_res10[0]);
  return;
}

// execSetGlobalIlluminationQuality @ 147c9eaa0

void __cdecl
UGameUserSettings::execSetGlobalIlluminationQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetGlobalIlluminationQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetOverallScalabilityLevel @ 147c9f3f0

void __cdecl
UGameUserSettings::execSetOverallScalabilityLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res8[0]);
  return;
}

// execSetPostProcessingQuality @ 147c9f650

void __cdecl
UGameUserSettings::execSetPostProcessingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetPostProcessQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetReflectionQuality @ 147c9f6e0

void __cdecl
UGameUserSettings::execSetReflectionQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetReflectionQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetResolutionScaleNormalized @ 147c9f770

void __cdecl
UGameUserSettings::execSetResolutionScaleNormalized(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0] * __real_42c80000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetResolutionScaleValueEx((UGameUserSettings *)param_1,fVar2);
  return;
}

// execSetResolutionScaleValueEx @ 147c9f800

void __cdecl
UGameUserSettings::execSetResolutionScaleValueEx(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetResolutionScaleValueEx((UGameUserSettings *)param_1,local_res10[0]);
  return;
}

// execSetScreenResolution @ 147c9f890

void __cdecl
UGameUserSettings::execSetScreenResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)&param_1[3].field_0x10 != local_res8._0_4_) ||
     (*(int *)&param_1[3].field_0x14 != local_res8._4_4_)) {
    *(int *)&param_1[3].field_0x10 = local_res8._0_4_;
    *(int *)&param_1[3].field_0x14 = local_res8._4_4_;
    UpdateResolutionQuality((UGameUserSettings *)param_1);
  }
  return;
}

// execSetShadingQuality @ 147c9f940

void __cdecl
UGameUserSettings::execSetShadingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetShadingQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetShadowQuality @ 147c9f9d0

void __cdecl UGameUserSettings::execSetShadowQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetShadowQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetTextureQuality @ 147ca0030

void __cdecl
UGameUserSettings::execSetTextureQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetTextureQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetToDefaults @ 147ca00c0

void __cdecl UGameUserSettings::execSetToDefaults(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147ca00d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x328))();
  return;
}

// execSetVSyncEnabled @ 147ca00f0

void __cdecl UGameUserSettings::execSetVSyncEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)(param_1 + 1) = local_res8[0] != 0;
  return;
}

// execSetViewDistanceQuality @ 147ca0180

void __cdecl
UGameUserSettings::execSetViewDistanceQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetViewDistanceQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSetVisualEffectQuality @ 147ca03b0

void __cdecl
UGameUserSettings::execSetVisualEffectQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scalability::FQualityLevels::SetEffectsQuality
            ((FQualityLevels *)&param_1[1].field_0x8,local_res8[0]);
  return;
}

// execSupportsHDRDisplayOutput @ 147ca3a40

void __cdecl
UGameUserSettings::execSupportsHDRDisplayOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x350))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execValidateSettings @ 147ca40e0

void __cdecl UGameUserSettings::execValidateSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147ca40f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

