// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 6

// StaticClass @ 14cf2aef0

UClass * __cdecl UARTextureCameraImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTextureCameraImage",
               &Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton,
               StaticRegisterNativesUARTextureCameraImage,0x170,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTextureCameraImage>,
               InternalVTableHelperCtorCaller<UARTextureCameraImage>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton;
}

// UARTextureCameraImage @ 14cf42c00

UARTextureCameraImage * __thiscall
UARTextureCameraImage::UARTextureCameraImage(UARTextureCameraImage *this,FVTableHelper *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->field_0x150 = 0;
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UARTextureCameraImage @ 14cf42c60

UARTextureCameraImage * __thiscall
UARTextureCameraImage::UARTextureCameraImage
          (UARTextureCameraImage *this,FObjectInitializer *param_1)

{
  UTexture::UTexture((UTexture *)this,param_1);
  this->field_0x150 = 1;
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~UARTextureCameraImage @ 14cf448f0

void __thiscall UARTextureCameraImage::~UARTextureCameraImage(UARTextureCameraImage *this)

{
  *(undefined ***)this = &UARTexture::_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &UARTexture::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &UARTexture::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  return;
}

// GetPrivateStaticClass @ 14cf554a0

UClass * __cdecl UARTextureCameraImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTextureCameraImage",
               &Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton,
               StaticRegisterNativesUARTextureCameraImage,0x170,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTextureCameraImage>,
               InternalVTableHelperCtorCaller<UARTextureCameraImage>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton;
}

// StaticRegisterNativesUARTextureCameraImage @ 14cf614e0

void __cdecl UARTextureCameraImage::StaticRegisterNativesUARTextureCameraImage(void)

{
  return;
}

