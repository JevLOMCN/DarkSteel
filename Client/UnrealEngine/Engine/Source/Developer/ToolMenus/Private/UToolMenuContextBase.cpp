// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 6

// StaticClass @ 142c2dd20

UClass * __cdecl UToolMenuContextBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuContextBase",
               &Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton,
               StaticRegisterNativesUToolMenuContextBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuContextBase>,
               InternalVTableHelperCtorCaller<UToolMenuContextBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton;
}

// UToolMenuContextBase @ 142c3ae70

UToolMenuContextBase * __thiscall
UToolMenuContextBase::UToolMenuContextBase(UToolMenuContextBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuContextBase__6B_;
  return this;
}

// UToolMenuContextBase @ 142c3aea0

UToolMenuContextBase * __thiscall
UToolMenuContextBase::UToolMenuContextBase(UToolMenuContextBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuContextBase__6B_;
  return this;
}

// ~UToolMenuContextBase @ 142c3c930

void __thiscall UToolMenuContextBase::~UToolMenuContextBase(UToolMenuContextBase *this)

{
  *(undefined ***)this = &___7UToolMenuContextBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142c5f3e0

UClass * __cdecl UToolMenuContextBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuContextBase",
               &Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton,
               StaticRegisterNativesUToolMenuContextBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuContextBase>,
               InternalVTableHelperCtorCaller<UToolMenuContextBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuContextBase.InnerSingleton;
}

// StaticRegisterNativesUToolMenuContextBase @ 142c70eb0

void __cdecl UToolMenuContextBase::StaticRegisterNativesUToolMenuContextBase(void)

{
  return;
}

