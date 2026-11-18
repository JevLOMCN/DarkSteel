// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147ba5bb0

UClass * __cdecl UInputDeviceTriggerEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerEffect",
               &Z_Registration_Info_UClass_UInputDeviceTriggerEffect.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerEffect,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerEffect>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerEffect>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerEffect.InnerSingleton;
}

// UInputDeviceTriggerEffect @ 147bbd230

UInputDeviceTriggerEffect * __thiscall
UInputDeviceTriggerEffect::UInputDeviceTriggerEffect
          (UInputDeviceTriggerEffect *this,FVTableHelper *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  (this->BaseTriggerData).AffectedTriggers = All;
  (this->BaseTriggerData).bResetUponCompletion = true;
  ::FName::FName(local_res8,"InputDeviceTriggerResetProperty");
  *(uint *)&(this->ResetProperty).field_0x0 = local_res8[0].ComparisonIndex.Value;
  *(uint *)&(this->ResetProperty).field_0x4 = local_res8[0].Number;
  (this->ResetProperty).field_0x8 = 3;
  return this;
}

// UInputDeviceTriggerEffect @ 147bbd290

UInputDeviceTriggerEffect * __thiscall
UInputDeviceTriggerEffect::UInputDeviceTriggerEffect
          (UInputDeviceTriggerEffect *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  (this->BaseTriggerData).AffectedTriggers = All;
  (this->BaseTriggerData).bResetUponCompletion = true;
  ::FName::FName(local_res8,"InputDeviceTriggerResetProperty");
  *(uint *)&(this->ResetProperty).field_0x0 = local_res8[0].ComparisonIndex.Value;
  *(uint *)&(this->ResetProperty).field_0x4 = local_res8[0].Number;
  (this->ResetProperty).field_0x8 = 3;
  return this;
}

// ~UInputDeviceTriggerEffect @ 147bbf8a0

void __thiscall
UInputDeviceTriggerEffect::~UInputDeviceTriggerEffect(UInputDeviceTriggerEffect *this)

{
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyDeviceProperty @ 147bc9b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInputDeviceTriggerEffect::ApplyDeviceProperty
          (UInputDeviceTriggerEffect *this,FPlatformUserId param_1,FInputDeviceId param_2)

{
  FInputDeviceProperty *pFVar1;
  FName local_res8;
  FString local_18;
  
  if ((this->BaseTriggerData).AffectedTriggers != None) {
    pFVar1 = (FInputDeviceProperty *)(**(code **)(this->_padding_ + 0x2c8))();
    UInputDeviceProperty::ApplyDeviceProperty_Internal(param_1,param_2,pFVar1);
    return;
  }
  if (2 < (byte)LogInputDevices._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInputDevices);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetInternalDeviceProperty @ 147be0ab0

FInputDeviceProperty * __thiscall
UInputDeviceTriggerEffect::GetInternalDeviceProperty(UInputDeviceTriggerEffect *this)

{
  return (FInputDeviceProperty *)&this->ResetProperty;
}

// GetPrivateStaticClass @ 147be55b0

UClass * __cdecl UInputDeviceTriggerEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerEffect",
               &Z_Registration_Info_UClass_UInputDeviceTriggerEffect.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerEffect,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerEffect>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerEffect>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerEffect.InnerSingleton;
}

// ResetDeviceProperty_Implementation @ 147bfdcf0

void __thiscall
UInputDeviceTriggerEffect::ResetDeviceProperty_Implementation
          (UInputDeviceTriggerEffect *this,FPlatformUserId param_1,FInputDeviceId param_2,
          bool param_3)

{
  if ((!param_3) &&
     (((this->BaseTriggerData).bResetUponCompletion == false ||
      ((this->BaseTriggerData).AffectedTriggers == None)))) {
    return;
  }
  (this->ResetProperty).field_0x8 = (this->BaseTriggerData).AffectedTriggers;
  UInputDeviceProperty::ApplyDeviceProperty_Internal
            (param_1,param_2,(FInputDeviceProperty *)&this->ResetProperty);
  return;
}

// StaticRegisterNativesUInputDeviceTriggerEffect @ 147c036d0

void __cdecl UInputDeviceTriggerEffect::StaticRegisterNativesUInputDeviceTriggerEffect(void)

{
  return;
}

