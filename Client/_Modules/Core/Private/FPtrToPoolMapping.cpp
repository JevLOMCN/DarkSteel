// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Init @ 1416a2660

void __thiscall
FMallocBinnedCommonBase::FPtrToPoolMapping::Init
          (FPtrToPoolMapping *this,uint param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar4 = 1;
  if (param_2 != 0) {
    uVar4 = param_2;
  }
  uVar5 = uVar4 - 1;
  this->AddressSpaceBase = param_3;
  lVar7 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  iVar6 = (int)lVar7;
  if (uVar5 == 0) {
    iVar6 = -1;
  }
  lVar7 = 0x40 - (ulonglong)(0x3f - iVar6);
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  uVar5 = (ulonglong)(uVar3 - 1) * 2 + 1;
  uVar1 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  this->PtrToPoolPageBitShift = uVar1 & 0xffffffff;
  uVar4 = uVar1 + lVar7;
  this->PoolMask = (1L << ((byte)lVar7 & 0x3f)) - 1;
  this->HashKeyShift = uVar4;
  lVar7 = 1;
  if (param_4 - param_3 != 0) {
    lVar7 = param_4 - param_3;
  }
  uVar5 = lVar7 - 1;
  lVar7 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  cVar2 = (char)lVar7;
  if (uVar5 == 0) {
    cVar2 = -1;
  }
  this->MaxHashBuckets = (ulonglong)(1L << (0x40U - ('?' - cVar2) & 0x3f)) >> ((byte)uVar4 & 0x3f);
  return;
}

