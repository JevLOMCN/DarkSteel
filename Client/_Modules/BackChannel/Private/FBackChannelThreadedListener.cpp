// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 7

// FBackChannelThreadedListener @ 14e7f3190

FBackChannelThreadedListener * __thiscall
FBackChannelThreadedListener::FBackChannelThreadedListener(FBackChannelThreadedListener *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Connection).Object = (IBackChannelSocketConnection *)0x0;
  (this->Connection).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Delegate = 0;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  this->_padding_ = (longlong)&___7FBackChannelThreadedListener__6B_;
  this->bExitRequested = (FThreadSafeBool)0x0;
  this->bIsRunning = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RunningCS,4000);
  return this;
}

// ~FBackChannelThreadedListener @ 14e7f3850

void __thiscall
FBackChannelThreadedListener::~FBackChannelThreadedListener(FBackChannelThreadedListener *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FBackChannelThreadedListener__6B_;
  lpCriticalSection = &this->RunningCS;
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x0;
  UNLOCK();
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Connection).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 14e7f3aa0

bool __thiscall
`FBackChannelThreadedListener::Run'::__l4::<lambda_1>::operator()
          (void *this,TSharedRef<IBackChannelSocketConnection,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  IBackChannelSocketConnection *pIVar3;
  undefined1 uVar4;
  longlong *plVar5;
  atomic<int> *paVar6;
  IBackChannelSocketConnection *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  lVar2 = *(longlong *)this;
  pIVar3 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x28),&local_28);
  if (*(int *)(lVar2 + 0x38) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(lVar2 + 0x30);
  }
  lVar2 = *plVar5;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_38 = pIVar3;
  local_30 = pTVar1;
  uVar4 = (**(code **)(lVar2 + 0x60))(plVar5,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar4;
}

// IsRunning @ 14e7f6c30

bool __thiscall FBackChannelThreadedListener::IsRunning(FBackChannelThreadedListener *this)

{
  return this->bIsRunning != (FThreadSafeBool)0x0;
}

// Run @ 14e7f9000

uint __thiscall FBackChannelThreadedListener::Run(FBackChannelThreadedListener *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IBackChannelSocketConnection *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  code *local_48 [2];
  undefined **local_38;
  FBackChannelThreadedListener *local_30;
  undefined8 local_20;
  
  if (this->bExitRequested == (FThreadSafeBool)0x0) {
    lpCriticalSection = &this->RunningCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    uVar5 = (undefined4)__real_3ff0000000000000;
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      pIVar1 = (this->Connection).Object;
      local_20 = 0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FBackChannelThreadedListener::Run'::`4'::<lambda_1>,0,0>::
                  _vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FBackChannelThreadedListener::Run'::__l4::<lambda_1>,bool,TSharedRef<IBackChannelSocketConnection,1>_>
                    ::Call;
      local_30 = this;
      (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,uVar5,local_48);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    } while (this->bExitRequested == (FThreadSafeBool)0x0);
  }
  LOCK();
  this->bIsRunning = (FThreadSafeBool)0x0;
  UNLOCK();
  return 0;
}

// Start @ 14e7f9bb0

void __thiscall
FBackChannelThreadedListener::Start
          (FBackChannelThreadedListener *this,TSharedRef<IBackChannelSocketConnection,1> *param_1,
          TDelegate<bool___cdecl(TSharedRef<IBackChannelSocketConnection,1>),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  IBackChannelSocketConnection *local_58;
  FSharedReferencer<1> local_50;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  local_50.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_58 = param_1->Object;
  if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Connection != (TSharedPtr<IBackChannelSocketConnection,1> *)&local_58) {
    (this->Connection).Object = local_58;
    local_58 = (IBackChannelSocketConnection *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Connection).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  if (param_2 != &this->Delegate) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  LOCK();
  this->bIsRunning = (FThreadSafeBool)0x1;
  UNLOCK();
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x0;
  UNLOCK();
  FRunnableThread::Create
            ((FRunnable *)this,L"FBackChannelSocketThread",0x8000,TPri_Normal,0xffffffffffffffff,
             None);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// Stop @ 14e7f9f50

void __thiscall FBackChannelThreadedListener::Stop(FBackChannelThreadedListener *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    lpCriticalSection = &this->RunningCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x0;
  UNLOCK();
  return;
}

