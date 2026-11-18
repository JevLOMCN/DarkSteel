// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1485e3930

UScriptStruct * __cdecl FSkeletalMeshSamplingRegionBoneFilter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter,
                         (UObject *)pUVar1,L"SkeletalMeshSamplingRegionBoneFilter");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter.OuterSingleton;
}

// FSkeletalMeshSamplingRegionBoneFilter @ 148622090

FSkeletalMeshSamplingRegionBoneFilter * __thiscall
FSkeletalMeshSamplingRegionBoneFilter::FSkeletalMeshSamplingRegionBoneFilter
          (FSkeletalMeshSamplingRegionBoneFilter *this)

{
  undefined1 *puVar1;
  
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->bIncludeOrExclude = 1;
  this->bApplyToChildren = 1;
  return this;
}

