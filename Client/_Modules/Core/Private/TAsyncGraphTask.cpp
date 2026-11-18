// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~TAsyncGraphTask<void> @ 141919910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TAsyncGraphTask<void>::~TAsyncGraphTask<void>(TAsyncGraphTask<void> *this)

{
  TFutureState<void> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<void> *)0x0) && (pTVar1->field_0x68 == '\0')) {
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
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar5 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000141919977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

// ~TAsyncGraphTask<int> @ 141b29c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TAsyncGraphTask<int>::~TAsyncGraphTask<int>(TAsyncGraphTask<int> *this)

{
  TFutureState<int> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<int> *)0x0) && (pTVar1->field_0x68 == '\0')) {
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
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar5 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000141b29cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

// ~TAsyncGraphTask<TTwoSmoothies<1>_> @ 141cf0b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TAsyncGraphTask<TTwoSmoothies<1>_>::~TAsyncGraphTask<TTwoSmoothies<1>_>
          (TAsyncGraphTask<TTwoSmoothies<1>_> *this)

{
  TFutureState<TTwoSmoothies<1>_> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<TTwoSmoothies<1>_> *)0x0) && ((char)pTVar1->_padding_ == '\0')) {
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
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar5 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000141cf0b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

// ~TAsyncGraphTask<bool> @ 141cf0ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TAsyncGraphTask<bool>::~TAsyncGraphTask<bool>(TAsyncGraphTask<bool> *this)

{
  TFutureState<bool> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<bool> *)0x0) && (pTVar1->field_0x68 == '\0')) {
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
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar5 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000141cf0c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

