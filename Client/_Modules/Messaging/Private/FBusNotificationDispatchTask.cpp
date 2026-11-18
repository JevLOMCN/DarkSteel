// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 2

// DoTask @ 142d44c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBusNotificationDispatchTask::DoTask
          (FBusNotificationDispatchTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  IBusListener *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ListenerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d44c40;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pIVar1 = (this->ListenerPtr).Object;
    if (pIVar1 != (IBusListener *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&this->Address,this->Notification);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142d44c40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetStatId @ 142d47b90

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FBusNotificationDispatchTask::GetStatId(FBusNotificationDispatchTask *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FBusNotificationDispatchTask ==
          (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FBusNotificationDispatchTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FBusNotificationDispatchTask,*pFVar1,
                   L"FBusNotificationDispatchTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                   L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FBusNotificationDispatchTask;
  if (StatPtr_FBusNotificationDispatchTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FBusNotificationDispatchTask");
    FVar2 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FBusNotificationDispatchTask::GetStatId(void)const_::_2_::FStat_FBusNotificationDispatchTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FBusNotificationDispatchTask,*pFVar1,
                         L"FBusNotificationDispatchTask","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

