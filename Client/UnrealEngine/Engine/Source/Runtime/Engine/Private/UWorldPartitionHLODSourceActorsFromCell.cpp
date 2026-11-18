// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a73490

UClass * __cdecl UWorldPartitionHLODSourceActorsFromCell::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActorsFromCell",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODSourceActorsFromCell,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionHLODSourceActorsFromCell>
               ,InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromCell>,local_res8,
               UWorldPartitionHLODSourceActors::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton;
}

// UWorldPartitionHLODSourceActorsFromCell @ 148a807a0

UWorldPartitionHLODSourceActorsFromCell * __thiscall
UWorldPartitionHLODSourceActorsFromCell::UWorldPartitionHLODSourceActorsFromCell
          (UWorldPartitionHLODSourceActorsFromCell *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActorsFromCell__6B_;
  return this;
}

// UWorldPartitionHLODSourceActorsFromCell @ 148a807d0

UWorldPartitionHLODSourceActorsFromCell * __thiscall
UWorldPartitionHLODSourceActorsFromCell::UWorldPartitionHLODSourceActorsFromCell
          (UWorldPartitionHLODSourceActorsFromCell *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActorsFromCell__6B_;
  return this;
}

// ~UWorldPartitionHLODSourceActorsFromCell @ 148a81dc0

void __thiscall
UWorldPartitionHLODSourceActorsFromCell::~UWorldPartitionHLODSourceActorsFromCell
          (UWorldPartitionHLODSourceActorsFromCell *this)

{
  *(undefined ***)this = &___7UWorldPartitionHLODSourceActors__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a96b10

UClass * __cdecl UWorldPartitionHLODSourceActorsFromCell::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODSourceActorsFromCell",
               &Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODSourceActorsFromCell,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionHLODSourceActorsFromCell>
               ,InternalVTableHelperCtorCaller<UWorldPartitionHLODSourceActorsFromCell>,local_res8,
               UWorldPartitionHLODSourceActors::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODSourceActorsFromCell.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionHLODSourceActorsFromCell @ 148aa2ac0

void __cdecl
UWorldPartitionHLODSourceActorsFromCell::
StaticRegisterNativesUWorldPartitionHLODSourceActorsFromCell(void)

{
  return;
}

