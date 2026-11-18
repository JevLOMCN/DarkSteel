// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FScopedPropertyName @ 14808f120

void __thiscall
ObjectPropertyTrace::FScopedPropertyName::~FScopedPropertyName(FScopedPropertyName *this)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pTVar1 = this->Builder;
  iVar5 = (int)((longlong)pTVar1->CurPos - (longlong)pTVar1->Base >> 1);
  iVar4 = iVar5 - this->StartSize;
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  if (iVar5 < iVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount <= Len()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                       ,0xe8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1->CurPos = pTVar1->CurPos + -(longlong)iVar6;
  return;
}

