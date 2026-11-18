// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dbee0

UClass * __cdecl UMaterialExpressionUserSceneTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionUserSceneTexture",
               &Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionUserSceneTexture,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionUserSceneTexture>,
               InternalVTableHelperCtorCaller<UMaterialExpressionUserSceneTexture>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.InnerSingleton;
}

// UMaterialExpressionUserSceneTexture @ 1472e2a50

UMaterialExpressionUserSceneTexture * __thiscall
UMaterialExpressionUserSceneTexture::UMaterialExpressionUserSceneTexture
          (UMaterialExpressionUserSceneTexture *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionUserSceneTexture__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->UserSceneTexture).ComparisonIndex = 0;
  (this->UserSceneTexture).Number = 0;
  this->bFiltered = false;
  return this;
}

// ~UMaterialExpressionUserSceneTexture @ 1472e3720

void __thiscall
UMaterialExpressionUserSceneTexture::~UMaterialExpressionUserSceneTexture
          (UMaterialExpressionUserSceneTexture *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionUserSceneTexture__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e67e0

UClass * __cdecl UMaterialExpressionUserSceneTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionUserSceneTexture",
               &Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionUserSceneTexture,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionUserSceneTexture>,
               InternalVTableHelperCtorCaller<UMaterialExpressionUserSceneTexture>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionUserSceneTexture.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionUserSceneTexture @ 1472e7960

void __cdecl
UMaterialExpressionUserSceneTexture::StaticRegisterNativesUMaterialExpressionUserSceneTexture(void)

{
  return;
}

// UMaterialExpressionUserSceneTexture @ 148aff710

UMaterialExpressionUserSceneTexture * __thiscall
UMaterialExpressionUserSceneTexture::UMaterialExpressionUserSceneTexture
          (UMaterialExpressionUserSceneTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionUserSceneTexture__6B_;
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
  (this->UserSceneTexture).ComparisonIndex = 0;
  (this->UserSceneTexture).Number = 0;
  this->bFiltered = false;
  return this;
}

