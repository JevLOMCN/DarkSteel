// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e117b80

UClass * __cdecl UOptimusDeformerGeometryReadbackProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerGeometryReadbackProvider.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerGeometryReadbackProvider",
               &Z_Registration_Info_UClass_UOptimusDeformerGeometryReadbackProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerGeometryReadbackProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeformerGeometryReadbackProvider>,
               InternalVTableHelperCtorCaller<UOptimusDeformerGeometryReadbackProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerGeometryReadbackProvider.InnerSingleton;
}

// UOptimusDeformerGeometryReadbackProvider @ 14e159950

UOptimusDeformerGeometryReadbackProvider * __thiscall
UOptimusDeformerGeometryReadbackProvider::UOptimusDeformerGeometryReadbackProvider
          (UOptimusDeformerGeometryReadbackProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeformerGeometryReadbackProvider__6B_;
  return this;
}

// UOptimusDeformerGeometryReadbackProvider @ 14e159980

UOptimusDeformerGeometryReadbackProvider * __thiscall
UOptimusDeformerGeometryReadbackProvider::UOptimusDeformerGeometryReadbackProvider
          (UOptimusDeformerGeometryReadbackProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeformerGeometryReadbackProvider__6B_;
  return this;
}

// ~UOptimusDeformerGeometryReadbackProvider @ 14e1629c0

void __thiscall
UOptimusDeformerGeometryReadbackProvider::~UOptimusDeformerGeometryReadbackProvider
          (UOptimusDeformerGeometryReadbackProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d58f0

UClass * __cdecl UOptimusDeformerGeometryReadbackProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeformerGeometryReadbackProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeformerGeometryReadbackProvider",
               &Z_Registration_Info_UClass_UOptimusDeformerGeometryReadbackProvider.InnerSingleton,
               StaticRegisterNativesUOptimusDeformerGeometryReadbackProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeformerGeometryReadbackProvider>,
               InternalVTableHelperCtorCaller<UOptimusDeformerGeometryReadbackProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeformerGeometryReadbackProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusDeformerGeometryReadbackProvider @ 14e225940

void __cdecl
UOptimusDeformerGeometryReadbackProvider::
StaticRegisterNativesUOptimusDeformerGeometryReadbackProvider(void)

{
  return;
}

