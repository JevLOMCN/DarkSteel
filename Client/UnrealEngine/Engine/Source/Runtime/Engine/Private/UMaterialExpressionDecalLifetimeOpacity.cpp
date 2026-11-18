// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472950e0

UClass * __cdecl UMaterialExpressionDecalLifetimeOpacity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalLifetimeOpacity",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalLifetimeOpacity>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalLifetimeOpacity>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.InnerSingleton;
}

// UMaterialExpressionDecalLifetimeOpacity @ 14729cee0

UMaterialExpressionDecalLifetimeOpacity * __thiscall
UMaterialExpressionDecalLifetimeOpacity::UMaterialExpressionDecalLifetimeOpacity
          (UMaterialExpressionDecalLifetimeOpacity *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDecalLifetimeOpacity__6B_;
  return this;
}

// ~UMaterialExpressionDecalLifetimeOpacity @ 14729dc30

void __thiscall
UMaterialExpressionDecalLifetimeOpacity::~UMaterialExpressionDecalLifetimeOpacity
          (UMaterialExpressionDecalLifetimeOpacity *this)

{
  *(undefined ***)this = &___7UMaterialExpressionDecalLifetimeOpacity__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472a10d0

UClass * __cdecl UMaterialExpressionDecalLifetimeOpacity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalLifetimeOpacity",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalLifetimeOpacity>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalLifetimeOpacity>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity @ 1472a1e50

void __cdecl
UMaterialExpressionDecalLifetimeOpacity::
StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity(void)

{
  return;
}

// UMaterialExpressionDecalLifetimeOpacity @ 148afb9e0

UMaterialExpressionDecalLifetimeOpacity * __thiscall
UMaterialExpressionDecalLifetimeOpacity::UMaterialExpressionDecalLifetimeOpacity
          (UMaterialExpressionDecalLifetimeOpacity *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDecalLifetimeOpacity__6B_;
  return this;
}

