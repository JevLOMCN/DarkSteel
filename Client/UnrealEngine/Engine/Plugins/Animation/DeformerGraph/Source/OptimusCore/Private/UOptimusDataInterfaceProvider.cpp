// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e116340

UClass * __cdecl UOptimusDataInterfaceProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDataInterfaceProvider",
               &Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDataInterfaceProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDataInterfaceProvider>,
               InternalVTableHelperCtorCaller<UOptimusDataInterfaceProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.InnerSingleton;
}

// UOptimusDataInterfaceProvider @ 14e158eb0

UOptimusDataInterfaceProvider * __thiscall
UOptimusDataInterfaceProvider::UOptimusDataInterfaceProvider
          (UOptimusDataInterfaceProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDataInterfaceProvider__6B_;
  return this;
}

// UOptimusDataInterfaceProvider @ 14e158ee0

UOptimusDataInterfaceProvider * __thiscall
UOptimusDataInterfaceProvider::UOptimusDataInterfaceProvider
          (UOptimusDataInterfaceProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDataInterfaceProvider__6B_;
  return this;
}

// ~UOptimusDataInterfaceProvider @ 14e162650

void __thiscall
UOptimusDataInterfaceProvider::~UOptimusDataInterfaceProvider(UOptimusDataInterfaceProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5470

UClass * __cdecl UOptimusDataInterfaceProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDataInterfaceProvider",
               &Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDataInterfaceProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDataInterfaceProvider>,
               InternalVTableHelperCtorCaller<UOptimusDataInterfaceProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDataInterfaceProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusDataInterfaceProvider @ 14e2258b0

void __cdecl UOptimusDataInterfaceProvider::StaticRegisterNativesUOptimusDataInterfaceProvider(void)

{
  return;
}

