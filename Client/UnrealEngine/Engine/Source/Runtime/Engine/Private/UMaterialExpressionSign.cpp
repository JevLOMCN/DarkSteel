// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd7c0

UClass * __cdecl UMaterialExpressionSign::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSign.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSign",
               &Z_Registration_Info_UClass_UMaterialExpressionSign.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSign,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSign>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSign>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSign.InnerSingleton;
}

// UMaterialExpressionSign @ 1472d2ca0

UMaterialExpressionSign * __thiscall
UMaterialExpressionSign::UMaterialExpressionSign
          (UMaterialExpressionSign *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSign__6B_;
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

// UMaterialExpressionSign @ 1472d2cf0

UMaterialExpressionSign * __thiscall
UMaterialExpressionSign::UMaterialExpressionSign
          (UMaterialExpressionSign *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSign__6B_;
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

// ~UMaterialExpressionSign @ 1472d45a0

void __thiscall UMaterialExpressionSign::~UMaterialExpressionSign(UMaterialExpressionSign *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSign__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d70b0

UClass * __cdecl UMaterialExpressionSign::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSign.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSign",
               &Z_Registration_Info_UClass_UMaterialExpressionSign.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSign,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSign>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSign>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSign.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSign @ 1472d8910

void __cdecl UMaterialExpressionSign::StaticRegisterNativesUMaterialExpressionSign(void)

{
  return;
}

