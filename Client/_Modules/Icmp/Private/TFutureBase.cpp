// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// Get @ 1445565c0

FIcmpEchoResult * __thiscall TFutureBase<FIcmpEchoResult>::Get(TFutureBase<FIcmpEchoResult> *this)

{
  TFutureState<FIcmpEchoResult> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FIcmpEchoResult *pFVar4;
  
  if ((this->State).Object == (TFutureState<FIcmpEchoResult> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FIcmpEchoResult *)(*pcVar2)();
      return pFVar4;
    }
    if ((this->State).Object == (TFutureState<FIcmpEchoResult> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FIcmpEchoResult *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while ((char)pTVar1->_padding_ == '\0') {
    (**(code **)(*(longlong *)pTVar1->_padding_ + 0x20))((longlong *)pTVar1->_padding_,0xffffffff,0)
    ;
  }
  return (FIcmpEchoResult *)&pTVar1->Result;
}

