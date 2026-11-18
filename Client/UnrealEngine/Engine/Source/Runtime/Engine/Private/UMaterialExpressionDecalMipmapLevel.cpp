// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472952e0

UClass * __cdecl UMaterialExpressionDecalMipmapLevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalMipmapLevel",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalMipmapLevel,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalMipmapLevel>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalMipmapLevel>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.InnerSingleton;
}

// UMaterialExpressionDecalMipmapLevel @ 14729cf10

UMaterialExpressionDecalMipmapLevel * __thiscall
UMaterialExpressionDecalMipmapLevel::UMaterialExpressionDecalMipmapLevel
          (UMaterialExpressionDecalMipmapLevel *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDecalMipmapLevel__6B_;
  (this->TextureSize).OutputIndex = 0;
  (this->TextureSize).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureSize).InputName.Number = 0;
  (this->TextureSize).MaskR = 0;
  (this->TextureSize).MaskG = 0;
  (this->TextureSize).MaskB = 0;
  (this->TextureSize).MaskA = 0;
  (this->TextureSize).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionDecalMipmapLevel @ 14729dc50

void __thiscall
UMaterialExpressionDecalMipmapLevel::~UMaterialExpressionDecalMipmapLevel
          (UMaterialExpressionDecalMipmapLevel *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDecalMipmapLevel__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1190

UClass * __cdecl UMaterialExpressionDecalMipmapLevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDecalMipmapLevel",
               &Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDecalMipmapLevel,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDecalMipmapLevel>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDecalMipmapLevel>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDecalMipmapLevel @ 1472a1e60

void __cdecl
UMaterialExpressionDecalMipmapLevel::StaticRegisterNativesUMaterialExpressionDecalMipmapLevel(void)

{
  return;
}

// UMaterialExpressionDecalMipmapLevel @ 148afba10

UMaterialExpressionDecalMipmapLevel * __thiscall
UMaterialExpressionDecalMipmapLevel::UMaterialExpressionDecalMipmapLevel
          (UMaterialExpressionDecalMipmapLevel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ConstWidth = 256.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionDecalMipmapLevel__6B_;
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
  (this->TextureSize).OutputIndex = 0;
  (this->TextureSize).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureSize).InputName.Number = 0;
  (this->TextureSize).MaskR = 0;
  (this->TextureSize).MaskG = 0;
  (this->TextureSize).MaskB = 0;
  (this->TextureSize).MaskA = 0;
  (this->TextureSize).Expression = (UMaterialExpression *)0x0;
  this->ConstHeight = 256.0;
  return this;
}

