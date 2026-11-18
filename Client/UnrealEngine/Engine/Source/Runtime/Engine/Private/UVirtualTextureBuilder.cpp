// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148998670

UClass * __cdecl UVirtualTextureBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTextureBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTextureBuilder",
               &Z_Registration_Info_UClass_UVirtualTextureBuilder.InnerSingleton,
               StaticRegisterNativesUVirtualTextureBuilder,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTextureBuilder>,
               InternalVTableHelperCtorCaller<UVirtualTextureBuilder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTextureBuilder.InnerSingleton;
}

// UVirtualTextureBuilder @ 1489b7190

UVirtualTextureBuilder * __thiscall
UVirtualTextureBuilder::UVirtualTextureBuilder(UVirtualTextureBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVirtualTextureBuilder__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UVirtualTexture2D *)0x0;
  (this->TextureMobile).field0_0x0.DebugPtr = (UVirtualTexture2D *)0x0;
  this->bSeparateTextureForMobile = false;
  return this;
}

// UVirtualTextureBuilder @ 1489b71d0

UVirtualTextureBuilder * __thiscall
UVirtualTextureBuilder::UVirtualTextureBuilder
          (UVirtualTextureBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVirtualTextureBuilder__6B_;
  (this->Texture).field0_0x0.DebugPtr = (UVirtualTexture2D *)0x0;
  (this->TextureMobile).field0_0x0.DebugPtr = (UVirtualTexture2D *)0x0;
  this->bSeparateTextureForMobile = false;
  return this;
}

// ~UVirtualTextureBuilder @ 1489baa30

void __thiscall UVirtualTextureBuilder::~UVirtualTextureBuilder(UVirtualTextureBuilder *this)

{
  this->_padding_ = (longlong)&___7UVirtualTextureBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1489ec000

UClass * __cdecl UVirtualTextureBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVirtualTextureBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VirtualTextureBuilder",
               &Z_Registration_Info_UClass_UVirtualTextureBuilder.InnerSingleton,
               StaticRegisterNativesUVirtualTextureBuilder,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVirtualTextureBuilder>,
               InternalVTableHelperCtorCaller<UVirtualTextureBuilder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVirtualTextureBuilder.InnerSingleton;
}

// GetVirtualTexture @ 1489f08e0

UVirtualTexture2D * __thiscall
UVirtualTextureBuilder::GetVirtualTexture(UVirtualTextureBuilder *this,EShadingPath param_1)

{
  if ((param_1 == Mobile) && (this->bSeparateTextureForMobile != false)) {
    return (this->TextureMobile).field0_0x0.DebugPtr;
  }
  return (this->Texture).field0_0x0.DebugPtr;
}

// PostLoad @ 148a01590

void __thiscall UVirtualTextureBuilder::PostLoad(UVirtualTextureBuilder *this)

{
  UObject::PostLoad((UObject *)this);
  if (((int)GMaxRHIFeatureLevel < 3) && (this->bSeparateTextureForMobile != false)) {
    (this->Texture).field0_0x0.DebugPtr = (UVirtualTexture2D *)0x0;
    return;
  }
  (this->TextureMobile).field0_0x0.DebugPtr = (UVirtualTexture2D *)0x0;
  return;
}

// Serialize @ 148a13910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVirtualTextureBuilder::Serialize(UVirtualTextureBuilder *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 148a13920

void __thiscall
UVirtualTextureBuilder::Serialize(UVirtualTextureBuilder *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUVirtualTextureBuilder @ 148a188a0

void __cdecl UVirtualTextureBuilder::StaticRegisterNativesUVirtualTextureBuilder(void)

{
  return;
}

