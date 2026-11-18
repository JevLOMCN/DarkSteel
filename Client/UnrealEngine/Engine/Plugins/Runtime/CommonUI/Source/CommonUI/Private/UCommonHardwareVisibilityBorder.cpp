// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 10

// StaticClass @ 14a7808b0

UClass * __cdecl UCommonHardwareVisibilityBorder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonHardwareVisibilityBorder",
               &Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.InnerSingleton,
               StaticRegisterNativesUCommonHardwareVisibilityBorder,0x400,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonHardwareVisibilityBorder>,
               InternalVTableHelperCtorCaller<UCommonHardwareVisibilityBorder>,local_res8,
               UCommonBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.InnerSingleton;
}

// UCommonHardwareVisibilityBorder @ 14a7ad9d0

UCommonHardwareVisibilityBorder * __thiscall
UCommonHardwareVisibilityBorder::UCommonHardwareVisibilityBorder
          (UCommonHardwareVisibilityBorder *this,FVTableHelper *param_1)

{
  UBorder::UBorder((UBorder *)this,param_1);
  *(undefined8 *)&this->field_0x388 = 0;
  *(undefined8 *)&this->field_0x394 = 0;
  *(undefined8 *)&this->field_0x39c = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FGameplayTagQuery::FGameplayTagQuery(&this->VisibilityQuery);
  return this;
}

// UCommonHardwareVisibilityBorder @ 14a7ada30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonHardwareVisibilityBorder * __thiscall
UCommonHardwareVisibilityBorder::UCommonHardwareVisibilityBorder
          (UCommonHardwareVisibilityBorder *this,FObjectInitializer *param_1)

{
  FMargin local_18;
  
  UBorder::UBorder((UBorder *)this,param_1);
  *(undefined ***)this = &UCommonBorder::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UCommonBorder::_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->field_0x388 = 0;
  *(undefined8 *)&this->field_0x394 = 0;
  *(undefined8 *)&this->field_0x39c = 0;
  this->field_0x22c = 0;
  this->field_0x390 = 0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  FGameplayTagQuery::FGameplayTagQuery(&this->VisibilityQuery);
  this->VisibleType = SelfHitTestInvisible;
  this->HiddenType = Collapsed;
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  UBorder::SetPadding((UBorder *)this,&local_18);
  return this;
}

// ~UCommonHardwareVisibilityBorder @ 14a7b2cf0

