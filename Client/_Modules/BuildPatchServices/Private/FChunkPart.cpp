// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FChunkPart @ 143220aa0

FChunkPart * __thiscall
BuildPatchServices::FChunkPart::FChunkPart
          (FChunkPart *this,FGuid *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1->A;
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  this->Offset = param_2;
  this->Size = param_3;
  (this->Guid).A = uVar1;
  (this->Guid).B = uVar2;
  (this->Guid).C = uVar3;
  (this->Guid).D = uVar4;
  return this;
}

// FChunkPart @ 143220ac0

FChunkPart * __thiscall BuildPatchServices::FChunkPart::FChunkPart(FChunkPart *this)

{
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->Offset = 0;
  this->Size = 0;
  return this;
}

