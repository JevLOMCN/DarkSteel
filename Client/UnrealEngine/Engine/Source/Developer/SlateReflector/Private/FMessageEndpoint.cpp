// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 13

// FMessageEndpoint @ 142e09ff0

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageEndpoint * __thiscall
FMessageEndpoint::FMessageEndpoint
          (FMessageEndpoint *this,FName *param_1,TSharedRef<IMessageBus,1> *param_2,
          TArray<TSharedPtr<IMessageHandler,1>,TSizedDefaultAllocator<32>_> *param_3,
          TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TArray<TSharedPtr<IMessageHandler,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IMessageHandler,1> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  Type TVar10;
  FGuid *pFVar11;
  TNode *pTVar12;
  TNode *pTVar13;
  FTaskGraphInterface *pFVar14;
  FGuid local_28;
  
  pTVar13 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMessageReceiver__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMessageSender__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IBusListener__;
  (this->Address).UniqueId.A = 0;
  (this->Address).UniqueId.B = 0;
  (this->Address).UniqueId.C = 0;
  (this->Address).UniqueId.D = 0;
  pFVar11 = FGuid::NewGuid(&local_28);
  uVar6 = pFVar11->B;
  uVar7 = pFVar11->C;
  uVar8 = pFVar11->D;
  (this->Address).UniqueId.A = pFVar11->A;
  (this->Address).UniqueId.B = uVar6;
  (this->Address).UniqueId.C = uVar7;
  (this->Address).UniqueId.D = uVar8;
  (this->BusPtr).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (this->BusPtr).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->Handlers;
  this->Enabled = true;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Handlers).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TSharedPtr<IMessageHandler,1> *)(param_3->AllocatorInstance).Data;
  (this->Handlers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<IMessageHandler,1>,TSharedPtr<IMessageHandler,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
            (&this->NotificationDelegate,param_4);
  FGuid::NewGuid(&this->Id);
  pTVar12 = ::operator_new(0x18);
  if (pTVar12 != (TNode *)0x0) {
    pTVar12->NextNode = (TNode *)0x0;
    (pTVar12->Item).Object = (IMessageContext *)0x0;
    (pTVar12->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar12->NextNode = (TNode *)0x0;
    (pTVar12->Item).Object = (IMessageContext *)0x0;
    (pTVar12->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = pTVar12;
  }
  (this->Inbox).Tail = pTVar13;
  (this->Inbox).Head = pTVar13;
  this->InboxEnabled = false;
  this->Name = *param_1;
  *(undefined8 *)&this->ErrorDelegate = 0;
  *(undefined8 *)&(this->ErrorDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ErrorDelegate).field_0x10 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HandlersCS,4000);
  pFVar14 = FTaskGraphInterface::Get();
  bVar9 = (**(code **)((longlong)*pFVar14 + 0x10))(pFVar14,0);
  TVar10 = AnyNormalThreadNormalTask;
  if (bVar9 != AnyNormalThreadNormalTask) {
    TVar10 = (uint)bVar9;
  }
  this->RecipientThread = TVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return this;
}

// ~FMessageEndpoint @ 142e13bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageEndpoint::~FMessageEndpoint(FMessageEndpoint *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  TNode *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  IMessageBus *pIVar9;
  atomic<int> aVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  
  this->_padding_ = (longlong)&_vftable__for__IMessageReceiver__;
  this->_padding_ = (longlong)&_vftable__for__IMessageSender__;
  this->_padding_ = (longlong)&_vftable__for__IBusListener__;
  pTVar11 = (this->BusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e13c24;
      }
      LOCK();
      aVar10 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar10;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar10 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar10;
    } while (!bVar12);
    pIVar9 = (this->BusPtr).Object;
    if (pIVar9 != (IMessageBus *)0x0) {
      (**(code **)((longlong)*pIVar9 + 0x60))(pIVar9,&this->Address);
    }
  }
