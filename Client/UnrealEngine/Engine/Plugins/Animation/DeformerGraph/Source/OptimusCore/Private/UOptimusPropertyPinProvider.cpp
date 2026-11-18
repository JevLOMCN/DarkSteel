// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e108c50

UClass * __cdecl UOptimusPropertyPinProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPropertyPinProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPropertyPinProvider",
               &Z_Registration_Info_UClass_UOptimusPropertyPinProvider.InnerSingleton,
               StaticRegisterNativesUOptimusPropertyPinProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPropertyPinProvider>,
               InternalVTableHelperCtorCaller<UOptimusPropertyPinProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPropertyPinProvider.InnerSingleton;
}

// UOptimusPropertyPinProvider @ 14e15c6d0

UOptimusPropertyPinProvider * __thiscall
UOptimusPropertyPinProvider::UOptimusPropertyPinProvider
          (UOptimusPropertyPinProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPropertyPinProvider__6B_;
  return this;
}

// UOptimusPropertyPinProvider @ 14e15c700

UOptimusPropertyPinProvider * __thiscall
UOptimusPropertyPinProvider::UOptimusPropertyPinProvider
          (UOptimusPropertyPinProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPropertyPinProvider__6B_;
  return this;
}

// ~UOptimusPropertyPinProvider @ 14e163cd0

void __thiscall
UOptimusPropertyPinProvider::~UOptimusPropertyPinProvider(UOptimusPropertyPinProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8720

UClass * __cdecl UOptimusPropertyPinProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPropertyPinProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPropertyPinProvider",
               &Z_Registration_Info_UClass_UOptimusPropertyPinProvider.InnerSingleton,
               StaticRegisterNativesUOptimusPropertyPinProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPropertyPinProvider>,
               InternalVTableHelperCtorCaller<UOptimusPropertyPinProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPropertyPinProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusPropertyPinProvider @ 14e225de0

void __cdecl UOptimusPropertyPinProvider::StaticRegisterNativesUOptimusPropertyPinProvider(void)

{
  return;
}

