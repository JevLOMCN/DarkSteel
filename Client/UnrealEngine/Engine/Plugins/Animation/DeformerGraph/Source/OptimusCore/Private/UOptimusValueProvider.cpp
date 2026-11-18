// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e10bf70

UClass * __cdecl UOptimusValueProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusValueProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusValueProvider",
               &Z_Registration_Info_UClass_UOptimusValueProvider.InnerSingleton,
               StaticRegisterNativesUOptimusValueProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusValueProvider>,
               InternalVTableHelperCtorCaller<UOptimusValueProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusValueProvider.InnerSingleton;
}

// UOptimusValueProvider @ 14e15d940

UOptimusValueProvider * __thiscall
UOptimusValueProvider::UOptimusValueProvider(UOptimusValueProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusValueProvider__6B_;
  return this;
}

// UOptimusValueProvider @ 14e15d970

UOptimusValueProvider * __thiscall
UOptimusValueProvider::UOptimusValueProvider
          (UOptimusValueProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusValueProvider__6B_;
  return this;
}

// ~UOptimusValueProvider @ 14e164280

void __thiscall UOptimusValueProvider::~UOptimusValueProvider(UOptimusValueProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9cb0

UClass * __cdecl UOptimusValueProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusValueProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusValueProvider",
               &Z_Registration_Info_UClass_UOptimusValueProvider.InnerSingleton,
               StaticRegisterNativesUOptimusValueProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusValueProvider>,
               InternalVTableHelperCtorCaller<UOptimusValueProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusValueProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusValueProvider @ 14e225fb0

void __cdecl UOptimusValueProvider::StaticRegisterNativesUOptimusValueProvider(void)

{
  return;
}

