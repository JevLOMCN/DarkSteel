// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc9b0

UClass * __cdecl UMaterialExpressionTextureCoordinate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureCoordinate",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureCoordinate,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureCoordinate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureCoordinate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.InnerSingleton;
}

// UMaterialExpressionTextureCoordinate @ 1472e1f10

UMaterialExpressionTextureCoordinate * __thiscall
UMaterialExpressionTextureCoordinate::UMaterialExpressionTextureCoordinate
          (UMaterialExpressionTextureCoordinate *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->UTiling = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCoordinate__6B_;
  this->VTiling = 1.0;
  return this;
}

// ~UMaterialExpressionTextureCoordinate @ 1472e3440

void __thiscall
UMaterialExpressionTextureCoordinate::~UMaterialExpressionTextureCoordinate
          (UMaterialExpressionTextureCoordinate *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCoordinate__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e58e0

UClass * __cdecl UMaterialExpressionTextureCoordinate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureCoordinate",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureCoordinate,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureCoordinate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureCoordinate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureCoordinate.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureCoordinate @ 1472e7820

void __cdecl
UMaterialExpressionTextureCoordinate::StaticRegisterNativesUMaterialExpressionTextureCoordinate
          (void)

{
  return;
}

// UMaterialExpressionTextureCoordinate @ 148aff1d0

UMaterialExpressionTextureCoordinate * __thiscall
UMaterialExpressionTextureCoordinate::UMaterialExpressionTextureCoordinate
          (UMaterialExpressionTextureCoordinate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->UTiling = 1.0;
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
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureCoordinate__6B_;
  this->VTiling = 1.0;
  return this;
}

