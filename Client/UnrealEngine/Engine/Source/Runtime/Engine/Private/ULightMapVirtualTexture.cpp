// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14899b7b0

UClass * __cdecl ULightMapVirtualTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightMapVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightMapVirtualTexture",
               &Z_Registration_Info_UClass_ULightMapVirtualTexture.InnerSingleton,
               StaticRegisterNativesULightMapVirtualTexture,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULightMapVirtualTexture>,
               InternalVTableHelperCtorCaller<ULightMapVirtualTexture>,local_res8,
               UVirtualTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightMapVirtualTexture.InnerSingleton;
}

// ULightMapVirtualTexture @ 1489b6930

ULightMapVirtualTexture * __thiscall
ULightMapVirtualTexture::ULightMapVirtualTexture
          (ULightMapVirtualTexture *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULightMapVirtualTexture__6B_;
  return this;
}

// ULightMapVirtualTexture @ 1489b6960

ULightMapVirtualTexture * __thiscall
ULightMapVirtualTexture::ULightMapVirtualTexture
          (ULightMapVirtualTexture *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULightMapVirtualTexture__6B_;
  return this;
}

// ~ULightMapVirtualTexture @ 1489ba600

void __thiscall ULightMapVirtualTexture::~ULightMapVirtualTexture(ULightMapVirtualTexture *this)

{
  *(undefined ***)this = &___7UVirtualTexture__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1489eb8a0

UClass * __cdecl ULightMapVirtualTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightMapVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightMapVirtualTexture",
               &Z_Registration_Info_UClass_ULightMapVirtualTexture.InnerSingleton,
               StaticRegisterNativesULightMapVirtualTexture,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULightMapVirtualTexture>,
               InternalVTableHelperCtorCaller<ULightMapVirtualTexture>,local_res8,
               UVirtualTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightMapVirtualTexture.InnerSingleton;
}

// StaticRegisterNativesULightMapVirtualTexture @ 148a18770

void __cdecl ULightMapVirtualTexture::StaticRegisterNativesULightMapVirtualTexture(void)

{
  return;
}

