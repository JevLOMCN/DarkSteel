// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 3

// ~<lambda_1> @ 144345e90

void __thiscall
`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>
::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x58));
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// operator() @ 1443464a0

void __thiscall
`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  FFutureState *this_00;
  bool bVar2;
  FResolveResultData *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TFutureBase<UE::UniversalObjectLocator::FResolveResultData> local_18;
  
  local_18.State.Object =
       *(TFutureState<UE::UniversalObjectLocator::FResolveResultData> **)((longlong)this + 0x50);
  local_18.State.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x58);
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(undefined8 *)((longlong)this + 0x50) = 0;
  pFVar3 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get(&local_18);
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar5 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x48);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,pFVar3);
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(longlong *)this == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = *(FFutureState **)this;
  if (this_00->bComplete != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FFutureState::MarkComplete(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.State.SharedReferenceCount.ReferenceController);
  return;
}

// Get @ 144347c40

FResolveResultData * __thiscall
TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
          (TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *this)

{
  TFutureState<UE::UniversalObjectLocator::FResolveResultData> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FResolveResultData *pFVar4;
  
  if ((this->State).Object == (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FResolveResultData *)(*pcVar2)();
      return pFVar4;
    }
    if ((this->State).Object == (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0)
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FResolveResultData *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while ((char)pTVar1->_padding_ == '\0') {
    (**(code **)(*(longlong *)pTVar1->_padding_ + 0x20))((longlong *)pTVar1->_padding_,0xffffffff,0)
    ;
  }
  return (FResolveResultData *)&pTVar1->Result;
}

