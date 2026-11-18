// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetFirst @ 1415c6ee0

uint __thiscall FConstCompactHashTableView::GetFirst(FConstCompactHashTableView *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  cVar5 = '\0';
  if (0xffff < this->NextIndexCount) {
    cVar5 = '\x02';
  }
  cVar5 = (0xff < this->NextIndexCount) + '\x01' + cVar5;
  if (cVar5 == '\x01') {
    uVar3 = (uint)this->HashData[this->HashCount - 1 & param_1];
    bVar2 = this->HashData[this->HashCount - 1 & param_1] == 0xff;
  }
  else {
    if (cVar5 != '\x02') {
      if (cVar5 == '\x04') {
        uVar3 = *(uint *)(this->HashData + (ulonglong)(this->HashCount - 1 & param_1) * 4);
        if (*(uint *)(this->HashData + (ulonglong)(this->HashCount - 1 & param_1) * 4) == 0xffffffff
           ) {
          uVar3 = 0xffffffff;
        }
        return uVar3;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x133,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      return 0xffffffff;
    }
    uVar3 = (uint)*(ushort *)(this->HashData + (ulonglong)(this->HashCount - 1 & param_1) * 2);
    bVar2 = *(ushort *)(this->HashData + (ulonglong)(this->HashCount - 1 & param_1) * 2) == 0xffff;
  }
  uVar4 = 0xffffffff;
  if (!bVar2) {
    uVar4 = uVar3;
  }
  return uVar4;
}

// GetNext @ 141b44010

uint __thiscall
FConstCompactHashTableView::GetNext(FConstCompactHashTableView *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  cVar5 = '\0';
  if (0xffff < this->NextIndexCount) {
    cVar5 = '\x02';
  }
  cVar5 = (0xff < this->NextIndexCount) + '\x01' + cVar5;
  if (cVar5 == '\x01') {
    uVar3 = (uint)this->NextIndexData[param_1];
    bVar2 = this->NextIndexData[param_1] == 0xff;
  }
  else {
    if (cVar5 != '\x02') {
      if (cVar5 == '\x04') {
        uVar3 = *(uint *)(this->NextIndexData + (ulonglong)param_1 * 4);
        if (*(uint *)(this->NextIndexData + (ulonglong)param_1 * 4) == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        return uVar3;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x146,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      return 0xffffffff;
    }
    uVar3 = (uint)*(ushort *)(this->NextIndexData + (ulonglong)param_1 * 2);
    bVar2 = *(ushort *)(this->NextIndexData + (ulonglong)param_1 * 2) == 0xffff;
  }
  uVar4 = 0xffffffff;
  if (!bVar2) {
    uVar4 = uVar3;
  }
  return uVar4;
}

