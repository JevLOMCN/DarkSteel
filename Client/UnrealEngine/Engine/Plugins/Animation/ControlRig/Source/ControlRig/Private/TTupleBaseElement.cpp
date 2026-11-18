// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5><UE::MovieScene::FFilterMatchPassthrough> @ 14a384e70

TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5>::
TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5><UE::MovieScene::FFilterMatchPassthrough>
          (TTupleBaseElement<UE::MovieScene::FFilterMatchPassthrough,4,5> *this,
          EForwardingConstructor param_1,FFilterMatchPassthrough *param_2)

{
  memmove(this,param_2,0x30);
  (this->Value).Filter.AllMask.Bits.NumBits = (param_2->Filter).AllMask.Bits.NumBits;
  (this->Value).Filter.AllMask.Bits.MaxBits = (param_2->Filter).AllMask.Bits.MaxBits;
  (param_2->Filter).AllMask.Bits.NumBits = 0;
  (param_2->Filter).AllMask.Bits.MaxBits = 0;
  memmove(&(this->Value).Filter.NoneMask,&(param_2->Filter).NoneMask,0x30);
  (this->Value).Filter.NoneMask.Bits.NumBits = (param_2->Filter).NoneMask.Bits.NumBits;
  (this->Value).Filter.NoneMask.Bits.MaxBits = (param_2->Filter).NoneMask.Bits.MaxBits;
  (param_2->Filter).NoneMask.Bits.NumBits = 0;
  (param_2->Filter).NoneMask.Bits.MaxBits = 0;
  (this->Value).Filter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).Filter.ComplexMasks.AllocatorInstance.Data =
       (param_2->Filter).ComplexMasks.AllocatorInstance.Data;
  (param_2->Filter).ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).Filter.ComplexMasks.ArrayNum = (param_2->Filter).ComplexMasks.ArrayNum;
  (this->Value).Filter.ComplexMasks.ArrayMax = (param_2->Filter).ComplexMasks.ArrayMax;
  (param_2->Filter).ComplexMasks.ArrayNum = 0;
  (param_2->Filter).ComplexMasks.ArrayMax = 0;
  return this;
}

