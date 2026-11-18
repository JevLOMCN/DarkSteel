// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147ba97e0

UClass * __cdecl UInputDeviceTriggerResistanceProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerResistanceProperty",
               &Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerResistanceProperty,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerResistanceProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerResistanceProperty>,local_res8,
               UInputDeviceTriggerEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.InnerSingleton;
}

// UInputDeviceTriggerResistanceProperty @ 147bbd4a0

UInputDeviceTriggerResistanceProperty * __thiscall
UInputDeviceTriggerResistanceProperty::UInputDeviceTriggerResistanceProperty
          (UInputDeviceTriggerResistanceProperty *this,FVTableHelper *param_1)

{
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  *(undefined2 *)&this->_padding_ = 0x103;
  *(undefined4 *)&this->_padding_ = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerResetProperty");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerResistanceProperty__6B_;
  (this->TriggerData).StartPosition = 0;
  (this->TriggerData).StartStrengh = 0;
  (this->TriggerData).EndPosition = 0;
  (this->TriggerData).EndStrengh = 0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerResistance");
  *(uint *)&(this->InternalProperty).field_0x0 = local_res8.ComparisonIndex.Value;
  *(uint *)&(this->InternalProperty).field_0x4 = local_res8.Number;
  (this->InternalProperty).field_0x8 = 0;
  (this->InternalProperty).StartPosition = 0;
  (this->InternalProperty).StartStrengh = 0;
  (this->InternalProperty).EndPosition = 0;
  (this->InternalProperty).EndStrengh = 0;
  return this;
}

// UInputDeviceTriggerResistanceProperty @ 147bbd570

UInputDeviceTriggerResistanceProperty * __thiscall
UInputDeviceTriggerResistanceProperty::UInputDeviceTriggerResistanceProperty
          (UInputDeviceTriggerResistanceProperty *this)

{
  FObjectInitializer *pFVar1;
  FName local_res8;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x103;
  ::FName::FName(&local_res8,"InputDeviceTriggerResetProperty");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerResistanceProperty__6B_;
  (this->TriggerData).StartPosition = 0;
  (this->TriggerData).StartStrengh = 0;
  (this->TriggerData).EndPosition = 0;
  (this->TriggerData).EndStrengh = 0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerResistance");
  *(uint *)&(this->InternalProperty).field_0x0 = local_res8.ComparisonIndex.Value;
  *(uint *)&(this->InternalProperty).field_0x4 = local_res8.Number;
  (this->InternalProperty).field_0x8 = 0;
  (this->InternalProperty).StartPosition = 0;
  (this->InternalProperty).StartStrengh = 0;
  (this->InternalProperty).EndPosition = 0;
  (this->InternalProperty).EndStrengh = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  return this;
}

// ~UInputDeviceTriggerResistanceProperty @ 147bbf920

void __thiscall
UInputDeviceTriggerResistanceProperty::~UInputDeviceTriggerResistanceProperty
          (UInputDeviceTriggerResistanceProperty *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInputDeviceTriggerResistanceProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeviceOverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerResistanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerResistanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerResistanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeviceOverrideData);
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd9090

void __thiscall
UInputDeviceTriggerResistanceProperty::EvaluateDeviceProperty_Implementation
          (UInputDeviceTriggerResistanceProperty *this,FPlatformUserId param_1,
          FInputDeviceId param_2,float param_3,float param_4)

{
  int iVar1;
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar2;
  FDeviceTriggerTriggerResistanceData *pFVar3;
  FHardwareDeviceIdentifier local_40;
  FHardwareDeviceIdentifier local_28;
  
  (this->InternalProperty).field_0x8 = (char)this->_padding_;
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    if (param_2.InternalId < 0) {
      pFVar2 = UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_28,param_1);
    }
    else {
      pFVar2 = UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this_00,&local_40,param_2);
    }
    pFVar3 = TMapBase<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
             ::Find((TMapBase<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
                     *)&this->DeviceOverrideData,pFVar2->HardwareDeviceIdentifier);
    if (pFVar3 != (FDeviceTriggerTriggerResistanceData *)0x0) {
      (this->InternalProperty).StartPosition = pFVar3->StartPosition;
      (this->InternalProperty).StartStrengh = pFVar3->StartStrengh;
      (this->InternalProperty).EndPosition = pFVar3->EndPosition;
      iVar1 = pFVar3->EndStrengh;
      goto LAB_147bd913b;
    }
  }
  (this->InternalProperty).StartPosition = (this->TriggerData).StartPosition;
  (this->InternalProperty).StartStrengh = (this->TriggerData).StartStrengh;
  (this->InternalProperty).EndPosition = (this->TriggerData).EndPosition;
  iVar1 = (this->TriggerData).EndStrengh;
LAB_147bd913b:
  (this->InternalProperty).EndStrengh = iVar1;
  return;
}

// GetInternalDeviceProperty @ 147be0ad0

FInputDeviceProperty * __thiscall
UInputDeviceTriggerResistanceProperty::GetInternalDeviceProperty
          (UInputDeviceTriggerResistanceProperty *this)

{
  return (FInputDeviceProperty *)&this->InternalProperty;
}

// GetPrivateStaticClass @ 147be5730

UClass * __cdecl UInputDeviceTriggerResistanceProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerResistanceProperty",
               &Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerResistanceProperty,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerResistanceProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerResistanceProperty>,local_res8,
               UInputDeviceTriggerEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerResistanceProperty.InnerSingleton;
}

// StaticRegisterNativesUInputDeviceTriggerResistanceProperty @ 147c036f0

void __cdecl
UInputDeviceTriggerResistanceProperty::StaticRegisterNativesUInputDeviceTriggerResistanceProperty
          (void)

{
  return;
}

