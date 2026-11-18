// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Add @ 1415a8680

void __thiscall FCompactHashTableView::Add(FCompactHashTableView *this,uint param_1,uint param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  char cVar7;
  
  uVar5 = (ulonglong)param_1;
  cVar7 = '\0';
  if (0xffff < *(uint *)&this->field_0x10) {
    cVar7 = '\x02';
  }
  cVar7 = (0xff < *(uint *)&this->field_0x10) + '\x01' + cVar7;
  if (cVar7 == '\x01') {
    puVar6 = (undefined1 *)
             ((ulonglong)(param_2 & *(int *)&this->field_0x14 - 1U) + *(longlong *)&this->field_0x8)
    ;
    *(undefined1 *)(uVar5 + *(longlong *)this) = *puVar6;
    *puVar6 = (char)param_1;
  }
  else {
    if (cVar7 == '\x02') {
      puVar2 = (undefined2 *)
               (*(longlong *)&this->field_0x8 +
               (ulonglong)(*(int *)&this->field_0x14 - 1U & param_2) * 2);
      *(undefined2 *)(*(longlong *)this + uVar5 * 2) = *puVar2;
      *puVar2 = (short)param_1;
      return;
    }
    if (cVar7 == '\x04') {
      puVar1 = (uint *)(*(longlong *)&this->field_0x8 +
                       (ulonglong)(*(int *)&this->field_0x14 - 1U & param_2) * 4);
      *(uint *)(*(longlong *)this + uVar5 * 4) = *puVar1;
      *puVar1 = param_1;
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                       ,0x171,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

