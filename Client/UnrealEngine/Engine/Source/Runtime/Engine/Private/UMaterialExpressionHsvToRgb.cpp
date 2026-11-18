// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a7e90

UClass * __cdecl UMaterialExpressionHsvToRgb::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionHsvToRgb.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionHsvToRgb",
               &Z_Registration_Info_UClass_UMaterialExpressionHsvToRgb.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionHsvToRgb,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionHsvToRgb>,
               InternalVTableHelperCtorCaller<UMaterialExpressionHsvToRgb>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionHsvToRgb.InnerSingleton;
}

// UMaterialExpressionHsvToRgb @ 1472ada40

UMaterialExpressionHsvToRgb * __thiscall
UMaterialExpressionHsvToRgb::UMaterialExpressionHsvToRgb
          (UMaterialExpressionHsvToRgb *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionHsvToRgb__6B_;
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

// UMaterialExpressionHsvToRgb @ 1472ada90

UMaterialExpressionHsvToRgb * __thiscall
UMaterialExpressionHsvToRgb::UMaterialExpressionHsvToRgb
          (UMaterialExpressionHsvToRgb *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionHsvToRgb__6B_;
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

// ~UMaterialExpressionHsvToRgb @ 1472af9d0

void __thiscall
UMaterialExpressionHsvToRgb::~UMaterialExpressionHsvToRgb(UMaterialExpressionHsvToRgb *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionHsvToRgb__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3020

UClass * __cdecl UMaterialExpressionHsvToRgb::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionHsvToRgb.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionHsvToRgb",
               &Z_Registration_Info_UClass_UMaterialExpressionHsvToRgb.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionHsvToRgb,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionHsvToRgb>,
               InternalVTableHelperCtorCaller<UMaterialExpressionHsvToRgb>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionHsvToRgb.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionHsvToRgb @ 1472b4640

void __cdecl UMaterialExpressionHsvToRgb::StaticRegisterNativesUMaterialExpressionHsvToRgb(void)

{
  return;
}

