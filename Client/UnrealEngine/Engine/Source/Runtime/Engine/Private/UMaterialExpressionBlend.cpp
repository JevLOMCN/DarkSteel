// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147298210

UClass * __cdecl UMaterialExpressionBlend::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBlend.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBlend",
               &Z_Registration_Info_UClass_UMaterialExpressionBlend.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBlend,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBlend>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBlend>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBlend.InnerSingleton;
}

// UMaterialExpressionBlend @ 14729be70

UMaterialExpressionBlend * __thiscall
UMaterialExpressionBlend::UMaterialExpressionBlend
          (UMaterialExpressionBlend *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBlend__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionBlend @ 14729bf10

UMaterialExpressionBlend * __thiscall
UMaterialExpressionBlend::UMaterialExpressionBlend
          (UMaterialExpressionBlend *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBlend__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionBlend @ 14729d690

void __thiscall UMaterialExpressionBlend::~UMaterialExpressionBlend(UMaterialExpressionBlend *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBlend__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729f690

UClass * __cdecl UMaterialExpressionBlend::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBlend.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBlend",
               &Z_Registration_Info_UClass_UMaterialExpressionBlend.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBlend,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBlend>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBlend>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBlend.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBlend @ 1472a1bf0

void __cdecl UMaterialExpressionBlend::StaticRegisterNativesUMaterialExpressionBlend(void)

{
  return;
}

