// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7810

UClass * __cdecl UMaterialExpressionRotateAboutAxis::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRotateAboutAxis",
               &Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRotateAboutAxis,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRotateAboutAxis>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRotateAboutAxis>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.InnerSingleton;
}

// UMaterialExpressionRotateAboutAxis @ 1472c1d00

UMaterialExpressionRotateAboutAxis * __thiscall
UMaterialExpressionRotateAboutAxis::UMaterialExpressionRotateAboutAxis
          (UMaterialExpressionRotateAboutAxis *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionRotateAboutAxis__6B_;
  (this->NormalizedRotationAxis).OutputIndex = 0;
  (this->NormalizedRotationAxis).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->NormalizedRotationAxis).InputName.Number = 0;
  (this->NormalizedRotationAxis).MaskR = 0;
  (this->NormalizedRotationAxis).MaskG = 0;
  (this->NormalizedRotationAxis).MaskB = 0;
  (this->NormalizedRotationAxis).MaskA = 0;
  (this->NormalizedRotationAxis).Expression = (UMaterialExpression *)0x0;
  (this->RotationAngle).OutputIndex = 0;
  (this->RotationAngle).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RotationAngle).InputName.Number = 0;
  (this->RotationAngle).MaskR = 0;
  (this->RotationAngle).MaskG = 0;
  (this->RotationAngle).MaskB = 0;
  (this->RotationAngle).MaskA = 0;
  (this->RotationAngle).Expression = (UMaterialExpression *)0x0;
  (this->PivotPoint).OutputIndex = 0;
  (this->PivotPoint).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PivotPoint).InputName.Number = 0;
  (this->PivotPoint).MaskR = 0;
  (this->PivotPoint).MaskG = 0;
  (this->PivotPoint).MaskB = 0;
  (this->PivotPoint).MaskA = 0;
  (this->PivotPoint).Expression = (UMaterialExpression *)0x0;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionRotateAboutAxis @ 1472c1dc0

UMaterialExpressionRotateAboutAxis * __thiscall
UMaterialExpressionRotateAboutAxis::UMaterialExpressionRotateAboutAxis
          (UMaterialExpressionRotateAboutAxis *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionRotateAboutAxis__6B_;
  (this->NormalizedRotationAxis).OutputIndex = 0;
  (this->NormalizedRotationAxis).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->NormalizedRotationAxis).InputName.Number = 0;
  (this->NormalizedRotationAxis).MaskR = 0;
  (this->NormalizedRotationAxis).MaskG = 0;
  (this->NormalizedRotationAxis).MaskB = 0;
  (this->NormalizedRotationAxis).MaskA = 0;
  (this->NormalizedRotationAxis).Expression = (UMaterialExpression *)0x0;
  (this->RotationAngle).OutputIndex = 0;
  (this->RotationAngle).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RotationAngle).InputName.Number = 0;
  (this->RotationAngle).MaskR = 0;
  (this->RotationAngle).MaskG = 0;
  (this->RotationAngle).MaskB = 0;
  (this->RotationAngle).MaskA = 0;
  (this->RotationAngle).Expression = (UMaterialExpression *)0x0;
  (this->PivotPoint).OutputIndex = 0;
  (this->PivotPoint).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PivotPoint).InputName.Number = 0;
  (this->PivotPoint).MaskR = 0;
  (this->PivotPoint).MaskG = 0;
  (this->PivotPoint).MaskB = 0;
  (this->PivotPoint).MaskA = 0;
  (this->PivotPoint).Expression = (UMaterialExpression *)0x0;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionRotateAboutAxis @ 1472c2790

void __thiscall
UMaterialExpressionRotateAboutAxis::~UMaterialExpressionRotateAboutAxis
          (UMaterialExpressionRotateAboutAxis *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRotateAboutAxis__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c71b0

UClass * __cdecl UMaterialExpressionRotateAboutAxis::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRotateAboutAxis",
               &Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRotateAboutAxis,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRotateAboutAxis>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRotateAboutAxis>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRotateAboutAxis @ 1472c77f0

void __cdecl
UMaterialExpressionRotateAboutAxis::StaticRegisterNativesUMaterialExpressionRotateAboutAxis(void)

{
  return;
}

