// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b8d50

UClass * __cdecl UMaterialExpressionNormalize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNormalize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNormalize",
               &Z_Registration_Info_UClass_UMaterialExpressionNormalize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNormalize,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNormalize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNormalize>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNormalize.InnerSingleton;
}

// UMaterialExpressionNormalize @ 1472c0490

UMaterialExpressionNormalize * __thiscall
UMaterialExpressionNormalize::UMaterialExpressionNormalize
          (UMaterialExpressionNormalize *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNormalize__6B_;
  (this->VectorInput).OutputIndex = 0;
  (this->VectorInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VectorInput).InputName.Number = 0;
  (this->VectorInput).MaskR = 0;
  (this->VectorInput).MaskG = 0;
  (this->VectorInput).MaskB = 0;
  (this->VectorInput).MaskA = 0;
  (this->VectorInput).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionNormalize @ 1472c04e0

UMaterialExpressionNormalize * __thiscall
UMaterialExpressionNormalize::UMaterialExpressionNormalize
          (UMaterialExpressionNormalize *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNormalize__6B_;
  (this->VectorInput).OutputIndex = 0;
  (this->VectorInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VectorInput).InputName.Number = 0;
  (this->VectorInput).MaskR = 0;
  (this->VectorInput).MaskG = 0;
  (this->VectorInput).MaskB = 0;
  (this->VectorInput).MaskA = 0;
  (this->VectorInput).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionNormalize @ 1472c2130

void __thiscall
UMaterialExpressionNormalize::~UMaterialExpressionNormalize(UMaterialExpressionNormalize *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionNormalize__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4cf0

UClass * __cdecl UMaterialExpressionNormalize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNormalize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNormalize",
               &Z_Registration_Info_UClass_UMaterialExpressionNormalize.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNormalize,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNormalize>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNormalize>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNormalize.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNormalize @ 1472c74e0

void __cdecl UMaterialExpressionNormalize::StaticRegisterNativesUMaterialExpressionNormalize(void)

{
  return;
}

