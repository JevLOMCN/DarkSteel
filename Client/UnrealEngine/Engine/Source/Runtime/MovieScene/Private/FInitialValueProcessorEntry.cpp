// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FInitialValueProcessorEntry @ 146118fb0

FInitialValueProcessorEntry * __thiscall
UE::MovieScene::FInitialValueProcessorEntry::FInitialValueProcessorEntry
          (FInitialValueProcessorEntry *this,FInitialValueProcessorEntry *param_1)

{
  (this->InitialValueType).Value = (param_1->InitialValueType).Value;
  memmove(&this->Filter,&param_1->Filter,0x30);
  (this->Filter).AllMask.Bits.NumBits = (param_1->Filter).AllMask.Bits.NumBits;
  (this->Filter).AllMask.Bits.MaxBits = (param_1->Filter).AllMask.Bits.MaxBits;
  (param_1->Filter).AllMask.Bits.NumBits = 0;
  (param_1->Filter).AllMask.Bits.MaxBits = 0;
  memmove(&(this->Filter).NoneMask,&(param_1->Filter).NoneMask,0x30);
  (this->Filter).NoneMask.Bits.NumBits = (param_1->Filter).NoneMask.Bits.NumBits;
  (this->Filter).NoneMask.Bits.MaxBits = (param_1->Filter).NoneMask.Bits.MaxBits;
  (param_1->Filter).NoneMask.Bits.NumBits = 0;
  (param_1->Filter).NoneMask.Bits.MaxBits = 0;
  (this->Filter).ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filter).ComplexMasks.AllocatorInstance.Data =
       (param_1->Filter).ComplexMasks.AllocatorInstance.Data;
  (param_1->Filter).ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filter).ComplexMasks.ArrayNum = (param_1->Filter).ComplexMasks.ArrayNum;
  (this->Filter).ComplexMasks.ArrayMax = (param_1->Filter).ComplexMasks.ArrayMax;
  (param_1->Filter).ComplexMasks.ArrayNum = 0;
  (param_1->Filter).ComplexMasks.ArrayMax = 0;
  (this->Processor).Object = (param_1->Processor).Object;
  (this->Processor).SharedReferenceCount.ReferenceController =
       (param_1->Processor).SharedReferenceCount.ReferenceController;
  (param_1->Processor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (param_1->Processor).Object = (IInitialValueProcessor *)0x0;
  return this;
}

