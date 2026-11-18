// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// ~FActiveSyncWorkHandle @ 14880bcb0

void __thiscall UE::Tick::FActiveSyncWorkHandle::~FActiveSyncWorkHandle(FActiveSyncWorkHandle *this)

{
  FActiveSyncPoint *this_00;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 != (FActiveSyncPoint *)0x0) {
    FActiveSyncPoint::ResetWorkHandle(this_00,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SyncPoint).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14880daa0

FActiveSyncWorkHandle * __thiscall
UE::Tick::FActiveSyncWorkHandle::operator=
          (FActiveSyncWorkHandle *this,FActiveSyncWorkHandle *param_1)

{
  uint uVar1;
  
  if (this != param_1) {
    (this->SyncPoint).Object = (param_1->SyncPoint).Object;
    (param_1->SyncPoint).Object = (FActiveSyncPoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SyncPoint).SharedReferenceCount,&(param_1->SyncPoint).SharedReferenceCount);
  }
  uVar1 = (*(uint *)&this->WorkIndex ^ *(uint *)&param_1->WorkIndex) & 0xffffff ^
          *(uint *)&this->WorkIndex;
  *(uint *)&this->WorkIndex = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->WorkIndex) & 0x1000000 ^ uVar1;
  *(uint *)&this->WorkIndex = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->WorkIndex) & 0x2000000 ^ uVar1;
  *(uint *)&this->WorkIndex = uVar1;
  *(uint *)&this->WorkIndex = (uVar1 ^ *(uint *)&param_1->WorkIndex) & 0x4000000 ^ uVar1;
  return this;
}

// AbandonWork @ 148816520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UE::Tick::FActiveSyncWorkHandle::AbandonWork(FActiveSyncWorkHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FActiveSyncPoint *this_00;
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FActiveSyncWork *pFVar6;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 == (FActiveSyncPoint *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561517444>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x7c,"SyncPoint.IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    return false;
  }
  lpCriticalSection = &this_00->WorkLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = *(uint *)&this->WorkIndex & 0xffffff;
  if (((this->SyncPoint).Object == (FActiveSyncPoint *)0x0) ||
     ((this_00->ActiveWork).ArrayNum <= (int)uVar5)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516751>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x331,"Handle.IsValid() && ActiveWork.IsValidIndex(WorkIndex)");
    if (bVar3) goto code_r0x0001488166cb;
  }
  else {
    if (((this_00->ActiveWork).ArrayNum <= (int)uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar6 = (FActiveSyncWork *)
             ((this_00->ActiveWork).AllocatorInstance.Data + (ulonglong)uVar5 * 0x10);
    if (((pFVar6->field0_0x0).StateValue & 1) != 0) {
      if (((pFVar6->field0_0x0).StateValue & 0x1e) != 0) {
        FActiveSyncPoint::CancelRequestedWork(this_00,uVar5,pFVar6);
        (pFVar6->field0_0x0).StateValue = (pFVar6->field0_0x0).StateValue & 0xfffffff5;
        INSERT(this->WorkIndex,0,0x18,1);
        this->WorkIndex = (uint3)uVar2;
        this->field_0x13 = SUB41(uVar2,3);
        INSERT(this->WorkIndex,0,0x19,1);
        this->WorkIndex = (uint3)uVar2;
        this->field_0x13 = SUB41(uVar2,3);
        bVar3 = FActiveSyncPoint::IsReadyToProcessWork(this_00);
        if (bVar3) {
          FActiveSyncPoint::DispatchWorkTask(this_00,(TRefCountPtr<FBaseGraphTask> *)0x0);
        }
      }
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return true;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_830330814561516747>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0x335,"CurrentWork.bHasActiveHandle");
    if (bVar3) {
code_r0x0001488166cb:
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// GetDependencyTickFunction @ 14883dd30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall
UE::Tick::FActiveSyncWorkHandle::GetDependencyTickFunction(FActiveSyncWorkHandle *this)

{
  FActiveSyncPoint *pFVar1;
  bool bVar2;
  FActiveSyncPoint *pFVar3;
  
  bVar2 = IsInGameThread();
  if ((bVar2) && (pFVar1 = (this->SyncPoint).Object, pFVar1 != (FActiveSyncPoint *)0x0)) {
    pFVar3 = (FActiveSyncPoint *)0x0;
    if (-1 < (pFVar1->SyncPointId).SyncId) {
      pFVar3 = pFVar1;
    }
    return (FTickFunction *)pFVar3;
  }
  return (FTickFunction *)0x0;
}

// HasRequestedWork @ 148844b40

bool __thiscall UE::Tick::FActiveSyncWorkHandle::HasRequestedWork(FActiveSyncWorkHandle *this)

{
  return this->bWorkRequested;
}

// HasReservedWork @ 148844b50

bool __thiscall UE::Tick::FActiveSyncWorkHandle::HasReservedWork(FActiveSyncWorkHandle *this)

{
  return this->bWorkReserved;
}

// HasWorkQueue @ 148844c60

bool __thiscall UE::Tick::FActiveSyncWorkHandle::HasWorkQueue(FActiveSyncWorkHandle *this)

{
  return this->bHasWorkQueue;
}

// IsValid @ 1488481a0

bool __thiscall UE::Tick::FActiveSyncWorkHandle::IsValid(FActiveSyncWorkHandle *this)

{
  return (this->SyncPoint).Object != (FActiveSyncPoint *)0x0;
}

// QueueWorkFunction @ 148850940

bool __thiscall
UE::Tick::FActiveSyncWorkHandle::QueueWorkFunction
          (FActiveSyncWorkHandle *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  FActiveSyncPoint *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 != (FActiveSyncPoint *)0x0) {
    bVar2 = FActiveSyncPoint::QueueWorkFunction(this_00,this,param_1);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_830330814561517407>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0xa1,"SyncPoint.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// RequestWork @ 148855ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Tick::FActiveSyncWorkHandle::RequestWork
          (FActiveSyncWorkHandle *this,FTickFunction *param_1,ESyncWorkRepetition param_2)

{
  FActiveSyncPoint *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 != (FActiveSyncPoint *)0x0) {
    bVar2 = FActiveSyncPoint::RequestWork(this_00,this,param_1,param_2);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_830330814561517417>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0x97,"SyncPoint.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// ReserveFutureWork @ 148856210

bool __thiscall
UE::Tick::FActiveSyncWorkHandle::ReserveFutureWork
          (FActiveSyncWorkHandle *this,ESyncWorkRepetition param_1)

{
  FActiveSyncPoint *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 != (FActiveSyncPoint *)0x0) {
    bVar2 = FActiveSyncPoint::ReserveFutureWork(this_00,this,param_1);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_830330814561517426>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0x8e,"SyncPoint.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Reset @ 148856370

bool __thiscall UE::Tick::FActiveSyncWorkHandle::Reset(FActiveSyncWorkHandle *this)

{
  FActiveSyncPoint *this_00;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 != (FActiveSyncPoint *)0x0) {
    FActiveSyncPoint::ResetWorkHandle(this_00,this);
  }
  return false;
}

// SendQueuedWork @ 148857ce0

bool __thiscall
UE::Tick::FActiveSyncWorkHandle::SendQueuedWork
          (FActiveSyncWorkHandle *this,TRefCountPtr<FBaseGraphTask> *param_1)

{
  FActiveSyncPoint *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  this_00 = (this->SyncPoint).Object;
  if (this_00 != (FActiveSyncPoint *)0x0) {
    bVar2 = FActiveSyncPoint::SendQueuedWork(this_00,this,param_1);
    return bVar2;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_830330814561517398>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0xaa,"SyncPoint.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

