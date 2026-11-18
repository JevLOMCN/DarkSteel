// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ca9ba0

UClass * __cdecl UHLODEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODEngineSubsystem",
               &Z_Registration_Info_UClass_UHLODEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUHLODEngineSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHLODEngineSubsystem>,
               InternalVTableHelperCtorCaller<UHLODEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODEngineSubsystem.InnerSingleton;
}

// UHLODEngineSubsystem @ 147cc6460

UHLODEngineSubsystem * __thiscall
UHLODEngineSubsystem::UHLODEngineSubsystem(UHLODEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UHLODEngineSubsystem__6B_;
  return this;
}

// UHLODEngineSubsystem @ 147cc6490

UHLODEngineSubsystem * __thiscall
UHLODEngineSubsystem::UHLODEngineSubsystem(UHLODEngineSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)this = &___7UHLODEngineSubsystem__6B_;
  return this;
}

// ~UHLODEngineSubsystem @ 147cc91d0

void __thiscall UHLODEngineSubsystem::~UHLODEngineSubsystem(UHLODEngineSubsystem *this)

{
  *(undefined ***)this = &___7UHLODEngineSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 147d0c1e0

UClass * __cdecl UHLODEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODEngineSubsystem",
               &Z_Registration_Info_UClass_UHLODEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUHLODEngineSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHLODEngineSubsystem>,
               InternalVTableHelperCtorCaller<UHLODEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODEngineSubsystem.InnerSingleton;
}

// StaticRegisterNativesUHLODEngineSubsystem @ 147d328b0

void __cdecl UHLODEngineSubsystem::StaticRegisterNativesUHLODEngineSubsystem(void)

{
  return;
}

