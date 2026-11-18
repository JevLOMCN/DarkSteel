// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 2

// operator<= @ 146bf3fa0

bool __thiscall FMediaTimeStamp::operator<=(FMediaTimeStamp *this,FMediaTimeStamp *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = param_1->SequenceIndex;
  iVar2 = this->SequenceIndex;
  bVar6 = SBORROW4(iVar2,iVar1);
  bVar5 = iVar2 - iVar1 < 0;
  if (iVar2 == iVar1) {
    if ((this->LoopIndex == param_1->LoopIndex) && ((this->Time).Ticks == (param_1->Time).Ticks)) {
      return true;
    }
    if (this->LoopIndex < param_1->LoopIndex) {
      return true;
    }
    if (this->LoopIndex != param_1->LoopIndex) {
      return false;
    }
    lVar3 = (param_1->Time).Ticks;
    lVar4 = (this->Time).Ticks;
    bVar6 = SBORROW8(lVar4,lVar3);
    bVar5 = lVar4 - lVar3 < 0;
  }
  if (bVar6 != bVar5) {
    return true;
  }
  return false;
}

// operator> @ 146bf3fe0

bool __thiscall FMediaTimeStamp::operator>(FMediaTimeStamp *this,FMediaTimeStamp *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = param_1->SequenceIndex;
  iVar2 = this->SequenceIndex;
  bVar6 = SBORROW4(iVar2,iVar1);
  bVar5 = iVar2 - iVar1 < 0;
  if (iVar2 == iVar1) {
    if ((this->LoopIndex == param_1->LoopIndex) && ((this->Time).Ticks == (param_1->Time).Ticks)) {
      return false;
    }
    if (this->LoopIndex < param_1->LoopIndex) {
      return false;
    }
    if (this->LoopIndex != param_1->LoopIndex) {
      return true;
    }
    lVar3 = (param_1->Time).Ticks;
    lVar4 = (this->Time).Ticks;
    bVar6 = SBORROW8(lVar4,lVar3);
    bVar5 = lVar4 - lVar3 < 0;
  }
  if (bVar6 != bVar5) {
    return false;
  }
  return true;
}

