// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd480

UClass * __cdecl UMaterialExpressionShadingPathSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShadingPathSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShadingPathSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionShadingPathSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShadingPathSwitch,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShadingPathSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShadingPathSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShadingPathSwitch.InnerSingleton;
}

// UMaterialExpressionShadingPathSwitch @ 1472d2a40

UMaterialExpressionShadingPathSwitch * __thiscall
UMaterialExpressionShadingPathSwitch::UMaterialExpressionShadingPathSwitch
          (UMaterialExpressionShadingPathSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShadingPathSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  this->Inputs[0].OutputIndex = 0;
  this->Inputs[0].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[0].InputName.Number = 0;
  this->Inputs[0].MaskR = 0;
  this->Inputs[0].MaskG = 0;
  this->Inputs[0].MaskB = 0;
  this->Inputs[0].MaskA = 0;
  this->Inputs[0].Expression = (UMaterialExpression *)0x0;
  this->Inputs[1].OutputIndex = 0;
  this->Inputs[1].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[1].InputName.Number = 0;
  this->Inputs[1].MaskR = 0;
  this->Inputs[1].MaskG = 0;
  this->Inputs[1].MaskB = 0;
  this->Inputs[1].MaskA = 0;
  this->Inputs[1].Expression = (UMaterialExpression *)0x0;
  this->Inputs[2].OutputIndex = 0;
  this->Inputs[2].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[2].InputName.Number = 0;
  this->Inputs[2].MaskR = 0;
  this->Inputs[2].MaskG = 0;
  this->Inputs[2].MaskB = 0;
  this->Inputs[2].MaskA = 0;
  this->Inputs[2].Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionShadingPathSwitch @ 1472d2b00

UMaterialExpressionShadingPathSwitch * __thiscall
UMaterialExpressionShadingPathSwitch::UMaterialExpressionShadingPathSwitch
          (UMaterialExpressionShadingPathSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShadingPathSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  this->Inputs[0].OutputIndex = 0;
  this->Inputs[0].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[0].InputName.Number = 0;
  this->Inputs[0].MaskR = 0;
  this->Inputs[0].MaskG = 0;
  this->Inputs[0].MaskB = 0;
  this->Inputs[0].MaskA = 0;
  this->Inputs[0].Expression = (UMaterialExpression *)0x0;
  this->Inputs[1].OutputIndex = 0;
  this->Inputs[1].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[1].InputName.Number = 0;
  this->Inputs[1].MaskR = 0;
  this->Inputs[1].MaskG = 0;
  this->Inputs[1].MaskB = 0;
  this->Inputs[1].MaskA = 0;
  this->Inputs[1].Expression = (UMaterialExpression *)0x0;
  this->Inputs[2].OutputIndex = 0;
  this->Inputs[2].InputName.ComparisonIndex = 0;
  *(undefined8 *)&this->Inputs[2].InputName.Number = 0;
  this->Inputs[2].MaskR = 0;
  this->Inputs[2].MaskG = 0;
  this->Inputs[2].MaskB = 0;
  this->Inputs[2].MaskA = 0;
  this->Inputs[2].Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionShadingPathSwitch @ 1472d4560

void __thiscall
UMaterialExpressionShadingPathSwitch::~UMaterialExpressionShadingPathSwitch
          (UMaterialExpressionShadingPathSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionShadingPathSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6f30

UClass * __cdecl UMaterialExpressionShadingPathSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShadingPathSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShadingPathSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionShadingPathSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShadingPathSwitch,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShadingPathSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShadingPathSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShadingPathSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionShadingPathSwitch @ 1472d88f0

void __cdecl
UMaterialExpressionShadingPathSwitch::StaticRegisterNativesUMaterialExpressionShadingPathSwitch
          (void)

{
  return;
}

