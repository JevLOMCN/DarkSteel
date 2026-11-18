// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 1

// operator< @ 142d3f480

bool __thiscall
FMessageRouter::FDelayedMessage::operator<(FDelayedMessage *this,FDelayedMessage *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((param_1->Context).Object == (IMessageContext *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  plVar6 = (longlong *)(**(code **)((longlong)*(param_1->Context).Object + 0x68))();
  if ((this->Context).Object == (IMessageContext *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  plVar7 = (longlong *)(**(code **)((longlong)*(this->Context).Object + 0x68))();
  lVar1 = *plVar6;
  lVar2 = *plVar7;
  if (lVar1 == lVar2) {
    return this->Sequence < param_1->Sequence;
  }
  return lVar1 != lVar2 && -1 < lVar1 - lVar2;
}

