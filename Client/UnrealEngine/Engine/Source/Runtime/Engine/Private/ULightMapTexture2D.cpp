// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472857a0

UClass * __cdecl ULightMapTexture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightMapTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightMapTexture2D",
               &Z_Registration_Info_UClass_ULightMapTexture2D.InnerSingleton,
               StaticRegisterNativesULightMapTexture2D,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULightMapTexture2D>,
               InternalVTableHelperCtorCaller<ULightMapTexture2D>,local_res8,UTexture2D::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightMapTexture2D.InnerSingleton;
}

// ULightMapTexture2D @ 14728ba60

ULightMapTexture2D * __thiscall
ULightMapTexture2D::ULightMapTexture2D(ULightMapTexture2D *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~ULightMapTexture2D @ 14728d320

void __thiscall ULightMapTexture2D::~ULightMapTexture2D(ULightMapTexture2D *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetPrivateStaticClass @ 14728fb00

UClass * __cdecl ULightMapTexture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightMapTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightMapTexture2D",
               &Z_Registration_Info_UClass_ULightMapTexture2D.InnerSingleton,
               StaticRegisterNativesULightMapTexture2D,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULightMapTexture2D>,
               InternalVTableHelperCtorCaller<ULightMapTexture2D>,local_res8,UTexture2D::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightMapTexture2D.InnerSingleton;
}

// Serialize @ 147291040

void __thiscall
ULightMapTexture2D::Serialize(ULightMapTexture2D *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULightMapTexture2D @ 147291320

void __cdecl ULightMapTexture2D::StaticRegisterNativesULightMapTexture2D(void)

{
  return;
}

// ULightMapTexture2D @ 147ea6e10

ULightMapTexture2D * __thiscall
ULightMapTexture2D::ULightMapTexture2D(ULightMapTexture2D *this,FObjectInitializer *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0x11;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// GetDesc @ 147ebf460

FString * __thiscall
ULightMapTexture2D::GetDesc(ULightMapTexture2D *this,FString *__return_storage_ptr__)

{
  UTexture2D::GetPixelFormat((UTexture2D *)this,0);
  UTexture2D::GetSizeY((UTexture2D *)this);
  UTexture2D::GetSizeX((UTexture2D *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Lightmap: %dx%d [%s]");
  return __return_storage_ptr__;
}

// Serialize @ 147edba20

void __thiscall ULightMapTexture2D::Serialize(ULightMapTexture2D *this,FArchive *param_1)

{
  longlong *plVar1;
  ELightMapFlags local_res8 [2];
  
  UTexture2D::Serialize((UTexture2D *)this,param_1);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = this->LightmapFlags;
  if ((ELightMapFlags *)plVar1[1] < (ELightMapFlags *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(ELightMapFlags *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  this->LightmapFlags = local_res8[0];
  return;
}

