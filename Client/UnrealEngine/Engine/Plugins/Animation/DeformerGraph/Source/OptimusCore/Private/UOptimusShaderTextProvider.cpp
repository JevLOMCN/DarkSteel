// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e109690

UClass * __cdecl UOptimusShaderTextProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusShaderTextProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusShaderTextProvider",
               &Z_Registration_Info_UClass_UOptimusShaderTextProvider.InnerSingleton,
               StaticRegisterNativesUOptimusShaderTextProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusShaderTextProvider>,
               InternalVTableHelperCtorCaller<UOptimusShaderTextProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusShaderTextProvider.InnerSingleton;
}

// UOptimusShaderTextProvider @ 14e15cbc0

UOptimusShaderTextProvider * __thiscall
UOptimusShaderTextProvider::UOptimusShaderTextProvider
          (UOptimusShaderTextProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusShaderTextProvider__6B_;
  return this;
}

// UOptimusShaderTextProvider @ 14e15cbf0

UOptimusShaderTextProvider * __thiscall
UOptimusShaderTextProvider::UOptimusShaderTextProvider
          (UOptimusShaderTextProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusShaderTextProvider__6B_;
  return this;
}

// ~UOptimusShaderTextProvider @ 14e163ed0

void __thiscall
UOptimusShaderTextProvider::~UOptimusShaderTextProvider(UOptimusShaderTextProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8d00

UClass * __cdecl UOptimusShaderTextProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusShaderTextProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusShaderTextProvider",
               &Z_Registration_Info_UClass_UOptimusShaderTextProvider.InnerSingleton,
               StaticRegisterNativesUOptimusShaderTextProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusShaderTextProvider>,
               InternalVTableHelperCtorCaller<UOptimusShaderTextProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusShaderTextProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusShaderTextProvider @ 14e225e60

void __cdecl UOptimusShaderTextProvider::StaticRegisterNativesUOptimusShaderTextProvider(void)

{
  return;
}

