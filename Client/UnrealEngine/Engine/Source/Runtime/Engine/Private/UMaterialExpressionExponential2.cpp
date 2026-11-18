// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5150

UClass * __cdecl UMaterialExpressionExponential2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionExponential2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionExponential2",
               &Z_Registration_Info_UClass_UMaterialExpressionExponential2.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionExponential2,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionExponential2>,
               InternalVTableHelperCtorCaller<UMaterialExpressionExponential2>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionExponential2.InnerSingleton;
}

// UMaterialExpressionExponential2 @ 1472acc90

UMaterialExpressionExponential2 * __thiscall
UMaterialExpressionExponential2::UMaterialExpressionExponential2
          (UMaterialExpressionExponential2 *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionExponential2__6B_;
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

// UMaterialExpressionExponential2 @ 1472acce0

UMaterialExpressionExponential2 * __thiscall
UMaterialExpressionExponential2::UMaterialExpressionExponential2
          (UMaterialExpressionExponential2 *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionExponential2__6B_;
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

// ~UMaterialExpressionExponential2 @ 1472af630

void __thiscall
UMaterialExpressionExponential2::~UMaterialExpressionExponential2
          (UMaterialExpressionExponential2 *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionExponential2__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b1fa0

UClass * __cdecl UMaterialExpressionExponential2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionExponential2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionExponential2",
               &Z_Registration_Info_UClass_UMaterialExpressionExponential2.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionExponential2,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionExponential2>,
               InternalVTableHelperCtorCaller<UMaterialExpressionExponential2>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionExponential2.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionExponential2 @ 1472b44e0

void __cdecl
UMaterialExpressionExponential2::StaticRegisterNativesUMaterialExpressionExponential2(void)

{
  return;
}

