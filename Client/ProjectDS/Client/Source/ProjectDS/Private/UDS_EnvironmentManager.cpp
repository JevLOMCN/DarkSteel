// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b48edc0

UClass * __cdecl UDS_EnvironmentManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EnvironmentManager",
               &Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton,
               StaticRegisterNativesUDS_EnvironmentManager,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EnvironmentManager>,
               InternalVTableHelperCtorCaller<UDS_EnvironmentManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton;
}

// UDS_EnvironmentManager @ 14b492880

UDS_EnvironmentManager * __thiscall
UDS_EnvironmentManager::UDS_EnvironmentManager(UDS_EnvironmentManager *this,FVTableHelper *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_4240c388d0004000;
  this->_padding_ = (longlong)&___7UDS_EnvironmentManager__6B_;
  (this->InGameTimeData).GameTimeStartTime.Ticks = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = __real_4220c388d0010000;
  (this->InGameTimeData).OneGameDay.Ticks = (longlong)auVar1._0_8_;
  auVar2 = roundpd(auVar2,auVar2,1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __real_4239254d38008000;
  (this->InGameTimeData).SunriseTime.Ticks = (longlong)auVar2._0_8_;
  (this->InGameTimeData).DuskTime.Ticks = (longlong)auVar1._0_8_;
  auVar1 = roundpd(auVar3,auVar3,1);
  (this->InGameTimeData).DayDuration.Ticks = (longlong)auVar1._0_8_;
  (this->InGameTimeData).NightDuration.Ticks = (longlong)auVar2._0_8_;
  (this->InGameTimeData).TimeUntilNextSunrise.Ticks = 0;
  (this->InGameTimeData).TimeUntilNextNight.Ticks = 0;
  (this->InGameTimeData).TimeUntilNextDay.Ticks = 0;
  (this->InGameTimeData).TimeOfDay.Ticks = 0;
  (this->InGameTimeData).SunriseTOD = 600.0;
  (this->InGameTimeData).DuskTOD = 2400.0;
  (this->InGameTimeData).CurrentTOD = 0.0;
  (this->InGameTimeData).PreviousTOD = 0.0;
  (this->TodayWeatherData).FixedWeatherIDs.ArrayNum = 0;
  (this->TodayWeatherData).FixedWeatherIDs.ArrayMax = 0;
  (this->TodayWeatherData).RandomWeatherIDs.ArrayNum = 0;
  (this->TodayWeatherData).RandomWeatherIDs.ArrayMax = 0;
  (this->TodayWeatherData).WeatherProbability = 0.0;
  (this->NextDayWeatherData).FixedWeatherIDs.ArrayNum = 0;
  (this->NextDayWeatherData).FixedWeatherIDs.ArrayMax = 0;
  (this->NextDayWeatherData).RandomWeatherIDs.ArrayNum = 0;
  (this->NextDayWeatherData).RandomWeatherIDs.ArrayMax = 0;
  (this->NextDayWeatherData).WeatherProbability = 0.0;
  (this->TodayWeatherData).FixedWeatherIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TodayWeatherData).RandomWeatherIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextDayWeatherData).FixedWeatherIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NextDayWeatherData).RandomWeatherIDs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  return this;
}

// UDS_EnvironmentManager @ 14b492980

