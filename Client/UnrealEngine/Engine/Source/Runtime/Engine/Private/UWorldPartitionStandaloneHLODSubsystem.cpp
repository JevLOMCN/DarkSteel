// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a74290

UClass * __cdecl UWorldPartitionStandaloneHLODSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStandaloneHLODSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldPartitionStandaloneHLODSubsystem,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionStandaloneHLODSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionStandaloneHLODSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton;
}

// UWorldPartitionStandaloneHLODSubsystem @ 148a80b80

UWorldPartitionStandaloneHLODSubsystem * __thiscall
UWorldPartitionStandaloneHLODSubsystem::UWorldPartitionStandaloneHLODSubsystem
          (UWorldPartitionStandaloneHLODSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionStandaloneHLODSubsystem__6B_;
  return this;
}

// UWorldPartitionStandaloneHLODSubsystem @ 148a80bb0

UWorldPartitionStandaloneHLODSubsystem * __thiscall
UWorldPartitionStandaloneHLODSubsystem::UWorldPartitionStandaloneHLODSubsystem
          (UWorldPartitionStandaloneHLODSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  *(undefined ***)this = &___7UWorldPartitionStandaloneHLODSubsystem__6B_;
  return this;
}

// ~UWorldPartitionStandaloneHLODSubsystem @ 148a81fa0

void __thiscall
UWorldPartitionStandaloneHLODSubsystem::~UWorldPartitionStandaloneHLODSubsystem
          (UWorldPartitionStandaloneHLODSubsystem *this)

{
  *(undefined ***)this = &___7UWorldPartitionStandaloneHLODSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 148a96e10

UClass * __cdecl UWorldPartitionStandaloneHLODSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStandaloneHLODSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldPartitionStandaloneHLODSubsystem,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionStandaloneHLODSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionStandaloneHLODSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStandaloneHLODSubsystem.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionStandaloneHLODSubsystem @ 148aa2b00

void __cdecl
UWorldPartitionStandaloneHLODSubsystem::StaticRegisterNativesUWorldPartitionStandaloneHLODSubsystem
          (void)

{
  return;
}

