// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// CanReferenceTexture @ 14728e9f0

bool __thiscall
UMaterialExpressionTextureBase::CanReferenceTexture(UMaterialExpressionTextureBase *this)

{
  return true;
}

// StaticClass @ 1472dbe20

UClass * __cdecl UMaterialExpressionTextureBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureBase",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureBase,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionTextureBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureBase.InnerSingleton;
}

// UMaterialExpressionTextureBase @ 1472e1df0

UMaterialExpressionTextureBase * __thiscall
UMaterialExpressionTextureBase::UMaterialExpressionTextureBase
          (UMaterialExpressionTextureBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->IsDefaultMeshpaintTexture = '\0';
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureBase__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  return this;
}

// UMaterialExpressionTextureBase @ 1472e1e30

UMaterialExpressionTextureBase * __thiscall
UMaterialExpressionTextureBase::UMaterialExpressionTextureBase
          (UMaterialExpressionTextureBase *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->IsDefaultMeshpaintTexture = '\0';
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureBase__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UTexture *)0x0;
  return this;
}

// ~UMaterialExpressionTextureBase @ 1472e33e0

void __thiscall
UMaterialExpressionTextureBase::~UMaterialExpressionTextureBase
          (UMaterialExpressionTextureBase *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e56a0

UClass * __cdecl UMaterialExpressionTextureBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureBase",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTextureBase,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionTextureBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureBase.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureBase @ 1472e77f0

void __cdecl
UMaterialExpressionTextureBase::StaticRegisterNativesUMaterialExpressionTextureBase(void)

{
  return;
}

// GetReferencedTexture @ 148b023e0

UObject * __thiscall
UMaterialExpressionTextureBase::GetReferencedTexture(UMaterialExpressionTextureBase *this)

{
  return (UObject *)(this->Texture).field0_0x0.DebugPtr;
}

