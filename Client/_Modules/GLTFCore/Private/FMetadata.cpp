// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 1

// GetExtraData @ 14e63b260

FExtraData * __thiscall GLTF::FMetadata::GetExtraData(FMetadata *this,FString *param_1)

{
  FExtraData *pFVar1;
  
  pFVar1 = TArray<GLTF::FMetadata::FExtraData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_GLTF::FMetadata::GetExtraData_::__l2::<lambda_1>_>
                     (&this->Extras,(<lambda_1>)param_1);
  return pFVar1;
}

