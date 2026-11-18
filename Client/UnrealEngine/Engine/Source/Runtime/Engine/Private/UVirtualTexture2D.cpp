// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14899bc00

UClass * __cdecl UVirtualTexture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTexture2D",
               &Z_Registration_Info_UClass_UVirtualTexture2D.InnerSingleton,
               StaticRegisterNativesUVirtualTexture2D,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTexture2D>,
               InternalVTableHelperCtorCaller<UVirtualTexture2D>,local_res8,UTexture2D::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTexture2D.InnerSingleton;
}

// UVirtualTexture2D @ 1489b6fa0

UVirtualTexture2D * __thiscall
UVirtualTexture2D::UVirtualTexture2D(UVirtualTexture2D *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->Settings).TileSize = 0;
  (this->Settings).TileBorderSize = 0;
  return this;
}

// UVirtualTexture2D @ 1489b6ff0

UVirtualTexture2D * __thiscall
UVirtualTexture2D::UVirtualTexture2D(UVirtualTexture2D *this,FObjectInitializer *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->Settings).TileSize = 0;
  (this->Settings).TileBorderSize = 0;
  this->bSinglePhysicalSpace = false;
  return this;
}

// ~UVirtualTexture2D @ 1489ba990

void __thiscall UVirtualTexture2D::~UVirtualTexture2D(UVirtualTexture2D *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetPrivateStaticClass @ 1489ebdd0

UClass * __cdecl UVirtualTexture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTexture2D",
               &Z_Registration_Info_UClass_UVirtualTexture2D.InnerSingleton,
               StaticRegisterNativesUVirtualTexture2D,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTexture2D>,
               InternalVTableHelperCtorCaller<UVirtualTexture2D>,local_res8,UTexture2D::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTexture2D.InnerSingleton;
}

// GetVirtualTextureBuildSettings @ 1489f0970

void __thiscall
UVirtualTexture2D::GetVirtualTextureBuildSettings
          (UVirtualTexture2D *this,FVirtualTextureBuildSettings *param_1)

{
  *param_1 = this->Settings;
  return;
}

// IsVirtualTexturedWithSinglePhysicalSpace @ 1489fa360

bool __thiscall UVirtualTexture2D::IsVirtualTexturedWithSinglePhysicalSpace(UVirtualTexture2D *this)

{
  return this->bSinglePhysicalSpace;
}

// StaticRegisterNativesUVirtualTexture2D @ 148a18870

void __cdecl UVirtualTexture2D::StaticRegisterNativesUVirtualTexture2D(void)

{
  return;
}

