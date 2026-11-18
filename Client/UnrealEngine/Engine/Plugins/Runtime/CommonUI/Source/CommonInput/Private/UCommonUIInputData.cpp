// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 7

// StaticClass @ 14a76ec10

UClass * __cdecl UCommonUIInputData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonUIInputData",
               &Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton,
               StaticRegisterNativesUCommonUIInputData,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIInputData>,
               InternalVTableHelperCtorCaller<UCommonUIInputData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton;
}

// UCommonUIInputData @ 14a772140

UCommonUIInputData * __thiscall
UCommonUIInputData::UCommonUIInputData(UCommonUIInputData *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->DefaultHoldData).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCommonUIInputData__6B_;
  (this->DefaultClickAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->DefaultClickAction).RowName.ComparisonIndex = 0;
  (this->DefaultClickAction).RowName.Number = 0;
  (this->DefaultBackAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->DefaultBackAction).RowName.ComparisonIndex = 0;
  (this->DefaultBackAction).RowName.Number = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->EnhancedInputClickAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->EnhancedInputBackAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  return this;
}

// UCommonUIInputData @ 14a7721b0

UCommonUIInputData * __thiscall
UCommonUIInputData::UCommonUIInputData(UCommonUIInputData *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->DefaultHoldData).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCommonUIInputData__6B_;
  (this->DefaultClickAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->DefaultClickAction).RowName.ComparisonIndex = 0;
  (this->DefaultClickAction).RowName.Number = 0;
  (this->DefaultBackAction).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->DefaultBackAction).RowName.ComparisonIndex = 0;
  (this->DefaultBackAction).RowName.Number = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultHoldData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->EnhancedInputClickAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->EnhancedInputBackAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  return this;
}

// ~UCommonUIInputData @ 14a7727e0

void __thiscall UCommonUIInputData::~UCommonUIInputData(UCommonUIInputData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCommonUIInputData__6B_;
  pvVar1 = *(void **)&(this->DefaultHoldData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a776080

UClass * __cdecl UCommonUIInputData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonUIInputData",
               &Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton,
               StaticRegisterNativesUCommonUIInputData,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIInputData>,
               InternalVTableHelperCtorCaller<UCommonUIInputData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIInputData.InnerSingleton;
}

// NeedsLoadForServer @ 14a777b40

bool __thiscall UCommonUIInputData::NeedsLoadForServer(UCommonUIInputData *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
}

// StaticRegisterNativesUCommonUIInputData @ 14a7792b0

void __cdecl UCommonUIInputData::StaticRegisterNativesUCommonUIInputData(void)

{
  return;
}

