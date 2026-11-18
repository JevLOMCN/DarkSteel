// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkFile
// Functions: 1

// Get @ 148be3140

FCookOnTheFlyResponse * __thiscall
TFutureBase<UE::Cook::FCookOnTheFlyResponse>::Get
          (TFutureBase<UE::Cook::FCookOnTheFlyResponse> *this)

{
  TFutureState<UE::Cook::FCookOnTheFlyResponse> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FCookOnTheFlyResponse *pFVar4;
  
  if ((this->State).Object == (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCookOnTheFlyResponse *)(*pcVar2)();
      return pFVar4;
    }
    if ((this->State).Object == (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCookOnTheFlyResponse *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while (pTVar1->field_0x68 == '\0') {
    (**(code **)(**(longlong **)&pTVar1->field_0x60 + 0x20))
              (*(longlong **)&pTVar1->field_0x60,0xffffffff,0);
  }
  return (FCookOnTheFlyResponse *)&pTVar1->Result;
}

