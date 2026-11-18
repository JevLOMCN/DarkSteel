// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472cb410

UClass * __cdecl UMaterialExpressionSparseVolumeTextureBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureBase",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureBase>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.InnerSingleton;
}

// UMaterialExpressionSparseVolumeTextureBase @ 1472d3640

UMaterialExpressionSparseVolumeTextureBase * __thiscall
UMaterialExpressionSparseVolumeTextureBase::UMaterialExpressionSparseVolumeTextureBase
          (UMaterialExpressionSparseVolumeTextureBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  return this;
}

// UMaterialExpressionSparseVolumeTextureBase @ 1472d3680

UMaterialExpressionSparseVolumeTextureBase * __thiscall
UMaterialExpressionSparseVolumeTextureBase::UMaterialExpressionSparseVolumeTextureBase
          (UMaterialExpressionSparseVolumeTextureBase *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  (this->SparseVolumeTexture).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  return this;
}

// ~UMaterialExpressionSparseVolumeTextureBase @ 1472d4740

void __thiscall
UMaterialExpressionSparseVolumeTextureBase::~UMaterialExpressionSparseVolumeTextureBase
          (UMaterialExpressionSparseVolumeTextureBase *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSparseVolumeTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 1472d5d40

bool __thiscall
UMaterialExpressionSparseVolumeTextureBase::CanReferenceTexture
          (UMaterialExpressionSparseVolumeTextureBase *this)

{
  return true;
}

// GetPrivateStaticClass @ 1472d7a70

UClass * __cdecl UMaterialExpressionSparseVolumeTextureBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSparseVolumeTextureBase",
               &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSparseVolumeTextureBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSparseVolumeTextureBase>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase @ 1472d89e0

void __cdecl
UMaterialExpressionSparseVolumeTextureBase::
StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase(void)

{
  return;
}

// GetReferencedTexture @ 148b023d0

UObject * __thiscall
UMaterialExpressionSparseVolumeTextureBase::GetReferencedTexture
          (UMaterialExpressionSparseVolumeTextureBase *this)

{
  return (UObject *)(this->SparseVolumeTexture).field0_0x0.DebugPtr;
}

