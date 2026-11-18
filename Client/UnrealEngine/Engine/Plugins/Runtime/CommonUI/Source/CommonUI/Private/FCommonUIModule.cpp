// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// FCommonUIModule @ 14a7aa5e0

FCommonUIModule * __thiscall FCommonUIModule::FCommonUIModule(FCommonUIModule *this)

{
  this->CommonUISettings = (UCommonUISettings *)0x0;
  this->_padding_ = (longlong)&___7FCommonUIModule__6B_;
  return this;
}

// CreateUISettings @ 14a7d1f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FCommonUIModule::CreateUISettings(FCommonUIModule *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UCommonUISettings *pUVar6;
  FUObjectItem *this_00;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  pUVar3 = UCommonUISettings::StaticClass();
  pUVar4 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UCommonUISettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar5,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar4;
  pUVar6 = (UCommonUISettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  this->CommonUISettings = pUVar6;
  if ((pUVar6 == (UCommonUISettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonUISettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUIModule.cpp"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->CommonUISettings->field_0xc);
  FUObjectItem::SetRootFlags(this_00,RootSet);
  if (this->CommonUISettings->bAutoLoadData != false) {
    UCommonUISettings::LoadEditorData(this->CommonUISettings);
  }
  return;
}

// GetLazyLoadPriority @ 14a7e32f0

int __thiscall FCommonUIModule::GetLazyLoadPriority(FCommonUIModule *this)

{
  return 0;
}

// GetSettingsInstance @ 14a7e7cd0

UCommonUISettings * __thiscall FCommonUIModule::GetSettingsInstance(FCommonUIModule *this)

{
  return this->CommonUISettings;
}

// GetStreamableManager @ 14a7e8860

FStreamableManager * __thiscall FCommonUIModule::GetStreamableManager(FCommonUIModule *this)

{
  UAssetManager *pUVar1;
  
  UAssetManager::Get();
  pUVar1 = UAssetManager::Get();
  return &pUVar1->StreamableManager;
}

// ShutdownModule @ 14a81dc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FCommonUIModule::ShutdownModule(FCommonUIModule *this)

{
  FUObjectItem *this_00;
  
  if (!GExitPurge) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&this->CommonUISettings->field_0xc);
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    this->CommonUISettings = (UCommonUISettings *)0x0;
    return;
  }
  this->CommonUISettings = (UCommonUISettings *)0x0;
  return;
}

// StartupModule @ 14a81e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FCommonUIModule::StartupModule(FCommonUIModule *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UCommonUISettings *pUVar6;
  FUObjectItem *this_00;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  pUVar3 = UCommonUISettings::StaticClass();
  pUVar4 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UCommonUISettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar5,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar4;
  pUVar6 = (UCommonUISettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  this->CommonUISettings = pUVar6;
  if ((pUVar6 == (UCommonUISettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonUISettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUIModule.cpp"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->CommonUISettings->field_0xc);
  FUObjectItem::SetRootFlags(this_00,RootSet);
  if (this->CommonUISettings->bAutoLoadData != false) {
    UCommonUISettings::LoadEditorData(this->CommonUISettings);
  }
  return;
}

