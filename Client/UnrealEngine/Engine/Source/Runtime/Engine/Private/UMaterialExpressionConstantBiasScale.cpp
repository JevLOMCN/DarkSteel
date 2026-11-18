// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294360

UClass * __cdecl UMaterialExpressionConstantBiasScale::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstantBiasScale",
               &Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstantBiasScale,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstantBiasScale>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstantBiasScale>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.InnerSingleton;
}

// UMaterialExpressionConstantBiasScale @ 14729c8f0

UMaterialExpressionConstantBiasScale * __thiscall
UMaterialExpressionConstantBiasScale::UMaterialExpressionConstantBiasScale
          (UMaterialExpressionConstantBiasScale *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Bias = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionConstantBiasScale__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->Scale = 0.5;
  return this;
}

// UMaterialExpressionConstantBiasScale @ 14729c950

UMaterialExpressionConstantBiasScale * __thiscall
UMaterialExpressionConstantBiasScale::UMaterialExpressionConstantBiasScale
          (UMaterialExpressionConstantBiasScale *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Bias = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionConstantBiasScale__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->Scale = 0.5;
  return this;
}

// ~UMaterialExpressionConstantBiasScale @ 14729d990

void __thiscall
UMaterialExpressionConstantBiasScale::~UMaterialExpressionConstantBiasScale
          (UMaterialExpressionConstantBiasScale *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionConstantBiasScale__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0710

UClass * __cdecl UMaterialExpressionConstantBiasScale::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstantBiasScale",
               &Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstantBiasScale,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstantBiasScale>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstantBiasScale>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConstantBiasScale @ 1472a1d50

void __cdecl
UMaterialExpressionConstantBiasScale::StaticRegisterNativesUMaterialExpressionConstantBiasScale
          (void)

{
  return;
}

