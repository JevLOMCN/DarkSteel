// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5ec340

TBox2<float> * __thiscall
FGLTFUVBoundsCalculator::Convert
          (FGLTFUVBoundsCalculator *this,TBox2<float> *__return_storage_ptr__,
          FMeshDescription *param_1,FMeshAttributesArray<int> *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_2;
  (__return_storage_ptr__->Min).field0_0x0 = (TVector2<float>_u_0)0x0;
  (__return_storage_ptr__->Max).field0_0x0 = (TVector2<float>_u_0)0x0;
  *(undefined4 *)&__return_storage_ptr__->bIsValid = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return __return_storage_ptr__;
}

