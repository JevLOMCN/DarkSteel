// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 10

// FAnalytics @ 1431332a0

FAnalytics * __thiscall FAnalytics::FAnalytics(FAnalytics *this)

{
  *this = (FAnalytics)&___7FAnalytics__6B_;
  return this;
}

// ~FAnalytics @ 143133970

void __thiscall FAnalytics::~FAnalytics(FAnalytics *this)

{
  *this = (FAnalytics)IModuleInterface::vftable;
  return;
}

// CreateAnalyticsProvider @ 143136220

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAnalyticsProvider,1> * __thiscall
FAnalytics::CreateAnalyticsProvider
          (FAnalytics *this,TSharedPtr<IAnalyticsProvider,1> *__return_storage_ptr__,FName *param_1,
          TDelegate<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy> *param_2)

{
  FName FVar1;
  FModuleManager *this_00;
  IModuleInterface *pIVar2;
  FString local_18;
  
  if (*param_1 == (FName)0x0) {
    if (2 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
  }
  else {
    FModuleManager::Get();
    FVar1 = *param_1;
    this_00 = FModuleManager::Get();
    pIVar2 = FModuleManager::LoadModule(this_00,FVar1,None);
    if (pIVar2 != (IModuleInterface *)0x0) {
      if (4 < (byte)LogAnalytics._0_1_) {
        ::FName::ToString(param_1,&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,__return_storage_ptr__,param_2);
      return __return_storage_ptr__;
    }
    if (2 < (byte)LogAnalytics._0_1_) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  __return_storage_ptr__->Object = (IAnalyticsProvider *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateAnalyticsTracer @ 143136360

TSharedPtr<IAnalyticsTracer,1> * __thiscall
FAnalytics::CreateAnalyticsTracer
          (FAnalytics *this,TSharedPtr<IAnalyticsTracer,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IAnalyticsTracer,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = ::operator_new(0x110);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IAnalyticsTracer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAnalyticsTracer___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FAnalyticsTracer__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[7]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[7]._padding_ + 4) = 0x80;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xc]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0xc]._padding_ + 4) = 0x80;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xe]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar3[0xe].SharedReferenceCount,4000);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IAnalyticsTracer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IAnalyticsTracer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// GetConfigValueFromIni @ 143139bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FAnalytics::GetConfigValueFromIni
          (FAnalytics *this,FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          FString *param_3,bool param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((param_3->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar1 = FConfigCacheIni::GetString(GConfig,pwVar2,pwVar3,__return_storage_ptr__,param_1);
  if (((!bVar1) && (param_4)) && (5 < (byte)LogAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  return __return_storage_ptr__;
}

// GetDefaultConfiguredProvider @ 143139f90

TSharedPtr<IAnalyticsProvider,1> * __thiscall
FAnalytics::GetDefaultConfiguredProvider
          (FAnalytics *this,TSharedPtr<IAnalyticsProvider,1> *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  wchar_t *pwVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  byte bVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FName local_res10;
  FName local_res18 [2];
  wchar_t *local_88;
  FMRSWRecursiveAccessDetector *local_80;
  bool local_78;
  FDelegateAllocation *local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  FString local_40;
  
  _Src.Data = GEngineIni.Data.AllocatorInstance.Data;
  lVar11 = (longlong)GEngineIni.Data.ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = GEngineIni.Data.ArrayNum;
  if (GEngineIni.Data.ArrayNum == 0) {
    local_44 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,GEngineIni.Data.ArrayNum,0,&local_50,GEngineIni.Data.ArrayNum,&local_44);
    memcpy(local_50.Data,_Src.Data,lVar11 * 2);
  }
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar4,L"DEBUGANALYTICS");
  if (bVar3) {
    pwVar4 = L"AnalyticsDebug";
  }
  else {
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar4,L"TESTANALYTICS");
    if (bVar3) {
      bVar9 = 1;
    }
    else {
      pwVar4 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar4,L"RELEASEANALYTICS");
      bVar9 = -bVar3 & 3;
      if (bVar3) {
        pwVar4 = L"Analytics";
        goto LAB_14313a08a;
      }
    }
    pwVar4 = L"AnalyticsDevelopment";
    if (bVar9 == 1) {
      pwVar4 = L"AnalyticsTest";
    }
  }
LAB_14313a08a:
  ::FString::operator=(&local_40,pwVar4);
  pFVar5 = ::FName::FName(local_res18,"Analytics");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  local_70 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBV1__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBUConfigFromIni_FAnalytics____A6A_AVFString__AEBV3__N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = &local_50;
    puVar7[4] = ConfigFromIni::GetValue;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80,(FDestructionSentinel *)&local_88);
  }
  local_88 = (wchar_t *)0x0;
  local_80 = (FMRSWRecursiveAccessDetector *)0x0;
  FConfigCacheIni::GetString
            (GConfig,L"Analytics",L"ProviderModuleName",(FString *)&local_88,&GEngineIni);
  pFVar10 = (FScriptContainerElement *)L"";
  if ((int)local_80 != 0) {
    pFVar10 = (FScriptContainerElement *)local_88;
  }
  ::FName::FName(&local_res10,(wchar_t *)pFVar10);
  if ((FScriptContainerElement *)local_88 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88);
  }
  (*pcVar2)(pIVar6,__return_storage_ptr__,&local_res10,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80,(FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return __return_storage_ptr__;
}

// GetValue @ 14313a980

FString * __thiscall
FAnalytics::ConfigFromIni::GetValue
          (ConfigFromIni *this,FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,"Analytics");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x58))
            (pIVar3,__return_storage_ptr__,this,&this->SectionName,param_1,param_2);
  return __return_storage_ptr__;
}

// ShutdownModule @ 14313d5d0

void __thiscall FAnalytics::ShutdownModule(FAnalytics *this)

{
  return;
}

// StartupModule @ 14313e090

void __thiscall FAnalytics::StartupModule(FAnalytics *this)

{
  return;
}

// WriteConfigValueToIni @ 14313ffe0

void __thiscall
FAnalytics::WriteConfigValueToIni
          (FAnalytics *this,FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  pwVar1 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar3);
  if ((param_4->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  if ((param_3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FConfigCacheIni::SetString(GConfig,pwVar1,pwVar2,pwVar3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

