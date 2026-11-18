// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145fad230

UClass * __cdecl ULandscapeTextureHash::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureHash",
               &Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton,
               StaticRegisterNativesULandscapeTextureHash,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeTextureHash>,
               InternalVTableHelperCtorCaller<ULandscapeTextureHash>,local_res8,
               UAssetUserData::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton;
}

// ULandscapeTextureHash @ 145fb5830

ULandscapeTextureHash * __thiscall
ULandscapeTextureHash::ULandscapeTextureHash(ULandscapeTextureHash *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeTextureHash__6B_;
  (this->TextureHashGUID).A = 0;
  (this->TextureHashGUID).B = 0;
  (this->TextureHashGUID).C = 0;
  (this->TextureHashGUID).D = 0;
  (this->LastSourceID).A = 0;
  (this->LastSourceID).B = 0;
  (this->LastSourceID).C = 0;
  (this->LastSourceID).D = 0;
  this->TextureType = Unknown;
  this->TextureUsage = Unknown;
  *(undefined8 *)&this->RecentlySerializedHashes = 0;
  *(undefined8 *)&(this->RecentlySerializedHashes).field_0x8 = 0;
  *(undefined8 *)&(this->RecentlySerializedHashes).field_0x20 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x28 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x34 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RecentlySerializedHashes).field_0x40 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x48 = 0;
  return this;
}

// ULandscapeTextureHash @ 145fb58a0

ULandscapeTextureHash * __thiscall
ULandscapeTextureHash::ULandscapeTextureHash
          (ULandscapeTextureHash *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeTextureHash__6B_;
  (this->TextureHashGUID).A = 0;
  (this->TextureHashGUID).B = 0;
  (this->TextureHashGUID).C = 0;
  (this->TextureHashGUID).D = 0;
  (this->LastSourceID).A = 0;
  (this->LastSourceID).B = 0;
  (this->LastSourceID).C = 0;
  (this->LastSourceID).D = 0;
  this->TextureType = Unknown;
  this->TextureUsage = Unknown;
  *(undefined8 *)&this->RecentlySerializedHashes = 0;
  *(undefined8 *)&(this->RecentlySerializedHashes).field_0x8 = 0;
  *(undefined8 *)&(this->RecentlySerializedHashes).field_0x20 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x28 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x34 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RecentlySerializedHashes).field_0x40 = 0;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x48 = 0;
  return this;
}

// ~ULandscapeTextureHash @ 145fb6a50

void __thiscall ULandscapeTextureHash::~ULandscapeTextureHash(ULandscapeTextureHash *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeTextureHash__6B_;
  *(undefined4 *)&(this->RecentlySerializedHashes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RecentlySerializedHashes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RecentlySerializedHashes);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 145fc3510

UClass * __cdecl ULandscapeTextureHash::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeTextureHash",
               &Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton,
               StaticRegisterNativesULandscapeTextureHash,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeTextureHash>,
               InternalVTableHelperCtorCaller<ULandscapeTextureHash>,local_res8,
               UAssetUserData::StaticClass,UTexture2D::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTextureHash.InnerSingleton;
}

// StaticRegisterNativesULandscapeTextureHash @ 145fc8760

void __cdecl ULandscapeTextureHash::StaticRegisterNativesULandscapeTextureHash(void)

{
  return;
}

