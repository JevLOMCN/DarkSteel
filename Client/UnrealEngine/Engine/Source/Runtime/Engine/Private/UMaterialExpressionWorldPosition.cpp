// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dd740

UClass * __cdecl UMaterialExpressionWorldPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionWorldPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionWorldPosition,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionWorldPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionWorldPosition>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.InnerSingleton;
}

// UMaterialExpressionWorldPosition @ 1472e3040

UMaterialExpressionWorldPosition * __thiscall
UMaterialExpressionWorldPosition::UMaterialExpressionWorldPosition
          (UMaterialExpressionWorldPosition *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionWorldPosition__6B_;
  (this->WorldPositionShaderOffset).Value = '\0';
  return this;
}

// ~UMaterialExpressionWorldPosition @ 1472e3930

void __thiscall
UMaterialExpressionWorldPosition::~UMaterialExpressionWorldPosition
          (UMaterialExpressionWorldPosition *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionWorldPosition__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e7260

UClass * __cdecl UMaterialExpressionWorldPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionWorldPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionWorldPosition,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionWorldPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionWorldPosition>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionWorldPosition.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionWorldPosition @ 1472e7a40

void __cdecl
UMaterialExpressionWorldPosition::StaticRegisterNativesUMaterialExpressionWorldPosition(void)

{
  return;
}

// UMaterialExpressionWorldPosition @ 148affb90

UMaterialExpressionWorldPosition * __thiscall
UMaterialExpressionWorldPosition::UMaterialExpressionWorldPosition
          (UMaterialExpressionWorldPosition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->WorldPositionShaderOffset).Value = '\0';
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
  this->_padding_ = (longlong)&___7UMaterialExpressionWorldPosition__6B_;
  return this;
}

