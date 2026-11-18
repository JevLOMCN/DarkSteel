// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// Contains @ 14eaa2d30

bool __thiscall TRange<float>::Contains(TRange<float> *this,float param_1)

{
  float fVar1;
  uchar uVar2;
  TRangeBound<float> *pTVar3;
  TRange<float> *pTVar4;
  TRange<float> local_18;
  
  uVar2 = (this->LowerBound).Type.Value;
  local_18.LowerBound.Value = param_1;
  if (uVar2 != '\x02') {
    fVar1 = (this->LowerBound).Value;
    pTVar4 = this;
    if (param_1 <= fVar1) {
      if (param_1 < fVar1) {
        pTVar4 = &local_18;
      }
      if (uVar2 != '\x01') {
        return false;
      }
    }
    if (fVar1 != (pTVar4->LowerBound).Value) {
      return false;
    }
  }
  uVar2 = (this->UpperBound).Type.Value;
  pTVar3 = &this->UpperBound;
  local_18.UpperBound.Value = param_1;
  local_18.UpperBound.Type.Value = '\x01';
  if (uVar2 != '\x02') {
    fVar1 = (this->UpperBound).Value;
    if (fVar1 <= param_1) {
      if (fVar1 < param_1) {
        pTVar3 = &local_18.UpperBound;
      }
      if (uVar2 != '\x01') {
        return false;
      }
    }
    if ((this->UpperBound).Value != pTVar3->Value) {
      return false;
    }
  }
  return true;
}

