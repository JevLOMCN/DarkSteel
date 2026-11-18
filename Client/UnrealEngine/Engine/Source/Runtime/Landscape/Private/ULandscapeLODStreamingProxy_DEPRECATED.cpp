// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// ULandscapeLODStreamingProxy_DEPRECATED @ 145f03060

ULandscapeLODStreamingProxy_DEPRECATED * __thiscall
ULandscapeLODStreamingProxy_DEPRECATED::ULandscapeLODStreamingProxy_DEPRECATED
          (ULandscapeLODStreamingProxy_DEPRECATED *this,FObjectInitializer *param_1)

{
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  *(undefined ***)this = &___7ULandscapeLODStreamingProxy_DEPRECATED__6B_;
  return this;
}

// StaticClass @ 145f23e70

UClass * __cdecl ULandscapeLODStreamingProxy_DEPRECATED::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeLODStreamingProxy_DEPRECATED",
               &Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton,
               StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeLODStreamingProxy_DEPRECATED>,
               InternalVTableHelperCtorCaller<ULandscapeLODStreamingProxy_DEPRECATED>,local_res8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton;
}

// ULandscapeLODStreamingProxy_DEPRECATED @ 145f278b0

ULandscapeLODStreamingProxy_DEPRECATED * __thiscall
ULandscapeLODStreamingProxy_DEPRECATED::ULandscapeLODStreamingProxy_DEPRECATED
          (ULandscapeLODStreamingProxy_DEPRECATED *this,FVTableHelper *param_1)

{
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  *(undefined ***)this = &___7ULandscapeLODStreamingProxy_DEPRECATED__6B_;
  return this;
}

// ~ULandscapeLODStreamingProxy_DEPRECATED @ 145f27ce0

void __thiscall
ULandscapeLODStreamingProxy_DEPRECATED::~ULandscapeLODStreamingProxy_DEPRECATED
          (ULandscapeLODStreamingProxy_DEPRECATED *this)

{
  *(undefined ***)this = &___7ULandscapeLODStreamingProxy_DEPRECATED__6B_;
  UStreamableRenderAsset::~UStreamableRenderAsset((UStreamableRenderAsset *)this);
  return;
}

// GetPrivateStaticClass @ 145f2edd0

UClass * __cdecl ULandscapeLODStreamingProxy_DEPRECATED::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeLODStreamingProxy_DEPRECATED",
               &Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton,
               StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeLODStreamingProxy_DEPRECATED>,
               InternalVTableHelperCtorCaller<ULandscapeLODStreamingProxy_DEPRECATED>,local_res8,
               UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.InnerSingleton;
}

// StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED @ 145f338f0

void __cdecl
ULandscapeLODStreamingProxy_DEPRECATED::StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED
          (void)

{
  return;
}

