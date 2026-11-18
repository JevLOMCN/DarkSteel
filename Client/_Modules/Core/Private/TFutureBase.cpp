// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Get @ 141b438f0

FRunnableThread ** __thiscall
TFutureBase<FRunnableThread_*>::Get(TFutureBase<FRunnableThread_*> *this)

{
  TFutureState<FRunnableThread_*> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FRunnableThread **ppFVar4;
  
  if ((this->State).Object == (TFutureState<FRunnableThread_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      ppFVar4 = (FRunnableThread **)(*pcVar2)();
      return ppFVar4;
    }
    if ((this->State).Object == (TFutureState<FRunnableThread_*> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        ppFVar4 = (FRunnableThread **)(*pcVar2)();
        return ppFVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while (pTVar1->field_0x68 == '\0') {
    (**(code **)(**(longlong **)&pTVar1->field_0x60 + 0x20))
              (*(longlong **)&pTVar1->field_0x60,0xffffffff,0);
  }
  return (FRunnableThread **)&pTVar1->Result;
}

// Get @ 141cfdcd0

TTwoSmoothies<1> * __thiscall
TFutureBase<TTwoSmoothies<1>_>::Get(TFutureBase<TTwoSmoothies<1>_> *this)

{
  TFutureState<TTwoSmoothies<1>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTwoSmoothies<1> *pTVar4;
  
  if ((this->State).Object == (TFutureState<TTwoSmoothies<1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTwoSmoothies<1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((this->State).Object == (TFutureState<TTwoSmoothies<1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TTwoSmoothies<1> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while ((char)pTVar1->_padding_ == '\0') {
    (**(code **)(*(longlong *)pTVar1->_padding_ + 0x20))((longlong *)pTVar1->_padding_,0xffffffff,0)
    ;
  }
  return (TTwoSmoothies<1> *)&pTVar1->Result;
}

