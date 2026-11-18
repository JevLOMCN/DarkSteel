// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e1070c0

UClass * __cdecl UOptimusComponentBindingProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentBindingProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentBindingProvider",
               &Z_Registration_Info_UClass_UOptimusComponentBindingProvider.InnerSingleton,
               StaticRegisterNativesUOptimusComponentBindingProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComponentBindingProvider>,
               InternalVTableHelperCtorCaller<UOptimusComponentBindingProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentBindingProvider.InnerSingleton;
}

// UOptimusComponentBindingProvider @ 14e158650

UOptimusComponentBindingProvider * __thiscall
UOptimusComponentBindingProvider::UOptimusComponentBindingProvider
          (UOptimusComponentBindingProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComponentBindingProvider__6B_;
  return this;
}

// UOptimusComponentBindingProvider @ 14e158680

UOptimusComponentBindingProvider * __thiscall
UOptimusComponentBindingProvider::UOptimusComponentBindingProvider
          (UOptimusComponentBindingProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComponentBindingProvider__6B_;
  return this;
}

// ~UOptimusComponentBindingProvider @ 14e162300

void __thiscall
UOptimusComponentBindingProvider::~UOptimusComponentBindingProvider
          (UOptimusComponentBindingProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d4960

UClass * __cdecl UOptimusComponentBindingProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentBindingProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentBindingProvider",
               &Z_Registration_Info_UClass_UOptimusComponentBindingProvider.InnerSingleton,
               StaticRegisterNativesUOptimusComponentBindingProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComponentBindingProvider>,
               InternalVTableHelperCtorCaller<UOptimusComponentBindingProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentBindingProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusComponentBindingProvider @ 14e2257c0

void __cdecl
UOptimusComponentBindingProvider::StaticRegisterNativesUOptimusComponentBindingProvider(void)

{
  return;
}

