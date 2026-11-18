// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator= @ 14cc23780

TSampledScalarField2<float,float> * __thiscall
UE::Geometry::TSampledScalarField2<float,float>::operator=
          (TSampledScalarField2<float,float> *this,TSampledScalarField2<float,float> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->GridValues).Buffer.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->GridValues).Buffer.AllocatorInstance.Data =
         (param_1->GridValues).Buffer.AllocatorInstance.Data;
    (param_1->GridValues).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GridValues).Buffer.ArrayNum = (param_1->GridValues).Buffer.ArrayNum;
    (this->GridValues).Buffer.ArrayMax = (param_1->GridValues).Buffer.ArrayMax;
    (param_1->GridValues).Buffer.ArrayNum = 0;
    (param_1->GridValues).Buffer.ArrayMax = 0;
  }
  (this->GridValues).DimensionX = (param_1->GridValues).DimensionX;
  (this->GridValues).DimensionY = (param_1->GridValues).DimensionY;
  (this->GridOrigin).field0_0x0 = (param_1->GridOrigin).field0_0x0;
  (this->CellDimensions).field0_0x0 = (param_1->CellDimensions).field0_0x0;
  return this;
}

