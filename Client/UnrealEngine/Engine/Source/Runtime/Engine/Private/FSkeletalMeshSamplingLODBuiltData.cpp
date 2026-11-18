// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1485e30d0

UScriptStruct * __cdecl FSkeletalMeshSamplingLODBuiltData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingLODBuiltData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingLODBuiltData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData,
                         (UObject *)pUVar1,L"SkeletalMeshSamplingLODBuiltData");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingLODBuiltData.OuterSingleton;
}

// Serialize @ 148662fa0

bool __thiscall
FSkeletalMeshSamplingLODBuiltData::Serialize
          (FSkeletalMeshSamplingLODBuiltData *this,FArchive *param_1)

{
  (**(code **)((this->AreaWeightedTriangleSampler)._padding_ + 0x18))();
  return true;
}

