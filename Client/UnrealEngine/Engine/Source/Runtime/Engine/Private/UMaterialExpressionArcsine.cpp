// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147284980

UClass * __cdecl UMaterialExpressionArcsine::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArcsine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArcsine",
               &Z_Registration_Info_UClass_UMaterialExpressionArcsine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArcsine,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArcsine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArcsine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArcsine.InnerSingleton;
}

// UMaterialExpressionArcsine @ 14728c500

UMaterialExpressionArcsine * __thiscall
UMaterialExpressionArcsine::UMaterialExpressionArcsine
          (UMaterialExpressionArcsine *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArcsine__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
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

// UMaterialExpressionArcsine @ 14728c590

UMaterialExpressionArcsine * __thiscall
UMaterialExpressionArcsine::UMaterialExpressionArcsine
          (UMaterialExpressionArcsine *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArcsine__6B_;
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

// ~UMaterialExpressionArcsine @ 14728d6f0

void __thiscall
UMaterialExpressionArcsine::~UMaterialExpressionArcsine(UMaterialExpressionArcsine *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionArcsine__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147290550

UClass * __cdecl UMaterialExpressionArcsine::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArcsine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArcsine",
               &Z_Registration_Info_UClass_UMaterialExpressionArcsine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArcsine,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArcsine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArcsine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArcsine.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionArcsine @ 147291430

void __cdecl UMaterialExpressionArcsine::StaticRegisterNativesUMaterialExpressionArcsine(void)

{
  return;
}

