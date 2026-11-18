// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cba50

UClass * __cdecl UMaterialExpressionSaturate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSaturate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSaturate",
               &Z_Registration_Info_UClass_UMaterialExpressionSaturate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSaturate,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSaturate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSaturate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSaturate.InnerSingleton;
}

// UMaterialExpressionSaturate @ 1472d2580

UMaterialExpressionSaturate * __thiscall
UMaterialExpressionSaturate::UMaterialExpressionSaturate
          (UMaterialExpressionSaturate *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSaturate__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSaturate @ 1472d25d0

UMaterialExpressionSaturate * __thiscall
UMaterialExpressionSaturate::UMaterialExpressionSaturate
          (UMaterialExpressionSaturate *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSaturate__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSaturate @ 1472d43b0

void __thiscall
UMaterialExpressionSaturate::~UMaterialExpressionSaturate(UMaterialExpressionSaturate *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSaturate__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d66f0

UClass * __cdecl UMaterialExpressionSaturate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSaturate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSaturate",
               &Z_Registration_Info_UClass_UMaterialExpressionSaturate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSaturate,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSaturate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSaturate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSaturate.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSaturate @ 1472d8840

void __cdecl UMaterialExpressionSaturate::StaticRegisterNativesUMaterialExpressionSaturate(void)

{
  return;
}

