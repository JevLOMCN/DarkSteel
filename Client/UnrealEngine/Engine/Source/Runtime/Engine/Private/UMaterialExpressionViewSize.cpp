// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dcab0

UClass * __cdecl UMaterialExpressionViewSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionViewSize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionViewSize",
               &Z_Registration_Info_UClass_UMaterialExpressionViewSize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionViewSize,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionViewSize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionViewSize>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionViewSize.InnerSingleton;
}

// UMaterialExpressionViewSize @ 1472e2cf0

UMaterialExpressionViewSize * __thiscall
UMaterialExpressionViewSize::UMaterialExpressionViewSize
          (UMaterialExpressionViewSize *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionViewSize__6B_;
  return this;
}

// UMaterialExpressionViewSize @ 1472e2d20

UMaterialExpressionViewSize * __thiscall
UMaterialExpressionViewSize::UMaterialExpressionViewSize
          (UMaterialExpressionViewSize *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionViewSize__6B_;
  return this;
}

// ~UMaterialExpressionViewSize @ 1472e3870

void __thiscall
UMaterialExpressionViewSize::~UMaterialExpressionViewSize(UMaterialExpressionViewSize *this)

{
  *(undefined ***)this = &___7UMaterialExpressionViewSize__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6de0

UClass * __cdecl UMaterialExpressionViewSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionViewSize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionViewSize",
               &Z_Registration_Info_UClass_UMaterialExpressionViewSize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionViewSize,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionViewSize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionViewSize>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionViewSize.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionViewSize @ 1472e79e0

void __cdecl UMaterialExpressionViewSize::StaticRegisterNativesUMaterialExpressionViewSize(void)

{
  return;
}

