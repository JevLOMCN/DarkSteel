// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 6

// StaticClass @ 14238bce0

UClass * __cdecl UInputCoreTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputCoreTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InputCore",L"InputCoreTypes",
               &Z_Registration_Info_UClass_UInputCoreTypes.InnerSingleton,
               StaticRegisterNativesUInputCoreTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputCoreTypes>,
               InternalVTableHelperCtorCaller<UInputCoreTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputCoreTypes.InnerSingleton;
}

// UInputCoreTypes @ 14238dbf0

UInputCoreTypes * __thiscall
UInputCoreTypes::UInputCoreTypes(UInputCoreTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputCoreTypes__6B_;
  return this;
}

// UInputCoreTypes @ 14238dc20

UInputCoreTypes * __thiscall
UInputCoreTypes::UInputCoreTypes(UInputCoreTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputCoreTypes__6B_;
  return this;
}

// ~UInputCoreTypes @ 14238e050

void __thiscall UInputCoreTypes::~UInputCoreTypes(UInputCoreTypes *this)

{
  *(undefined ***)this = &___7UInputCoreTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142392580

UClass * __cdecl UInputCoreTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputCoreTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InputCore",L"InputCoreTypes",
               &Z_Registration_Info_UClass_UInputCoreTypes.InnerSingleton,
               StaticRegisterNativesUInputCoreTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputCoreTypes>,
               InternalVTableHelperCtorCaller<UInputCoreTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputCoreTypes.InnerSingleton;
}

// StaticRegisterNativesUInputCoreTypes @ 1423b7bb0

void __cdecl UInputCoreTypes::StaticRegisterNativesUInputCoreTypes(void)

{
  return;
}