LAB_142e13c24:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HandlersCS);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ErrorDelegate);
  pvVar5 = *(void **)&(this->ErrorDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ErrorDelegate);
  pTVar6 = (this->Inbox).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->Inbox).Tail = pTVar6->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar6->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar6,0x18);
    pTVar6 = (this->Inbox).Tail;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NotificationDelegate);
  pvVar5 = *(void **)&(this->NotificationDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NotificationDelegate);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)(this->Handlers).AllocatorInstance.Data,
             (this->Handlers).ArrayNum);
  pFVar7 = (this->Handlers).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pTVar11 = (this->BusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar11->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
    }
  }
  this->_padding_ = (longlong)&___7IBusListener__6B_;
  this->_padding_ = (longlong)&___7IMessageSender__6B_;
  this->_padding_ = (longlong)&___7IMessageReceiver__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// GetDebugName @ 142e9ad30

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall FMessageEndpoint::GetDebugName(FMessageEndpoint *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetListenerThread @ 142ea0070

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FMessageEndpoint::GetListenerThread(FMessageEndpoint *this)

{
  return *(Type *)((longlong)&(this->Inbox).Tail + 4);
}

// GetRecipientId @ 142ea49d0

/* WARNING: Enum "Type": Some values do not have unique names */

FGuid * __thiscall FMessageEndpoint::GetRecipientId(FMessageEndpoint *this)

{
  return &this->Id;
}

// GetRecipientThread @ 142ea49e0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FMessageEndpoint::GetRecipientThread(FMessageEndpoint *this)

{
  return this->RecipientThread;
}

// GetSenderAddress @ 142ea81c0

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageAddress * __thiscall
FMessageEndpoint::GetSenderAddress(FMessageEndpoint *this,FMessageAddress *__return_storage_ptr__)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar2 = (this->Address).UniqueId.A;
  uVar3 = (this->Address).UniqueId.B;
  (__return_storage_ptr__->UniqueId).A = *(undefined4 *)&this->_padding_;
  (__return_storage_ptr__->UniqueId).B = uVar1;
  (__return_storage_ptr__->UniqueId).C = uVar2;
  (__return_storage_ptr__->UniqueId).D = uVar3;
  return __return_storage_ptr__;
}

// IsLocal @ 142ebce40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMessageEndpoint::IsLocal(FMessageEndpoint *this)

{
  return true;
}

// NotifyMessageError @ 142ec58e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::NotifyMessageError
          (FMessageEndpoint *this,TSharedRef<IMessageContext,1> *param_1,FString *param_2)

