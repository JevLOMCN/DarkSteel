// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd080

UClass * __cdecl UMaterialExpressionShaderStageSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShaderStageSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShaderStageSwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShaderStageSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShaderStageSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.InnerSingleton;
}

// UMaterialExpressionShaderStageSwitch @ 1472d2930

UMaterialExpressionShaderStageSwitch * __thiscall
UMaterialExpressionShaderStageSwitch::UMaterialExpressionShaderStageSwitch
          (UMaterialExpressionShaderStageSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShaderStageSwitch__6B_;
  (this->PixelShader).OutputIndex = 0;
  (this->PixelShader).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelShader).InputName.Number = 0;
  (this->PixelShader).MaskR = 0;
  (this->PixelShader).MaskG = 0;
  (this->PixelShader).MaskB = 0;
  (this->PixelShader).MaskA = 0;
  (this->PixelShader).Expression = (UMaterialExpression *)0x0;
  (this->VertexShader).OutputIndex = 0;
  (this->VertexShader).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VertexShader).InputName.Number = 0;
  (this->VertexShader).MaskR = 0;
  (this->VertexShader).MaskG = 0;
  (this->VertexShader).MaskB = 0;
  (this->VertexShader).MaskA = 0;
  (this->VertexShader).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionShaderStageSwitch @ 1472d29a0

UMaterialExpressionShaderStageSwitch * __thiscall
UMaterialExpressionShaderStageSwitch::UMaterialExpressionShaderStageSwitch
          (UMaterialExpressionShaderStageSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShaderStageSwitch__6B_;
  (this->PixelShader).OutputIndex = 0;
  (this->PixelShader).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelShader).InputName.Number = 0;
  (this->PixelShader).MaskR = 0;
  (this->PixelShader).MaskG = 0;
  (this->PixelShader).MaskB = 0;
  (this->PixelShader).MaskA = 0;
  (this->PixelShader).Expression = (UMaterialExpression *)0x0;
  (this->VertexShader).OutputIndex = 0;
  (this->VertexShader).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VertexShader).InputName.Number = 0;
  (this->VertexShader).MaskR = 0;
  (this->VertexShader).MaskG = 0;
  (this->VertexShader).MaskB = 0;
  (this->VertexShader).MaskA = 0;
  (this->VertexShader).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionShaderStageSwitch @ 1472d4520

void __thiscall
UMaterialExpressionShaderStageSwitch::~UMaterialExpressionShaderStageSwitch
          (UMaterialExpressionShaderStageSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionShaderStageSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6db0

UClass * __cdecl UMaterialExpressionShaderStageSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShaderStageSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShaderStageSwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShaderStageSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShaderStageSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionShaderStageSwitch @ 1472d88d0

void __cdecl
UMaterialExpressionShaderStageSwitch::StaticRegisterNativesUMaterialExpressionShaderStageSwitch
          (void)

{
  return;
}

