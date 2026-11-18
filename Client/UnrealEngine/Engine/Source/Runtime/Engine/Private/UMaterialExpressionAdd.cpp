// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147287030

UClass * __cdecl UMaterialExpressionAdd::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAdd.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAdd",
               &Z_Registration_Info_UClass_UMaterialExpressionAdd.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAdd,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAdd>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAdd>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAdd.InnerSingleton;
}

// UMaterialExpressionAdd @ 14728bfc0

UMaterialExpressionAdd * __thiscall
UMaterialExpressionAdd::UMaterialExpressionAdd(UMaterialExpressionAdd *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionAdd__6B_;
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
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  return this;
}

// UMaterialExpressionAdd @ 14728c090

UMaterialExpressionAdd * __thiscall
UMaterialExpressionAdd::UMaterialExpressionAdd
          (UMaterialExpressionAdd *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstB = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionAdd__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  this->ConstA = 0.0;
  return this;
}

// ~UMaterialExpressionAdd @ 14728d600

void __thiscall UMaterialExpressionAdd::~UMaterialExpressionAdd(UMaterialExpressionAdd *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionAdd__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472900d0

UClass * __cdecl UMaterialExpressionAdd::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAdd.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAdd",
               &Z_Registration_Info_UClass_UMaterialExpressionAdd.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAdd,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAdd>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAdd>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAdd.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionAdd @ 1472913a0

void __cdecl UMaterialExpressionAdd::StaticRegisterNativesUMaterialExpressionAdd(void)

{
  return;
}

