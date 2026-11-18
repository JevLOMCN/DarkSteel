// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 4

// FMessageDispatchTask @ 142d3d900

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageDispatchTask * __thiscall
FMessageDispatchTask::FMessageDispatchTask
          (FMessageDispatchTask *this,Type param_1,TSharedRef<IMessageContext,1> *param_2,
          TWeakPtr<IMessageReceiver,1> *param_3,TSharedPtr<FMessageTracer,1> *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->Context).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Context).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->RecipientPtr).Object = param_3->Object;
  pTVar3 = (param_3->WeakReferenceCount).ReferenceController;
  (this->RecipientPtr).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->Thread = param_1;
  (this->TracerPtr).Object = param_4->Object;
  pTVar3 = (param_4->SharedReferenceCount).ReferenceController;
  (this->TracerPtr).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  pTVar3 = (param_3->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMessageDispatchTask @ 142d3ed50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageDispatchTask::~FMessageDispatchTask(FMessageDispatchTask *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->TracerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->RecipientPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Context).SharedReferenceCount.ReferenceController);
  return;
}

// DoTask @ 142d44c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageDispatchTask::DoTask
          (FMessageDispatchTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  IMessageReceiver *pIVar1;
  FMessageTracer *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMessageTracer *pFVar8;
  FMessageTracer *this_00;
  bool bVar9;
  TSharedRef<IMessageReceiver,1> local_28;
  TSharedRef<IMessageReceiver,1> local_18;
  
  pTVar7 = (this->RecipientPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar7->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d44cc7;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    pIVar1 = (this->RecipientPtr).Object;
    if (pIVar1 != (IMessageReceiver *)0x0) {
      this_00 = (FMessageTracer *)0x0;
      pFVar2 = (FMessageTracer *)(this->TracerPtr).WeakReferenceCount.ReferenceController;
      pFVar8 = pFVar2;
      if (pFVar2 != (FMessageTracer *)0x0) {
        aVar5 = *(atomic<int> *)&pFVar2->AddressesToEndpointInfos;
        do {
          pFVar8 = this_00;
          if (aVar5 == (atomic<int>)0x0) goto LAB_142d44d15;
          LOCK();
          aVar6 = *(atomic<int> *)&pFVar2->AddressesToEndpointInfos;
          bVar9 = aVar5 == aVar6;
          if (bVar9) {
            *(int *)&pFVar2->AddressesToEndpointInfos = (int)aVar5 + 1;
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar9);
        this_00 = (this->TracerPtr).Object;
        pFVar8 = pFVar2;
        if (this_00 != (FMessageTracer *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
          local_28.Object = pIVar1;
          local_28.SharedReferenceCount.ReferenceController = pTVar7;
          FMessageTracer::TraceDispatchedMessage(this_00,&this->Context,&local_28,true);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
        }
      }
LAB_142d44d15:
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,this);
      if ((((this->TracerPtr).Object != (FMessageTracer *)0x0) &&
          (pTVar3 = (this->TracerPtr).WeakReferenceCount.ReferenceController,
          pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount))
      {
        if ((this_00 == (FMessageTracer *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        local_18.Object = pIVar1;
        local_18.SharedReferenceCount.ReferenceController = pTVar7;
        FMessageTracer::TraceHandledMessage(this_00,&this->Context,&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
    }
  }
LAB_142d44cc7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// GetStatId @ 142d47cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FMessageDispatchTask::GetStatId(FMessageDispatchTask *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FMessageDispatchTask ==
          (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FMessageDispatchTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FMessageDispatchTask,*pFVar1,
                   L"FMessageDispatchTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                   L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FMessageDispatchTask;
  if (StatPtr_FMessageDispatchTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FMessageDispatchTask");
    FVar2 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FMessageDispatchTask::GetStatId(void)const_::_2_::FStat_FMessageDispatchTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FMessageDispatchTask,*pFVar1,
                         L"FMessageDispatchTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                         L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

