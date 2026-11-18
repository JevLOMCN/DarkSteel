// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 2

// StartupModule @ 146ac1000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGameplayTagsModule::StartupModule(FGameplayTagsModule *this)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UGameplayTagsManager *pUVar3;
  FUObjectItem *this_00;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStackY_118 [32];
  undefined1 auStack_e8 [32];
  FConditionalScopeLogTime FStack_c8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1074,"UGameplayTagsManager::InitializeManager",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagsManager.cpp"
                 ,0x432);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
    }
    FScopedBootTiming::FScopedBootTiming
              ((FScopedBootTiming *)(auStack_e8 + 8),"UGameplayTagsManager::InitializeManager");
    FConditionalScopeLogTime::FConditionalScopeLogTime
              (&FStack_c8,true,L"UGameplayTagsManager::InitializeManager",
               (TKeyValuePair<double,unsigned_int> *)0x0,ScopeLog_Seconds);
    auStack_e8._0_8_ = 0;
    pUVar1 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UGameplayTagsManager::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar2);
    auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_98._56_8_ = (UPackage *)0x0;
    auStack_98._16_4_ = 0;
    auStack_98._20_4_ = 0;
    auStack_98._24_4_ = RF_NoFlags;
    auStack_98._40_8_ = (UObject *)0x0;
    auStack_98[0x20] = false;
    auStack_98._8_8_ = pUVar1;
    pUVar3 = (UGameplayTagsManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar4 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    UGameplayTagsManager::SingletonManager = pUVar3;
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    UGameplayTagsManager::LoadGameplayTagTables(UGameplayTagsManager::SingletonManager,false);
    UGameplayTagsManager::ConstructGameplayTagTree(UGameplayTagsManager::SingletonManager);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UGameplayTagsManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,(UGameplayTagsManager *)auStack_e8,
               (pmf_aa779a69)UGameplayTagsManager::SingletonManager);
    FConditionalScopeLogTime::~FConditionalScopeLogTime(&FStack_c8);
    FScopedBootTiming::~FScopedBootTiming((FScopedBootTiming *)(auStack_e8 + 8));
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ShutdownModule @ 146ac1010

void __thiscall FGameplayTagsModule::ShutdownModule(FGameplayTagsModule *this)

{
  UGameplayTagsManager *this_00;
  
  if (GameplayTagPrintReportOnShutdown != 0) {
    this_00 = UGameplayTagsManager::Get();
    UGameplayTagsManager::PrintReplicationFrequencyReport(this_00);
  }
  UGameplayTagsManager::SingletonManager = (UGameplayTagsManager *)0x0;
  return;
}

