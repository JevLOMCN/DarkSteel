// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472842c0

UClass * __cdecl UMaterialExpressionArccosine::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArccosine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArccosine",
               &Z_Registration_Info_UClass_UMaterialExpressionArccosine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArccosine,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArccosine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArccosine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArccosine.InnerSingleton;
}

// UMaterialExpressionArccosine @ 14728c340

UMaterialExpressionArccosine * __thiscall
UMaterialExpressionArccosine::UMaterialExpressionArccosine
          (UMaterialExpressionArccosine *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArccosine__6B_;
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

// UMaterialExpressionArccosine @ 14728c3d0

UMaterialExpressionArccosine * __thiscall
UMaterialExpressionArccosine::UMaterialExpressionArccosine
          (UMaterialExpressionArccosine *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArccosine__6B_;
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

// ~UMaterialExpressionArccosine @ 14728d6b0

void __thiscall
UMaterialExpressionArccosine::~UMaterialExpressionArccosine(UMaterialExpressionArccosine *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionArccosine__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472903d0

UClass * __cdecl UMaterialExpressionArccosine::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArccosine.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArccosine",
               &Z_Registration_Info_UClass_UMaterialExpressionArccosine.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArccosine,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArccosine>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArccosine>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArccosine.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionArccosine @ 147291410

void __cdecl UMaterialExpressionArccosine::StaticRegisterNativesUMaterialExpressionArccosine(void)

{
  return;
}

