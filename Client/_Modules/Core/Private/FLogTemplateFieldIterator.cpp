// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator++ @ 1417ab740

FLogTemplateFieldIterator * __thiscall
UE::Logging::Private::FLogTemplateFieldIterator::operator++(FLogTemplateFieldIterator *this)

{
  byte bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uStack_c;
  
  pbVar8 = this->NextOp;
  while (pbVar8 != (byte *)0x0) {
    uVar4 = (ulonglong)(byte)~*pbVar8 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar9 = -(int)lVar3 + 9;
    pbVar7 = pbVar8 + 1;
    uVar4 = (ulonglong)(0xff >> ((byte)uVar9 & 0x1f) & 0xff) & (ulonglong)*pbVar8;
    switch(-(int)lVar3) {
    case 0:
      pbVar7 = pbVar8 + 2;
    case -1:
      pbVar7 = pbVar7 + 1;
    case -2:
      pbVar7 = pbVar7 + 1;
    case -3:
      uVar4 = (ulonglong)*pbVar7;
      pbVar7 = pbVar7 + 1;
    case -4:
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar4 << 8 | (ulonglong)bVar1;
    case -7:
      uVar4 = uVar4 << 8 | (ulonglong)*pbVar7;
    }
    pbVar8 = pbVar8 + uVar9;
    uVar9 = (uint)uVar4 & 7;
    this->NextOp = pbVar8;
    iVar6 = (int)(uVar4 >> 3);
    if (uVar9 == 3) {
      pwVar2 = this->NextFormat;
      (this->Name).DataPtr = pwVar2 + 1;
      *(ulonglong *)&(this->Name).Size = CONCAT44(uStack_c,iVar6 + -2);
      this->NextFormat = pwVar2 + iVar6;
      return this;
    }
    if ((uVar4 & 7) == 0) break;
    iVar5 = 0;
    if (1 < uVar9 - 5) {
      iVar5 = iVar6;
    }
    this->NextFormat = this->NextFormat + iVar5;
  }
  this->NextOp = (uchar *)0x0;
  (this->Name).DataPtr = (wchar_t *)0x0;
  (this->Name).Size = 0;
  return this;
}

