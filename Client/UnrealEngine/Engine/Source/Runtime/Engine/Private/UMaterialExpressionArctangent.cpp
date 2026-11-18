// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147284fb0

UClass * __cdecl UMaterialExpressionArctangent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArctangent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArctangent",
               &Z_Registration_Info_UClass_UMaterialExpressionArctangent.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArctangent,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArctangent>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArctangent>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArctangent.InnerSingleton;
}

// UMaterialExpressionArctangent @ 14728c920

UMaterialExpressionArctangent * __thiscall
UMaterialExpressionArctangent::UMaterialExpressionArctangent
          (UMaterialExpressionArctangent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent__6B_;
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

// UMaterialExpressionArctangent @ 14728c9b0

UMaterialExpressionArctangent * __thiscall
UMaterialExpressionArctangent::UMaterialExpressionArctangent
          (UMaterialExpressionArctangent *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent__6B_;
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

// ~UMaterialExpressionArctangent @ 14728d770

void __thiscall
UMaterialExpressionArctangent::~UMaterialExpressionArctangent(UMaterialExpressionArctangent *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147290850

UClass * __cdecl UMaterialExpressionArctangent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArctangent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArctangent",
               &Z_Registration_Info_UClass_UMaterialExpressionArctangent.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArctangent,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArctangent>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArctangent>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArctangent.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionArctangent @ 147291470

void __cdecl UMaterialExpressionArctangent::StaticRegisterNativesUMaterialExpressionArctangent(void)

{
  return;
}

