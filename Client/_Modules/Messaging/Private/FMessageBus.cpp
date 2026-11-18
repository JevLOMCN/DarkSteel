// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 17

// FMessageBus @ 142d3d5f0

FMessageBus * __thiscall
FMessageBus::FMessageBus
          (FMessageBus *this,FString *param_1,TSharedPtr<IAuthorizeMessageRecipients,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMessageRouter *this_00;
  FMessageRouter *pFVar5;
  FRunnableThread *pFVar6;
  FMessageBus *pFVar7;
  ForAnyElementType FVar8;
  FString local_18;
  
  pFVar5 = (FMessageRouter *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMessageBus__6B_;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->RecipientAuthorizer).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->RecipientAuthorizer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->ShutdownDelegate = 0;
  *(undefined8 *)&(this->ShutdownDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ShutdownDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ShutdownDelegate).field_0x18 = 2;
  this_00 = ::operator_new(0x168);
  if (this_00 != (FMessageRouter *)0x0) {
    pFVar5 = FMessageRouter::FMessageRouter(this_00);
  }
  this->Router = pFVar5;
  ::FString::PrintfImpl(&local_18,L"FMessageBus.%s.Router");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar8.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar6 = FRunnableThread::Create
                     ((FRunnable *)this->Router,(wchar_t *)FVar8.Data,0x20000,TPri_Normal,
                      0xffffffffffffffff,None);
  this->RouterThread = pFVar6;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((this->Router == (FMessageRouter *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Router != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\Bus\\MessageBus.cpp"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMessageBus *)(*pcVar3)();
    return pFVar7;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// ~FMessageBus @ 142d3ebb0

void __thiscall FMessageBus::~FMessageBus(FMessageBus *this)

{
  int *piVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  FMessageRouter *pFVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FMessageBus__6B_;
  if (this->RouterThread != (FRunnableThread *)0x0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ShutdownDelegate);
    (**(code **)(this->RouterThread->_padding_ + 0x18))(this->RouterThread,1);
    pFVar3 = this->RouterThread;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    this->RouterThread = (FRunnableThread *)0x0;
  }
  pFVar4 = this->Router;
  if (pFVar4 != (FMessageRouter *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ShutdownDelegate).field_0x8,*(int *)&(this->ShutdownDelegate).field_0x10);
  pvVar5 = *(void **)&(this->ShutdownDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ShutdownDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RecipientAuthorizer).SharedReferenceCount.ReferenceController);
  pFVar6 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7IMessageBus__6B_;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// AddNotificationListener @ 142d41cb0

void __thiscall
FMessageBus::AddNotificationListener(FMessageBus *this,TSharedRef<IBusListener,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  FMessageRouter *pFVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar5;
  TWeakPtr<IBusListener,1> local_48;
  code *local_38;
  ulonglong uStack_30;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_48.Object = param_1->Object;
  pFVar4 = this->Router;
  local_48.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_38 = FMessageRouter::HandleAddListener;
  this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FMessageRouter,TWeakPtr<IBusListener,1>_>
                      (&local_28,pFVar4,(pmf_33e1ab51 *)&local_38,&local_48);
  aVar5 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
           )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar5 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar5 + 8),
             this_00);
  LOCK();
  aVar3 = (pFVar4->Commands).Head;
  (pFVar4->Commands).Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> *)
   aVar3 = aVar5;
  (**(code **)(pFVar4->WorkEvent->_padding_ + 0x10))();
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// Forward @ 142d46e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Forward
          (FMessageBus *this,TSharedRef<IMessageContext,1> *param_1,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_2,FTimespan *param_3,
          TSharedRef<IMessageSender,1> *param_4)

