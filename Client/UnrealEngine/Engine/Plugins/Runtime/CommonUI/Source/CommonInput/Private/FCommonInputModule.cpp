// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 5

// FCommonInputModule @ 14a771820

FCommonInputModule * __thiscall FCommonInputModule::FCommonInputModule(FCommonInputModule *this)

{
  this->CommonInputSettings = (UCommonInputSettings *)0x0;
  this->_padding_ = (longlong)&___7FCommonInputModule__6B_;
  return this;
}

// CreateInputSettings @ 14a7745e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FCommonInputModule::CreateInputSettings(FCommonInputModule *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UCommonInputSettings *pUVar6;
  FUObjectItem *this_00;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  pUVar3 = UCommonInputSettings::StaticClass();
  pUVar4 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UCommonInputSettings::StaticClass();
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
  pUVar6 = (UCommonInputSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  this->CommonInputSettings = pUVar6;
  if ((pUVar6 == (UCommonInputSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonInputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputModule.cpp"
                         ,0x2d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&this->CommonInputSettings->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(this_00,RootSet);
  return;
}

// GetSettingsInstance @ 14a776370

UCommonInputSettings * __thiscall FCommonInputModule::GetSettingsInstance(FCommonInputModule *this)

{
  return this->CommonInputSettings;
}

// ShutdownModule @ 14a779000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FCommonInputModule::ShutdownModule(FCommonInputModule *this)

{
  FUObjectItem *this_00;
  
  if (!GExitPurge) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,
                         *(int *)((longlong)&this->CommonInputSettings->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    this->CommonInputSettings = (UCommonInputSettings *)0x0;
    return;
  }
  this->CommonInputSettings = (UCommonInputSettings *)0x0;
  return;
}

// StartupModule @ 14a779060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FCommonInputModule::StartupModule(FCommonInputModule *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UCommonInputSettings *pUVar6;
  FUObjectItem *this_00;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  pUVar3 = UCommonInputSettings::StaticClass();
  pUVar4 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UCommonInputSettings::StaticClass();
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
  pUVar6 = (UCommonInputSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  this->CommonInputSettings = pUVar6;
  if ((pUVar6 == (UCommonInputSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonInputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonInput\\Private\\CommonInputModule.cpp"
                         ,0x2d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&this->CommonInputSettings->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(this_00,RootSet);
  return;
}

