// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7f10

UClass * __cdecl UMaterialExpressionRound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRound",
               &Z_Registration_Info_UClass_UMaterialExpressionRound.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRound,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRound>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRound>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRound.InnerSingleton;
}

// UMaterialExpressionRound @ 1472c1f10

UMaterialExpressionRound * __thiscall
UMaterialExpressionRound::UMaterialExpressionRound
          (UMaterialExpressionRound *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRound__6B_;
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

// UMaterialExpressionRound @ 1472c1f60

UMaterialExpressionRound * __thiscall
UMaterialExpressionRound::UMaterialExpressionRound
          (UMaterialExpressionRound *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRound__6B_;
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

// ~UMaterialExpressionRound @ 1472c27d0

void __thiscall UMaterialExpressionRound::~UMaterialExpressionRound(UMaterialExpressionRound *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRound__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c7330

UClass * __cdecl UMaterialExpressionRound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRound",
               &Z_Registration_Info_UClass_UMaterialExpressionRound.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionRound,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRound>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRound>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRound.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRound @ 1472c7810

void __cdecl UMaterialExpressionRound::StaticRegisterNativesUMaterialExpressionRound(void)

{
  return;
}

