// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148874380

UClass * __cdecl UAsyncLoadingTests_ConvertFromType_V1::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_ConvertFromType_V1",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton,
               StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V1,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncLoadingTests_ConvertFromType_V1>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V1>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton;
}

// UAsyncLoadingTests_ConvertFromType_V1 @ 14887de00

UAsyncLoadingTests_ConvertFromType_V1 * __thiscall
UAsyncLoadingTests_ConvertFromType_V1::UAsyncLoadingTests_ConvertFromType_V1
          (UAsyncLoadingTests_ConvertFromType_V1 *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->Reference).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V1__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UAsyncLoadingTests_ConvertFromType_V1 @ 14887de50

UAsyncLoadingTests_ConvertFromType_V1 * __thiscall
UAsyncLoadingTests_ConvertFromType_V1::UAsyncLoadingTests_ConvertFromType_V1
          (UAsyncLoadingTests_ConvertFromType_V1 *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->Reference).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V1__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Reference).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UAsyncLoadingTests_ConvertFromType_V1 @ 14887ee20

void __thiscall
UAsyncLoadingTests_ConvertFromType_V1::~UAsyncLoadingTests_ConvertFromType_V1
          (UAsyncLoadingTests_ConvertFromType_V1 *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncLoadingTests_ConvertFromType_V1__6B_;
  pvVar1 = *(void **)&(this->Reference).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14888f720

UClass * __cdecl UAsyncLoadingTests_ConvertFromType_V1::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncLoadingTests_ConvertFromType_V1",
               &Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton,
               StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V1,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncLoadingTests_ConvertFromType_V1>,
               InternalVTableHelperCtorCaller<UAsyncLoadingTests_ConvertFromType_V1>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncLoadingTests_ConvertFromType_V1.InnerSingleton;
}

// StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V1 @ 14889bb00

void __cdecl
UAsyncLoadingTests_ConvertFromType_V1::StaticRegisterNativesUAsyncLoadingTests_ConvertFromType_V1
          (void)

{
  return;
}

