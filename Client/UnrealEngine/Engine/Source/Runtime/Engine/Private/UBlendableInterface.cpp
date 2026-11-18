// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147256600

UClass * __cdecl UBlendableInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBlendableInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendableInterface",
               &Z_Registration_Info_UClass_UBlendableInterface.InnerSingleton,
               StaticRegisterNativesUBlendableInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendableInterface>,
               InternalVTableHelperCtorCaller<UBlendableInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendableInterface.InnerSingleton;
}

// UBlendableInterface @ 14725d380

UBlendableInterface * __thiscall
UBlendableInterface::UBlendableInterface(UBlendableInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBlendableInterface__6B_;
  return this;
}

// ~UBlendableInterface @ 14725df40

void __thiscall UBlendableInterface::~UBlendableInterface(UBlendableInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147260900

UClass * __cdecl UBlendableInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendableInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlendableInterface",
               &Z_Registration_Info_UClass_UBlendableInterface.InnerSingleton,
               StaticRegisterNativesUBlendableInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendableInterface>,
               InternalVTableHelperCtorCaller<UBlendableInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendableInterface.InnerSingleton;
}

// StaticRegisterNativesUBlendableInterface @ 147260f90

void __cdecl UBlendableInterface::StaticRegisterNativesUBlendableInterface(void)

{
  return;
}

// UBlendableInterface @ 14850fd30

UBlendableInterface * __thiscall
UBlendableInterface::UBlendableInterface(UBlendableInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBlendableInterface__6B_;
  return this;
}

