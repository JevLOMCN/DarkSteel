// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 12

// StaticClass @ 14db09f10

UClass * __cdecl ULandscapeWeightTextureBackedRenderTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeWeightTextureBackedRenderTarget",
               &Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.InnerSingleton,
               StaticRegisterNativesULandscapeWeightTextureBackedRenderTarget,0x50,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeWeightTextureBackedRenderTarget>,
               InternalVTableHelperCtorCaller<ULandscapeWeightTextureBackedRenderTarget>,local_res8,
               ULandscapeTextureBackedRenderTargetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.InnerSingleton;
}

// ULandscapeWeightTextureBackedRenderTarget @ 14db13370

ULandscapeWeightTextureBackedRenderTarget * __thiscall
ULandscapeWeightTextureBackedRenderTarget::ULandscapeWeightTextureBackedRenderTarget
          (ULandscapeWeightTextureBackedRenderTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x20;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ULandscapeWeightTextureBackedRenderTarget__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x20;
  this->bUseAlphaChannel = true;
  return this;
}

// ULandscapeWeightTextureBackedRenderTarget @ 14db133c0

ULandscapeWeightTextureBackedRenderTarget * __thiscall
ULandscapeWeightTextureBackedRenderTarget::ULandscapeWeightTextureBackedRenderTarget
          (ULandscapeWeightTextureBackedRenderTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x20;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ULandscapeWeightTextureBackedRenderTarget__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x20;
  this->bUseAlphaChannel = true;
  return this;
}

// ~ULandscapeWeightTextureBackedRenderTarget @ 14db13600

void __thiscall
ULandscapeWeightTextureBackedRenderTarget::~ULandscapeWeightTextureBackedRenderTarget
          (ULandscapeWeightTextureBackedRenderTarget *this)

{
  this->_padding_ = (longlong)&___7ULandscapeTextureBackedRenderTargetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyBackFromInternalTexture @ 14db15d70

void __thiscall
ULandscapeWeightTextureBackedRenderTarget::CopyBackFromInternalTexture
          (ULandscapeWeightTextureBackedRenderTarget *this)

{
  return;
}

// CopyToInternalTexture @ 14db15f30

void __thiscall
ULandscapeWeightTextureBackedRenderTarget::CopyToInternalTexture
          (ULandscapeWeightTextureBackedRenderTarget *this)

{
  return;
}

// GetInternalTextureFormat @ 14db188d0

ETextureSourceFormat __thiscall
ULandscapeWeightTextureBackedRenderTarget::GetInternalTextureFormat
          (ULandscapeWeightTextureBackedRenderTarget *this)

{
  return (this->bUseAlphaChannel != false) + TSF_G8;
}

// GetPrivateStaticClass @ 14db191d0

UClass * __cdecl ULandscapeWeightTextureBackedRenderTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeWeightTextureBackedRenderTarget",
               &Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.InnerSingleton,
               StaticRegisterNativesULandscapeWeightTextureBackedRenderTarget,0x50,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeWeightTextureBackedRenderTarget>,
               InternalVTableHelperCtorCaller<ULandscapeWeightTextureBackedRenderTarget>,local_res8,
               ULandscapeTextureBackedRenderTargetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.InnerSingleton;
}

// GetRenderTargetFormat @ 14db19300

ETextureRenderTargetFormat __thiscall
ULandscapeWeightTextureBackedRenderTarget::GetRenderTargetFormat
          (ULandscapeWeightTextureBackedRenderTarget *this)

{
  return -(uint)(this->bUseAlphaChannel != false) & RTF_RGBA8;
}

// Initialize @ 14db1b320

void __thiscall
ULandscapeWeightTextureBackedRenderTarget::Initialize
          (ULandscapeWeightTextureBackedRenderTarget *this)

{
  return;
}

// SetUseAlphaChannel @ 14db1c2f0

void __thiscall
ULandscapeWeightTextureBackedRenderTarget::SetUseAlphaChannel
          (ULandscapeWeightTextureBackedRenderTarget *this,bool param_1)

{
  return;
}

// StaticRegisterNativesULandscapeWeightTextureBackedRenderTarget @ 14db1d5b0

void __cdecl
ULandscapeWeightTextureBackedRenderTarget::
StaticRegisterNativesULandscapeWeightTextureBackedRenderTarget(void)

{
  return;
}

