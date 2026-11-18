// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// WaitFor @ 145eeebb0

bool __thiscall FFutureState::WaitFor(FFutureState *this,FTimespan *param_1)

{
  FEvent *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pFVar1 = (this->CompletionEvent).Event;
  if (param_1->Ticks < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaitTime.GetTicks() >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                       ,0x58,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar7 = param_1->Ticks / 10000;
  uVar6 = 0xffffffff;
  if ((longlong)uVar7 < 0xffffffff) {
    uVar6 = uVar7;
  }
  uVar7 = 0;
  if (0 < (longlong)uVar6) {
    uVar7 = uVar6 & 0xffffffff;
  }
  cVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,uVar7,0);
  return cVar5 != '\0';
}

