// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148702df0

UClass * __cdecl UStaticSparseVolumeTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticSparseVolumeTexture",
               &Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUStaticSparseVolumeTexture,0xb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStaticSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UStaticSparseVolumeTexture>,local_res8,
               UStreamableSparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton;
}

// UStaticSparseVolumeTexture @ 148713580

UStaticSparseVolumeTexture * __thiscall
UStaticSparseVolumeTexture::UStaticSparseVolumeTexture
          (UStaticSparseVolumeTexture *this,FVTableHelper *param_1)

{
  UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
            ((UStreamableSparseVolumeTexture *)this,param_1);
  *(undefined ***)this = &_vftable__for__USparseVolumeTexture__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  return this;
}

// UStaticSparseVolumeTexture @ 1487135c0

UStaticSparseVolumeTexture * __thiscall
UStaticSparseVolumeTexture::UStaticSparseVolumeTexture
          (UStaticSparseVolumeTexture *this,FObjectInitializer *param_1)

{
  UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture
            ((UStreamableSparseVolumeTexture *)this,param_1);
  *(undefined ***)this = &_vftable__for__USparseVolumeTexture__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  return this;
}

// ~UStaticSparseVolumeTexture @ 148714e50

void __thiscall
UStaticSparseVolumeTexture::~UStaticSparseVolumeTexture(UStaticSparseVolumeTexture *this)

{
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  *(undefined ***)&this->field_0x28 = &___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AppendFrame @ 148721e10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UStaticSparseVolumeTexture::AppendFrame
          (UStaticSparseVolumeTexture *this,FTextureData *param_1,TTransform<double> *param_2)

{
  if ((*(int *)&this->field_0xa0 != 0) && (1 < (byte)LogSparseVolumeTexture._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSparseVolumeTexture);
  }
  return false;
}

// GetNumFrames @ 14873cd20

int __thiscall UStaticSparseVolumeTexture::GetNumFrames(UStaticSparseVolumeTexture *this)

{
  return 1;
}

// GetPrivateStaticClass @ 14873eb00

UClass * __cdecl UStaticSparseVolumeTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticSparseVolumeTexture",
               &Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton,
               StaticRegisterNativesUStaticSparseVolumeTexture,0xb0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStaticSparseVolumeTexture>,
               InternalVTableHelperCtorCaller<UStaticSparseVolumeTexture>,local_res8,
               UStreamableSparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticSparseVolumeTexture.InnerSingleton;
}

// StaticRegisterNativesUStaticSparseVolumeTexture @ 14875d1e0

void __cdecl UStaticSparseVolumeTexture::StaticRegisterNativesUStaticSparseVolumeTexture(void)

{
  return;
}

