// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// FChunkSuccessRate @ 14327eb90

FChunkSuccessRate * __thiscall
BuildPatchServices::FChunkSuccessRate::FChunkSuccessRate(FChunkSuccessRate *this)

{
  this->LastAverage = 1.0;
  this->ImmediateAccumulatedValue = 0.0;
  this->ImmediateValueCount = 0.0;
  this->TotalAccumulatedValue = 0.0;
  this->TotalValueCount = 0.0;
  return this;
}

// AddFail @ 1432beaa0

void __thiscall BuildPatchServices::FChunkSuccessRate::AddFail(FChunkSuccessRate *this)

{
  this->ImmediateValueCount = this->ImmediateValueCount + __real_3ff0000000000000;
  this->TotalValueCount = this->TotalValueCount + __real_3ff0000000000000;
  return;
}

// AddSuccess @ 1432bec80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall BuildPatchServices::FChunkSuccessRate::AddSuccess(FChunkSuccessRate *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = this->ImmediateAccumulatedValue + ___xmm_3ff00000000000003ff0000000000000;
  dVar3 = this->ImmediateValueCount + _UNK_150689688;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  this->ImmediateAccumulatedValue = dVar2;
  this->ImmediateValueCount = (double)auVar1._8_8_;
  dVar2 = this->TotalAccumulatedValue + ___xmm_3ff00000000000003ff0000000000000;
  dVar3 = this->TotalValueCount + _UNK_150689688;
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  this->TotalAccumulatedValue = dVar2;
  this->TotalValueCount = (double)auVar4._8_8_;
  return;
}

// GetImmediate @ 1432d6f90

double __thiscall BuildPatchServices::FChunkSuccessRate::GetImmediate(FChunkSuccessRate *this)

{
  double dVar1;
  
  if (__real_4008000000000000 <= this->ImmediateValueCount) {
    dVar1 = this->ImmediateAccumulatedValue / this->ImmediateValueCount;
    this->ImmediateValueCount = 0.0;
    this->ImmediateAccumulatedValue = 0.0;
    this->LastAverage = dVar1;
    return dVar1;
  }
  return this->LastAverage;
}

// GetOverall @ 1432d8b00

double __thiscall BuildPatchServices::FChunkSuccessRate::GetOverall(FChunkSuccessRate *this)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 < this->TotalValueCount) {
    dVar1 = this->TotalAccumulatedValue / this->TotalValueCount;
  }
  return dVar1;
}

