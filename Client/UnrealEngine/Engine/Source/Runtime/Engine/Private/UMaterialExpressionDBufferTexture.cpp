// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472944e0

UClass * __cdecl UMaterialExpressionDBufferTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDBufferTexture",
               &Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDBufferTexture,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDBufferTexture>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDBufferTexture>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.InnerSingleton;
}

// UMaterialExpressionDBufferTexture @ 14729cd10

UMaterialExpressionDBufferTexture * __thiscall
UMaterialExpressionDBufferTexture::UMaterialExpressionDBufferTexture
          (UMaterialExpressionDBufferTexture *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDBufferTexture__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionDBufferTexture @ 14729db50

void __thiscall
UMaterialExpressionDBufferTexture::~UMaterialExpressionDBufferTexture
          (UMaterialExpressionDBufferTexture *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDBufferTexture__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0c50

UClass * __cdecl UMaterialExpressionDBufferTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDBufferTexture",
               &Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDBufferTexture,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDBufferTexture>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDBufferTexture>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDBufferTexture.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDBufferTexture @ 1472a1dc0

void __cdecl
UMaterialExpressionDBufferTexture::StaticRegisterNativesUMaterialExpressionDBufferTexture(void)

{
  return;
}

// UMaterialExpressionDBufferTexture @ 148afb6c0

UMaterialExpressionDBufferTexture * __thiscall
UMaterialExpressionDBufferTexture::UMaterialExpressionDBufferTexture
          (UMaterialExpressionDBufferTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDBufferTexture__6B_;
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
  return this;
}

