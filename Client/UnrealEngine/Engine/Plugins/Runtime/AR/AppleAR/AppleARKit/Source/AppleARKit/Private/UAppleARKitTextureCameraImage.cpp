// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 13

// StaticClass @ 14cfcad30

UClass * __cdecl UAppleARKitTextureCameraImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTextureCameraImage",
               &Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton,
               StaticRegisterNativesUAppleARKitTextureCameraImage,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitTextureCameraImage>,
               InternalVTableHelperCtorCaller<UAppleARKitTextureCameraImage>,local_res8,
               UARTextureCameraImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton;
}

// UAppleARKitTextureCameraImage @ 14cfd07e0

UAppleARKitTextureCameraImage * __thiscall
UAppleARKitTextureCameraImage::UAppleARKitTextureCameraImage
          (UAppleARKitTextureCameraImage *this,FVTableHelper *param_1)

{
  UARTextureCameraImage::UARTextureCameraImage((UARTextureCameraImage *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7UAppleARKitTextureCameraImage__6B_;
  return this;
}

// UAppleARKitTextureCameraImage @ 14cfd0840

UAppleARKitTextureCameraImage * __thiscall
UAppleARKitTextureCameraImage::UAppleARKitTextureCameraImage
          (UAppleARKitTextureCameraImage *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  UARTextureCameraImage::UARTextureCameraImage((UARTextureCameraImage *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7UAppleARKitTextureCameraImage__6B_;
  pFVar5 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar5->A;
  uVar2 = pFVar5->B;
  uVar3 = pFVar5->C;
  uVar4 = pFVar5->D;
  this->field_0x116 = this->field_0x116 & 0xfe;
  *(uint *)&this->field_0x158 = uVar1;
  *(uint *)&this->field_0x15c = uVar2;
  *(uint *)&this->field_0x160 = uVar3;
  *(uint *)&this->field_0x164 = uVar4;
  return this;
}

// ~UAppleARKitTextureCameraImage @ 14cfd1460

void __thiscall
UAppleARKitTextureCameraImage::~UAppleARKitTextureCameraImage(UAppleARKitTextureCameraImage *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7IAppleImageInterface__6B_;
  UARTextureCameraImage::~UARTextureCameraImage((UARTextureCameraImage *)this);
  return;
}

// BeginDestroy @ 14cfd2e90

void __thiscall UAppleARKitTextureCameraImage::BeginDestroy(UAppleARKitTextureCameraImage *this)

{
  bool bVar1;
  
  UStreamableRenderAsset::BeginDestroy((UStreamableRenderAsset *)this);
  bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if (!bVar1) {
    UTexture::BeginFinalReleaseResource((UTexture *)this);
    return;
  }
  return;
}

// CreateResource @ 14cfd47c0

FTextureResource * __thiscall
UAppleARKitTextureCameraImage::CreateResource(UAppleARKitTextureCameraImage *this)

{
  FTextureResource *this_00;
  
  this_00 = ::operator_new(0x70);
  if (this_00 != (FTextureResource *)0x0) {
    FTexture::FTexture((FTexture *)this_00);
    this_00[1]._padding_ = (longlong)this;
    (this_00->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    this_00->_padding_ = (longlong)&___7FARKitTextureResource__6B_;
    this_00[1]._padding_ = 0;
    *(byte *)((longlong)&this_00->_padding_ + 6) = this->field_0x116 & 1;
    return this_00;
  }
  return (FTextureResource *)0x0;
}

// GetMaterialType @ 14cfd6df0

EMaterialValueType __thiscall
UAppleARKitTextureCameraImage::GetMaterialType(UAppleARKitTextureCameraImage *this)

{
  return MCT_Texture2D;
}

// GetPrivateStaticClass @ 14cfd7740

UClass * __cdecl UAppleARKitTextureCameraImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTextureCameraImage",
               &Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton,
               StaticRegisterNativesUAppleARKitTextureCameraImage,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitTextureCameraImage>,
               InternalVTableHelperCtorCaller<UAppleARKitTextureCameraImage>,local_res8,
               UARTextureCameraImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraImage.InnerSingleton;
}

// GetTextureType @ 14cfd8990

EAppleTextureType __thiscall
UAppleARKitTextureCameraImage::GetTextureType(UAppleARKitTextureCameraImage *this)

{
  return PixelBuffer;
}

// StaticRegisterNativesUAppleARKitTextureCameraImage @ 14cfdf490

void __cdecl UAppleARKitTextureCameraImage::StaticRegisterNativesUAppleARKitTextureCameraImage(void)

{
  return;
}

// _getUObject @ 14cfe07e0

UObject * __thiscall UAppleARKitTextureCameraImage::_getUObject(UAppleARKitTextureCameraImage *this)

{
  return (UObject *)&this[-1].field_0x98;
}

// _getUObject`adjustor{8}' @ 14cfe07f0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitTextureCameraImage::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitTextureCameraImage::_getUObject_adjustor_8__(UAppleARKitTextureCameraImage *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitTextureCameraImage *)&this[-1].field_0x170);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{144}' @ 14cfe0800

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitTextureCameraImage::_getUObject`adjustor{144}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitTextureCameraImage::_getUObject_adjustor_144__(UAppleARKitTextureCameraImage *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitTextureCameraImage *)&this[-1].field_0xe8);
  return (UObject *)pUVar1;
}

