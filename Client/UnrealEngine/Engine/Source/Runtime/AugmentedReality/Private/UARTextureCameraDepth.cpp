// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 6

// StaticClass @ 14cf2b1b0

UClass * __cdecl UARTextureCameraDepth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTextureCameraDepth",
               &Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton,
               StaticRegisterNativesUARTextureCameraDepth,0x178,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTextureCameraDepth>,
               InternalVTableHelperCtorCaller<UARTextureCameraDepth>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton;
}

// UARTextureCameraDepth @ 14cf42b40

UARTextureCameraDepth * __thiscall
UARTextureCameraDepth::UARTextureCameraDepth(UARTextureCameraDepth *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UARTextureCameraDepth @ 14cf42ba0

UARTextureCameraDepth * __thiscall
UARTextureCameraDepth::UARTextureCameraDepth
          (UARTextureCameraDepth *this,FObjectInitializer *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  *(undefined1 *)&this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~UARTextureCameraDepth @ 14cf448b0

void __thiscall UARTextureCameraDepth::~UARTextureCameraDepth(UARTextureCameraDepth *this)

{
  this->_padding_ = (longlong)&UARTexture::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// GetPrivateStaticClass @ 14cf553e0

UClass * __cdecl UARTextureCameraDepth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTextureCameraDepth",
               &Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton,
               StaticRegisterNativesUARTextureCameraDepth,0x178,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTextureCameraDepth>,
               InternalVTableHelperCtorCaller<UARTextureCameraDepth>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton;
}

// StaticRegisterNativesUARTextureCameraDepth @ 14cf614d0

void __cdecl UARTextureCameraDepth::StaticRegisterNativesUARTextureCameraDepth(void)

{
  return;
}

