// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 12

// StaticClass @ 14db0a010

UClass * __cdecl ULandscapeHeightTextureBackedRenderTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeHeightTextureBackedRenderTarget",
               &Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.InnerSingleton,
               StaticRegisterNativesULandscapeHeightTextureBackedRenderTarget,0x58,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeHeightTextureBackedRenderTarget>,
               InternalVTableHelperCtorCaller<ULandscapeHeightTextureBackedRenderTarget>,local_res8,
               ULandscapeTextureBackedRenderTargetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.InnerSingleton;
}

// ULandscapeHeightTextureBackedRenderTarget @ 14db12d60

ULandscapeHeightTextureBackedRenderTarget * __thiscall
ULandscapeHeightTextureBackedRenderTarget::ULandscapeHeightTextureBackedRenderTarget
          (ULandscapeHeightTextureBackedRenderTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ULandscapeHeightTextureBackedRenderTarget__6B_;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x20;
  *(undefined1 *)&this->_padding_ = 0;
  (this->ConversionParams).ZeroInEncoding = 0.0;
  (this->ConversionParams).HeightScale = 1.0;
  (this->ConversionParams).HeightOffset = 0.0;
  (this->RenderTargetFormat).Value = '\a';
  return this;
}

// ULandscapeHeightTextureBackedRenderTarget @ 14db12dc0

ULandscapeHeightTextureBackedRenderTarget * __thiscall
ULandscapeHeightTextureBackedRenderTarget::ULandscapeHeightTextureBackedRenderTarget
          (ULandscapeHeightTextureBackedRenderTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ULandscapeHeightTextureBackedRenderTarget__6B_;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x20;
  *(undefined1 *)&this->_padding_ = 0;
  (this->ConversionParams).ZeroInEncoding = 0.0;
  (this->ConversionParams).HeightScale = 1.0;
  (this->ConversionParams).HeightOffset = 0.0;
  (this->RenderTargetFormat).Value = '\a';
  return this;
}

// ~ULandscapeHeightTextureBackedRenderTarget @ 14db134b0

void __thiscall
ULandscapeHeightTextureBackedRenderTarget::~ULandscapeHeightTextureBackedRenderTarget
          (ULandscapeHeightTextureBackedRenderTarget *this)

{
  this->_padding_ = (longlong)&___7ULandscapeTextureBackedRenderTargetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyBackFromInternalTexture @ 14db15d30

void __thiscall
ULandscapeHeightTextureBackedRenderTarget::CopyBackFromInternalTexture
          (ULandscapeHeightTextureBackedRenderTarget *this)

{
  return;
}

// CopyToInternalTexture @ 14db15ef0

void __thiscall
ULandscapeHeightTextureBackedRenderTarget::CopyToInternalTexture
          (ULandscapeHeightTextureBackedRenderTarget *this)

{
  return;
}

// GetInternalTextureFormat @ 14db18880

ETextureSourceFormat __thiscall
ULandscapeHeightTextureBackedRenderTarget::GetInternalTextureFormat
          (ULandscapeHeightTextureBackedRenderTarget *this)

{
  return TSF_BGRA8;
}

// GetPrivateStaticClass @ 14db18d70

UClass * __cdecl ULandscapeHeightTextureBackedRenderTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeHeightTextureBackedRenderTarget",
               &Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.InnerSingleton,
               StaticRegisterNativesULandscapeHeightTextureBackedRenderTarget,0x58,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeHeightTextureBackedRenderTarget>,
               InternalVTableHelperCtorCaller<ULandscapeHeightTextureBackedRenderTarget>,local_res8,
               ULandscapeTextureBackedRenderTargetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.InnerSingleton;
}

// GetRenderTargetFormat @ 14db192c0

ETextureRenderTargetFormat __thiscall
ULandscapeHeightTextureBackedRenderTarget::GetRenderTargetFormat
          (ULandscapeHeightTextureBackedRenderTarget *this)

{
  return (ETextureRenderTargetFormat)(this->RenderTargetFormat).Value;
}

// Initialize @ 14db1b300

void __thiscall
ULandscapeHeightTextureBackedRenderTarget::Initialize
          (ULandscapeHeightTextureBackedRenderTarget *this)

{
  return;
}

// SetFormat @ 14db1bfd0

void __thiscall
ULandscapeHeightTextureBackedRenderTarget::SetFormat
          (ULandscapeHeightTextureBackedRenderTarget *this,ETextureRenderTargetFormat param_1)

{
  return;
}

// StaticRegisterNativesULandscapeHeightTextureBackedRenderTarget @ 14db1d4f0

void __cdecl
ULandscapeHeightTextureBackedRenderTarget::
StaticRegisterNativesULandscapeHeightTextureBackedRenderTarget(void)

{
  return;
}

