// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a6340

UClass * __cdecl UMaterialExpressionUIntToFloat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionUIntToFloat",
               &Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionUIntToFloat,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionUIntToFloat>,
               InternalVTableHelperCtorCaller<UMaterialExpressionUIntToFloat>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.InnerSingleton;
}

// UMaterialExpressionUIntToFloat @ 1472af340

UMaterialExpressionUIntToFloat * __thiscall
UMaterialExpressionUIntToFloat::UMaterialExpressionUIntToFloat
          (UMaterialExpressionUIntToFloat *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionUIntToFloat__6B_;
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

// UMaterialExpressionUIntToFloat @ 1472af390

UMaterialExpressionUIntToFloat * __thiscall
UMaterialExpressionUIntToFloat::UMaterialExpressionUIntToFloat
          (UMaterialExpressionUIntToFloat *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionUIntToFloat__6B_;
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

// ~UMaterialExpressionUIntToFloat @ 1472afe30

void __thiscall
UMaterialExpressionUIntToFloat::~UMaterialExpressionUIntToFloat
          (UMaterialExpressionUIntToFloat *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionUIntToFloat__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b4220

UClass * __cdecl UMaterialExpressionUIntToFloat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionUIntToFloat",
               &Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionUIntToFloat,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionUIntToFloat>,
               InternalVTableHelperCtorCaller<UMaterialExpressionUIntToFloat>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionUIntToFloat.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionUIntToFloat @ 1472b47f0

void __cdecl
UMaterialExpressionUIntToFloat::StaticRegisterNativesUMaterialExpressionUIntToFloat(void)

{
  return;
}

