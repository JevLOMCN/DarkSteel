// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc730

UClass * __cdecl UMaterialExpressionSceneTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneTexture",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneTexture,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneTexture>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneTexture>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.InnerSingleton;
}

// UMaterialExpressionSceneTexture @ 1472d2850

UMaterialExpressionSceneTexture * __thiscall
UMaterialExpressionSceneTexture::UMaterialExpressionSceneTexture
          (UMaterialExpressionSceneTexture *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneTexture__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  this->bFiltered = false;
  return this;
}

// ~UMaterialExpressionSceneTexture @ 1472d4490

void __thiscall
UMaterialExpressionSceneTexture::~UMaterialExpressionSceneTexture
          (UMaterialExpressionSceneTexture *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneTexture__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6b70

UClass * __cdecl UMaterialExpressionSceneTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneTexture",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneTexture,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneTexture>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneTexture>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneTexture.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSceneTexture @ 1472d88a0

void __cdecl
UMaterialExpressionSceneTexture::StaticRegisterNativesUMaterialExpressionSceneTexture(void)

{
  return;
}

// UMaterialExpressionSceneTexture @ 148afe720

UMaterialExpressionSceneTexture * __thiscall
UMaterialExpressionSceneTexture::UMaterialExpressionSceneTexture
          (UMaterialExpressionSceneTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneTexture__6B_;
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
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  this->bFiltered = false;
  return this;
}

