// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7510

UClass * __cdecl UMaterialExpressionRgbToHsv::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRgbToHsv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRgbToHsv",
               &Z_Registration_Info_UClass_UMaterialExpressionRgbToHsv.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRgbToHsv,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRgbToHsv>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRgbToHsv>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRgbToHsv.InnerSingleton;
}

// UMaterialExpressionRgbToHsv @ 1472c1c60

UMaterialExpressionRgbToHsv * __thiscall
UMaterialExpressionRgbToHsv::UMaterialExpressionRgbToHsv
          (UMaterialExpressionRgbToHsv *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRgbToHsv__6B_;
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

// UMaterialExpressionRgbToHsv @ 1472c1cb0

UMaterialExpressionRgbToHsv * __thiscall
UMaterialExpressionRgbToHsv::UMaterialExpressionRgbToHsv
          (UMaterialExpressionRgbToHsv *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRgbToHsv__6B_;
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

// ~UMaterialExpressionRgbToHsv @ 1472c2770

void __thiscall
UMaterialExpressionRgbToHsv::~UMaterialExpressionRgbToHsv(UMaterialExpressionRgbToHsv *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRgbToHsv__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c70f0

UClass * __cdecl UMaterialExpressionRgbToHsv::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRgbToHsv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRgbToHsv",
               &Z_Registration_Info_UClass_UMaterialExpressionRgbToHsv.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRgbToHsv,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRgbToHsv>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRgbToHsv>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRgbToHsv.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRgbToHsv @ 1472c77e0

void __cdecl UMaterialExpressionRgbToHsv::StaticRegisterNativesUMaterialExpressionRgbToHsv(void)

{
  return;
}

