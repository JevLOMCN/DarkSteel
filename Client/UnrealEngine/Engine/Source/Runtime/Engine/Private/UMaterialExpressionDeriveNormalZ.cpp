// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147295e20

UClass * __cdecl UMaterialExpressionDeriveNormalZ::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDeriveNormalZ",
               &Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDeriveNormalZ,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDeriveNormalZ>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDeriveNormalZ>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.InnerSingleton;
}

// UMaterialExpressionDeriveNormalZ @ 14729d0a0

UMaterialExpressionDeriveNormalZ * __thiscall
UMaterialExpressionDeriveNormalZ::UMaterialExpressionDeriveNormalZ
          (UMaterialExpressionDeriveNormalZ *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDeriveNormalZ__6B_;
  (this->InXY).OutputIndex = 0;
  (this->InXY).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InXY).InputName.Number = 0;
  (this->InXY).MaskR = 0;
  (this->InXY).MaskG = 0;
  (this->InXY).MaskB = 0;
  (this->InXY).MaskA = 0;
  (this->InXY).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionDeriveNormalZ @ 14729d0f0

UMaterialExpressionDeriveNormalZ * __thiscall
UMaterialExpressionDeriveNormalZ::UMaterialExpressionDeriveNormalZ
          (UMaterialExpressionDeriveNormalZ *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDeriveNormalZ__6B_;
  (this->InXY).OutputIndex = 0;
  (this->InXY).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InXY).InputName.Number = 0;
  (this->InXY).MaskR = 0;
  (this->InXY).MaskG = 0;
  (this->InXY).MaskB = 0;
  (this->InXY).MaskA = 0;
  (this->InXY).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionDeriveNormalZ @ 14729dcd0

void __thiscall
UMaterialExpressionDeriveNormalZ::~UMaterialExpressionDeriveNormalZ
          (UMaterialExpressionDeriveNormalZ *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDeriveNormalZ__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1490

UClass * __cdecl UMaterialExpressionDeriveNormalZ::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDeriveNormalZ",
               &Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDeriveNormalZ,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDeriveNormalZ>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDeriveNormalZ>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDeriveNormalZ.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDeriveNormalZ @ 1472a1ea0

void __cdecl
UMaterialExpressionDeriveNormalZ::StaticRegisterNativesUMaterialExpressionDeriveNormalZ(void)

{
  return;
}