UDS_EnvironmentManager * __thiscall
UDS_EnvironmentManager::UDS_EnvironmentManager
          (UDS_EnvironmentManager *this,FObjectInitializer *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_4240c388d0004000;
  this->_padding_ = (longlong)&___7UDS_EnvironmentManager__6B_;
  (this->InGameTimeData).GameTimeStartTime.Ticks = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = __real_4220c388d0010000;
  (this->InGameTimeData).OneGameDay.Ticks = (longlong)auVar1._0_8_;
  auVar2 = roundpd(auVar2,auVar2,1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = __real_4239254d38008000;
  (this->InGameTimeData).SunriseTime.Ticks = (longlong)auVar2._0_8_;
  (this->InGameTimeData).DuskTime.Ticks = (longlong)auVar1._0_8_;
  auVar1 = roundpd(auVar3,auVar3,1);
  (this->InGameTimeData).DayDuration.Ticks = (longlong)auVar1._0_8_;
  (this->InGameTimeData).NightDuration.Ticks = (longlong)auVar2._0_8_;
  (this->InGameTimeData).TimeUntilNextSunrise.Ticks = 0;
  (this->InGameTimeData).TimeUntilNextNight.Ticks = 0;
  (this->InGameTimeData).TimeUntilNextDay.Ticks = 0;
  (this->InGameTimeData).TimeOfDay.Ticks = 0;
  (this->InGameTimeData).SunriseTOD = 600.0;
  (this->InGameTimeData).DuskTOD = 2400.0;
  (this->InGameTimeData).CurrentTOD = 0.0;
  (this->InGameTimeData).PreviousTOD = 0.0;
  (this->TodayWeatherData).FixedWeatherIDs.ArrayNum = 0;
  (this->TodayWeatherData).FixedWeatherIDs.ArrayMax = 0;
  (this->TodayWeatherData).RandomWeatherIDs.ArrayNum = 0;
  (this->TodayWeatherData).RandomWeatherIDs.ArrayMax = 0;
  (this->TodayWeatherData).WeatherProbability = 0.0;
  (this->NextDayWeatherData).FixedWeatherIDs.ArrayNum = 0;
  (this->NextDayWeatherData).FixedWeatherIDs.ArrayMax = 0;
  (this->NextDayWeatherData).RandomWeatherIDs.ArrayNum = 0;
  (this->NextDayWeatherData).RandomWeatherIDs.ArrayMax = 0;
  (this->NextDayWeatherData).WeatherProbability = 0.0;
  (this->TodayWeatherData).FixedWeatherIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TodayWeatherData).RandomWeatherIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextDayWeatherData).FixedWeatherIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NextDayWeatherData).RandomWeatherIDs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  return this;
}

// ~UDS_EnvironmentManager @ 14b4937d0

void __thiscall UDS_EnvironmentManager::~UDS_EnvironmentManager(UDS_EnvironmentManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_EnvironmentManager__6B_;
  pFVar1 = (this->NextDayWeatherData).RandomWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextDayWeatherData).FixedWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TodayWeatherData).RandomWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TodayWeatherData).FixedWeatherIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b495260

UClass * __cdecl UDS_EnvironmentManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EnvironmentManager",
               &Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton,
               StaticRegisterNativesUDS_EnvironmentManager,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EnvironmentManager>,
               InternalVTableHelperCtorCaller<UDS_EnvironmentManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EnvironmentManager.InnerSingleton;
}

// StaticRegisterNativesUDS_EnvironmentManager @ 14b495860

void __cdecl UDS_EnvironmentManager::StaticRegisterNativesUDS_EnvironmentManager(void)

{
  return;
}

// Created @ 14bb5c990

void __thiscall UDS_EnvironmentManager::Created(UDS_EnvironmentManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb5d850

void __thiscall UDS_EnvironmentManager::Destroyed(UDS_EnvironmentManager *this)

{
  UDS_ZoneManager *pUVar1;
  UDS_EnvironmentEvent *pUVar2;
  
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 != (UDS_ZoneManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ZoneDistrictChangedDelegate,this);
  }
  pUVar2 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar2 != (UDS_EnvironmentEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2->QueryDayNight);
    return;
  }
  return;
}

// GetInst @ 14bb65d30

UDS_EnvironmentManager * __cdecl UDS_EnvironmentManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_EnvironmentManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_EnvironmentManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_EnvironmentManager_NoRegister();
  pUVar3 = (UDS_EnvironmentManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_EnvironmentManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_EnvironmentManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_EnvironmentManager *)0x0;
}

// Init @ 14bb6a650

void __thiscall UDS_EnvironmentManager::Init(UDS_EnvironmentManager *this)

