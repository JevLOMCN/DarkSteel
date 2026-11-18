// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a4d90

UClass * __cdecl UMaterialExpressionLength::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLength.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLength",
               &Z_Registration_Info_UClass_UMaterialExpressionLength.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLength,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLength>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLength>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLength.InnerSingleton;
}

// UMaterialExpressionLength @ 1472ae060

UMaterialExpressionLength * __thiscall
UMaterialExpressionLength::UMaterialExpressionLength
          (UMaterialExpressionLength *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLength__6B_;
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

// UMaterialExpressionLength @ 1472ae0b0

UMaterialExpressionLength * __thiscall
UMaterialExpressionLength::UMaterialExpressionLength
          (UMaterialExpressionLength *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLength__6B_;
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

// ~UMaterialExpressionLength @ 1472afad0

void __thiscall
UMaterialExpressionLength::~UMaterialExpressionLength(UMaterialExpressionLength *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLength__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b34a0

UClass * __cdecl UMaterialExpressionLength::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLength.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLength",
               &Z_Registration_Info_UClass_UMaterialExpressionLength.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLength,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLength>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLength>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLength.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLength @ 1472b46a0

void __cdecl UMaterialExpressionLength::StaticRegisterNativesUMaterialExpressionLength(void)

{
  return;
}

