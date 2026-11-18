// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472956e0

UClass * __cdecl UMaterialExpressionDepthFade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDepthFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDepthFade",
               &Z_Registration_Info_UClass_UMaterialExpressionDepthFade.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDepthFade,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDepthFade>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDepthFade>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDepthFade.InnerSingleton;
}

// UMaterialExpressionDepthFade @ 14729cfc0

UMaterialExpressionDepthFade * __thiscall
UMaterialExpressionDepthFade::UMaterialExpressionDepthFade
          (UMaterialExpressionDepthFade *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->OpacityDefault = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDepthFade__6B_;
  (this->InOpacity).OutputIndex = 0;
  (this->InOpacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InOpacity).InputName.Number = 0;
  (this->InOpacity).MaskR = 0;
  (this->InOpacity).MaskG = 0;
  (this->InOpacity).MaskB = 0;
  (this->InOpacity).MaskA = 0;
  (this->InOpacity).Expression = (UMaterialExpression *)0x0;
  (this->FadeDistance).OutputIndex = 0;
  (this->FadeDistance).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FadeDistance).InputName.Number = 0;
  (this->FadeDistance).MaskR = 0;
  (this->FadeDistance).MaskG = 0;
  (this->FadeDistance).MaskB = 0;
  (this->FadeDistance).MaskA = 0;
  (this->FadeDistance).Expression = (UMaterialExpression *)0x0;
  this->FadeDistanceDefault = 100.0;
  return this;
}

// ~UMaterialExpressionDepthFade @ 14729dc90

void __thiscall
UMaterialExpressionDepthFade::~UMaterialExpressionDepthFade(UMaterialExpressionDepthFade *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDepthFade__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1310

UClass * __cdecl UMaterialExpressionDepthFade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDepthFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDepthFade",
               &Z_Registration_Info_UClass_UMaterialExpressionDepthFade.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDepthFade,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDepthFade>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDepthFade>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDepthFade.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDepthFade @ 1472a1e80

void __cdecl UMaterialExpressionDepthFade::StaticRegisterNativesUMaterialExpressionDepthFade(void)

{
  return;
}

// UMaterialExpressionDepthFade @ 148afbac0

UMaterialExpressionDepthFade * __thiscall
UMaterialExpressionDepthFade::UMaterialExpressionDepthFade
          (UMaterialExpressionDepthFade *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->OpacityDefault = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDepthFade__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InOpacity).OutputIndex = 0;
  (this->InOpacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InOpacity).InputName.Number = 0;
  (this->InOpacity).MaskR = 0;
  (this->InOpacity).MaskG = 0;
  (this->InOpacity).MaskB = 0;
  (this->InOpacity).MaskA = 0;
  (this->InOpacity).Expression = (UMaterialExpression *)0x0;
  (this->FadeDistance).OutputIndex = 0;
  (this->FadeDistance).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FadeDistance).InputName.Number = 0;
  (this->FadeDistance).MaskR = 0;
  (this->FadeDistance).MaskG = 0;
  (this->FadeDistance).MaskB = 0;
  (this->FadeDistance).MaskA = 0;
  (this->FadeDistance).Expression = (UMaterialExpression *)0x0;
  this->FadeDistanceDefault = 100.0;
  return this;
}

