// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Load @ 1417e02e0

FLogTemplateOp __cdecl UE::Logging::Private::FLogTemplateOp::Load(uchar **param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar2 = *param_1;
  pbVar5 = pbVar2 + 1;
  uVar4 = (ulonglong)(byte)~*pbVar2 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar6 = -(int)lVar3 + 9;
  uVar4 = (ulonglong)(0xff >> ((byte)uVar6 & 0x1f) & 0xff) & (ulonglong)*pbVar2;
  switch(-(int)lVar3) {
  case 0:
    pbVar5 = pbVar2 + 2;
  case -1:
    pbVar5 = pbVar5 + 1;
  case -2:
    pbVar5 = pbVar5 + 1;
  case -3:
    uVar4 = (ulonglong)*pbVar5;
    pbVar5 = pbVar5 + 1;
  case -4:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -5:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -6:
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar4 = uVar4 << 8 | (ulonglong)bVar1;
  case -7:
    uVar4 = uVar4 << 8 | (ulonglong)*pbVar5;
  default:
    *param_1 = pbVar2 + uVar6;
    return (FLogTemplateOp)((uVar4 >> 3) << 0x20 | (ulonglong)((uint)uVar4 & 7));
  }
}

// SaveSize @ 1417f8360

uint __cdecl UE::Logging::Private::FLogTemplateOp::SaveSize(FLogTemplateOp *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (longlong)param_1->Value << 3 | (longlong)(int)param_1->Code;
  lVar1 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar3 = 0;
  if (uVar5 != 0) {
    iVar3 = (int)lVar1;
  }
  uVar4 = iVar3 / 7 + 1;
  uVar2 = 9;
  if ((int)uVar4 < 9) {
    uVar2 = uVar4;
  }
  return uVar2;
}

