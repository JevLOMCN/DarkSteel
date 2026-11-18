// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd9c0

UClass * __cdecl UMaterialExpressionSine::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSine",
               &Z_Registration_Info_UClass_UMaterialExpressionSine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSine,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSine.InnerSingleton;
}

// UMaterialExpressionSine @ 1472d2d40

UMaterialExpressionSine * __thiscall
UMaterialExpressionSine::UMaterialExpressionSine
          (UMaterialExpressionSine *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSine__6B_;
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

// UMaterialExpressionSine @ 1472d2da0

UMaterialExpressionSine * __thiscall
UMaterialExpressionSine::UMaterialExpressionSine
          (UMaterialExpressionSine *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSine__6B_;
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

// ~UMaterialExpressionSine @ 1472d45c0

void __thiscall UMaterialExpressionSine::~UMaterialExpressionSine(UMaterialExpressionSine *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSine__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7170

UClass * __cdecl UMaterialExpressionSine::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSine",
               &Z_Registration_Info_UClass_UMaterialExpressionSine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSine,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSine.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSine @ 1472d8920

void __cdecl UMaterialExpressionSine::StaticRegisterNativesUMaterialExpressionSine(void)

{
  return;
}

