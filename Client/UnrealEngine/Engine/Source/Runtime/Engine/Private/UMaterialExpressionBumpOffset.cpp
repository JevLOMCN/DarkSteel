// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472951a0

UClass * __cdecl UMaterialExpressionBumpOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBumpOffset",
               &Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBumpOffset,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBumpOffset>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBumpOffset>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.InnerSingleton;
}

// UMaterialExpressionBumpOffset @ 14729c0f0

UMaterialExpressionBumpOffset * __thiscall
UMaterialExpressionBumpOffset::UMaterialExpressionBumpOffset
          (UMaterialExpressionBumpOffset *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->HeightRatio = 0.05;
  this->_padding_ = (longlong)&___7UMaterialExpressionBumpOffset__6B_;
  (this->Coordinate).OutputIndex = 0;
  (this->Coordinate).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinate).InputName.Number = 0;
  (this->Coordinate).MaskR = 0;
  (this->Coordinate).MaskG = 0;
  (this->Coordinate).MaskB = 0;
  (this->Coordinate).MaskA = 0;
  (this->Coordinate).Expression = (UMaterialExpression *)0x0;
  (this->Height).OutputIndex = 0;
  (this->Height).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Height).InputName.Number = 0;
  (this->Height).MaskR = 0;
  (this->Height).MaskG = 0;
  (this->Height).MaskB = 0;
  (this->Height).MaskA = 0;
  (this->Height).Expression = (UMaterialExpression *)0x0;
  (this->HeightRatioInput).OutputIndex = 0;
  (this->HeightRatioInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->HeightRatioInput).InputName.Number = 0;
  (this->HeightRatioInput).MaskR = 0;
  (this->HeightRatioInput).MaskG = 0;
  (this->HeightRatioInput).MaskB = 0;
  (this->HeightRatioInput).MaskA = 0;
  (this->HeightRatioInput).Expression = (UMaterialExpression *)0x0;
  this->ReferencePlane = 0.5;
  this->ConstCoordinate = 0;
  return this;
}

// ~UMaterialExpressionBumpOffset @ 14729d710

void __thiscall
UMaterialExpressionBumpOffset::~UMaterialExpressionBumpOffset(UMaterialExpressionBumpOffset *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBumpOffset__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729f990

UClass * __cdecl UMaterialExpressionBumpOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBumpOffset",
               &Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBumpOffset,0x138,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBumpOffset>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBumpOffset>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBumpOffset @ 1472a1c30

void __cdecl UMaterialExpressionBumpOffset::StaticRegisterNativesUMaterialExpressionBumpOffset(void)

{
  return;
}

// UMaterialExpressionBumpOffset @ 148afab80

UMaterialExpressionBumpOffset * __thiscall
UMaterialExpressionBumpOffset::UMaterialExpressionBumpOffset
          (UMaterialExpressionBumpOffset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->HeightRatio = 0.05;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionBumpOffset__6B_;
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
  (this->Coordinate).OutputIndex = 0;
  (this->Coordinate).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinate).InputName.Number = 0;
  (this->Coordinate).MaskR = 0;
  (this->Coordinate).MaskG = 0;
  (this->Coordinate).MaskB = 0;
  (this->Coordinate).MaskA = 0;
  (this->Coordinate).Expression = (UMaterialExpression *)0x0;
  (this->Height).OutputIndex = 0;
  (this->Height).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Height).InputName.Number = 0;
  (this->Height).MaskR = 0;
  (this->Height).MaskG = 0;
  (this->Height).MaskB = 0;
  (this->Height).MaskA = 0;
  (this->Height).Expression = (UMaterialExpression *)0x0;
  (this->HeightRatioInput).OutputIndex = 0;
  (this->HeightRatioInput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->HeightRatioInput).InputName.Number = 0;
  (this->HeightRatioInput).MaskR = 0;
  (this->HeightRatioInput).MaskG = 0;
  (this->HeightRatioInput).MaskB = 0;
  (this->HeightRatioInput).MaskA = 0;
  (this->HeightRatioInput).Expression = (UMaterialExpression *)0x0;
  this->ReferencePlane = 0.5;
  this->ConstCoordinate = 0;
  return this;
}

