// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// Register @ 14d4cd400

void __cdecl UE::StateTree::FCrashReporterHandler::Register(void)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDelegateHandle FVar5;
  FCrashReporterHandlerImpl *pFVar6;
  FSharedReferencer<1> local_20;
  FCrashReporterHandlerImpl *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = ::operator_new(0xc68);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = (FCrashReporterHandlerImpl *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCrashReporterHandlerImpl_Private_StateTree_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar4 + 1,0,0x400);
    memset(pTVar4 + 0x42,0,0x848);
    pTVar4[0x41]._padding_ = 0;
    pTVar4[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x41].WeakReferenceCount = (atomic<int>)0x20;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar4 + 0x42),4000);
    *(undefined2 *)&pTVar4[0x46]._padding_ = 0;
    *(atomic<int> **)&pTVar4[0x44].SharedReferenceCount = &pTVar4[0x46].SharedReferenceCount;
    pFVar6 = (FCrashReporterHandlerImpl *)(pTVar4 + 1);
    pTVar4[0x45]._padding_ = (longlong)&pTVar4[0x46].SharedReferenceCount;
    *(atomic<int> **)&pTVar4[0x45].SharedReferenceCount = &pTVar4[0xc6].SharedReferenceCount;
    if ((pFVar6 == (FCrashReporterHandlerImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  StateTree::Private::Instance.Object = pFVar6;
  local_20.ReferenceController = pTVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&StateTree::Private::Instance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((StateTree::Private::Instance.Object == (FCrashReporterHandlerImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2.ReferenceController = StateTree::Private::Instance.SharedReferenceCount.ReferenceController;
  pFVar6 = StateTree::Private::Instance.Object;
  local_18 = StateTree::Private::Instance.Object;
  local_10 = StateTree::Private::Instance.SharedReferenceCount.ReferenceController;
  if (StateTree::Private::Instance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (StateTree::Private::Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(StateTree::Private::Instance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar6 == (FCrashReporterHandlerImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar5 = TMulticastDelegateRegistration<void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
          ::AddSP<UE::StateTree::Private::FCrashReporterHandlerImpl,1>
                    ((TMulticastDelegateRegistration<void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                      *)&FGenericCrashContext::AdditionalCrashContextDelegate,
                     (TSharedRef<UE::StateTree::Private::FCrashReporterHandlerImpl,1> *)
                     &stack0x00000008,(pmf_c3d02b06)&local_18);
                    /* WARNING: Load size is inaccurate */
  StateTree::Private::AdditionalCrashContextDelegateHandle.ID = *FVar5.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return;
}

// Unregister @ 14d4d3d30

void __cdecl UE::StateTree::FCrashReporterHandler::Unregister(void)

{
  if (StateTree::Private::AdditionalCrashContextDelegateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FGenericCrashContext::AdditionalCrashContextDelegate,
               StateTree::Private::AdditionalCrashContextDelegateHandle);
    return;
  }
  return;
}

