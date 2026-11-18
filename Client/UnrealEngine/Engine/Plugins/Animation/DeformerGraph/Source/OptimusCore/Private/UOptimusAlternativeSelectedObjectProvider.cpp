// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e105c30

UClass * __cdecl UOptimusAlternativeSelectedObjectProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAlternativeSelectedObjectProvider",
               &Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.InnerSingleton,
               StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusAlternativeSelectedObjectProvider>,
               InternalVTableHelperCtorCaller<UOptimusAlternativeSelectedObjectProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.InnerSingleton;
}

// UOptimusAlternativeSelectedObjectProvider @ 14e158400

UOptimusAlternativeSelectedObjectProvider * __thiscall
UOptimusAlternativeSelectedObjectProvider::UOptimusAlternativeSelectedObjectProvider
          (UOptimusAlternativeSelectedObjectProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusAlternativeSelectedObjectProvider__6B_;
  return this;
}

// UOptimusAlternativeSelectedObjectProvider @ 14e158430

UOptimusAlternativeSelectedObjectProvider * __thiscall
UOptimusAlternativeSelectedObjectProvider::UOptimusAlternativeSelectedObjectProvider
          (UOptimusAlternativeSelectedObjectProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusAlternativeSelectedObjectProvider__6B_;
  return this;
}

// ~UOptimusAlternativeSelectedObjectProvider @ 14e162210

void __thiscall
UOptimusAlternativeSelectedObjectProvider::~UOptimusAlternativeSelectedObjectProvider
          (UOptimusAlternativeSelectedObjectProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d45a0

UClass * __cdecl UOptimusAlternativeSelectedObjectProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusAlternativeSelectedObjectProvider",
               &Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.InnerSingleton,
               StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusAlternativeSelectedObjectProvider>,
               InternalVTableHelperCtorCaller<UOptimusAlternativeSelectedObjectProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusAlternativeSelectedObjectProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider @ 14e225770

void __cdecl
UOptimusAlternativeSelectedObjectProvider::
StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider(void)

{
  return;
}

