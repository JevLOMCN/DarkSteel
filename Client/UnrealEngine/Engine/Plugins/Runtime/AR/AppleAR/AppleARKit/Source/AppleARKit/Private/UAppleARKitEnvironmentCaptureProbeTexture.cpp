// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 13

// StaticClass @ 14cfcaeb0

UClass * __cdecl UAppleARKitEnvironmentCaptureProbeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitEnvironmentCaptureProbeTexture",
               &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton,
               StaticRegisterNativesUAppleARKitEnvironmentCaptureProbeTexture,0x180,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitEnvironmentCaptureProbeTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbeTexture>,local_res8,
               UAREnvironmentCaptureProbeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton;
}

// UAppleARKitEnvironmentCaptureProbeTexture @ 14cfd0520

UAppleARKitEnvironmentCaptureProbeTexture * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::UAppleARKitEnvironmentCaptureProbeTexture
          (UAppleARKitEnvironmentCaptureProbeTexture *this,FVTableHelper *param_1)

{
  UAREnvironmentCaptureProbeTexture::UAREnvironmentCaptureProbeTexture
            ((UAREnvironmentCaptureProbeTexture *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x178 = &___7UAppleARKitEnvironmentCaptureProbeTexture__6B_;
  return this;
}

// UAppleARKitEnvironmentCaptureProbeTexture @ 14cfd0580

UAppleARKitEnvironmentCaptureProbeTexture * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::UAppleARKitEnvironmentCaptureProbeTexture
          (UAppleARKitEnvironmentCaptureProbeTexture *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  UAREnvironmentCaptureProbeTexture::UAREnvironmentCaptureProbeTexture
            ((UAREnvironmentCaptureProbeTexture *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x178 = &___7UAppleARKitEnvironmentCaptureProbeTexture__6B_;
  pFVar5 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar5->A;
  uVar2 = pFVar5->B;
  uVar3 = pFVar5->C;
  uVar4 = pFVar5->D;
  this->field_0x116 = this->field_0x116 & 0xfe;
  *(uint *)&this->field_0x160 = uVar1;
  *(uint *)&this->field_0x164 = uVar2;
  *(uint *)&this->field_0x168 = uVar3;
  *(uint *)&this->field_0x16c = uVar4;
  return this;
}

// ~UAppleARKitEnvironmentCaptureProbeTexture @ 14cfd1320

void __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::~UAppleARKitEnvironmentCaptureProbeTexture
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x178 = &___7IAppleImageInterface__6B_;
  UAREnvironmentCaptureProbeTexture::~UAREnvironmentCaptureProbeTexture
            ((UAREnvironmentCaptureProbeTexture *)this);
  return;
}

// BeginDestroy @ 14cfd2e60

void __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::BeginDestroy
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

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

// CreateResource @ 14cfd4790

FTextureResource * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::CreateResource
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  return (FTextureResource *)0x0;
}

// GetMaterialType @ 14cfd6dc0

EMaterialValueType __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::GetMaterialType
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  return MCT_TextureExternal;
}

// GetPrivateStaticClass @ 14cfd7450

UClass * __cdecl UAppleARKitEnvironmentCaptureProbeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitEnvironmentCaptureProbeTexture",
               &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton,
               StaticRegisterNativesUAppleARKitEnvironmentCaptureProbeTexture,0x180,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitEnvironmentCaptureProbeTexture>,
               InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbeTexture>,local_res8,
               UAREnvironmentCaptureProbeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbeTexture.InnerSingleton;
}

// GetTextureType @ 14cfd8970

EAppleTextureType __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::GetTextureType
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  return MetalTexture;
}

// StaticRegisterNativesUAppleARKitEnvironmentCaptureProbeTexture @ 14cfdf450

void __cdecl
UAppleARKitEnvironmentCaptureProbeTexture::
StaticRegisterNativesUAppleARKitEnvironmentCaptureProbeTexture(void)

{
  return;
}

// _getUObject @ 14cfe0760

UObject * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_getUObject
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  return (UObject *)&this[-1].field_0xa0;
}

// _getUObject`adjustor{8}' @ 14cfe0770

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitEnvironmentCaptureProbeTexture::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_getUObject_adjustor_8__
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitEnvironmentCaptureProbeTexture *)&this[-1].field_0x178);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{152}' @ 14cfe0780

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAppleARKitEnvironmentCaptureProbeTexture::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UAppleARKitEnvironmentCaptureProbeTexture::_getUObject_adjustor_152__
          (UAppleARKitEnvironmentCaptureProbeTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAppleARKitEnvironmentCaptureProbeTexture *)&this[-1].field_0xe8);
  return (UObject *)pUVar1;
}

