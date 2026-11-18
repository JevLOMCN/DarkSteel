// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dcc90

UClass * __cdecl UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVirtualTextureFeatureSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionVirtualTextureFeatureSwitch,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVirtualTextureFeatureSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVirtualTextureFeatureSwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.InnerSingleton;
}

// UMaterialExpressionVirtualTextureFeatureSwitch @ 1472e2d50

UMaterialExpressionVirtualTextureFeatureSwitch * __thiscall
UMaterialExpressionVirtualTextureFeatureSwitch::UMaterialExpressionVirtualTextureFeatureSwitch
          (UMaterialExpressionVirtualTextureFeatureSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionVirtualTextureFeatureSwitch__6B_;
  (this->No).OutputIndex = 0;
  (this->No).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->No).InputName.Number = 0;
  (this->No).MaskR = 0;
  (this->No).MaskG = 0;
  (this->No).MaskB = 0;
  (this->No).MaskA = 0;
  (this->No).Expression = (UMaterialExpression *)0x0;
  (this->Yes).OutputIndex = 0;
  (this->Yes).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Yes).InputName.Number = 0;
  (this->Yes).MaskR = 0;
  (this->Yes).MaskG = 0;
  (this->Yes).MaskB = 0;
  (this->Yes).MaskA = 0;
  (this->Yes).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionVirtualTextureFeatureSwitch @ 1472e2dc0

UMaterialExpressionVirtualTextureFeatureSwitch * __thiscall
UMaterialExpressionVirtualTextureFeatureSwitch::UMaterialExpressionVirtualTextureFeatureSwitch
          (UMaterialExpressionVirtualTextureFeatureSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionVirtualTextureFeatureSwitch__6B_;
  (this->No).OutputIndex = 0;
  (this->No).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->No).InputName.Number = 0;
  (this->No).MaskR = 0;
  (this->No).MaskG = 0;
  (this->No).MaskB = 0;
  (this->No).MaskA = 0;
  (this->No).Expression = (UMaterialExpression *)0x0;
  (this->Yes).OutputIndex = 0;
  (this->Yes).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Yes).InputName.Number = 0;
  (this->Yes).MaskR = 0;
  (this->Yes).MaskG = 0;
  (this->Yes).MaskB = 0;
  (this->Yes).MaskA = 0;
  (this->Yes).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionVirtualTextureFeatureSwitch @ 1472e3890

void __thiscall
UMaterialExpressionVirtualTextureFeatureSwitch::~UMaterialExpressionVirtualTextureFeatureSwitch
          (UMaterialExpressionVirtualTextureFeatureSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionVirtualTextureFeatureSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6ea0

UClass * __cdecl UMaterialExpressionVirtualTextureFeatureSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVirtualTextureFeatureSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionVirtualTextureFeatureSwitch,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVirtualTextureFeatureSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVirtualTextureFeatureSwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVirtualTextureFeatureSwitch @ 1472e79f0

void __cdecl
UMaterialExpressionVirtualTextureFeatureSwitch::
StaticRegisterNativesUMaterialExpressionVirtualTextureFeatureSwitch(void)

{
  return;
}

