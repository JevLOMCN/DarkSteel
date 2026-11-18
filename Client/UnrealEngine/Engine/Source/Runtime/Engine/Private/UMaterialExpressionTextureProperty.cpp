// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dd5c0

UClass * __cdecl UMaterialExpressionTextureProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureProperty",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureProperty,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureProperty>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureProperty>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.InnerSingleton;
}

// UMaterialExpressionTextureProperty @ 1472e2100

UMaterialExpressionTextureProperty * __thiscall
UMaterialExpressionTextureProperty::UMaterialExpressionTextureProperty
          (UMaterialExpressionTextureProperty *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureProperty__6B_;
  (this->TextureObject).OutputIndex = 0;
  (this->TextureObject).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureObject).InputName.Number = 0;
  (this->TextureObject).MaskR = 0;
  (this->TextureObject).MaskG = 0;
  (this->TextureObject).MaskB = 0;
  (this->TextureObject).MaskA = 0;
  (this->TextureObject).Expression = (UMaterialExpression *)0x0;
  (this->Property).Value = '\0';
  return this;
}

// ~UMaterialExpressionTextureProperty @ 1472e34c0

void __thiscall
UMaterialExpressionTextureProperty::~UMaterialExpressionTextureProperty
          (UMaterialExpressionTextureProperty *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureProperty__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5be0

UClass * __cdecl UMaterialExpressionTextureProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureProperty",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureProperty,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureProperty>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureProperty>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureProperty @ 1472e7860

void __cdecl
UMaterialExpressionTextureProperty::StaticRegisterNativesUMaterialExpressionTextureProperty(void)

{
  return;
}

// UMaterialExpressionTextureProperty @ 148aff2c0

UMaterialExpressionTextureProperty * __thiscall
UMaterialExpressionTextureProperty::UMaterialExpressionTextureProperty
          (UMaterialExpressionTextureProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureProperty__6B_;
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
  (this->TextureObject).OutputIndex = 0;
  (this->TextureObject).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureObject).InputName.Number = 0;
  (this->TextureObject).MaskR = 0;
  (this->TextureObject).MaskG = 0;
  (this->TextureObject).MaskB = 0;
  (this->TextureObject).MaskA = 0;
  (this->TextureObject).Expression = (UMaterialExpression *)0x0;
  (this->Property).Value = '\0';
  return this;
}

