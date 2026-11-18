// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cd280

UClass * __cdecl UMaterialExpressionShadingModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShadingModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShadingModel",
               &Z_Registration_Info_UClass_UMaterialExpressionShadingModel.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShadingModel,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShadingModel>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShadingModel>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShadingModel.InnerSingleton;
}

// UMaterialExpressionShadingModel @ 1472d2a10

UMaterialExpressionShadingModel * __thiscall
UMaterialExpressionShadingModel::UMaterialExpressionShadingModel
          (UMaterialExpressionShadingModel *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionShadingModel__6B_;
  (this->ShadingModel).Value = '\x01';
  return this;
}

// ~UMaterialExpressionShadingModel @ 1472d4540

void __thiscall
UMaterialExpressionShadingModel::~UMaterialExpressionShadingModel
          (UMaterialExpressionShadingModel *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionShadingModel__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6e70

UClass * __cdecl UMaterialExpressionShadingModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionShadingModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionShadingModel",
               &Z_Registration_Info_UClass_UMaterialExpressionShadingModel.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionShadingModel,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionShadingModel>,
               InternalVTableHelperCtorCaller<UMaterialExpressionShadingModel>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionShadingModel.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionShadingModel @ 1472d88e0

void __cdecl
UMaterialExpressionShadingModel::StaticRegisterNativesUMaterialExpressionShadingModel(void)

{
  return;
}

// UMaterialExpressionShadingModel @ 148afe880

UMaterialExpressionShadingModel * __thiscall
UMaterialExpressionShadingModel::UMaterialExpressionShadingModel
          (UMaterialExpressionShadingModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->ShadingModel).Value = '\x01';
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
  this->_padding_ = (longlong)&___7UMaterialExpressionShadingModel__6B_;
  return this;
}

