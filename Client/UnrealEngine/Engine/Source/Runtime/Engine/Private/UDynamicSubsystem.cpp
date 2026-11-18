// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1487dd2a0

UClass * __cdecl UDynamicSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DynamicSubsystem",
               &Z_Registration_Info_UClass_UDynamicSubsystem.InnerSingleton,
               StaticRegisterNativesUDynamicSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicSubsystem>,
               InternalVTableHelperCtorCaller<UDynamicSubsystem>,local_res8,USubsystem::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicSubsystem.InnerSingleton;
}

// UDynamicSubsystem @ 148809e40

UDynamicSubsystem * __thiscall
UDynamicSubsystem::UDynamicSubsystem(UDynamicSubsystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDynamicSubsystem__6B_;
  return this;
}

// UDynamicSubsystem @ 148809e70

UDynamicSubsystem * __thiscall UDynamicSubsystem::UDynamicSubsystem(UDynamicSubsystem *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UDynamicSubsystem__6B_;
  return this;
}

// ~UDynamicSubsystem @ 14880d350

void __thiscall UDynamicSubsystem::~UDynamicSubsystem(UDynamicSubsystem *this)

{
  *(undefined ***)this = &___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148840610

UClass * __cdecl UDynamicSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DynamicSubsystem",
               &Z_Registration_Info_UClass_UDynamicSubsystem.InnerSingleton,
               StaticRegisterNativesUDynamicSubsystem,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicSubsystem>,
               InternalVTableHelperCtorCaller<UDynamicSubsystem>,local_res8,USubsystem::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicSubsystem.InnerSingleton;
}

// StaticRegisterNativesUDynamicSubsystem @ 14885ac30

void __cdecl UDynamicSubsystem::StaticRegisterNativesUDynamicSubsystem(void)

{
  return;
}