void __thiscall
UCommonHardwareVisibilityBorder::~UCommonHardwareVisibilityBorder
          (UCommonHardwareVisibilityBorder *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->VisibilityQuery).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisibilityQuery).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisibilityQuery).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisibilityQuery).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &UCommonBorder::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UCommonBorder::_vftable__for__INotifyFieldValueChanged__;
  UBorder::~UBorder((UBorder *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e56a0

UClass * __cdecl UCommonHardwareVisibilityBorder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonHardwareVisibilityBorder",
               &Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.InnerSingleton,
               StaticRegisterNativesUCommonHardwareVisibilityBorder,0x400,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonHardwareVisibilityBorder>,
               InternalVTableHelperCtorCaller<UCommonHardwareVisibilityBorder>,local_res8,
               UCommonBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.InnerSingleton;
}

// HandleInputMethodChanged @ 14a7ed000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonHardwareVisibilityBorder::HandleInputMethodChanged
          (UCommonHardwareVisibilityBorder *this,UCommonUIVisibilitySubsystem *param_1)

{
  bool bVar1;
  ULocalPlayer *pUVar2;
  UCommonUISettings *pUVar3;
  FGameplayTagContainer *pFVar4;
  ulonglong uVar5;
  FName local_res18;
  FString local_18;
  
  uVar5 = 1;
  bVar1 = FGameplayTagQuery::IsEmpty(&this->VisibilityQuery);
  if (bVar1) goto LAB_14a7ed0c8;
  if (param_1 == (UCommonUIVisibilitySubsystem *)0x0) {
    pUVar2 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
    param_1 = UCommonUIVisibilitySubsystem::Get(pUVar2);
    if (param_1 != (UCommonUIVisibilitySubsystem *)0x0) goto LAB_14a7ed052;
    if (5 < (byte)LogCommonUI._0_1_) {
      local_res18.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res18.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_res18,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pUVar3 = ICommonUIModule::GetSettings();
    pFVar4 = &pUVar3->PlatformTraitContainer;
  }
  else {
LAB_14a7ed052:
    pFVar4 = &param_1->ComputedVisibilityTags;
  }
  bVar1 = FGameplayTagQuery::Matches(&this->VisibilityQuery,pFVar4);
  uVar5 = (ulonglong)bVar1;
LAB_14a7ed0c8:
                    /* WARNING: Could not recover jumptable at 0x00014a7ed0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c0))(this,(&this->VisibleType)[uVar5 ^ 1]);
  return;
}

// ListenToInputMethodChanged @ 14a7f7f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonHardwareVisibilityBorder::ListenToInputMethodChanged(UCommonHardwareVisibilityBorder *this)

{
  ULocalPlayer *pUVar1;
  UCommonUIVisibilitySubsystem *pUVar2;
  
  pUVar1 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))();
  pUVar2 = UCommonUIVisibilitySubsystem::Get(pUVar1);
  if (pUVar2 != (UCommonUIVisibilitySubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnVisibilityTagsChanged,this);
    TMulticastDelegateRegistration<void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UCommonHardwareVisibilityBorder>
              ((TMulticastDelegateRegistration<void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnVisibilityTagsChanged,
               (UCommonHardwareVisibilityBorder *)&stack0x00000010,(pmf_55fdbd09 *)this);
  }
  return;
}

// OnWidgetRebuilt @ 14a800e50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonHardwareVisibilityBorder::OnWidgetRebuilt(UCommonHardwareVisibilityBorder *this)

{
  ULocalPlayer *pUVar1;
  UCommonUIVisibilitySubsystem *pUVar2;
  
  UWidget::OnWidgetRebuilt((UWidget *)this);
  UpdateVisibility(this,(UCommonUIVisibilitySubsystem *)0x0);
  pUVar1 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
  pUVar2 = UCommonUIVisibilitySubsystem::Get(pUVar1);
  if (pUVar2 != (UCommonUIVisibilitySubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnVisibilityTagsChanged,this);
    TMulticastDelegateRegistration<void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UCommonHardwareVisibilityBorder>
              ((TMulticastDelegateRegistration<void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnVisibilityTagsChanged,
               (UCommonHardwareVisibilityBorder *)&stack0x00000010,(pmf_55fdbd09 *)this);
  }
  return;
}

// StaticRegisterNativesUCommonHardwareVisibilityBorder @ 14a81e5a0

void __cdecl
UCommonHardwareVisibilityBorder::StaticRegisterNativesUCommonHardwareVisibilityBorder(void)

{
  return;
}

// UpdateVisibility @ 14a828be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonHardwareVisibilityBorder::UpdateVisibility
          (UCommonHardwareVisibilityBorder *this,UCommonUIVisibilitySubsystem *param_1)

{
  bool bVar1;
  ULocalPlayer *pUVar2;
  UCommonUISettings *pUVar3;
  FGameplayTagContainer *pFVar4;
  ulonglong uVar5;
  FName local_res18;
  FString local_18;
  
  uVar5 = 1;
  bVar1 = FGameplayTagQuery::IsEmpty(&this->VisibilityQuery);
  if (bVar1) goto LAB_14a828ca8;
  if (param_1 == (UCommonUIVisibilitySubsystem *)0x0) {
    pUVar2 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
    param_1 = UCommonUIVisibilitySubsystem::Get(pUVar2);
    if (param_1 != (UCommonUIVisibilitySubsystem *)0x0) goto LAB_14a828c32;
    if (5 < (byte)LogCommonUI._0_1_) {
      local_res18.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res18.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_res18,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pUVar3 = ICommonUIModule::GetSettings();
    pFVar4 = &pUVar3->PlatformTraitContainer;
  }
  else {
LAB_14a828c32:
    pFVar4 = &param_1->ComputedVisibilityTags;
  }
  bVar1 = FGameplayTagQuery::Matches(&this->VisibilityQuery,pFVar4);
  uVar5 = (ulonglong)bVar1;
LAB_14a828ca8:
                    /* WARNING: Could not recover jumptable at 0x00014a828cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c0))(this,(&this->VisibleType)[uVar5 ^ 1]);
  return;
}

