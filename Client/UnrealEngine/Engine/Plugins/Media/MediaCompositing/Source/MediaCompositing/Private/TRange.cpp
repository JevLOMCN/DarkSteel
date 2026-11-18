// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// Contains @ 14ea699f0

bool __thiscall TRange<FTimespan>::Contains(TRange<FTimespan> *this,FTimespan *param_1)

{
  uchar uVar1;
  longlong lVar2;
  TRangeBound<FTimespan> *pTVar3;
  TRange<FTimespan> *pTVar4;
  TRange<FTimespan> local_28;
  
  uVar1 = (this->LowerBound).Type.Value;
  local_28.LowerBound.Value = (FTimespan)param_1->Ticks;
  if (uVar1 != '\x02') {
    lVar2 = (this->LowerBound).Value.Ticks;
    pTVar4 = this;
    if (local_28.LowerBound.Value.Ticks <= lVar2) {
      if (local_28.LowerBound.Value.Ticks < lVar2) {
        pTVar4 = &local_28;
      }
      if (uVar1 != '\x01') {
        return false;
      }
    }
    if ((pTVar4->LowerBound).Value.Ticks != (this->LowerBound).Value.Ticks) {
      return false;
    }
  }
  uVar1 = (this->UpperBound).Type.Value;
  pTVar3 = &this->UpperBound;
  local_28.UpperBound.Type.Value = '\x01';
  local_28.UpperBound.Value.Ticks = local_28.LowerBound.Value.Ticks;
  if (uVar1 != '\x02') {
    lVar2 = (this->UpperBound).Value.Ticks;
    if (lVar2 <= local_28.LowerBound.Value.Ticks) {
      if (lVar2 < local_28.LowerBound.Value.Ticks) {
        pTVar3 = &local_28.UpperBound;
      }
      if (uVar1 != '\x01') {
        return false;
      }
    }
    if ((pTVar3->Value).Ticks != (this->UpperBound).Value.Ticks) {
      return false;
    }
  }
  return true;
}

