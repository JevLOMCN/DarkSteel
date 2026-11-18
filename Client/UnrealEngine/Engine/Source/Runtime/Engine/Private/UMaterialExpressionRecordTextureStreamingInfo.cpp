// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bad60

UClass * __cdecl UMaterialExpressionRecordTextureStreamingInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRecordTextureStreamingInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRecordTextureStreamingInfo",
               &Z_Registration_Info_UClass_UMaterialExpressionRecordTextureStreamingInfo.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRecordTextureStreamingInfo,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRecordTextureStreamingInfo>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRecordTextureStreamingInfo>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRecordTextureStreamingInfo.InnerSingleton;
}

// UMaterialExpressionRecordTextureStreamingInfo @ 1472c1870

UMaterialExpressionRecordTextureStreamingInfo * __thiscall
UMaterialExpressionRecordTextureStreamingInfo::UMaterialExpressionRecordTextureStreamingInfo
          (UMaterialExpressionRecordTextureStreamingInfo *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRecordTextureStreamingInfo__6B_;
  (this->TextureObject).OutputIndex = 0;
  (this->TextureObject).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureObject).InputName.Number = 0;
  (this->TextureObject).MaskR = 0;
  (this->TextureObject).MaskG = 0;
  (this->TextureObject).MaskB = 0;
  (this->TextureObject).MaskA = 0;
  (this->TextureObject).Expression = (UMaterialExpression *)0x0;
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

// ~UMaterialExpressionRecordTextureStreamingInfo @ 1472c26b0

void __thiscall
UMaterialExpressionRecordTextureStreamingInfo::~UMaterialExpressionRecordTextureStreamingInfo
          (UMaterialExpressionRecordTextureStreamingInfo *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRecordTextureStreamingInfo__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6c70

UClass * __cdecl UMaterialExpressionRecordTextureStreamingInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRecordTextureStreamingInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRecordTextureStreamingInfo",
               &Z_Registration_Info_UClass_UMaterialExpressionRecordTextureStreamingInfo.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRecordTextureStreamingInfo,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRecordTextureStreamingInfo>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRecordTextureStreamingInfo>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRecordTextureStreamingInfo.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRecordTextureStreamingInfo @ 1472c7780

void __cdecl
UMaterialExpressionRecordTextureStreamingInfo::
StaticRegisterNativesUMaterialExpressionRecordTextureStreamingInfo(void)

{
  return;
}

// UMaterialExpressionRecordTextureStreamingInfo @ 148afdcb0

UMaterialExpressionRecordTextureStreamingInfo * __thiscall
UMaterialExpressionRecordTextureStreamingInfo::UMaterialExpressionRecordTextureStreamingInfo
          (UMaterialExpressionRecordTextureStreamingInfo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRecordTextureStreamingInfo__6B_;
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
  (this->TextureObject).OutputIndex = 0;
  (this->TextureObject).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TextureObject).InputName.Number = 0;
  (this->TextureObject).MaskR = 0;
  (this->TextureObject).MaskG = 0;
  (this->TextureObject).MaskB = 0;
  (this->TextureObject).MaskA = 0;
  (this->TextureObject).Expression = (UMaterialExpression *)0x0;
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

