// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// StaticClass @ 14da564c0

UClass * __cdecl UProceduralVegetationLink::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralVegetationLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"ProceduralVegetationLink",
               &Z_Registration_Info_UClass_UProceduralVegetationLink.InnerSingleton,
               StaticRegisterNativesUProceduralVegetationLink,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralVegetationLink>,
               InternalVTableHelperCtorCaller<UProceduralVegetationLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralVegetationLink.InnerSingleton;
}

// UProceduralVegetationLink @ 14da672d0

UProceduralVegetationLink * __thiscall
UProceduralVegetationLink::UProceduralVegetationLink
          (UProceduralVegetationLink *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UProceduralVegetationLink__6B_;
  (this->Source).field0_0x0.DebugPtr = (UProceduralVegetation *)0x0;
  return this;
}

// UProceduralVegetationLink @ 14da67300

UProceduralVegetationLink * __thiscall
UProceduralVegetationLink::UProceduralVegetationLink
          (UProceduralVegetationLink *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UProceduralVegetationLink__6B_;
  (this->Source).field0_0x0.DebugPtr = (UProceduralVegetation *)0x0;
  return this;
}

// ~UProceduralVegetationLink @ 14da67f90

void __thiscall
UProceduralVegetationLink::~UProceduralVegetationLink(UProceduralVegetationLink *this)

{
  this->_padding_ = (longlong)&___7UProceduralVegetationLink__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14da99d30

UClass * __cdecl UProceduralVegetationLink::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralVegetationLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"ProceduralVegetationLink",
               &Z_Registration_Info_UClass_UProceduralVegetationLink.InnerSingleton,
               StaticRegisterNativesUProceduralVegetationLink,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralVegetationLink>,
               InternalVTableHelperCtorCaller<UProceduralVegetationLink>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralVegetationLink.InnerSingleton;
}

// StaticRegisterNativesUProceduralVegetationLink @ 14daa99d0

void __cdecl UProceduralVegetationLink::StaticRegisterNativesUProceduralVegetationLink(void)

{
  return;
}

