// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FObjectAndGatherFlags @ 141f219a0

FObjectAndGatherFlags * __thiscall
FPropertyLocalizationDataGatherer::FObjectAndGatherFlags::FObjectAndGatherFlags
          (FObjectAndGatherFlags *this,UObject *param_1,
          EPropertyLocalizationGathererTextFlags param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  this->Object = param_1;
  this->GatherTextFlags = param_2;
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = uVar3 >> 0xd ^ -uVar3;
  uVar1 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar3 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 0xf;
  iVar2 = uVar3 - param_2;
  uVar4 = 0x9e3779b9 - uVar3 ^ iVar2 * 0x100;
  uVar1 = (param_2 - uVar4) - iVar2 ^ uVar4 >> 0xd;
  uVar3 = (iVar2 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 << 10;
  this->KeyHash = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xf;
  return this;
}