{
  UDS_ZoneManager *pUVar1;
  UDS_EnvironmentEvent *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_EnvironmentManager *local_res10;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 != (UDS_ZoneManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_EnvironmentManager>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pUVar1->ZoneDistrictChangedDelegate,(UDS_EnvironmentManager *)&local_res10,
               (pmf_babb49d1)this);
  }
  pUVar2 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar2 != (UDS_EnvironmentEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2->QueryDayNight);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2->QueryDayNight,
               (FWriteAccessScope *)&local_28);
    local_10 = &(pUVar2->QueryDayNight).Delegate.field_0x8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6A_B_NXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_EnvironmentManager____A6A_B_NXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_EnvironmentManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_EnvironmentManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = IsNight;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// InitInGameTime @ 14bb6b2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_EnvironmentManager::InitInGameTime(UDS_EnvironmentManager *this)

{
  UDS_EnvironmentEvent *pUVar1;
  FDS_GameTimeDataTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  UWorld *this_00;
  UWN_UDS_Subsystem *this_01;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FDS_InGameTimeData::InitGameTimeData(&this->InGameTimeData);
  FDS_InGameTimeData::CalculateTime(&this->InGameTimeData);
  pUVar1 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar1 != (UDS_EnvironmentEvent *)0x0) {
    FDS_EventDelegate<FDS_InGameTimeData_const_&>::Broadcast
              (&pUVar1->OnUpdateGameTime,&this->InGameTimeData);
  }
  pFVar2 = FDS_GameTimeDataTableRow::Get(1,true);
  if (pFVar2 == (FDS_GameTimeDataTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_EnvironmentManager::InitInGameTime",0x26,Yes);
    pwVar5 = L"gameTimeDataRow == nullptr";
    uVar4 = 100;
  }
  else {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (this_00 == (UWorld *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EnvironmentManager::InitInGameTime",0x26,Yes);
      pwVar5 = L"world == nullptr";
      uVar4 = 0x6b;
    }
    else {
      this_01 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
      if (this_01 != (UWN_UDS_Subsystem *)0x0) {
        UWN_UDS_Subsystem::InitTODs
                  (this_01,(this->InGameTimeData).CurrentTOD,(this->InGameTimeData).SunriseTOD,
                   (this->InGameTimeData).DuskTOD);
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EnvironmentManager::InitInGameTime",0x26,Yes);
      pwVar5 = L"udsSubsystem == nullptr";
      uVar4 = 0x72;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// IsNight @ 14bb6efe0

bool __thiscall UDS_EnvironmentManager::IsNight(UDS_EnvironmentManager *this)

{
  return (this->InGameTimeData).TimeUntilNextSunrise.Ticks <
         (this->InGameTimeData).TimeUntilNextNight.Ticks;
}

// OnChangedZoneDistrictID @ 14bb72140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_EnvironmentManager::OnChangedZoneDistrictID
          (UDS_EnvironmentManager *this,uint param_1,uint param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_EnvironmentManager::OnChangedZoneDistrictID",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0xfb,
               L"[Env] OnChangedZoneDistrictID - ZoneId : %u, DistrictID : %u");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  FDS_EnvironmentService::RequestWeather(param_1,param_2,UpdateZone);
  return;
}

// OnReceiveWeather @ 14bb77170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_EnvironmentManager::OnReceiveWeather
          (UDS_EnvironmentManager *this,WeatherResponse *param_1,EDS_EnvironmentUpdate param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  UDS_ZoneManager *pUVar8;
  UDS_LogManager *pUVar9;
  undefined1 *puVar10;
  UDS_EnvironmentEvent *pUVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStackY_518 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pUVar8 = UDS_ZoneManager::GetInst();
  if (pUVar8 == (UDS_ZoneManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,"UDS_EnvironmentManager::OnReceiveWeather",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_4c8.Ptr,0x7e,L"zoneManager == nullptr");
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
    }
  }
  else {
    uVar7 = pUVar8->DistrictID;
    uVar1 = pUVar8->ZoneID;
    FDS_DayWeatherData::InitDayWeatherData(&this->TodayWeatherData,uVar1,uVar7);
    FDS_DayWeatherData::InitDayWeatherData(&this->NextDayWeatherData,uVar1,uVar7);
    pUVar9 = UDS_LogManager::GetInst();
    uVar13 = 0;
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_EnvironmentManager::OnReceiveWeather",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Display,local_3a8.Ptr,0x87,
                 L"[Env] today_weather_probability : %d, tomorrow_weather_probability : %d");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    fVar5 = __real_42c80000;
    fVar16 = (float)((double)(param_1->_impl_).today_weather_probability_ * __real_3eb0c6f7a0b5ed8d)
             * __real_42c80000;
    if (__real_42c80000 <= fVar16) {
      fVar16 = __real_42c80000;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    (this->TodayWeatherData).WeatherProbability = fVar16;
    fVar16 = (float)((double)(param_1->_impl_).tomorrow_weather_probability_ *
                    __real_3eb0c6f7a0b5ed8d) * fVar5;
    if (fVar5 <= fVar16) {
      fVar16 = fVar5;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    (this->NextDayWeatherData).WeatherProbability = fVar16;
    uVar12 = (param_1->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar12 & 4) == 0) {
      uVar7 = (uint)uVar12 & 3;
    }
    else {
      uVar7 = (param_1->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    uVar12 = uVar13;
    uVar15 = uVar13;
    if (0 < (int)uVar7) {
      do {
        uVar3 = (param_1->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
        if ((uVar3 & 4) == 0) {
          puVar10 = (undefined1 *)
                    ((longlong)&(param_1->_impl_).today_weather_.soo_rep_.field0_0x0 + 8);
        }
        else {
          puVar10 = (undefined1 *)(uVar3 & 0xfffffffffffffff8);
        }
        FDS_DayWeatherData::SetRandomWeatherForHour
                  (&this->TodayWeatherData,(int)uVar12,*(int *)(puVar10 + uVar15 * 4));
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_EnvironmentManager::OnReceiveWeather",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_288.Ptr,0x91,
                     L"[Env] today_weather - hour : %d, weatherID : %d");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
        uVar15 = uVar15 + 1;
        uVar12 = (ulonglong)((int)uVar12 + 1);
      } while ((longlong)uVar15 < (longlong)(int)uVar7);
    }
    uVar12 = (param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar12 & 4) == 0) {
      uVar7 = (uint)uVar12 & 3;
    }
    else {
      uVar7 = (param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    uVar12 = uVar13;
    if (0 < (int)uVar7) {
      do {
        uVar15 = (param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
        if ((uVar15 & 4) == 0) {
          puVar10 = (undefined1 *)
                    ((longlong)&(param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0 + 8);
        }
        else {
          puVar10 = (undefined1 *)(uVar15 & 0xfffffffffffffff8);
        }
        iVar2 = *(int *)(puVar10 + uVar13 * 4);
        iVar14 = (int)uVar12;
        if (((-1 < iVar14) && (iVar14 < (this->NextDayWeatherData).RandomWeatherIDs.ArrayNum)) &&
           (0 < iVar2)) {
          if ((iVar14 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)((this->NextDayWeatherData).RandomWeatherIDs.AllocatorInstance.Data + uVar13 * 4)
               = iVar2;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_EnvironmentManager::OnReceiveWeather",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_168.Ptr,0x99,
                     L"[Env] tomorrow_weather - hour : %d, weatherID : %d");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = (ulonglong)(iVar14 + 1);
      } while ((longlong)uVar13 < (longlong)(int)uVar7);
    }
    pUVar11 = UDS_EnvironmentEvent::GetEvent();
    if (pUVar11 != (UDS_EnvironmentEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_EnvironmentUpdate>::Broadcast
                (&pUVar11->OnUpdateEnvironment,param_2);
    }
  }
  return;
}

// OnReceiveWeatherCheat @ 14bb775f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_EnvironmentManager::OnReceiveWeatherCheat
          (UDS_EnvironmentManager *this,WeatherCheatResponse *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  UDS_ZoneManager *pUVar8;
  UDS_LogManager *pUVar9;
  undefined1 *puVar10;
  UDS_EnvironmentEvent *pUVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStackY_518 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pUVar8 = UDS_ZoneManager::GetInst();
  if (pUVar8 == (UDS_ZoneManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,"UDS_EnvironmentManager::OnReceiveWeatherCheat",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_4c8.Ptr,0xa7,L"zoneManager == nullptr");
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
    }
  }
  else {
    uVar7 = pUVar8->DistrictID;
    uVar1 = pUVar8->ZoneID;
    FDS_DayWeatherData::InitDayWeatherData(&this->TodayWeatherData,uVar1,uVar7);
    FDS_DayWeatherData::InitDayWeatherData(&this->NextDayWeatherData,uVar1,uVar7);
    pUVar9 = UDS_LogManager::GetInst();
    uVar13 = 0;
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_EnvironmentManager::OnReceiveWeatherCheat",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Display,local_3a8.Ptr,0xb0,
                 L"[Env][Cheat] today_weather_probability : %d, tomorrow_weather_probability : %d");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    fVar5 = __real_42c80000;
    fVar16 = (float)((double)(param_1->_impl_).today_weather_probability_ * __real_3eb0c6f7a0b5ed8d)
             * __real_42c80000;
    if (__real_42c80000 <= fVar16) {
      fVar16 = __real_42c80000;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    (this->TodayWeatherData).WeatherProbability = fVar16;
    fVar16 = (float)((double)(param_1->_impl_).tomorrow_weather_probability_ *
                    __real_3eb0c6f7a0b5ed8d) * fVar5;
    if (fVar5 <= fVar16) {
      fVar16 = fVar5;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    (this->NextDayWeatherData).WeatherProbability = fVar16;
    uVar12 = (param_1->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar12 & 4) == 0) {
      uVar7 = (uint)uVar12 & 3;
    }
    else {
      uVar7 = (param_1->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    uVar12 = uVar13;
    uVar15 = uVar13;
    if (0 < (int)uVar7) {
      do {
        uVar3 = (param_1->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
        if ((uVar3 & 4) == 0) {
          puVar10 = (undefined1 *)
                    ((longlong)&(param_1->_impl_).today_weather_.soo_rep_.field0_0x0 + 8);
        }
        else {
          puVar10 = (undefined1 *)(uVar3 & 0xfffffffffffffff8);
        }
        FDS_DayWeatherData::SetRandomWeatherForHour
                  (&this->TodayWeatherData,(int)uVar12,*(int *)(puVar10 + uVar15 * 4));
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_EnvironmentManager::OnReceiveWeatherCheat",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_288.Ptr,0xba,
                     L"[Env][Cheat] today_weather - hour : %d, weatherID : %d");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
        uVar15 = uVar15 + 1;
        uVar12 = (ulonglong)((int)uVar12 + 1);
      } while ((longlong)uVar15 < (longlong)(int)uVar7);
    }
    uVar12 = (param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar12 & 4) == 0) {
      uVar7 = (uint)uVar12 & 3;
    }
    else {
      uVar7 = (param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    uVar12 = uVar13;
    if (0 < (int)uVar7) {
      do {
        uVar15 = (param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
        if ((uVar15 & 4) == 0) {
          puVar10 = (undefined1 *)
                    ((longlong)&(param_1->_impl_).tomorrow_weather_.soo_rep_.field0_0x0 + 8);
        }
        else {
          puVar10 = (undefined1 *)(uVar15 & 0xfffffffffffffff8);
        }
        iVar2 = *(int *)(puVar10 + uVar13 * 4);
        iVar14 = (int)uVar12;
        if (((-1 < iVar14) && (iVar14 < (this->NextDayWeatherData).RandomWeatherIDs.ArrayNum)) &&
           (0 < iVar2)) {
          if ((iVar14 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)((this->NextDayWeatherData).RandomWeatherIDs.AllocatorInstance.Data + uVar13 * 4)
               = iVar2;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_EnvironmentManager::OnReceiveWeatherCheat",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_168.Ptr,0xc2,
                     L"[Env][Cheat] tomorrow_weather - hour : %d, weatherID : %d");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = (ulonglong)(iVar14 + 1);
      } while ((longlong)uVar13 < (longlong)(int)uVar7);
    }
    pUVar11 = UDS_EnvironmentEvent::GetEvent();
    if (pUVar11 != (UDS_EnvironmentEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_EnvironmentUpdate>::Broadcast
                (&pUVar11->OnUpdateEnvironment,CheatWeather);
    }
  }
  return;
}

// RequestWeather @ 14bb85e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_EnvironmentManager::RequestWeather(UDS_EnvironmentManager *this,EDS_EnvironmentUpdate param_1)

{
  UDS_ZoneManager *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 == (UDS_ZoneManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EnvironmentManager::RequestWeather",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xd5,L"zoneManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    FDS_EnvironmentService::RequestWeather(pUVar1->ZoneID,pUVar1->DistrictID,param_1);
  }
  return;
}

// Update @ 14bb95fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_EnvironmentManager::Update(UDS_EnvironmentManager *this,float *param_1)

{
  ulong64 uVar1;
  UDS_EnvironmentEvent *pUVar2;
  UWorld *this_00;
  UDS_LogManager *pUVar3;
  UWN_UDS_Subsystem *this_01;
  UDS_ZoneManager *pUVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar1 = FDS_InGameTimeData::CalculateTime(&this->InGameTimeData);
  pUVar2 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar2 != (UDS_EnvironmentEvent *)0x0) {
    FDS_EventDelegate<FDS_InGameTimeData_const_&>::Broadcast
              (&pUVar2->OnUpdateGameTime,&this->InGameTimeData);
  }
  if ((uVar1 & 1) == 0) goto LAB_14bb96122;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 == (UWorld *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bb96122;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_EnvironmentManager::UpdateUDSSubSystemTOD",0x2d,Yes);
    pwVar6 = L"world == nullptr";
    uVar5 = 0xeb;
  }
  else {
    this_01 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
    if (this_01 != (UWN_UDS_Subsystem *)0x0) {
      UWN_UDS_Subsystem::UpdateTOD(this_01,(this->InGameTimeData).CurrentTOD);
      goto LAB_14bb96122;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bb96122;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_EnvironmentManager::UpdateUDSSubSystemTOD",0x2d,Yes);
    pwVar6 = L"udsSubsystem == nullptr";
    uVar5 = 0xf2;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bb96122:
  if ((uVar1 & 2) != 0) {
    pUVar4 = UDS_ZoneManager::GetInst();
    if (pUVar4 == (UDS_ZoneManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EnvironmentManager::RequestWeather",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xd5,L"zoneManager == nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      FDS_EnvironmentService::RequestWeather(pUVar4->ZoneID,pUVar4->DistrictID,UpdateNextDay);
    }
  }
  if ((uVar1 & 4) != 0) {
    pUVar2 = UDS_EnvironmentEvent::GetEvent();
    if (pUVar2 != (UDS_EnvironmentEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_EnvironmentUpdate>::Broadcast
                (&pUVar2->OnUpdateEnvironment,UpdateHour);
    }
  }
  return;
}

// UpdateHours @ 14bb96760

void __thiscall UDS_EnvironmentManager::UpdateHours(UDS_EnvironmentManager *this)

{
  UDS_EnvironmentEvent *pUVar1;
  
  pUVar1 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar1 != (UDS_EnvironmentEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_EnvironmentUpdate>::Broadcast
              (&pUVar1->OnUpdateEnvironment,UpdateHour);
    return;
  }
  return;
}

// UpdateUDSSubSystemTOD @ 14bb98460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_EnvironmentManager::UpdateUDSSubSystemTOD(UDS_EnvironmentManager *this)

{
  UWorld *this_00;
  UDS_LogManager *pUVar1;
  UWN_UDS_Subsystem *this_01;
  undefined1 auStackY_168 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_EnvironmentManager::UpdateUDSSubSystemTOD",0x2d,Yes);
    pwVar3 = L"world == nullptr";
    uVar2 = 0xeb;
  }
  else {
    this_01 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
    if (this_01 != (UWN_UDS_Subsystem *)0x0) {
      UWN_UDS_Subsystem::UpdateTOD(this_01,(this->InGameTimeData).CurrentTOD);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_EnvironmentManager::UpdateUDSSubSystemTOD",0x2d,Yes);
    pwVar3 = L"udsSubsystem == nullptr";
    uVar2 = 0xf2;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

