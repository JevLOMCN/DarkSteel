// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145f66570

UClass * __cdecl ULandscapeHLODBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHLODBuilder",
               &Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton,
               StaticRegisterNativesULandscapeHLODBuilder,0x28,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<ULandscapeHLODBuilder>,
               InternalVTableHelperCtorCaller<ULandscapeHLODBuilder>,local_res8,
               UHLODBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton;
}

// ULandscapeHLODBuilder @ 145f7b7d0

ULandscapeHLODBuilder * __thiscall
ULandscapeHLODBuilder::ULandscapeHLODBuilder(ULandscapeHLODBuilder *this,FVTableHelper *param_1)

{
  UHLODBuilder::UHLODBuilder((UHLODBuilder *)this,param_1);
  *(undefined ***)this = &___7ULandscapeHLODBuilder__6B_;
  return this;
}

// ULandscapeHLODBuilder @ 145f7b800

ULandscapeHLODBuilder * __thiscall
ULandscapeHLODBuilder::ULandscapeHLODBuilder
          (ULandscapeHLODBuilder *this,FObjectInitializer *param_1)

{
  UHLODBuilder::UHLODBuilder((UHLODBuilder *)this,param_1);
  *(undefined ***)this = &___7ULandscapeHLODBuilder__6B_;
  return this;
}

// ~ULandscapeHLODBuilder @ 145f7e230

void __thiscall ULandscapeHLODBuilder::~ULandscapeHLODBuilder(ULandscapeHLODBuilder *this)

{
  *(undefined ***)this = &___7ULandscapeHLODBuilder__6B_;
  UHLODBuilder::~UHLODBuilder((UHLODBuilder *)this);
  return;
}

// GetPrivateStaticClass @ 145f93820

UClass * __cdecl ULandscapeHLODBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeHLODBuilder",
               &Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton,
               StaticRegisterNativesULandscapeHLODBuilder,0x28,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<ULandscapeHLODBuilder>,
               InternalVTableHelperCtorCaller<ULandscapeHLODBuilder>,local_res8,
               UHLODBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeHLODBuilder.InnerSingleton;
}

// StaticRegisterNativesULandscapeHLODBuilder @ 145fa4790

void __cdecl ULandscapeHLODBuilder::StaticRegisterNativesULandscapeHLODBuilder(void)

{
  return;
}

