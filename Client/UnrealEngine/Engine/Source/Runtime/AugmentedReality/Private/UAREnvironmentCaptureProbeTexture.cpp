// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 11

// StaticClass @ 14cf2b330

UClass * __cdecl UAREnvironmentCaptureProbeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentCaptureProbeTexture",
               &Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton,
               StaticRegisterNativesUAREnvironmentCaptureProbeTexture,0x178,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAREnvironmentCaptureProbeTexture>,
               InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbeTexture>,local_res8,
               UTextureCube::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton;
}

// UAREnvironmentCaptureProbeTexture @ 14cf40ff0

UAREnvironmentCaptureProbeTexture * __thiscall
UAREnvironmentCaptureProbeTexture::UAREnvironmentCaptureProbeTexture
          (UAREnvironmentCaptureProbeTexture *this,FVTableHelper *param_1)

{
  UTextureCube::UTextureCube((UTextureCube *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->ExternalTextureGuid).A = 0;
  (this->ExternalTextureGuid).B = 0;
  (this->ExternalTextureGuid).C = 0;
  (this->ExternalTextureGuid).D = 0;
  return this;
}

// UAREnvironmentCaptureProbeTexture @ 14cf41050

UAREnvironmentCaptureProbeTexture * __thiscall
UAREnvironmentCaptureProbeTexture::UAREnvironmentCaptureProbeTexture
          (UAREnvironmentCaptureProbeTexture *this,FObjectInitializer *param_1)

{
  UTextureCube::UTextureCube((UTextureCube *)this,param_1);
  this->TextureType = EnvironmentCapture;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->ExternalTextureGuid).A = 0;
  (this->ExternalTextureGuid).B = 0;
  (this->ExternalTextureGuid).C = 0;
  (this->ExternalTextureGuid).D = 0;
  return this;
}

// ~UAREnvironmentCaptureProbeTexture @ 14cf44170

void __thiscall
UAREnvironmentCaptureProbeTexture::~UAREnvironmentCaptureProbeTexture
          (UAREnvironmentCaptureProbeTexture *this)

{
  this->_padding_ = (longlong)&UTextureCube::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// GetExternalTextureGuid @ 14cf50d60

FGuid * __thiscall
UAREnvironmentCaptureProbeTexture::GetExternalTextureGuid
          (UAREnvironmentCaptureProbeTexture *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->ExternalTextureGuid).B;
  uVar2 = (this->ExternalTextureGuid).C;
  uVar3 = (this->ExternalTextureGuid).D;
  __return_storage_ptr__->A = (this->ExternalTextureGuid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf542d0

UClass * __cdecl UAREnvironmentCaptureProbeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentCaptureProbeTexture",
               &Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton,
               StaticRegisterNativesUAREnvironmentCaptureProbeTexture,0x178,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAREnvironmentCaptureProbeTexture>,
               InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbeTexture>,local_res8,
               UTextureCube::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton;
}

// GetSurfaceArraySize @ 14cf563d0

uint __thiscall
UAREnvironmentCaptureProbeTexture::GetSurfaceArraySize(UAREnvironmentCaptureProbeTexture *this)

{
  return 6;
}

// GetSurfaceDepth @ 14cf563f0

float __thiscall
UAREnvironmentCaptureProbeTexture::GetSurfaceDepth(UAREnvironmentCaptureProbeTexture *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 14cf56410

float __thiscall
UAREnvironmentCaptureProbeTexture::GetSurfaceHeight(UAREnvironmentCaptureProbeTexture *this)

{
  return (this->Size).field0_0x0._s_0.Y;
}

// GetSurfaceWidth @ 14cf56430

float __thiscall
UAREnvironmentCaptureProbeTexture::GetSurfaceWidth(UAREnvironmentCaptureProbeTexture *this)

{
  return (this->Size).field0_0x0._s_0.X;
}

// StaticRegisterNativesUAREnvironmentCaptureProbeTexture @ 14cf60fa0

void __cdecl
UAREnvironmentCaptureProbeTexture::StaticRegisterNativesUAREnvironmentCaptureProbeTexture(void)

{
  return;
}

