// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 7

// StaticClass @ 14d4d9dd0

UClass * __cdecl UStateTreeExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeExtension",
               &Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton,
               StaticRegisterNativesUStateTreeExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStateTreeExtension>,
               InternalVTableHelperCtorCaller<UStateTreeExtension>,local_res8,UObject::StaticClass,
               UStateTree::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton;
}

// UStateTreeExtension @ 14d4ec2a0

UStateTreeExtension * __thiscall
UStateTreeExtension::UStateTreeExtension(UStateTreeExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStateTreeExtension__6B_;
  return this;
}

// UStateTreeExtension @ 14d4ec2d0

UStateTreeExtension * __thiscall
UStateTreeExtension::UStateTreeExtension(UStateTreeExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStateTreeExtension__6B_;
  return this;
}

// ~UStateTreeExtension @ 14d4eca80

void __thiscall UStateTreeExtension::~UStateTreeExtension(UStateTreeExtension *this)

{
  *(undefined ***)this = &___7UStateTreeExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d4ff290

UClass * __cdecl UStateTreeExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeExtension",
               &Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton,
               StaticRegisterNativesUStateTreeExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStateTreeExtension>,
               InternalVTableHelperCtorCaller<UStateTreeExtension>,local_res8,UObject::StaticClass,
               UStateTree::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeExtension.InnerSingleton;
}

// Link @ 14d501b20

bool __thiscall UStateTreeExtension::Link(UStateTreeExtension *this,FStateTreeLinker *param_1)

{
  return true;
}

// StaticRegisterNativesUStateTreeExtension @ 14d518ce0

void __cdecl UStateTreeExtension::StaticRegisterNativesUStateTreeExtension(void)

{
  return;
}

