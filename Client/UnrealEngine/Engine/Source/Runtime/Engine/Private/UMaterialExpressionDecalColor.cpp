// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294d20

UClass * __cdecl UMaterialExpressionDecalColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalColor",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalColor.InnerSingleton;
}

// UMaterialExpressionDecalColor @ 14729ce80

UMaterialExpressionDecalColor * __thiscall
UMaterialExpressionDecalColor::UMaterialExpressionDecalColor
          (UMaterialExpressionDecalColor *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDecalColor__6B_;
  return this;
}

// ~UMaterialExpressionDecalColor @ 14729dbf0

void __thiscall
UMaterialExpressionDecalColor::~UMaterialExpressionDecalColor(UMaterialExpressionDecalColor *this)

{
  *(undefined ***)this = &___7UMaterialExpressionDecalColor__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0f50

UClass * __cdecl UMaterialExpressionDecalColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalColor",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalColor,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDecalColor @ 1472a1e30

void __cdecl UMaterialExpressionDecalColor::StaticRegisterNativesUMaterialExpressionDecalColor(void)

{
  return;
}

// UMaterialExpressionDecalColor @ 148afb940

UMaterialExpressionDecalColor * __thiscall
UMaterialExpressionDecalColor::UMaterialExpressionDecalColor
          (UMaterialExpressionDecalColor *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDecalColor__6B_;
  return this;
}

