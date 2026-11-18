// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b97d0

UClass * __cdecl UMaterialExpressionOneMinus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionOneMinus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionOneMinus",
               &Z_Registration_Info_UClass_UMaterialExpressionOneMinus.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionOneMinus,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionOneMinus>,
               InternalVTableHelperCtorCaller<UMaterialExpressionOneMinus>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionOneMinus.InnerSingleton;
}

// UMaterialExpressionOneMinus @ 1472c06e0

UMaterialExpressionOneMinus * __thiscall
UMaterialExpressionOneMinus::UMaterialExpressionOneMinus
          (UMaterialExpressionOneMinus *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionOneMinus__6B_;
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

// UMaterialExpressionOneMinus @ 1472c0730

UMaterialExpressionOneMinus * __thiscall
UMaterialExpressionOneMinus::UMaterialExpressionOneMinus
          (UMaterialExpressionOneMinus *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionOneMinus__6B_;
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

// ~UMaterialExpressionOneMinus @ 1472c21f0

void __thiscall
UMaterialExpressionOneMinus::~UMaterialExpressionOneMinus(UMaterialExpressionOneMinus *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionOneMinus__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5170

UClass * __cdecl UMaterialExpressionOneMinus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionOneMinus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionOneMinus",
               &Z_Registration_Info_UClass_UMaterialExpressionOneMinus.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionOneMinus,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionOneMinus>,
               InternalVTableHelperCtorCaller<UMaterialExpressionOneMinus>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionOneMinus.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionOneMinus @ 1472c7540

void __cdecl UMaterialExpressionOneMinus::StaticRegisterNativesUMaterialExpressionOneMinus(void)

{
  return;
}