{
  int *piVar1;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  IMessageContext *pIVar4;
  FMessageRouter *pFVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *_Src;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  Type TVar14;
  longlong *plVar15;
  FGuid *pFVar16;
  longlong lVar17;
  FWeakObjectPtr *pFVar18;
  UStruct *this_00;
  FMessageContext *pFVar19;
  FTaskGraphInterface *pFVar20;
  FDateTime FVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar24;
  FGuid *pFVar25;
  FMessageContext *pFVar26;
  int iVar27;
  TRawPtrProxy<FMessageContext> local_res8;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  FDelegateAllocation local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FTopLevelAssetPath local_c8;
  TSharedRef<IMessageContext,1> local_b8;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  bool local_98;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FString local_60;
  undefined1 local_50 [12];
  undefined4 local_44;
  
  local_res8.Object = (FMessageContext *)this;
  if ((byte)LogMessaging._0_1_ < 6) goto LAB_142d47086;
  plVar15 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x30))();
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar13 = true;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  lVar17 = plVar15[1];
  pFVar16 = (FGuid *)*plVar15;
  pFVar25 = pFVar16 + (int)lVar17;
  while( true ) {
    if ((int)plVar15[1] != (int)lVar17) {
      local_118[0] = 0;
      `TCheckedPointerIterator<FMessageAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    this = (FMessageBus *)local_res8.Object;
    if (pFVar16 == pFVar25) break;
    if (bVar13) {
      bVar13 = false;
    }
    else {
      ::FString::AppendChars(&local_f8,L"+",1);
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar16,&local_e8,Digits);
    iVar27 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar27 = 0;
    }
    ::FString::AppendChars(&local_f8,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar27);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    pFVar16 = pFVar16 + 1;
  }
  if (5 < (byte)LogMessaging._0_1_) {
    pFVar16 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar16,&local_d8,Digits);
    pIVar4 = param_1->Object;
    lVar17 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4);
    if (lVar17 == 0) {
LAB_142d4700f:
      local_c8.PackageName.ComparisonIndex.Value = 0;
      local_c8.PackageName.Number = 0;
      local_c8.AssetName.ComparisonIndex.Value = 0;
      local_c8.AssetName.Number = 0;
    }
    else {
      pFVar18 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
      bVar13 = FWeakObjectPtr::IsValid(pFVar18,false,true);
      if (!bVar13) goto LAB_142d4700f;
      pFVar18 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
      this_00 = (UStruct *)FWeakObjectPtr::Get(pFVar18);
      UStruct::GetStructPathName(this_00,&local_c8);
    }
    FTopLevelAssetPath::ToString(&local_c8,&local_60);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_142d47086:
  pFVar26 = (FMessageContext *)0x0;
  pFVar5 = *(FMessageRouter **)&(((FMessageContext *)this)->Annotations).field_0x20;
  pFVar19 = ::operator_new(200);
  if (pFVar19 != (FMessageContext *)0x0) {
    pFVar20 = FTaskGraphInterface::Get();
    TVar14 = (**(code **)((longlong)*pFVar20 + 0x10))(pFVar20,0);
    FVar21 = FDateTime::UtcNow();
    lVar17 = param_3->Ticks;
    lVar6 = *(longlong *)FVar21.Ticks;
    local_res8.Object = (FMessageContext *)(**(code **)*param_4->Object)(param_4->Object,local_50);
    *(undefined8 *)&pFVar19->Annotations = 0;
    *(undefined8 *)&(pFVar19->Annotations).field_0x8 = 0;
    *(undefined8 *)&(pFVar19->Annotations).field_0x20 = 0;
    pFVar19->_padding_ = (longlong)&___7FMessageContext__6B_;
    *(undefined4 *)&(pFVar19->Annotations).field_0x28 = 0;
    *(undefined4 *)&(pFVar19->Annotations).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar19->Annotations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar19->Annotations).field_0x34 = 0;
    *(undefined8 *)&(pFVar19->Annotations).field_0x40 = 0;
    *(undefined4 *)&(pFVar19->Annotations).field_0x48 = 0;
    (pFVar19->Attachment).Object = (IMessageAttachment *)0x0;
    (pFVar19->Attachment).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar19->Expiration).Ticks = 0;
    pFVar19->Message = (void *)0x0;
    (pFVar19->OriginalContext).Object = param_1->Object;
    pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
    (pFVar19->OriginalContext).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = &pFVar19->Recipients;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = &(pFVar19->Recipients).ArrayMax;
    iVar27 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    (pFVar19->Recipients).ArrayNum = iVar27;
    if (iVar27 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar27,0,&pTVar2->AllocatorInstance,iVar27,piVar1);
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar27 << 4);
    }
    pFVar19->Scope = Process;
    pFVar19->Flags = None;
    uVar9 = *(undefined4 *)&(local_res8.Object)->_padding_;
    uVar10 = *(undefined4 *)((longlong)&(local_res8.Object)->_padding_ + 4);
    uVar11 = *(undefined4 *)&((local_res8.Object)->Annotations).field_0x0;
    uVar12 = *(undefined4 *)&((local_res8.Object)->Annotations).field_0x4;
    pFVar19->SenderThread = TVar14;
    (pFVar19->TimeSent).Ticks = lVar17 + lVar6;
    (pFVar19->Sender).UniqueId.A = uVar9;
    (pFVar19->Sender).UniqueId.B = uVar10;
    (pFVar19->Sender).UniqueId.C = uVar11;
    (pFVar19->Sender).UniqueId.D = uVar12;
    (pFVar19->TypeInfo).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar26 = pFVar19;
  }
  local_res8.Object = pFVar26;
  TSharedRef<IMessageContext,1>::TSharedRef<IMessageContext,1><FMessageContext>
            (&local_b8,&local_res8);
  FMessageTracer::TraceSentMessage((pFVar5->Tracer).Object,&local_b8);
  uStack_a0 = 0;
  local_a8 = FMessageRouter::HandleRouteMessage;
  uStack_9c = local_44;
  local_110 = (undefined1  [8])0x0;
  local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_108.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
             (FWriteAccessScope *)&local_88);
  local_70 = &local_108;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,&local_108);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar22[1] = local_b8.Object;
    puVar22[2] = local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[3] = uVar23;
    puVar22[5] = local_a8;
    puVar22[6] = CONCAT44(uStack_9c,uStack_a0);
    *puVar22 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar22[4] = pFVar5;
    if ((puVar22[5] == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  aVar24 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
            )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar24 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar24 + 8),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_110);
  LOCK();
  aVar3 = (pFVar5->Commands).Head;
  (pFVar5->Commands).Head = aVar24;
  UNLOCK();
  *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> *)
   aVar3 = aVar24;
  (**(code **)(pFVar5->WorkEvent->_padding_ + 0x10))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
             (FWriteAccessScope *)&local_a8);
  if ((local_108.DelegateSize != 0) &&
     (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_108.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_108,0,0,0x10);
    local_108.DelegateSize = 0;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,uStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  if (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_108.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// GetName @ 142d478f0

FString * __thiscall FMessageBus::GetName(FMessageBus *this)

{
  return &this->Name;
}

// GetTracer @ 142d47ea0

TSharedRef<IMessageTracer,1> * __thiscall
FMessageBus::GetTracer(FMessageBus *this,TSharedRef<IMessageTracer,1> *__return_storage_ptr__)

{
  FMessageRouter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = this->Router;
  __return_storage_ptr__->Object = (IMessageTracer *)(pFVar1->Tracer).Object;
  pTVar2 = (pFVar1->Tracer).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Intercept @ 142d4a3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Intercept
          (FMessageBus *this,TSharedRef<IMessageInterceptor,1> *param_1,FTopLevelAssetPath *param_2)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  IAuthorizeMessageRecipients *pIVar2;
  FMessageRouter *pFVar3;
  char cVar4;
  FName *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar5;
  undefined1 local_res18 [16];
  FString local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_2->PackageName != (FName)0x0) &&
     ((pIVar2 = (this->RecipientAuthorizer).Object, pIVar2 == (IAuthorizeMessageRecipients *)0x0 ||
      (cVar4 = (**(code **)*pIVar2)(), cVar4 != '\0')))) {
    if (5 < (byte)LogMessaging._0_1_) {
      this_00 = (FName *)(**(code **)*param_1->Object)(param_1->Object,local_res18);
      ::FName::ToString(this_00,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = this->Router;
    local_38.Data._8_8_ = (ulonglong)(uint)local_38.Data.ArrayMax << 0x20;
    local_38.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FMessageRouter::HandleAddInterceptor;
    this_01 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>_const_&,FTopLevelAssetPath_const_&>
                        (&local_28,pFVar3,(pmf_e393959b *)&local_38,param_1,param_2);
    aVar5 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
             )FMemory::Malloc(0x20,8);
    *(undefined8 *)aVar5 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar5 + 8),
               this_01);
    LOCK();
    aVar1 = (pFVar3->Commands).Head;
    (pFVar3->Commands).Head = aVar5;
    UNLOCK();
    *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
      *)aVar1 = aVar5;
    (**(code **)(pFVar3->WorkEvent->_padding_ + 0x10))();
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  }
  return;
}

// OnShutdown @ 142d4ab20

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FMessageBus::OnShutdown(FMessageBus *this)

{
  return &this->ShutdownDelegate;
}

// Publish @ 142d4af50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Publish
          (FMessageBus *this,void *param_1,UScriptStruct *param_2,EMessageScope param_3,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_4,FTimespan *param_5,FDateTime *param_6,TSharedRef<IMessageSender,1> *param_7)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  FMessageRouter *pFVar2;
  longlong lVar3;
  longlong lVar4;
  long64 lVar5;
  code *pcVar6;
  longlong lVar7;
  TSharedRef<IMessageSender,1> *pTVar8;
  bool bVar9;
  undefined4 uVar10;
  FGuid *this_00;
  FTaskGraphInterface *pFVar11;
  FDateTime FVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar16;
  atomic<int> *paVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FString local_d0;
  TSharedRef<IMessageContext,1> local_c0;
  FString local_b0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined1 local_40 [24];
  
  pTVar8 = param_7;
  if (5 < (byte)LogMessaging._0_1_) {
    this_00 = (FGuid *)(**(code **)*param_7->Object)(param_7->Object,local_40);
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_d0,Digits);
    param_7 = (TSharedRef<IMessageSender,1> *)param_2->_padding_;
    ::FName::ToString((FName *)&param_7,&local_b0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = this->Router;
  pFVar11 = FTaskGraphInterface::Get();
  uVar10 = (**(code **)((longlong)*pFVar11 + 0x10))(pFVar11,0);
  FVar12 = FDateTime::UtcNow();
  lVar3 = param_5->Ticks;
  lVar4 = *(longlong *)FVar12.Ticks;
  param_5 = (FTimespan *)(**(code **)*pTVar8->Object)(pTVar8->Object,local_50);
  pTVar13 = ::operator_new(0xd8);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    local_c0.Object = (IMessageContext *)___xmm_00000000000000000000000000000010;
    pTVar19 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
    pTVar18 = _UNK_150651568;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMessageContext___00_SharedPointerInternals__6B_;
    pTVar13[1]._padding_ = (longlong)&___7FMessageContext__6B_;
    *(undefined8 *)&pTVar13[1].SharedReferenceCount.field_0x0 = 0;
    pTVar13[2]._padding_ = 0;
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar13[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar13[4]._padding_ + 4) = 0x80;
    pTVar13[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar13[6]._padding_ = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)&pTVar13[1].SharedReferenceCount,
              (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)param_4);
    pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[7]._padding_ = 0;
    lVar5 = param_6->Ticks;
    pTVar13[7].SharedReferenceCount = (atomic<int>)(int)lVar5;
    pTVar13[7].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar5 >> 0x20);
    pTVar13[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[9]._padding_ = 0;
    pTVar13[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[8]._padding_ = (longlong)param_1;
    pTVar13[10]._padding_ = 0;
    *(EMessageScope *)&pTVar13[10].SharedReferenceCount = param_3;
    pTVar13[10].WeakReferenceCount = (atomic<int>)0x0;
    lVar7 = param_5->Ticks;
    lVar5 = param_5[1].Ticks;
    *(undefined4 *)&pTVar13[0xc]._padding_ = uVar10;
    *(longlong *)&pTVar13[0xc].SharedReferenceCount = lVar3 + lVar4;
    pTVar13[0xb]._padding_ = lVar7;
    pTVar13[0xb].SharedReferenceCount = (atomic<int>)(int)lVar5;
    pTVar13[0xb].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar5 >> 0x20);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    pTVar13[0xd]._padding_ = 0;
    param_5 = (FTimespan *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar13 + 0xd),(FObjectPtr)&param_5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar19 = pTVar13 + 1;
    if ((pTVar19 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    paVar17 = &pTVar13->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    pTVar18 = pTVar13;
    local_c0.Object = (IMessageContext *)pTVar19;
  }
  local_c0.SharedReferenceCount.ReferenceController = pTVar18;
  FMessageTracer::TraceSentMessage((pFVar2->Tracer).Object,&local_c0);
  uStack_90 = 0;
  local_98 = FMessageRouter::HandleRouteMessage;
  uStack_8c = local_44;
  local_e8 = (undefined1  [8])0x0;
  local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_e0;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,&local_e0);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar14[1] = pTVar19;
    puVar14[2] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar17 = (atomic<int>)((int)*paVar17 + 1);
      UNLOCK();
    }
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[3] = uVar15;
    puVar14[5] = local_98;
    puVar14[6] = CONCAT44(uStack_8c,uStack_90);
    *puVar14 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar14[4] = pFVar2;
    if ((puVar14[5] == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  aVar16 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
            )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar16 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar16 + 8),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_e8);
  LOCK();
  aVar1 = (pFVar2->Commands).Head;
  (pFVar2->Commands).Head = aVar16;
  UNLOCK();
  *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> *)
   aVar1 = aVar16;
  (**(code **)(pFVar2->WorkEvent->_padding_ + 0x10))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_88);
  if ((local_e0.DelegateSize != 0) &&
     (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e0,0,0,0x10);
    local_e0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

// Register @ 142d4ba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Register
          (FMessageBus *this,FMessageAddress *param_1,TSharedRef<IMessageReceiver,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  FMessageRouter *pFVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar5;
  TWeakPtr<IMessageReceiver,1> local_48;
  code *local_38;
  undefined8 uStack_30;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  if (5 < (byte)LogMessaging._0_1_) {
    local_48.Object = (IMessageReceiver *)0x0;
    local_48.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FGuid::AppendString(&param_1->UniqueId,(FString *)&local_48,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_48.Object != (IMessageReceiver *)0x0) {
      FMemory::Free(local_48.Object);
    }
  }
  local_48.Object = param_2->Object;
  pFVar4 = this->Router;
  local_48.WeakReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  local_38 = FMessageRouter::HandleAddRecipient;
  this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FMessageRouter,FMessageAddress_const_&,TWeakPtr<IMessageReceiver,1>_>
                      (&local_28,pFVar4,(pmf_95bae73a *)&local_38,param_1,&local_48);
  aVar5 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
           )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar5 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar5 + 8),
             this_00);
  LOCK();
  aVar3 = (pFVar4->Commands).Head;
  (pFVar4->Commands).Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> *)
   aVar3 = aVar5;
  (**(code **)(pFVar4->WorkEvent->_padding_ + 0x10))();
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// RemoveNotificationListener @ 142d4d740

void __thiscall
FMessageBus::RemoveNotificationListener(FMessageBus *this,TSharedRef<IBusListener,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  FMessageRouter *pFVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar5;
  TWeakPtr<IBusListener,1> local_48;
  code *local_38;
  ulonglong uStack_30;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_48.Object = param_1->Object;
  pFVar4 = this->Router;
  local_48.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_38 = FMessageRouter::HandleRemoveListener;
  this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FMessageRouter,TWeakPtr<IBusListener,1>_>
                      (&local_28,pFVar4,(pmf_33e1ab51 *)&local_38,&local_48);
  aVar5 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
           )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar5 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar5 + 8),
             this_00);
  LOCK();
  aVar3 = (pFVar4->Commands).Head;
  (pFVar4->Commands).Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> *)
   aVar3 = aVar5;
  (**(code **)(pFVar4->WorkEvent->_padding_ + 0x10))();
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// Send @ 142d4e030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Send(FMessageBus *this,void *param_1,UScriptStruct *param_2,EMessageFlags param_3,
                 TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                 *param_4,TSharedPtr<IMessageAttachment,1> *param_5,
                 TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_6,FTimespan *param_7,
                 FDateTime *param_8,TSharedRef<IMessageSender,1> *param_9)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  FMessageRouter *pFVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  FDateTime FVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FName local_res8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  TSharedRef<IMessageContext,1> local_b0;
  FString local_a0;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  if (5 < (byte)LogMessaging._0_1_) {
    local_res8 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res8,&local_a0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = this->Router;
  pFVar6 = FTaskGraphInterface::Get();
  TVar5 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
  FVar7 = FDateTime::UtcNow();
  param_7 = (FTimespan *)(param_7->Ticks + *(longlong *)FVar7.Ticks);
  param_9 = (TSharedRef<IMessageSender,1> *)(**(code **)*param_9->Object)(param_9->Object,local_38);
  pTVar8 = ::operator_new(0xd8);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    local_b0.Object = (IMessageContext *)___xmm_00000000000000000000000000000010;
    pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar12 = (atomic<int> *)&DAT_00000008;
    pTVar13 = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMessageContext___00_SharedPointerInternals__6B_;
    FMessageContext::FMessageContext
              ((FMessageContext *)(pTVar8 + 1),param_1,param_2,param_4,param_5,
               (FMessageAddress *)param_9,param_6,Network,param_3,(FDateTime *)&param_7,param_8,
               TVar5);
    pTVar14 = pTVar8 + 1;
    if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    paVar12 = &pTVar8->SharedReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
    pTVar13 = pTVar8;
    local_b0.Object = (IMessageContext *)pTVar14;
  }
  local_b0.SharedReferenceCount.ReferenceController = pTVar13;
  FMessageTracer::TraceSentMessage((pFVar2->Tracer).Object,&local_b0);
  uStack_80 = 0;
  local_88 = FMessageRouter::HandleRouteMessage;
  uStack_7c = local_2c;
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar9[1] = pTVar14;
    puVar9[2] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar10;
    puVar9[5] = local_88;
    puVar9[6] = CONCAT44(uStack_7c,uStack_80);
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar9[4] = pFVar2;
    if ((puVar9[5] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  aVar11 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
            )FMemory::Malloc(0x20,8);
  *(undefined8 *)aVar11 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar11 + 8),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8);
  LOCK();
  aVar1 = (pFVar2->Commands).Head;
  (pFVar2->Commands).Head = aVar11;
  UNLOCK();
  *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> *)
   aVar1 = aVar11;
  (**(code **)(pFVar2->WorkEvent->_padding_ + 0x10))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_78);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Shutdown @ 142d4e4c0

void __thiscall FMessageBus::Shutdown(FMessageBus *this)

{
  FRunnableThread *pFVar1;
  
  if (this->RouterThread != (FRunnableThread *)0x0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ShutdownDelegate);
    (**(code **)(this->RouterThread->_padding_ + 0x18))(this->RouterThread,1);
    pFVar1 = this->RouterThread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->RouterThread = (FRunnableThread *)0x0;
  }
  return;
}

// Subscribe @ 142d4e7b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageSubscription,1> * __thiscall
FMessageBus::Subscribe
          (FMessageBus *this,TSharedPtr<IMessageSubscription,1> *__return_storage_ptr__,
          TSharedRef<IMessageReceiver,1> *param_1,FTopLevelAssetPath *param_2,
          TRange<EMessageScope> *param_3)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  IAuthorizeMessageRecipients *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMessageRouter *pFVar4;
  code *pcVar5;
  FName FVar6;
  char cVar7;
  bool bVar8;
  FName *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedPtr<IMessageSubscription,1> *pTVar11;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar12;
  TRawPtrProxy<FMessageSubscription> local_res20;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  TSharedRef<IMessageSubscription,1> local_90;
  code *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  bool local_68;
  FString local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [16];
  
  if ((param_2->PackageName == (FName)0x0) ||
     ((pIVar2 = (this->RecipientAuthorizer).Object, pIVar2 != (IAuthorizeMessageRecipients *)0x0 &&
      (cVar7 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,param_1,param_2), cVar7 == '\0')))) {
    __return_storage_ptr__->Object = (IMessageSubscription *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (5 < (byte)LogMessaging._0_1_) {
      this_00 = (FName *)(**(code **)*param_1->Object)(param_1->Object,local_28);
      ::FName::ToString(this_00,&local_58);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    local_res20.Object = ::operator_new(0x30);
    if (local_res20.Object == (FMessageSubscription *)0x0) {
      local_res20.Object = (FMessageSubscription *)0x0;
    }
    else {
      (local_res20.Object)->_padding_ = (longlong)&___7FMessageSubscription__6B_;
      (local_res20.Object)->Enabled = true;
      FVar6 = param_2->AssetName;
      ((local_res20.Object)->MessageType).PackageName = param_2->PackageName;
      ((local_res20.Object)->MessageType).AssetName = FVar6;
      (local_res20.Object)->ScopeRange = *param_3;
      ((local_res20.Object)->Subscriber).Object = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      ((local_res20.Object)->Subscriber).WeakReferenceCount.ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
    TSharedRef<IMessageSubscription,1>::TSharedRef<IMessageSubscription,1><FMessageSubscription>
              (&local_90,&local_res20);
    pFVar4 = this->Router;
    local_78 = FMessageRouter::HandleAddSubscriber;
    iStack_6c = local_58.Data.ArrayMax;
    uStack_70 = 0;
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
      ;
      puVar9[1] = local_90.Object;
      puVar9[2] = local_90.SharedReferenceCount.ReferenceController;
      if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[3] = uVar10;
      *puVar9 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
      ;
      puVar9[4] = pFVar4;
      puVar9[5] = local_78;
      puVar9[6] = CONCAT44(iStack_6c,uStack_70);
      if (((pFVar4 == (FMessageRouter *)0x0) || (puVar9[5] == 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TSharedPtr<IMessageSubscription,1> *)(*pcVar5)();
        return pTVar11;
      }
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    aVar12 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
              )FMemory::Malloc(0x20,8);
    *(undefined8 *)aVar12 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar12 + 8),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
    LOCK();
    aVar1 = (pFVar4->Commands).Head;
    (pFVar4->Commands).Head = aVar12;
    UNLOCK();
    *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
      *)aVar1 = aVar12;
    (**(code **)(pFVar4->WorkEvent->_padding_ + 0x10))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(iStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
    __return_storage_ptr__->Object = local_90.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_90.SharedReferenceCount.ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Unintercept @ 142d50fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Unintercept
          (FMessageBus *this,TSharedRef<IMessageInterceptor,1> *param_1,FTopLevelAssetPath *param_2)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  FMessageRouter *pFVar2;
  FName *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  undefined1 local_res18 [16];
  FString local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  if (param_2->PackageName != (FName)0x0) {
    if (5 < (byte)LogMessaging._0_1_) {
      this_00 = (FName *)(**(code **)*param_1->Object)(param_1->Object,local_res18);
      ::FName::ToString(this_00,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar2 = this->Router;
    local_38.Data._8_8_ = (ulonglong)(uint)local_38.Data.ArrayMax << 0x20;
    local_38.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FMessageRouter::HandleRemoveInterceptor;
    this_01 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>_const_&,FTopLevelAssetPath_const_&>
                        (&local_28,pFVar2,(pmf_e393959b *)&local_38,param_1,param_2);
    aVar3 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
             )FMemory::Malloc(0x20,8);
    *(undefined8 *)aVar3 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar3 + 8),
               this_01);
    LOCK();
    aVar1 = (pFVar2->Commands).Head;
    (pFVar2->Commands).Head = aVar3;
    UNLOCK();
    *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
      *)aVar1 = aVar3;
    (**(code **)(pFVar2->WorkEvent->_padding_ + 0x10))();
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  }
  return;
}

// Unregister @ 142d51190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageBus::Unregister(FMessageBus *this,FMessageAddress *param_1)

{
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar1;
  IAuthorizeMessageRecipients *pIVar2;
  FMessageRouter *pFVar3;
  char cVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar5;
  FString local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  if (5 < (byte)LogMessaging._0_1_) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->UniqueId,&local_38,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pIVar2 = (this->RecipientAuthorizer).Object;
  if ((pIVar2 == (IAuthorizeMessageRecipients *)0x0) ||
     (cVar4 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,param_1), cVar4 != '\0')) {
    if (5 < (byte)LogMessaging._0_1_) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->UniqueId,&local_38,Digits);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = this->Router;
    local_38.Data._8_8_ = local_38.Data._8_8_ & 0xffffffff00000000;
    local_38.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FMessageRouter::HandleRemoveRecipient;
    this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateRaw<FMessageRouter,FMessageAddress_const_&>
                        (&local_28,pFVar3,(pmf_d1360c5d *)&local_38,param_1);
    aVar5 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
             )FMemory::Malloc(0x20,8);
    *(undefined8 *)aVar5 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar5 + 8),
               this_00);
    LOCK();
    aVar1 = (pFVar3->Commands).Head;
    (pFVar3->Commands).Head = aVar5;
    UNLOCK();
    *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
      *)aVar1 = aVar5;
    (**(code **)(pFVar3->WorkEvent->_padding_ + 0x10))();
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  }
  return;
}

// Unsubscribe @ 142d51310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBus::Unsubscribe
          (FMessageBus *this,TSharedRef<IMessageReceiver,1> *param_1,FTopLevelAssetPath *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  IAuthorizeMessageRecipients *pIVar4;
  FMessageRouter *pFVar5;
  char cVar6;
  FName *this_00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar7;
  undefined1 local_res18 [8];
  TWeakPtr<IMessageReceiver,1> local_48;
  FString local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_2->PackageName != (FName)0x0) &&
     ((pIVar4 = (this->RecipientAuthorizer).Object, pIVar4 == (IAuthorizeMessageRecipients *)0x0 ||
      (cVar6 = (**(code **)((longlong)*pIVar4 + 0x30))(), cVar6 != '\0')))) {
    if (5 < (byte)LogMessaging._0_1_) {
      this_00 = (FName *)(**(code **)*param_1->Object)(param_1->Object,local_res18);
      ::FName::ToString(this_00,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    local_48.Object = param_1->Object;
    pFVar5 = this->Router;
    local_48.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_38.Data._8_8_ = (ulonglong)(uint)local_38.Data.ArrayMax << 0x20;
    local_38.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)FMessageRouter::HandleRemoveSubscriber;
    this_01 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateRaw<FMessageRouter,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath_const_&>
                        (&local_28,pFVar5,(pmf_3feee259 *)&local_38,&local_48,param_2);
    aVar7 = (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
             )FMemory::Malloc(0x20,8);
    *(undefined8 *)aVar7 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)aVar7 + 8),
               this_01);
    LOCK();
    aVar3 = (pFVar5->Commands).Head;
    (pFVar5->Commands).Head = aVar7;
    UNLOCK();
    *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
      *)aVar3 = aVar7;
    (**(code **)(pFVar5->WorkEvent->_padding_ + 0x10))();
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
    if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

