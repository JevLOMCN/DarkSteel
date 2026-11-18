// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1473c8f70

UClass * __cdecl UAnimClassInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimClassInterface",
               &Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton,
               StaticRegisterNativesUAnimClassInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimClassInterface>,
               InternalVTableHelperCtorCaller<UAnimClassInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton;
}

// UAnimClassInterface @ 1473d84e0

UAnimClassInterface * __thiscall
UAnimClassInterface::UAnimClassInterface(UAnimClassInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimClassInterface__6B_;
  return this;
}

// UAnimClassInterface @ 1473d8510

UAnimClassInterface * __thiscall
UAnimClassInterface::UAnimClassInterface(UAnimClassInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimClassInterface__6B_;
  return this;
}

// ~UAnimClassInterface @ 1473db3b0

void __thiscall UAnimClassInterface::~UAnimClassInterface(UAnimClassInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147403a40

UClass * __cdecl UAnimClassInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimClassInterface",
               &Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton,
               StaticRegisterNativesUAnimClassInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimClassInterface>,
               InternalVTableHelperCtorCaller<UAnimClassInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimClassInterface.InnerSingleton;
}

// StaticRegisterNativesUAnimClassInterface @ 147419bd0

void __cdecl UAnimClassInterface::StaticRegisterNativesUAnimClassInterface(void)

{
  return;
}

