// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a72e90

UClass * __cdecl UWorldPartitionHLODSourceActors::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActors",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODSourceActors,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODSourceActors>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActors>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton;
}

// UWorldPartitionHLODSourceActors @ 148a80740

UWorldPartitionHLODSourceActors * __thiscall
UWorldPartitionHLODSourceActors::UWorldPartitionHLODSourceActors
          (UWorldPartitionHLODSourceActors *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
  return this;
}

// UWorldPartitionHLODSourceActors @ 148a80770

UWorldPartitionHLODSourceActors * __thiscall
UWorldPartitionHLODSourceActors::UWorldPartitionHLODSourceActors
          (UWorldPartitionHLODSourceActors *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
  return this;
}

// ~UWorldPartitionHLODSourceActors @ 148a81da0

void __thiscall
UWorldPartitionHLODSourceActors::~UWorldPartitionHLODSourceActors
          (UWorldPartitionHLODSourceActors *this)

{
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96a60

UClass * __cdecl UWorldPartitionHLODSourceActors::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActors",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODSourceActors,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionHLODSourceActors>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActors>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActors.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionHLODSourceActors @ 148aa2ab0

void __cdecl
UWorldPartitionHLODSourceActors::StaticRegisterNativesUWorldPartitionHLODSourceActors(void)

{
  return;
}

