// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14899a160

UClass * __cdecl UVirtualTextureCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTextureCollection",
               &Z_Registration_Info_UClass_UVirtualTextureCollection.InnerSingleton,
               StaticRegisterNativesUVirtualTextureCollection,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTextureCollection>,
               InternalVTableHelperCtorCaller<UVirtualTextureCollection>,local_res8,
               UTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTextureCollection.InnerSingleton;
}

// UVirtualTextureCollection @ 1489b7210

UVirtualTextureCollection * __thiscall
UVirtualTextureCollection::UVirtualTextureCollection
          (UVirtualTextureCollection *this,FVTableHelper *param_1)

{
  UTextureCollection::UTextureCollection((UTextureCollection *)this,param_1);
  this->bAllowFormatConversion = true;
  this->bIsSRGB = true;
  this->_padding_ = (longlong)&___7UVirtualTextureCollection__6B_;
  (this->RuntimePixelFormat).Value = '\0';
  return this;
}

// UVirtualTextureCollection @ 1489b7250

UVirtualTextureCollection * __thiscall
UVirtualTextureCollection::UVirtualTextureCollection
          (UVirtualTextureCollection *this,FObjectInitializer *param_1)

{
  UTextureCollection::UTextureCollection((UTextureCollection *)this,param_1);
  this->bAllowFormatConversion = true;
  this->bIsSRGB = true;
  this->_padding_ = (longlong)&___7UVirtualTextureCollection__6B_;
  (this->RuntimePixelFormat).Value = '\0';
  return this;
}

// ~UVirtualTextureCollection @ 1489baa50

void __thiscall
UVirtualTextureCollection::~UVirtualTextureCollection(UVirtualTextureCollection *this)

{
  this->_padding_ = (longlong)&___7UVirtualTextureCollection__6B_;
  UTextureCollection::~UTextureCollection((UTextureCollection *)this);
  return;
}

// BeginDestroy @ 1489cc910

void __thiscall UVirtualTextureCollection::BeginDestroy(UVirtualTextureCollection *this)

{
  UTextureCollection::ReleaseResource((UTextureCollection *)this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateResource @ 1489d4ab0

FTextureCollectionResource * __thiscall
UVirtualTextureCollection::CreateResource(UVirtualTextureCollection *this)

{
  FVirtualTextureCollectionResource *pFVar1;
  
  pFVar1 = ::operator_new(0xa0);
  if (pFVar1 != (FVirtualTextureCollectionResource *)0x0) {
    pFVar1 = FVirtualTextureCollectionResource::FVirtualTextureCollectionResource(pFVar1,this);
    return (FTextureCollectionResource *)pFVar1;
  }
  return (FTextureCollectionResource *)0x0;
}

// GetPrivateStaticClass @ 1489ec0b0

UClass * __cdecl UVirtualTextureCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTextureCollection",
               &Z_Registration_Info_UClass_UVirtualTextureCollection.InnerSingleton,
               StaticRegisterNativesUVirtualTextureCollection,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTextureCollection>,
               InternalVTableHelperCtorCaller<UVirtualTextureCollection>,local_res8,
               UTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTextureCollection.InnerSingleton;
}

// IsVirtualCollection @ 1489fa340

bool __thiscall UVirtualTextureCollection::IsVirtualCollection(UVirtualTextureCollection *this)

{
  return true;
}

// StaticRegisterNativesUVirtualTextureCollection @ 148a188b0

void __cdecl UVirtualTextureCollection::StaticRegisterNativesUVirtualTextureCollection(void)

{
  return;
}

