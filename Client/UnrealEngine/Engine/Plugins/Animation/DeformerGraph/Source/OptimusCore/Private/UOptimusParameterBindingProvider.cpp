// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e104740

UClass * __cdecl UOptimusParameterBindingProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusParameterBindingProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusParameterBindingProvider",
               &Z_Registration_Info_UClass_UOptimusParameterBindingProvider.InnerSingleton,
               StaticRegisterNativesUOptimusParameterBindingProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusParameterBindingProvider>,
               InternalVTableHelperCtorCaller<UOptimusParameterBindingProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusParameterBindingProvider.InnerSingleton;
}

// UOptimusParameterBindingProvider @ 14e15c3d0

UOptimusParameterBindingProvider * __thiscall
UOptimusParameterBindingProvider::UOptimusParameterBindingProvider
          (UOptimusParameterBindingProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusParameterBindingProvider__6B_;
  return this;
}

// UOptimusParameterBindingProvider @ 14e15c400

UOptimusParameterBindingProvider * __thiscall
UOptimusParameterBindingProvider::UOptimusParameterBindingProvider
          (UOptimusParameterBindingProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusParameterBindingProvider__6B_;
  return this;
}

// ~UOptimusParameterBindingProvider @ 14e163be0

void __thiscall
UOptimusParameterBindingProvider::~UOptimusParameterBindingProvider
          (UOptimusParameterBindingProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d82a0

UClass * __cdecl UOptimusParameterBindingProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusParameterBindingProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusParameterBindingProvider",
               &Z_Registration_Info_UClass_UOptimusParameterBindingProvider.InnerSingleton,
               StaticRegisterNativesUOptimusParameterBindingProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusParameterBindingProvider>,
               InternalVTableHelperCtorCaller<UOptimusParameterBindingProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusParameterBindingProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusParameterBindingProvider @ 14e225d80

void __cdecl
UOptimusParameterBindingProvider::StaticRegisterNativesUOptimusParameterBindingProvider(void)

{
  return;
}

