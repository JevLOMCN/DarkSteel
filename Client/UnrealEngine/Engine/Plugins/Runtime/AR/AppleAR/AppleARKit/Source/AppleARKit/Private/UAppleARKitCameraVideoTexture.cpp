// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 14

// StaticClass @ 14cfcb070

UClass * __cdecl UAppleARKitCameraVideoTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitCameraVideoTexture",
               &Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton,
               StaticRegisterNativesUAppleARKitCameraVideoTexture,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitCameraVideoTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitCameraVideoTexture>,local_res8,
               UARTextureCameraImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton;
}

// UAppleARKitCameraVideoTexture @ 14cfd03e0

UAppleARKitCameraVideoTexture * __thiscall
UAppleARKitCameraVideoTexture::UAppleARKitCameraVideoTexture
          (UAppleARKitCameraVideoTexture *this,FVTableHelper *param_1)

{
  UARTextureCameraImage::UARTextureCameraImage((UARTextureCameraImage *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7UAppleARKitCameraVideoTexture__6B_;
  return this;
}

// UAppleARKitCameraVideoTexture @ 14cfd0440

UAppleARKitCameraVideoTexture * __thiscall
UAppleARKitCameraVideoTexture::UAppleARKitCameraVideoTexture
          (UAppleARKitCameraVideoTexture *this,FObjectInitializer *param_1)

{
  UARTextureCameraImage::UARTextureCameraImage((UARTextureCameraImage *)this,param_1);
  this->field_0x116 = this->field_0x116 & 0xfe;
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7UAppleARKitCameraVideoTexture__6B_;
  return this;
}

// ~UAppleARKitCameraVideoTexture @ 14cfd12c0

void __thiscall
UAppleARKitCameraVideoTexture::~UAppleARKitCameraVideoTexture(UAppleARKitCameraVideoTexture *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7IAppleImageInterface__6B_;
  UARTextureCameraImage::~UARTextureCameraImage((UARTextureCameraImage *)this);
  return;
}

// CreateResource @ 14cfd46e0

FTextureResource * __thiscall
UAppleARKitCameraVideoTexture::CreateResource(UAppleARKitCameraVideoTexture *this)

{
  FTextureResource *this_00;
  
  this_00 = ::operator_new(0xb8);
  if (this_00 != (FTextureResource *)0x0) {
    FTexture::FTexture((FTexture *)this_00);
    this_00->_padding_ = (longlong)&___7FARKitCameraVideoResource__6B_;
    (this_00->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
    this_00[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00[1]._padding_,4000);
    *(float *)&this_00[1]._padding_ = 0.0;
    *(float *)((longlong)&this_00[1]._padding_ + 4) = 0.0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)this;
    *(byte *)((longlong)&this_00->_padding_ + 6) = this->field_0x116 & 1;
    return this_00;
  }
  return (FTextureResource *)0x0;
}

// GetMaterialType @ 14cfd6db0

EMaterialValueType __thiscall
UAppleARKitCameraVideoTexture::GetMaterialType(UAppleARKitCameraVideoTexture *this)

{
  return MCT_Texture2D;
}

// GetPrivateStaticClass @ 14cfd72d0

UClass * __cdecl UAppleARKitCameraVideoTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitCameraVideoTexture",
               &Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton,
               StaticRegisterNativesUAppleARKitCameraVideoTexture,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitCameraVideoTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitCameraVideoTexture>,local_res8,
               UARTextureCameraImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitCameraVideoTexture.InnerSingleton;
}

// GetTextureType @ 14cfd8960

EAppleTextureType __thiscall
UAppleARKitCameraVideoTexture::GetTextureType(UAppleARKitCameraVideoTexture *this)

{
  return MetalTexture;
}

// Init @ 14cfd9340

void __thiscall UAppleARKitCameraVideoTexture::Init(UAppleARKitCameraVideoTexture *this)

{
  FTextureResource *pFVar1;
  
  pFVar1 = UTexture::GetResource((UTexture *)this);
  if (pFVar1 == (FTextureResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfd935e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x328))(this);
    return;
  }
  return;
}

// StaticRegisterNativesUAppleARKitCameraVideoTexture @ 14cfdf430

void __cdecl UAppleARKitCameraVideoTexture::StaticRegisterNativesUAppleARKitCameraVideoTexture(void)

{
  return;
}

// UpdateFrame @ 14cfdf910

void __thiscall
UAppleARKitCameraVideoTexture::UpdateFrame
          (UAppleARKitCameraVideoTexture *this,FAppleARKitFrame *param_1)

{
  *(TVector2<float>_u_0 *)&this->field_0x168 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return;
}

// _getUObject @ 14cfe0720

UObject * __thiscall UAppleARKitCameraVideoTexture::_getUObject(UAppleARKitCameraVideoTexture *this)

{
  return (UObject *)&this[-1].field_0x98;
}

// _getUObject`adjustor{8}' @ 14cfe0730

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitCameraVideoTexture::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitCameraVideoTexture::_getUObject_adjustor_8__(UAppleARKitCameraVideoTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitCameraVideoTexture *)&this[-1].field_0x170);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{144}' @ 14cfe0740

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitCameraVideoTexture::_getUObject`adjustor{144}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitCameraVideoTexture::_getUObject_adjustor_144__(UAppleARKitCameraVideoTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitCameraVideoTexture *)&this[-1].field_0xe8);
  return (UObject *)pUVar1;
}

