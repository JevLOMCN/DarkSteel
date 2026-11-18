// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1488a1720

UClass * __cdecl UTextureLightProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLightProfile",
               &Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton,
               StaticRegisterNativesUTextureLightProfile,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureLightProfile>,
               InternalVTableHelperCtorCaller<UTextureLightProfile>,aFStackX_8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton;
}

// UTextureLightProfile @ 1488b1170

UTextureLightProfile * __thiscall
UTextureLightProfile::UTextureLightProfile(UTextureLightProfile *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// UTextureLightProfile @ 1488b11c0

UTextureLightProfile * __thiscall
UTextureLightProfile::UTextureLightProfile(UTextureLightProfile *this,FObjectInitializer *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->Brightness = -1.0;
  return this;
}

// ~UTextureLightProfile @ 1488b2b20

void __thiscall UTextureLightProfile::~UTextureLightProfile(UTextureLightProfile *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetPrivateStaticClass @ 1488c3e40

UClass * __cdecl UTextureLightProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLightProfile",
               &Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton,
               StaticRegisterNativesUTextureLightProfile,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureLightProfile>,
               InternalVTableHelperCtorCaller<UTextureLightProfile>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton;
}

// StaticRegisterNativesUTextureLightProfile @ 1488e2270

void __cdecl UTextureLightProfile::StaticRegisterNativesUTextureLightProfile(void)

{
  return;
}

