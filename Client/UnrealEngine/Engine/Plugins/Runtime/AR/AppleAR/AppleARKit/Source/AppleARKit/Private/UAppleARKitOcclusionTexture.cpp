// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 13

// StaticClass @ 14cfcaf70

UClass * __cdecl UAppleARKitOcclusionTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitOcclusionTexture",
               &Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton,
               StaticRegisterNativesUAppleARKitOcclusionTexture,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitOcclusionTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitOcclusionTexture>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton;
}

// UAppleARKitOcclusionTexture @ 14cfd05f0

UAppleARKitOcclusionTexture * __thiscall
UAppleARKitOcclusionTexture::UAppleARKitOcclusionTexture
          (UAppleARKitOcclusionTexture *this,FVTableHelper *param_1)

{
  UARTexture::UARTexture((UARTexture *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7UAppleARKitOcclusionTexture__6B_;
  return this;
}

// UAppleARKitOcclusionTexture @ 14cfd0650

UAppleARKitOcclusionTexture * __thiscall
UAppleARKitOcclusionTexture::UAppleARKitOcclusionTexture
          (UAppleARKitOcclusionTexture *this,FObjectInitializer *param_1)

{
  UARTexture::UARTexture((UARTexture *)this,param_1);
  this->field_0x116 = this->field_0x116 & 0xfe;
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7UAppleARKitOcclusionTexture__6B_;
  return this;
}

// ~UAppleARKitOcclusionTexture @ 14cfd1360

void __thiscall
UAppleARKitOcclusionTexture::~UAppleARKitOcclusionTexture(UAppleARKitOcclusionTexture *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x170 = &___7IAppleImageInterface__6B_;
  UARTexture::~UARTexture((UARTexture *)this);
  return;
}

// BeginDestroy @ 14cfd2e70

void __thiscall UAppleARKitOcclusionTexture::BeginDestroy(UAppleARKitOcclusionTexture *this)

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

// CreateResource @ 14cfd47a0

FTextureResource * __thiscall
UAppleARKitOcclusionTexture::CreateResource(UAppleARKitOcclusionTexture *this)

{
  return (FTextureResource *)0x0;
}

// GetMaterialType @ 14cfd6dd0

EMaterialValueType __thiscall
UAppleARKitOcclusionTexture::GetMaterialType(UAppleARKitOcclusionTexture *this)

{
  return MCT_Texture2D;
}

// GetPrivateStaticClass @ 14cfd7510

UClass * __cdecl UAppleARKitOcclusionTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitOcclusionTexture",
               &Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton,
               StaticRegisterNativesUAppleARKitOcclusionTexture,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitOcclusionTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitOcclusionTexture>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitOcclusionTexture.InnerSingleton;
}

// GetTextureType @ 14cfd8980

EAppleTextureType __thiscall
UAppleARKitOcclusionTexture::GetTextureType(UAppleARKitOcclusionTexture *this)

{
  return MetalTexture;
}

// StaticRegisterNativesUAppleARKitOcclusionTexture @ 14cfdf460

void __cdecl UAppleARKitOcclusionTexture::StaticRegisterNativesUAppleARKitOcclusionTexture(void)

{
  return;
}

// _getUObject @ 14cfe07a0

UObject * __thiscall UAppleARKitOcclusionTexture::_getUObject(UAppleARKitOcclusionTexture *this)

{
  return (UObject *)&this[-1].field_0x98;
}

// _getUObject`adjustor{8}' @ 14cfe07b0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitOcclusionTexture::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitOcclusionTexture::_getUObject_adjustor_8__(UAppleARKitOcclusionTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitOcclusionTexture *)&this[-1].field_0x170);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{144}' @ 14cfe07c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitOcclusionTexture::_getUObject`adjustor{144}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitOcclusionTexture::_getUObject_adjustor_144__(UAppleARKitOcclusionTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitOcclusionTexture *)&this[-1].field_0xe8);
  return (UObject *)pUVar1;
}

