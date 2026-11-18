// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// Accumulate @ 1460a5ad0

FAccumulatedWeightedValue * __thiscall
UE::MovieScene::FAccumulatedWeightedValue::Accumulate
          (FAccumulatedWeightedValue *this,FAccumulatedWeightedValue *__return_storage_ptr__,
          FAccumulatedWeightedValue *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1->TotalWeight;
  fVar2 = this->TotalWeight;
  __return_storage_ptr__->Total = param_1->Total + this->Total;
  __return_storage_ptr__->TotalWeight = fVar1 + fVar2;
  return __return_storage_ptr__;
}

// Accumulate @ 1460a5b00

FAccumulatedWeightedValue * __thiscall
UE::MovieScene::FAccumulatedWeightedValue::Accumulate
          (FAccumulatedWeightedValue *this,FAccumulatedWeightedValue *__return_storage_ptr__,
          FWeightedValue *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = param_1->Weight;
  dVar2 = param_1->Value;
  dVar3 = param_1->BaseValue;
  __return_storage_ptr__->TotalWeight = fVar1 + this->TotalWeight;
  __return_storage_ptr__->Total = (dVar2 - dVar3) * (double)fVar1 + this->Total;
  return __return_storage_ptr__;
}

// AccumulateThis @ 1460a5b40

FAccumulatedWeightedValue * __thiscall
UE::MovieScene::FAccumulatedWeightedValue::AccumulateThis
          (FAccumulatedWeightedValue *this,FWeightedValue *param_1)

{
  this->Total = (param_1->Value - param_1->BaseValue) * (double)param_1->Weight + this->Total;
  this->TotalWeight = this->TotalWeight + param_1->Weight;
  return this;
}

// Normalize @ 1460da580

double __thiscall
UE::MovieScene::FAccumulatedWeightedValue::Normalize(FAccumulatedWeightedValue *this)

{
  double dVar1;
  
  dVar1 = this->Total;
  if (this->TotalWeight != 0.0) {
    dVar1 = dVar1 / (double)this->TotalWeight;
  }
  return dVar1;
}

