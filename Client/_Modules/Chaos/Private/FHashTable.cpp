// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FHashTable @ 1439c07c0

FHashTable * __thiscall FHashTable::FHashTable(FHashTable *this,uint param_1,uint param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  FHashTable *pFVar4;
  ulong64 uVar5;
  uint *puVar6;
  
  this->HashSize = param_1;
  this->HashMask = 0;
  this->IndexSize = param_2;
  this->Hash = EmptyHash;
  this->NextIndex = (uint *)0x0;
  if (param_1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HashSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x109,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHashTable *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((this->HashSize & this->HashSize - 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo( HashSize )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x10a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHashTable *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (this->IndexSize != 0) {
    this->HashMask = this->HashSize - 1;
    auVar2 = ZEXT816(4) * ZEXT416(this->HashSize);
    uVar5 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    puVar6 = operator_new__(uVar5);
    this->Hash = puVar6;
    auVar2 = ZEXT816(4) * ZEXT416(this->IndexSize);
    uVar5 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    puVar6 = operator_new__(uVar5);
    this->NextIndex = puVar6;
    memset(this->Hash,0xff,(ulonglong)(this->HashSize << 2));
  }
  return this;
}

// Add @ 1439c5220

void __thiscall FHashTable::Add(FHashTable *this,uint param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if (this->IndexSize <= param_2) {
    iVar4 = 1;
    if (param_2 + 1 != 0) {
      iVar4 = param_2 + 1;
    }
    uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
    if (uVar3 < 0x20) {
      uVar3 = 0x20;
    }
    Resize(this,uVar3);
  }
  uVar3 = this->HashMask & param_1;
  this->NextIndex[param_2] = this->Hash[uVar3];
  this->Hash[uVar3] = param_2;
  return;
}

