// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 13

// AreDownscalePropertiesEditable @ 146c20a70

bool __thiscall UTexture::AreDownscalePropertiesEditable(UTexture *this)

{
  return false;
}

// GetCachedLODBias @ 146c28200

int __thiscall UTexture::GetCachedLODBias(UTexture *this)

{
  int iVar1;
  
  iVar1 = CalculateLODBias(this,true);
  return iVar1;
}

// GetCookedPlatformData @ 146c28860

TMap<FString,FTexturePlatformData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTexturePlatformData_*,0>_>
* __thiscall UTexture::GetCookedPlatformData(UTexture *this)

{
  return (TMap<FString,FTexturePlatformData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTexturePlatformData_*,0>_>
          *)0x0;
}

// GetLODGroupForStreaming @ 146c28d60

int __thiscall UTexture::GetLODGroupForStreaming(UTexture *this)

{
  return (int)(this->LODGroup).Value;
}

// GetRenderAssetType @ 146c2d3c0

EStreamableRenderAssetType __thiscall UTexture::GetRenderAssetType(UTexture *this)

{
  return Texture;
}

// GetRunningPlatformData @ 146c2d410

FTexturePlatformData ** __thiscall UTexture::GetRunningPlatformData(UTexture *this)

{
  return (FTexturePlatformData **)0x0;
}

// GetTextureAddressX @ 146c2dc40

TextureAddress __thiscall UTexture::GetTextureAddressX(UTexture *this)

{
  return TA_Wrap;
}

// GetTextureAddressY @ 146c2dc50

TextureAddress __thiscall UTexture::GetTextureAddressY(UTexture *this)

{
  return TA_Wrap;
}

// GetTextureAddressZ @ 146c2dc60

TextureAddress __thiscall UTexture::GetTextureAddressZ(UTexture *this)

{
  return TA_Wrap;
}

// IsCurrentlyVirtualTextured @ 146c2f560

bool __thiscall UTexture::IsCurrentlyVirtualTextured(UTexture *this)

{
  return false;
}

// StaticClass @ 146c37de0

UClass * __cdecl UTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTexture.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture",&Z_Registration_Info_UClass_UTexture.InnerSingleton,
               StaticRegisterNativesUTexture,0x150,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UTexture>,InternalVTableHelperCtorCaller<UTexture>,
               aFStackX_8,UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture.InnerSingleton;
}

// _getUObject @ 146c3b520

UObject * __thiscall UTexture::_getUObject(UTexture *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 146c3b530

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UTexture::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UTexture::_getUObject_adjustor_8__(UTexture *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UTexture *)&this[-1].ReleaseFence);
  return (UObject *)pUVar1;
}

