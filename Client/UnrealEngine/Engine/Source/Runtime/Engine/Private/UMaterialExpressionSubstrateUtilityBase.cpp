// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a3c0

UClass * __cdecl UMaterialExpressionSubstrateUtilityBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateUtilityBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateUtilityBase",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateUtilityBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateUtilityBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionSubstrateUtilityBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateUtilityBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateUtilityBase.InnerSingleton;
}

// UMaterialExpressionSubstrateUtilityBase @ 147f2d800

UMaterialExpressionSubstrateUtilityBase * __thiscall
UMaterialExpressionSubstrateUtilityBase::UMaterialExpressionSubstrateUtilityBase
          (UMaterialExpressionSubstrateUtilityBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSubstrateUtilityBase__6B_;
  return this;
}

// UMaterialExpressionSubstrateUtilityBase @ 147f2d830

UMaterialExpressionSubstrateUtilityBase * __thiscall
UMaterialExpressionSubstrateUtilityBase::UMaterialExpressionSubstrateUtilityBase
          (UMaterialExpressionSubstrateUtilityBase *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionSubstrateUtilityBase__6B_;
  return this;
}

// ~UMaterialExpressionSubstrateUtilityBase @ 147f2f1b0

void __thiscall
UMaterialExpressionSubstrateUtilityBase::~UMaterialExpressionSubstrateUtilityBase
          (UMaterialExpressionSubstrateUtilityBase *this)

{
  *(undefined ***)this = &___7UMaterialExpressionSubstrateUtilityBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f43210

UClass * __cdecl UMaterialExpressionSubstrateUtilityBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateUtilityBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateUtilityBase",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateUtilityBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateUtilityBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionSubstrateUtilityBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateUtilityBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateUtilityBase.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateUtilityBase @ 147f52c10

void __cdecl
UMaterialExpressionSubstrateUtilityBase::
StaticRegisterNativesUMaterialExpressionSubstrateUtilityBase(void)

{
  return;
}

