// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0e3e0

UClass * __cdecl UMaterialExpressionSubstrateBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateBSDF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateBSDF,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionSubstrateBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateBSDF>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateBSDF @ 147f2a880

UMaterialExpressionSubstrateBSDF * __thiscall
UMaterialExpressionSubstrateBSDF::UMaterialExpressionSubstrateBSDF
          (UMaterialExpressionSubstrateBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSubstrateBSDF__6B_;
  return this;
}

// UMaterialExpressionSubstrateBSDF @ 147f2a8b0

UMaterialExpressionSubstrateBSDF * __thiscall
UMaterialExpressionSubstrateBSDF::UMaterialExpressionSubstrateBSDF
          (UMaterialExpressionSubstrateBSDF *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSubstrateBSDF__6B_;
  return this;
}

// ~UMaterialExpressionSubstrateBSDF @ 147f2ef50

void __thiscall
UMaterialExpressionSubstrateBSDF::~UMaterialExpressionSubstrateBSDF
          (UMaterialExpressionSubstrateBSDF *this)

{
  *(undefined ***)this = &___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f423d0

UClass * __cdecl UMaterialExpressionSubstrateBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateBSDF.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateBSDF,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionSubstrateBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateBSDF>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateBSDF @ 147f52ae0

void __cdecl
UMaterialExpressionSubstrateBSDF::StaticRegisterNativesUMaterialExpressionSubstrateBSDF(void)

{
  return;
}

