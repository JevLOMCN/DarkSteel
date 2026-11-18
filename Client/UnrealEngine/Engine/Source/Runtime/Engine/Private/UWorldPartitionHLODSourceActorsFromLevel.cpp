// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a73960

UClass * __cdecl UWorldPartitionHLODSourceActorsFromLevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActorsFromLevel",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODSourceActorsFromLevel>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromLevel>,local_res8,
               UWorldPartitionHLODSourceActors::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton;
}

// UWorldPartitionHLODSourceActorsFromLevel @ 148a80800

UWorldPartitionHLODSourceActorsFromLevel * __thiscall
UWorldPartitionHLODSourceActorsFromLevel::UWorldPartitionHLODSourceActorsFromLevel
          (UWorldPartitionHLODSourceActorsFromLevel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActorsFromLevel__6B_;
  return this;
}

// UWorldPartitionHLODSourceActorsFromLevel @ 148a80830

UWorldPartitionHLODSourceActorsFromLevel * __thiscall
UWorldPartitionHLODSourceActorsFromLevel::UWorldPartitionHLODSourceActorsFromLevel
          (UWorldPartitionHLODSourceActorsFromLevel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActorsFromLevel__6B_;
  return this;
}

// ~UWorldPartitionHLODSourceActorsFromLevel @ 148a81de0

void __thiscall
UWorldPartitionHLODSourceActorsFromLevel::~UWorldPartitionHLODSourceActorsFromLevel
          (UWorldPartitionHLODSourceActorsFromLevel *this)

{
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96bd0

UClass * __cdecl UWorldPartitionHLODSourceActorsFromLevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActorsFromLevel",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODSourceActorsFromLevel>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromLevel>,local_res8,
               UWorldPartitionHLODSourceActors::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromLevel.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel @ 148aa2ad0

void __cdecl
UWorldPartitionHLODSourceActorsFromLevel::
StaticRegisterNativesUWorldPartitionHLODSourceActorsFromLevel(void)

{
  return;
}

