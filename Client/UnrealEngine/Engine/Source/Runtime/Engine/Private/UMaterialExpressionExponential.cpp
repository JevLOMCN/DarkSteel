// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a4e50

UClass * __cdecl UMaterialExpressionExponential::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionExponential.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionExponential",
               &Z_Registration_Info_UClass_UMaterialExpressionExponential.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionExponential,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionExponential>,
               InternalVTableHelperCtorCaller<UMaterialExpressionExponential>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionExponential.InnerSingleton;
}

// UMaterialExpressionExponential @ 1472acd30

UMaterialExpressionExponential * __thiscall
UMaterialExpressionExponential::UMaterialExpressionExponential
          (UMaterialExpressionExponential *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionExponential__6B_;
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

// UMaterialExpressionExponential @ 1472acd80

UMaterialExpressionExponential * __thiscall
UMaterialExpressionExponential::UMaterialExpressionExponential
          (UMaterialExpressionExponential *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionExponential__6B_;
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

// ~UMaterialExpressionExponential @ 1472af650

void __thiscall
UMaterialExpressionExponential::~UMaterialExpressionExponential
          (UMaterialExpressionExponential *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionExponential__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2060

UClass * __cdecl UMaterialExpressionExponential::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionExponential.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionExponential",
               &Z_Registration_Info_UClass_UMaterialExpressionExponential.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionExponential,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionExponential>,
               InternalVTableHelperCtorCaller<UMaterialExpressionExponential>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionExponential.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionExponential @ 1472b44f0

void __cdecl
UMaterialExpressionExponential::StaticRegisterNativesUMaterialExpressionExponential(void)

{
  return;
}

