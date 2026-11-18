// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147296860

UClass * __cdecl UMaterialExpressionDistanceFieldApproxAO::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceFieldApproxAO",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDistanceFieldApproxAO,0x170,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceFieldApproxAO>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceFieldApproxAO>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.InnerSingleton;
}

// UMaterialExpressionDistanceFieldApproxAO @ 14729d2f0

UMaterialExpressionDistanceFieldApproxAO * __thiscall
UMaterialExpressionDistanceFieldApproxAO::UMaterialExpressionDistanceFieldApproxAO
          (UMaterialExpressionDistanceFieldApproxAO *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->BaseDistanceDefault = 15.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceFieldApproxAO__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->BaseDistance).OutputIndex = 0;
  (this->BaseDistance).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseDistance).InputName.Number = 0;
  (this->BaseDistance).MaskR = 0;
  (this->BaseDistance).MaskG = 0;
  (this->BaseDistance).MaskB = 0;
  (this->BaseDistance).MaskA = 0;
  (this->BaseDistance).Expression = (UMaterialExpression *)0x0;
  (this->Radius).OutputIndex = 0;
  (this->Radius).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Radius).InputName.Number = 0;
  (this->Radius).MaskR = 0;
  (this->Radius).MaskG = 0;
  (this->Radius).MaskB = 0;
  (this->Radius).MaskA = 0;
  (this->Radius).Expression = (UMaterialExpression *)0x0;
  this->RadiusDefault = 150.0;
  this->NumSteps = 1;
  this->StepScaleDefault = 3.0;
  return this;
}

// UMaterialExpressionDistanceFieldApproxAO @ 14729d3e0

UMaterialExpressionDistanceFieldApproxAO * __thiscall
UMaterialExpressionDistanceFieldApproxAO::UMaterialExpressionDistanceFieldApproxAO
          (UMaterialExpressionDistanceFieldApproxAO *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->BaseDistanceDefault = 15.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceFieldApproxAO__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->BaseDistance).OutputIndex = 0;
  (this->BaseDistance).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseDistance).InputName.Number = 0;
  (this->BaseDistance).MaskR = 0;
  (this->BaseDistance).MaskG = 0;
  (this->BaseDistance).MaskB = 0;
  (this->BaseDistance).MaskA = 0;
  (this->BaseDistance).Expression = (UMaterialExpression *)0x0;
  (this->Radius).OutputIndex = 0;
  (this->Radius).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Radius).InputName.Number = 0;
  (this->Radius).MaskR = 0;
  (this->Radius).MaskG = 0;
  (this->Radius).MaskB = 0;
  (this->Radius).MaskA = 0;
  (this->Radius).Expression = (UMaterialExpression *)0x0;
  this->RadiusDefault = 150.0;
  this->NumSteps = 1;
  this->StepScaleDefault = 3.0;
  return this;
}

// ~UMaterialExpressionDistanceFieldApproxAO @ 14729dd50

void __thiscall
UMaterialExpressionDistanceFieldApproxAO::~UMaterialExpressionDistanceFieldApproxAO
          (UMaterialExpressionDistanceFieldApproxAO *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceFieldApproxAO__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1790

UClass * __cdecl UMaterialExpressionDistanceFieldApproxAO::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceFieldApproxAO",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDistanceFieldApproxAO,0x170,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceFieldApproxAO>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceFieldApproxAO>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldApproxAO.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDistanceFieldApproxAO @ 1472a1ee0

void __cdecl
UMaterialExpressionDistanceFieldApproxAO::
StaticRegisterNativesUMaterialExpressionDistanceFieldApproxAO(void)

{
  return;
}

