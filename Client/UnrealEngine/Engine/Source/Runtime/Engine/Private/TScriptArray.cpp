// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Insert @ 147dacf10

void __thiscall
TScriptArray<TMemoryImageAllocator<0>_>::Insert
          (TScriptArray<TMemoryImageAllocator<0>_> *this,int param_1,int param_2,int param_3,
          uint param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)param_3;
  lVar6 = (longlong)param_1;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x3e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x3f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ArrayMax < this->ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayMax>=ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x40,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ArrayNum < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index<=ArrayNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = this->ArrayNum;
  this->ArrayNum = iVar1 + param_2;
  if (this->ArrayMax < iVar1 + param_2) {
    ResizeGrow(this,iVar1,param_3,param_4);
  }
  uVar4 = this->_padding_;
  if ((uVar4 & 1) != 0) {
    uVar4 = (longlong)&this->_padding_ + ((longlong)uVar4 >> 0x18);
  }
  memmove((void *)((lVar6 + param_2) * lVar5 + uVar4),(void *)(lVar6 * lVar5 + uVar4),
          (iVar1 - lVar6) * lVar5);
  return;
}

