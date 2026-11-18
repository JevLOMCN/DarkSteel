// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e116570

UClass * __cdecl UOptimusNodeAdderPinProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeAdderPinProvider",
               &Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.InnerSingleton,
               StaticRegisterNativesUOptimusNodeAdderPinProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeAdderPinProvider>,
               InternalVTableHelperCtorCaller<UOptimusNodeAdderPinProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.InnerSingleton;
}

// UOptimusNodeAdderPinProvider @ 14e15a850

UOptimusNodeAdderPinProvider * __thiscall
UOptimusNodeAdderPinProvider::UOptimusNodeAdderPinProvider
          (UOptimusNodeAdderPinProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeAdderPinProvider__6B_;
  return this;
}

// UOptimusNodeAdderPinProvider @ 14e15a880

UOptimusNodeAdderPinProvider * __thiscall
UOptimusNodeAdderPinProvider::UOptimusNodeAdderPinProvider
          (UOptimusNodeAdderPinProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeAdderPinProvider__6B_;
  return this;
}

// ~UOptimusNodeAdderPinProvider @ 14e162f00

void __thiscall
UOptimusNodeAdderPinProvider::~UOptimusNodeAdderPinProvider(UOptimusNodeAdderPinProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6960

UClass * __cdecl UOptimusNodeAdderPinProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeAdderPinProvider",
               &Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.InnerSingleton,
               StaticRegisterNativesUOptimusNodeAdderPinProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeAdderPinProvider>,
               InternalVTableHelperCtorCaller<UOptimusNodeAdderPinProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeAdderPinProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodeAdderPinProvider @ 14e225b30

void __cdecl UOptimusNodeAdderPinProvider::StaticRegisterNativesUOptimusNodeAdderPinProvider(void)

{
  return;
}

