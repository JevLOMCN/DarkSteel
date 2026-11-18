// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 6

// StaticClass @ 14cf2c5b0

UClass * __cdecl UARTypesDummyClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTypesDummyClass",
               &Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton,
               StaticRegisterNativesUARTypesDummyClass,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTypesDummyClass>,
               InternalVTableHelperCtorCaller<UARTypesDummyClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton;
}

// UARTypesDummyClass @ 14cf43670

UARTypesDummyClass * __thiscall
UARTypesDummyClass::UARTypesDummyClass(UARTypesDummyClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARTypesDummyClass__6B_;
  return this;
}

// UARTypesDummyClass @ 14cf436a0

UARTypesDummyClass * __thiscall
UARTypesDummyClass::UARTypesDummyClass(UARTypesDummyClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARTypesDummyClass__6B_;
  return this;
}

// ~UARTypesDummyClass @ 14cf44dc0

void __thiscall UARTypesDummyClass::~UARTypesDummyClass(UARTypesDummyClass *this)

{
  *(undefined ***)this = &___7UARTypesDummyClass__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cf55c00

UClass * __cdecl UARTypesDummyClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTypesDummyClass",
               &Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton,
               StaticRegisterNativesUARTypesDummyClass,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTypesDummyClass>,
               InternalVTableHelperCtorCaller<UARTypesDummyClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton;
}

// StaticRegisterNativesUARTypesDummyClass @ 14cf61670

void __cdecl UARTypesDummyClass::StaticRegisterNativesUARTypesDummyClass(void)

{
  return;
}