{
  IMessageContext *pIVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  pIVar1 = param_1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Name).Number,
             &local_28);
  if ((*(int *)&(this->ErrorDelegate).field_0x8 != 0) &&
     (plVar2 = *(longlong **)&this->ErrorDelegate, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,pIVar1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// NotifyRegistration @ 142ec5950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::NotifyRegistration
          (FMessageEndpoint *this,FMessageAddress *param_1,EMessageBusNotification param_2)

{
  longlong *plVar1;
  EMessageBusNotification local_38 [4];
  undefined8 local_34;
  undefined8 uStack_2c;
  FReadAccessScope local_20;
  
  if (*(char *)&(this->BusPtr).Object != '\0') {
    local_34._0_4_ = (param_1->UniqueId).A;
    local_34._4_4_ = (param_1->UniqueId).B;
    uStack_2c._0_4_ = (param_1->UniqueId).C;
    uStack_2c._4_4_ = (param_1->UniqueId).D;
    local_38[0] = param_2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Handlers,&local_20);
    if ((*(int *)&this->NotificationDelegate != 0) &&
       (plVar1 = *(longlong **)&(this->Handlers).ArrayNum, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  return;
}

// Publish @ 142ef1380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::Publish
          (FMessageEndpoint *this,void *param_1,UScriptStruct *param_2,EMessageScope param_3,
          FTimespan *param_4,FDateTime *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  IMessageBus *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  atomic<int> aVar6;
  TSharedRef<FMessageEndpoint,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  FDateTime *local_68;
  TSharedRef<FMessageEndpoint,1> local_60 [2];
  
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_68 = param_5;
  local_90 = 0;
  local_80 = 0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = ___xmm_00000000ffffffff0000008000000000;
  uStack_98 = _UNK_150631d98;
  local_88 = (void *)0x0;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if ((this->Enabled != false) &&
     (pTVar1 = (this->BusPtr).WeakReferenceCount.ReferenceController, pTVar8 = pTVar1,
     pTVar1 != (TReferenceControllerBase<1> *)0x0)) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142ef1425;
      LOCK();
      aVar6 = pTVar1->SharedReferenceCount;
      bVar9 = aVar4 == aVar6;
      if (bVar9) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar9);
    pIVar2 = (this->BusPtr).Object;
    pTVar8 = pTVar1;
    if (pIVar2 != (IMessageBus *)0x0) {
      pcVar3 = *(code **)((longlong)*pIVar2 + 0x20);
      pTVar7 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                         ((TSharedFromThis<FMessageEndpoint,1> *)&this->_padding_,local_60);
      if (pTVar7->Object == (FMessageEndpoint *)0x0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = &pTVar7->Object->_padding_;
      }
      local_70 = (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar3)(pIVar2,param_1,param_2,param_3,local_c8,param_4,local_68,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60[0].SharedReferenceCount.ReferenceController);
    }
  }
LAB_142ef1425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  local_80 = local_80 & 0xffffffff00000000;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  bVar9 = local_c8._12_4_ != 0;
  local_c8._8_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  if (bVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  uVar5 = local_a0._4_4_;
  local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
  uStack_98 = 0xffffffff;
  if (0x80 < uVar5) {
    local_a0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// ReceiveMessage @ 142ef5220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::ReceiveMessage(FMessageEndpoint *this,TSharedRef<IMessageContext,1> *param_1)

{
  TQueue<TSharedPtr<IMessageContext,1>,0> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TNode *pTVar2;
  IMessageContext *pIVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TNode *pTVar9;
  longlong lVar10;
  FWeakObjectPtr *this_00;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  if (this->Enabled != false) {
    pIVar3 = param_1->Object;
    if (this->InboxEnabled != false) {
      pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
      pTVar1 = &this->Inbox;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = ::operator_new(0x18);
      if (pTVar9 != (TNode *)0x0) {
        (pTVar9->Item).SharedReferenceCount.ReferenceController = pTVar12;
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        pTVar9->NextNode = (TNode *)0x0;
        (pTVar9->Item).Object = pIVar3;
        if (((ulonglong)pTVar1 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2 = pTVar1->Head;
        pTVar1->Head = pTVar9;
        UNLOCK();
        if (((ulonglong)pTVar2 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2->NextNode = pTVar9;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      return;
    }
    lVar10 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
    if (lVar10 != 0) {
      this_00 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
      bVar7 = FWeakObjectPtr::IsValid(this_00,false,true);
      if (bVar7) {
        lpCriticalSection = &this->HandlersCS;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar11 = 0;
        if (0 < (this->Handlers).ArrayNum) {
          lVar10 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this->Handlers).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (this->Handlers).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar4 + lVar10) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar5 = *(undefined8 **)(pFVar4 + lVar10);
            (**(code **)*puVar5)(puVar5,param_1);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0x10;
          } while ((int)uVar11 < (this->Handlers).ArrayNum);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  return;
}

// Send @ 142f03470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::Send
          (FMessageEndpoint *this,void *param_1,UScriptStruct *param_2,EMessageFlags param_3,
          TSharedPtr<IMessageAttachment,1> *param_4,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_5,FTimespan *param_6,
          FDateTime *param_7)

{
  IMessageBus *pIVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TSharedRef<FMessageEndpoint,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined1 auStackY_138 [32];
  TSharedRef<FMessageEndpoint,1> local_b8;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  void *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (this->Enabled == false) {
LAB_142f034ee:
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8 = (this->BusPtr).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) goto LAB_142f034ee;
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar9 = aVar5 == aVar6;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar9);
      pIVar1 = (this->BusPtr).Object;
      if (pIVar1 != (IMessageBus *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
        pTVar7 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                           ((TSharedFromThis<FMessageEndpoint,1> *)&this->_padding_,&local_b8);
        pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_70 = 0;
        local_a8._16_8_ = 0;
        uStack_90 = 0;
        local_60 = 0;
        local_a8._0_8_ = (FScriptContainerElement *)0x0;
        local_a8._8_8_ = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_7c = 0x80;
        local_78 = 0xffffffff;
        local_74 = 0;
        local_68 = (void *)0x0;
        (*pcVar2)(pIVar1,param_1,param_2,param_3);
        local_60 = local_60 & 0xffffffff00000000;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_a8,0,local_a8._8_4_);
        iVar4 = SUB84(local_a8._8_8_,4);
        local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
        if (iVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
        }
        local_78 = 0xffffffff;
        local_74 = 0;
        local_80 = 0;
        if (0x80 < local_7c) {
          local_7c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
        }
        if (local_88 != (void *)0x0) {
          FMemory::Free(local_88);
        }
        if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_a8._0_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

