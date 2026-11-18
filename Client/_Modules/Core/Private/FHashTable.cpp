// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AverageSearch @ 1415aebb0

float __thiscall FHashTable::AverageSearch(FHashTable *this)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  if (this->HashSize != 0) {
    do {
      iVar1 = 0;
      uVar2 = this->Hash[uVar3 & 0xffff & (ulonglong)this->HashMask];
      if (uVar2 != 0xffffffff) {
        do {
          iVar1 = iVar1 + 1;
          uVar2 = this->NextIndex[uVar2];
        } while (uVar2 != 0xffffffff);
      }
      uVar5 = uVar5 + iVar1;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + (iVar1 + 1) * iVar1;
    } while (uVar2 < this->HashSize);
  }
  return (float)(uVar4 >> 1) / (float)uVar5;
}

// GetAllocatedSize @ 1415c4ec0

ulong64 __thiscall FHashTable::GetAllocatedSize(FHashTable *this)

{
  return (ulonglong)(this->HashSize + 3 + this->IndexSize) * 4 + 0x14;
}

// Resize @ 1415ea9c0

void __thiscall FHashTable::Resize(FHashTable *this,uint param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  uint *puVar4;
  
  uVar1 = this->IndexSize;
  if (param_1 != uVar1) {
    if (param_1 == 0) {
      if (uVar1 != 0) {
        this->HashMask = 0;
        this->IndexSize = 0;
        operator_delete__(this->Hash);
        this->Hash = EmptyHash;
        operator_delete__(this->NextIndex);
        this->NextIndex = (uint *)0x0;
        return;
      }
    }
    else {
      if (uVar1 == 0) {
        this->HashMask = (uint)(ushort)((short)this->HashSize - 1);
        auVar2 = ZEXT816(4) * ZEXT416(this->HashSize);
        uVar3 = auVar2._0_8_;
        if (auVar2._8_8_ != 0) {
          uVar3 = 0xffffffffffffffff;
        }
        puVar4 = operator_new__(uVar3);
        this->Hash = puVar4;
        memset(puVar4,0xff,(ulonglong)(this->HashSize << 2));
      }
      uVar3 = SUB168(ZEXT816(4) * ZEXT416(param_1),0);
      if (SUB168(ZEXT816(4) * ZEXT416(param_1),8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      puVar4 = operator_new__(uVar3);
      if (this->NextIndex != (uint *)0x0) {
        memcpy(puVar4,this->NextIndex,(ulonglong)(this->IndexSize << 2));
        operator_delete__(this->NextIndex);
      }
      this->NextIndex = puVar4;
      this->IndexSize = param_1;
    }
  }
  return;
}

