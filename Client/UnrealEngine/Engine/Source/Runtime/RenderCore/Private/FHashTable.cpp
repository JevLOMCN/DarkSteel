// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Clear @ 145dfd680

void __thiscall FHashTable::Clear(FHashTable *this,uint param_1,uint param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulong64 uVar4;
  uint *puVar5;
  
  if (this->IndexSize != 0) {
    this->HashMask = 0;
    this->IndexSize = 0;
    operator_delete__(this->Hash);
    this->Hash = EmptyHash;
    operator_delete__(this->NextIndex);
    this->NextIndex = (uint *)0x0;
  }
  this->HashSize = param_1;
  this->IndexSize = param_2;
  if (param_1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HashSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x16d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->HashSize & this->HashSize - 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo( HashSize )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\HashTable.h"
                       ,0x16e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexSize != 0) {
    this->HashMask = this->HashSize - 1;
    auVar2 = ZEXT816(4) * ZEXT416(this->HashSize);
    uVar4 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = operator_new__(uVar4);
    this->Hash = puVar5;
    auVar2 = ZEXT816(4) * ZEXT416(this->IndexSize);
    uVar4 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = operator_new__(uVar4);
    this->NextIndex = puVar5;
    memset(this->Hash,0xff,(ulonglong)(this->HashSize << 2));
  }
  return;
}

