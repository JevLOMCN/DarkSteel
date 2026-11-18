// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsLog
// Functions: 3

// CreateAnalyticsProvider @ 14ea17060

TSharedPtr<IAnalyticsProvider,1> * __thiscall
FAnalyticsLog::CreateAnalyticsProvider
          (FAnalyticsLog *this,TSharedPtr<IAnalyticsProvider,1> *__return_storage_ptr__,
          TDelegate<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IAnalyticsProvider,1> *pTVar5;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 != 0) && (*(longlong **)&param_1->field_0x8 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar4 = ::operator_new(0x58);
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        __return_storage_ptr__->Object = (IAnalyticsProvider *)0x10;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAnalyticsProviderLog___00_SharedPointerInternals__6B_
      ;
      FAnalyticsProviderLog::FAnalyticsProviderLog((FAnalyticsProviderLog *)(pTVar4 + 1),param_1);
      if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSharedPtr<IAnalyticsProvider,1> *)(*pcVar1)();
          return pTVar5;
        }
      }
      __return_storage_ptr__->Object = (IAnalyticsProvider *)(pTVar4 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  __return_storage_ptr__->Object = (IAnalyticsProvider *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StartupModule @ 14ea171a0

void __thiscall FAnalyticsLog::StartupModule(FAnalyticsLog *this)

{
  return;
}

// ShutdownModule @ 14ea171b0

void __thiscall FAnalyticsLog::ShutdownModule(FAnalyticsLog *this)

{
  return;
}

