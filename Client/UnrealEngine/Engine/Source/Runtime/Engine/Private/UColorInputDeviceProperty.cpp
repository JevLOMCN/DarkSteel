// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147b9bc20

UClass * __cdecl UColorInputDeviceProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorInputDeviceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ColorInputDeviceProperty",
               &Z_Registration_Info_UClass_UColorInputDeviceProperty.InnerSingleton,
               StaticRegisterNativesUColorInputDeviceProperty,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UColorInputDeviceProperty>,
               InternalVTableHelperCtorCaller<UColorInputDeviceProperty>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorInputDeviceProperty.InnerSingleton;
}

// UColorInputDeviceProperty @ 147bbae50

UColorInputDeviceProperty * __thiscall
UColorInputDeviceProperty::UColorInputDeviceProperty
          (UColorInputDeviceProperty *this,FVTableHelper *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  (this->ColorData).bEnable = true;
  (this->ColorData).bResetAfterCompletion = false;
  this->_padding_ = (longlong)&___7UColorInputDeviceProperty__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ColorData).LightColor.field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(local_res8,"InputDeviceLightColor");
  (this->InternalProperty)._padding_ = (longlong)local_res8[0];
  (this->InternalProperty).bEnable = true;
  (this->InternalProperty).Color.field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  return this;
}

// UColorInputDeviceProperty @ 147bbaef0

UColorInputDeviceProperty * __thiscall
UColorInputDeviceProperty::UColorInputDeviceProperty
          (UColorInputDeviceProperty *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  (this->ColorData).bEnable = true;
  (this->ColorData).bResetAfterCompletion = false;
  this->_padding_ = (longlong)&___7UColorInputDeviceProperty__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->ColorData).LightColor.field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(local_res8,"InputDeviceLightColor");
  (this->InternalProperty)._padding_ = (longlong)local_res8[0];
  (this->InternalProperty).bEnable = true;
  (this->InternalProperty).Color.field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  return this;
}

// ~UColorInputDeviceProperty @ 147bbf190

void __thiscall
UColorInputDeviceProperty::~UColorInputDeviceProperty(UColorInputDeviceProperty *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UColorInputDeviceProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeviceOverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDeviceColorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeviceOverrideData);
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd8e90

void __thiscall
UColorInputDeviceProperty::EvaluateDeviceProperty_Implementation
          (UColorInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          float param_3,float param_4)

{
  FDeviceColorData *pFVar1;
  
  pFVar1 = UInputDeviceProperty::GetDeviceSpecificData<FDeviceColorData>
                     ((UInputDeviceProperty *)this,param_1,param_2,&this->DeviceOverrideData);
  if (pFVar1 != (FDeviceColorData *)0x0) {
    (this->InternalProperty).bEnable = pFVar1->bEnable;
    (this->InternalProperty).Color.field0_0x0 = (pFVar1->LightColor).field0_0x0;
    return;
  }
  (this->InternalProperty).bEnable = (this->ColorData).bEnable;
  (this->InternalProperty).Color.field0_0x0 = (this->ColorData).LightColor.field0_0x0;
  return;
}

// GetInternalDeviceProperty @ 147be0a80

FInputDeviceProperty * __thiscall
UColorInputDeviceProperty::GetInternalDeviceProperty(UColorInputDeviceProperty *this)

{
  return (FInputDeviceProperty *)&this->InternalProperty;
}

// GetPrivateStaticClass @ 147be4c60

UClass * __cdecl UColorInputDeviceProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorInputDeviceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ColorInputDeviceProperty",
               &Z_Registration_Info_UClass_UColorInputDeviceProperty.InnerSingleton,
               StaticRegisterNativesUColorInputDeviceProperty,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UColorInputDeviceProperty>,
               InternalVTableHelperCtorCaller<UColorInputDeviceProperty>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorInputDeviceProperty.InnerSingleton;
}

// ResetDeviceProperty_Implementation @ 147bfdc60

void __thiscall
UColorInputDeviceProperty::ResetDeviceProperty_Implementation
          (UColorInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          bool param_3)

{
  longlong lVar1;
  FDeviceColorData *pFVar2;
  char cVar3;
  
  cVar3 = (this->ColorData).bResetAfterCompletion;
  pFVar2 = UInputDeviceProperty::GetDeviceSpecificData<FDeviceColorData>
                     ((UInputDeviceProperty *)this,param_1,param_2,&this->DeviceOverrideData);
  if (pFVar2 != (FDeviceColorData *)0x0) {
    cVar3 = pFVar2->bResetAfterCompletion;
  }
  if (cVar3 != '\0' || param_3) {
    lVar1 = this->_padding_;
    (this->InternalProperty).bEnable = false;
    (**(code **)(lVar1 + 0x2c0))(this,param_1.InternalId,param_2.InternalId);
  }
  return;
}

// StaticRegisterNativesUColorInputDeviceProperty @ 147c03540

void __cdecl UColorInputDeviceProperty::StaticRegisterNativesUColorInputDeviceProperty(void)

{
  return;
}

