// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 1

// ~TTupleBaseElement<TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,1,2> @ 14311bed0

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,1,2>
          (TTupleBaseElement<TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>,1,2>
           *this)

{
  FPendingRequest *pFVar1;
  TFutureState<UE::Cook::FCookOnTheFlyResponse> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 == (FPendingRequest *)0x0) {
    return;
  }
  pTVar2 = (pFVar1->ResponsePromise).State.Object;
  if ((pTVar2 != (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) &&
     (pTVar2->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar1->ResponsePromise).State.SharedReferenceCount.ReferenceController);
  ::operator_delete(pFVar1,0x30);
  return;
}

