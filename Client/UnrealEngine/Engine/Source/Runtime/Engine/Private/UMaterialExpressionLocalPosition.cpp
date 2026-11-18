// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5ad0

UClass * __cdecl UMaterialExpressionLocalPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLocalPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLocalPosition,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLocalPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLocalPosition>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.InnerSingleton;
}

// UMaterialExpressionLocalPosition @ 1472ae400

UMaterialExpressionLocalPosition * __thiscall
UMaterialExpressionLocalPosition::UMaterialExpressionLocalPosition
          (UMaterialExpressionLocalPosition *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLocalPosition__6B_;
  this->IncludedOffsets = IncludeOffsets;
  this->LocalOrigin = Instance;
  return this;
}

// ~UMaterialExpressionLocalPosition @ 1472afbb0

void __thiscall
UMaterialExpressionLocalPosition::~UMaterialExpressionLocalPosition
          (UMaterialExpressionLocalPosition *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLocalPosition__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3860

UClass * __cdecl UMaterialExpressionLocalPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLocalPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLocalPosition,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLocalPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLocalPosition>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLocalPosition.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLocalPosition @ 1472b46f0

void __cdecl
UMaterialExpressionLocalPosition::StaticRegisterNativesUMaterialExpressionLocalPosition(void)

{
  return;
}

// UMaterialExpressionLocalPosition @ 148afca90

UMaterialExpressionLocalPosition * __thiscall
UMaterialExpressionLocalPosition::UMaterialExpressionLocalPosition
          (UMaterialExpressionLocalPosition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLocalPosition__6B_;
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
  this->IncludedOffsets = IncludeOffsets;
  this->LocalOrigin = Instance;
  return this;
}

