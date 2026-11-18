// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 9

// StaticClass @ 14cfcadf0

UClass * __cdecl UAppleARKitTextureCameraDepth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTextureCameraDepth",
               &Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton,
               StaticRegisterNativesUAppleARKitTextureCameraDepth,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitTextureCameraDepth>,
               InternalVTableHelperCtorCaller<UAppleARKitTextureCameraDepth>,local_res8,
               UARTextureCameraDepth::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton;
}

// UAppleARKitTextureCameraDepth @ 14cfd0730

UAppleARKitTextureCameraDepth * __thiscall
UAppleARKitTextureCameraDepth::UAppleARKitTextureCameraDepth
          (UAppleARKitTextureCameraDepth *this,FVTableHelper *param_1)

{
  UARTextureCameraDepth::UARTextureCameraDepth((UARTextureCameraDepth *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UAppleARKitTextureCameraDepth @ 14cfd0780

UAppleARKitTextureCameraDepth * __thiscall
UAppleARKitTextureCameraDepth::UAppleARKitTextureCameraDepth
          (UAppleARKitTextureCameraDepth *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UARTextureCameraDepth::UARTextureCameraDepth((UARTextureCameraDepth *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  *(uint *)&this->field_0x158 = pFVar4->A;
  *(uint *)&this->field_0x15c = uVar1;
  *(uint *)&this->field_0x160 = uVar2;
  *(uint *)&this->field_0x164 = uVar3;
  return this;
}

// ~UAppleARKitTextureCameraDepth @ 14cfd1420

void __thiscall
UAppleARKitTextureCameraDepth::~UAppleARKitTextureCameraDepth(UAppleARKitTextureCameraDepth *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  UARTextureCameraDepth::~UARTextureCameraDepth((UARTextureCameraDepth *)this);
  return;
}

// BeginDestroy @ 14cfd2e80

void __thiscall UAppleARKitTextureCameraDepth::BeginDestroy(UAppleARKitTextureCameraDepth *this)

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

// CreateResource @ 14cfd47b0

FTextureResource * __thiscall
UAppleARKitTextureCameraDepth::CreateResource(UAppleARKitTextureCameraDepth *this)

{
  return (FTextureResource *)0x0;
}

// GetMaterialType @ 14cfd6de0

EMaterialValueType __thiscall
UAppleARKitTextureCameraDepth::GetMaterialType(UAppleARKitTextureCameraDepth *this)

{
  return MCT_TextureExternal;
}

// GetPrivateStaticClass @ 14cfd7680

UClass * __cdecl UAppleARKitTextureCameraDepth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitTextureCameraDepth",
               &Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton,
               StaticRegisterNativesUAppleARKitTextureCameraDepth,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitTextureCameraDepth>,
               InternalVTableHelperCtorCaller<UAppleARKitTextureCameraDepth>,local_res8,
               UARTextureCameraDepth::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitTextureCameraDepth.InnerSingleton;
}

// StaticRegisterNativesUAppleARKitTextureCameraDepth @ 14cfdf480

void __cdecl UAppleARKitTextureCameraDepth::StaticRegisterNativesUAppleARKitTextureCameraDepth(void)

{
  return;
}

