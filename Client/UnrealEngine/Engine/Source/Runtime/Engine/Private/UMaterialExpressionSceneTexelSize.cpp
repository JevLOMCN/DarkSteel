// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc530

UClass * __cdecl UMaterialExpressionSceneTexelSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneTexelSize",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneTexelSize,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneTexelSize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneTexelSize>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.InnerSingleton;
}

// UMaterialExpressionSceneTexelSize @ 1472d27f0

UMaterialExpressionSceneTexelSize * __thiscall
UMaterialExpressionSceneTexelSize::UMaterialExpressionSceneTexelSize
          (UMaterialExpressionSceneTexelSize *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSceneTexelSize__6B_;
  return this;
}

// UMaterialExpressionSceneTexelSize @ 1472d2820

UMaterialExpressionSceneTexelSize * __thiscall
UMaterialExpressionSceneTexelSize::UMaterialExpressionSceneTexelSize
          (UMaterialExpressionSceneTexelSize *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSceneTexelSize__6B_;
  return this;
}

// ~UMaterialExpressionSceneTexelSize @ 1472d4470

void __thiscall
UMaterialExpressionSceneTexelSize::~UMaterialExpressionSceneTexelSize
          (UMaterialExpressionSceneTexelSize *this)

{
  *(undefined ***)this = &___7UMaterialExpressionSceneTexelSize__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6ab0

UClass * __cdecl UMaterialExpressionSceneTexelSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneTexelSize",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneTexelSize,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneTexelSize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneTexelSize>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSceneTexelSize @ 1472d8890

void __cdecl
UMaterialExpressionSceneTexelSize::StaticRegisterNativesUMaterialExpressionSceneTexelSize(void)

{
  return;
}

