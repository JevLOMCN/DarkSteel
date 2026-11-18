// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1485e3970

UScriptStruct * __cdecl FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter,
                         (UObject *)pUVar1,L"SkeletalMeshSamplingRegionMaterialFilter");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter.OuterSingleton;
}

// FSkeletalMeshSamplingRegionMaterialFilter @ 148622120

FSkeletalMeshSamplingRegionMaterialFilter * __thiscall
FSkeletalMeshSamplingRegionMaterialFilter::FSkeletalMeshSamplingRegionMaterialFilter
          (FSkeletalMeshSamplingRegionMaterialFilter *this)

{
  this->MaterialName = (FName)0x0;
  return this;
}

