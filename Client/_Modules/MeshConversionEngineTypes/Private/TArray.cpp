// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 1

// Find @ 14ca38b10

int __thiscall
TArray<UE::Geometry::`anonymous_namespace'::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>::Find
          (TArray<UE::Geometry::_anonymous_namespace_::TUniqueMeshVertex<8>,TSizedDefaultAllocator<32>_>
           *this,TUniqueMeshVertex<8> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x30) {
    pFVar2 = pFVar1;
    do {
      if ((*(int *)(pFVar2 + 0x20) == (param_1->NormalEIDs).Elements[0] &&
          (*(int *)(pFVar2 + 0x28) == (param_1->NormalEIDs).Elements[2] &&
          *(int *)(pFVar2 + 0x24) == (param_1->NormalEIDs).Elements[1])) &&
          (*(int *)(pFVar2 + 0x2c) == param_1->ColorEID &&
          ((*(int *)(pFVar2 + 0x18) == (param_1->UVsEIDs).Elements[6] &&
           ((*(int *)(pFVar2 + 0x10) == (param_1->UVsEIDs).Elements[4] &&
            ((*(int *)(pFVar2 + 8) == (param_1->UVsEIDs).Elements[2] &&
             (*(int *)(pFVar2 + 4) == (param_1->UVsEIDs).Elements[1] &&
             *(int *)pFVar2 == (param_1->UVsEIDs).Elements[0])) &&
            *(int *)(pFVar2 + 0xc) == (param_1->UVsEIDs).Elements[3])) &&
           *(int *)(pFVar2 + 0x14) == (param_1->UVsEIDs).Elements[5])) &&
          *(int *)(pFVar2 + 0x1c) == (param_1->UVsEIDs).Elements[7]))) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x30);
      }
      pFVar2 = pFVar2 + 0x30;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x30);
  }
  return -1;
}

