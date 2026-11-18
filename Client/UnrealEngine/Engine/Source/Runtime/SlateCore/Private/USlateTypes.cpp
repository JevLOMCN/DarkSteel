// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticClass @ 14252f9e0

UClass * __cdecl USlateTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateTypes",
               &Z_Registration_Info_UClass_USlateTypes.InnerSingleton,
               StaticRegisterNativesUSlateTypes,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateTypes>,InternalVTableHelperCtorCaller<USlateTypes>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTypes.InnerSingleton;
}

// USlateTypes @ 142549e80

USlateTypes * __thiscall USlateTypes::USlateTypes(USlateTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USlateTypes__6B_;
  return this;
}

// USlateTypes @ 142549eb0

USlateTypes * __thiscall USlateTypes::USlateTypes(USlateTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USlateTypes__6B_;
  return this;
}

// ~USlateTypes @ 14254c980

void __thiscall USlateTypes::~USlateTypes(USlateTypes *this)

{
  *(undefined ***)this = &___7USlateTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142582520

UClass * __cdecl USlateTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateTypes",
               &Z_Registration_Info_UClass_USlateTypes.InnerSingleton,
               StaticRegisterNativesUSlateTypes,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateTypes>,InternalVTableHelperCtorCaller<USlateTypes>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTypes.InnerSingleton;
}

// StaticRegisterNativesUSlateTypes @ 1425a8770

void __cdecl USlateTypes::StaticRegisterNativesUSlateTypes(void)

{
  return;
}

