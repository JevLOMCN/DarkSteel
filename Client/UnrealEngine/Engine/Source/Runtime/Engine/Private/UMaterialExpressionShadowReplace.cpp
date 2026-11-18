// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd680

UClass * __cdecl UMaterialExpressionShadowReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShadowReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShadowReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShadowReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShadowReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.InnerSingleton;
}

// UMaterialExpressionShadowReplace @ 1472d2bc0

UMaterialExpressionShadowReplace * __thiscall
UMaterialExpressionShadowReplace::UMaterialExpressionShadowReplace
          (UMaterialExpressionShadowReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShadowReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Shadow).OutputIndex = 0;
  (this->Shadow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Shadow).InputName.Number = 0;
  (this->Shadow).MaskR = 0;
  (this->Shadow).MaskG = 0;
  (this->Shadow).MaskB = 0;
  (this->Shadow).MaskA = 0;
  (this->Shadow).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionShadowReplace @ 1472d2c30

UMaterialExpressionShadowReplace * __thiscall
UMaterialExpressionShadowReplace::UMaterialExpressionShadowReplace
          (UMaterialExpressionShadowReplace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShadowReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Shadow).OutputIndex = 0;
  (this->Shadow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Shadow).InputName.Number = 0;
  (this->Shadow).MaskR = 0;
  (this->Shadow).MaskG = 0;
  (this->Shadow).MaskB = 0;
  (this->Shadow).MaskA = 0;
  (this->Shadow).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionShadowReplace @ 1472d4580

void __thiscall
UMaterialExpressionShadowReplace::~UMaterialExpressionShadowReplace
          (UMaterialExpressionShadowReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionShadowReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6ff0

UClass * __cdecl UMaterialExpressionShadowReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShadowReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShadowReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShadowReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShadowReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionShadowReplace @ 1472d8900

void __cdecl
UMaterialExpressionShadowReplace::StaticRegisterNativesUMaterialExpressionShadowReplace(void)

{
  return;
}

