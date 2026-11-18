// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc730

UClass * __cdecl UMaterialExpressionViewProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionViewProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionViewProperty",
               &Z_Registration_Info_UClass_UMaterialExpressionViewProperty.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionViewProperty,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionViewProperty>,
               InternalVTableHelperCtorCaller<UMaterialExpressionViewProperty>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionViewProperty.InnerSingleton;
}

// UMaterialExpressionViewProperty @ 1472e2cc0

UMaterialExpressionViewProperty * __thiscall
UMaterialExpressionViewProperty::UMaterialExpressionViewProperty
          (UMaterialExpressionViewProperty *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionViewProperty__6B_;
  (this->Property).Value = '\x01';
  return this;
}

// ~UMaterialExpressionViewProperty @ 1472e3850

void __thiscall
UMaterialExpressionViewProperty::~UMaterialExpressionViewProperty
          (UMaterialExpressionViewProperty *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionViewProperty__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6d20

UClass * __cdecl UMaterialExpressionViewProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionViewProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionViewProperty",
               &Z_Registration_Info_UClass_UMaterialExpressionViewProperty.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionViewProperty,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionViewProperty>,
               InternalVTableHelperCtorCaller<UMaterialExpressionViewProperty>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionViewProperty.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionViewProperty @ 1472e79d0

void __cdecl
UMaterialExpressionViewProperty::StaticRegisterNativesUMaterialExpressionViewProperty(void)

{
  return;
}

// UMaterialExpressionViewProperty @ 148aff8c0

UMaterialExpressionViewProperty * __thiscall
UMaterialExpressionViewProperty::UMaterialExpressionViewProperty
          (UMaterialExpressionViewProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Property).Value = '\x01';
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
  this->_padding_ = (longlong)&___7UMaterialExpressionViewProperty__6B_;
  return this;
}

