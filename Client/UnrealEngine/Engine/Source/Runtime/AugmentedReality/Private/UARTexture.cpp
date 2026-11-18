// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 12

// StaticClass @ 14cf2ac40

UClass * __cdecl UARTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTexture",
               &Z_Registration_Info_UClass_UARTexture.InnerSingleton,StaticRegisterNativesUARTexture
               ,0x170,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARTexture>,InternalVTableHelperCtorCaller<UARTexture>,local_res8
               ,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTexture.InnerSingleton;
}

// UARTexture @ 14cf42a80

UARTexture * __thiscall UARTexture::UARTexture(UARTexture *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->TextureType = Unknown;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->ExternalTextureGuid).A = 0;
  (this->ExternalTextureGuid).B = 0;
  (this->ExternalTextureGuid).C = 0;
  (this->ExternalTextureGuid).D = 0;
  return this;
}

// UARTexture @ 14cf42ae0

UARTexture * __thiscall UARTexture::UARTexture(UARTexture *this,FObjectInitializer *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->TextureType = Unknown;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->ExternalTextureGuid).A = 0;
  (this->ExternalTextureGuid).B = 0;
  (this->ExternalTextureGuid).C = 0;
  (this->ExternalTextureGuid).D = 0;
  return this;
}

// ~UARTexture @ 14cf44870

void __thiscall UARTexture::~UARTexture(UARTexture *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// GetExternalTextureGuid @ 14cf50d80

FGuid * __thiscall
UARTexture::GetExternalTextureGuid(UARTexture *this,FGuid *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 14cf55320

UClass * __cdecl UARTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTexture",
               &Z_Registration_Info_UClass_UARTexture.InnerSingleton,StaticRegisterNativesUARTexture
               ,0x170,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARTexture>,InternalVTableHelperCtorCaller<UARTexture>,local_res8
               ,UTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTexture.InnerSingleton;
}

// GetSurfaceArraySize @ 14cf563e0

uint __thiscall UARTexture::GetSurfaceArraySize(UARTexture *this)

{
  return 0;
}

// GetSurfaceDepth @ 14cf56400

float __thiscall UARTexture::GetSurfaceDepth(UARTexture *this)

{
  return 0.0;
}

// GetSurfaceHeight @ 14cf56420

float __thiscall UARTexture::GetSurfaceHeight(UARTexture *this)

{
  return (this->Size).field0_0x0._s_0.Y;
}

// GetSurfaceWidth @ 14cf56440

float __thiscall UARTexture::GetSurfaceWidth(UARTexture *this)

{
  return (this->Size).field0_0x0._s_0.X;
}

// GetTextureClass @ 14cf56450

ETextureClass __thiscall UARTexture::GetTextureClass(UARTexture *this)

{
  return Other2DNoSource;
}

// StaticRegisterNativesUARTexture @ 14cf614c0

void __cdecl UARTexture::StaticRegisterNativesUARTexture(void)

{
  return;
}

