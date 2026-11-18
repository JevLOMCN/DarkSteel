// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147295fa0

UClass * __cdecl UMaterialExpressionCosine::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCosine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCosine",
               &Z_Registration_Info_UClass_UMaterialExpressionCosine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCosine,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCosine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCosine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCosine.InnerSingleton;
}

// UMaterialExpressionCosine @ 14729ca20

UMaterialExpressionCosine * __thiscall
UMaterialExpressionCosine::UMaterialExpressionCosine
          (UMaterialExpressionCosine *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionCosine__6B_;
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

// UMaterialExpressionCosine @ 14729ca80

UMaterialExpressionCosine * __thiscall
UMaterialExpressionCosine::UMaterialExpressionCosine
          (UMaterialExpressionCosine *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionCosine__6B_;
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

// ~UMaterialExpressionCosine @ 14729da20

void __thiscall
UMaterialExpressionCosine::~UMaterialExpressionCosine(UMaterialExpressionCosine *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCosine__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0890

UClass * __cdecl UMaterialExpressionCosine::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCosine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCosine",
               &Z_Registration_Info_UClass_UMaterialExpressionCosine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCosine,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCosine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCosine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCosine.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCosine @ 1472a1d70

void __cdecl UMaterialExpressionCosine::StaticRegisterNativesUMaterialExpressionCosine(void)

{
  return;
}

