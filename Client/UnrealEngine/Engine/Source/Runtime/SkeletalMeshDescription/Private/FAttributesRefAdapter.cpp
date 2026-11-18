// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 1

// Set @ 1443acf40

void __cdecl
Internal::FAttributesRefAdapter::Set(TArrayAttribute<int> *param_1,int param_2,FBoneWeight param_3)

{
  TArrayView<int,int> *pTVar1;
  TArrayView<int,int> local_18;
  
  pTVar1 = TAttributeArrayContainer<int>::Get(param_1->Array,&local_18,param_1->Index);
  pTVar1->DataPtr[param_2] = (int)param_3 << 0x10 | (uint)param_3 >> 0x10;
  return;
}

