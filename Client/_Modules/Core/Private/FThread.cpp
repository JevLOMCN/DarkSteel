// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// <lambda_invoker_cdecl> @ 1416c8c50

void __cdecl `FThread::FThread'::__l1::<lambda_3_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FThread @ 1416d6e90

FThread * __thiscall
FThread::FThread(FThread *this,wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
                TUniqueFunction<void___cdecl(void)> *param_3,uint param_4,EThreadPriority param_5,
                FThreadAffinity *param_6,EForkable param_7)

{
  FThreadImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FThread *pFVar5;
  FThreadAffinity local_38;
  FThreadImpl *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar4 = ::operator_new(0xb0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    (this->Impl).Object = (FThreadImpl *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    local_38.ThreadAffinityMask = param_6->ThreadAffinityMask;
    local_38.ProcessorGroup = param_6->ProcessorGroup;
    local_38._10_6_ = *(undefined6 *)&param_6->field_0xa;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFThreadImpl___00_SharedPointerInternals__6B_;
    FThreadImpl::FThreadImpl
              ((FThreadImpl *)(pTVar4 + 1),param_1,param_2,param_3,param_4,param_5,&local_38,param_7
              );
    if ((FThreadImpl *)(pTVar4 + 1) == (FThreadImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FThread *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->Impl).Object = (FThreadImpl *)(pTVar4 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->Impl).Object == (FThreadImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FThread *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar4 = (this->Impl).SharedReferenceCount.ReferenceController;
  pFVar1 = (this->Impl).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (pFVar1->Self).Object;
  pTStack_20 = (pFVar1->Self).SharedReferenceCount.ReferenceController;
  (pFVar1->Self).Object = pFVar1;
  (pFVar1->Self).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  LOCK();
  pFVar1->bIsInitialized = (TAtomic<bool>)0x1;
  UNLOCK();
  return this;
}

// FThread @ 1416d7000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FThread * __thiscall
FThread::FThread(FThread *this,wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,
                uint param_3,EThreadPriority param_4,FThreadAffinity *param_5,EForkable param_6)

{
  FThreadImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FThread *pFVar5;
  undefined ***pppuVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 auStackY_e8 [32];
  FThreadAffinity local_a8;
  FThreadImpl *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar4 = ::operator_new(0xb0);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->Impl).Object = (FThreadImpl *)0x10;
    (this->Impl).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_a8.ThreadAffinityMask = param_5->ThreadAffinityMask;
    local_a8.ProcessorGroup = param_5->ProcessorGroup;
    local_a8._10_6_ = *(undefined6 *)&param_5->field_0xa;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    local_60 = (undefined ***)0x0;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFThreadImpl___00_SharedPointerInternals__6B_;
    local_78 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
    local_70 = `FThread::FThread'::__l1::<lambda_3_>::<lambda_invoker_cdecl>;
    local_88[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
    FThreadImpl::FThreadImpl
              ((FThreadImpl *)(pTVar4 + 1),param_1,param_2,
               (TUniqueFunction<void___cdecl(void)> *)local_88,param_3,param_4,&local_a8,param_6);
    if (local_88[0] != (code *)0x0) {
      pppuVar6 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar6 = local_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if ((FThreadImpl *)(pTVar4 + 1) == (FThreadImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FThread *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->Impl).Object = (FThreadImpl *)(pTVar4 + 1);
    (this->Impl).SharedReferenceCount.ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((this->Impl).Object == (FThreadImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FThread *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar7 = (this->Impl).SharedReferenceCount.ReferenceController;
  pFVar1 = (this->Impl).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = (pFVar1->Self).Object;
  pTStack_90 = (pFVar1->Self).SharedReferenceCount.ReferenceController;
  (pFVar1->Self).Object = pFVar1;
  (pFVar1->Self).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  LOCK();
  pFVar1->bIsInitialized = (TAtomic<bool>)0x1;
  UNLOCK();
  return this;
}

// ~FThread @ 1416d95e0

void __thiscall FThread::~FThread(FThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Impl).Object != (FThreadImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Impl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Thread.cpp"
                       ,0x91,L"FThread must be either joined or detached before destruction");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Impl).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 1416d9fd0

FThread * __thiscall FThread::operator=(FThread *this,FThread *param_1)

{
  FThreadImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  FThread *pFVar5;
  
  pFVar1 = (this->Impl).Object;
  if ((pFVar1 != (FThreadImpl *)0x0) && ((pFVar1->RunnableThread).Ptr != (FRunnableThread *)0x0)) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != ((pFVar1->RunnableThread).Ptr)->ThreadID) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsJoinable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Thread.cpp"
                         ,0x8a,L"Joinable thread cannot be assigned");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FThread *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  if (this != param_1) {
    (this->Impl).Object = (param_1->Impl).Object;
    (param_1->Impl).Object = (FThreadImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Impl).SharedReferenceCount,&(param_1->Impl).SharedReferenceCount);
  }
  return this;
}

// GetThreadId @ 1416fbb70

uint __thiscall FThread::GetThreadId(FThread *this)

{
  FThreadImpl *pFVar1;
  FRunnableThread *pFVar2;
  
  pFVar1 = (this->Impl).Object;
  if ((pFVar1 != (FThreadImpl *)0x0) &&
     (pFVar2 = (pFVar1->RunnableThread).Ptr, pFVar2 != (FRunnableThread *)0x0)) {
    return pFVar2->ThreadID;
  }
  return 0xffffffff;
}

// IsJoinable @ 141702550

bool __thiscall FThread::IsJoinable(FThread *this)

{
  FThreadImpl *pFVar1;
  DWORD DVar2;
  
  pFVar1 = (this->Impl).Object;
  if ((pFVar1 != (FThreadImpl *)0x0) && ((pFVar1->RunnableThread).Ptr != (FRunnableThread *)0x0)) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != ((pFVar1->RunnableThread).Ptr)->ThreadID) {
      return true;
    }
  }
  return false;
}

// Join @ 1417032e0

void __thiscall FThread::Join(FThread *this)

{
  FThreadImpl *pFVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  FThread local_18;
  
  if ((this->Impl).Object == (FThreadImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Impl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Thread.cpp"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->Impl).Object == (FThreadImpl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  pFVar1 = (this->Impl).Object;
  if ((pFVar1->RunnableThread).Ptr != (FRunnableThread *)0x0) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 != ((pFVar1->RunnableThread).Ptr)->ThreadID) goto LAB_14170338a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsJoinable()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Thread.cpp"
                     ,0x32,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14170338a:
  (**(code **)(((pFVar1->RunnableThread).Ptr)->_padding_ + 0x20))();
  pFVar2 = (pFVar1->RunnableThread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (pFVar1->RunnableThread).Ptr = (FRunnableThread *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  local_18.Impl.Object = (FThreadImpl *)0x0;
  local_18.Impl.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    (this->Impl).Object = (FThreadImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Impl).SharedReferenceCount,&local_18.Impl.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Impl.SharedReferenceCount.ReferenceController);
  return;
}

