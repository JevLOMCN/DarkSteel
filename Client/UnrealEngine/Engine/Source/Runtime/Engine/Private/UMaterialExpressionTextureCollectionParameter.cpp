// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472dc7f0

UClass * __cdecl UMaterialExpressionTextureCollectionParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureCollectionParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureCollectionParameter,
               0xe0,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureCollectionParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureCollectionParameter>,
               local_res8,UMaterialExpressionTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.InnerSingleton;
}

// UMaterialExpressionTextureCollectionParameter @ 1472e1eb0

UMaterialExpressionTextureCollectionParameter * __thiscall
UMaterialExpressionTextureCollectionParameter::UMaterialExpressionTextureCollectionParameter
          (UMaterialExpressionTextureCollectionParameter *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCollectionParameter__6B_;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  return this;
}

// ~UMaterialExpressionTextureCollectionParameter @ 1472e3420

void __thiscall
UMaterialExpressionTextureCollectionParameter::~UMaterialExpressionTextureCollectionParameter
          (UMaterialExpressionTextureCollectionParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCollection__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e5820

UClass * __cdecl UMaterialExpressionTextureCollectionParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureCollectionParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureCollectionParameter,
               0xe0,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureCollectionParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureCollectionParameter>,
               local_res8,UMaterialExpressionTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureCollectionParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureCollectionParameter @ 1472e7810

void __cdecl
UMaterialExpressionTextureCollectionParameter::
StaticRegisterNativesUMaterialExpressionTextureCollectionParameter(void)

{
  return;
}

// UMaterialExpressionTextureCollectionParameter @ 148aff130

UMaterialExpressionTextureCollectionParameter * __thiscall
UMaterialExpressionTextureCollectionParameter::UMaterialExpressionTextureCollectionParameter
          (UMaterialExpressionTextureCollectionParameter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCollectionParameter__6B_;
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
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  return this;
}

// GetParameterExpressionId @ 148b02300

FGuid * __thiscall
UMaterialExpressionTextureCollectionParameter::GetParameterExpressionId
          (UMaterialExpressionTextureCollectionParameter *this)

{
  return &this->ExpressionGUID;
}

