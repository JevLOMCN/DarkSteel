// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// FAIMessageObserver @ 146f28990

FAIMessageObserver * __thiscall FAIMessageObserver::FAIMessageObserver(FAIMessageObserver *this)

{
  (this->MessageID).RequestID = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MessageType).ComparisonIndex = 0;
  (this->MessageType).Number = 0;
  *(undefined8 *)&this->ObserverDelegate = 0;
  *(undefined8 *)&(this->ObserverDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ObserverDelegate).field_0x10 = 0;
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FAIMessageObserver @ 146f2e160

void __thiscall FAIMessageObserver::~FAIMessageObserver(FAIMessageObserver *this)

{
  int *piVar1;
  longlong *plVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    plVar2 = *(longlong **)&pUVar3[5].field_0x20;
    for (plVar5 = plVar2; plVar5 != plVar2 + *(int *)(pUVar3 + 6); plVar5 = plVar5 + 1) {
      if ((FAIMessageObserver *)*plVar5 == this) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
        if (iVar4 != -1) {
          memmove(plVar2 + iVar4,plVar2 + iVar4 + 1,
                  (longlong)((*(int *)(pUVar3 + 6) - iVar4) + -1) << 3);
          *(int *)(pUVar3 + 6) = *(int *)(pUVar3 + 6) + -1;
        }
        break;
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ObserverDelegate);
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return;
}

// Create @ 146f3a560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FAIMessageObserver,1> * __cdecl
FAIMessageObserver::Create
          (TSharedPtr<FAIMessageObserver,1> *__return_storage_ptr__,AController *param_1,
          FName param_2,
          TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  UBrainComponent *pUVar2;
  UClass *local_res8;
  
  if (param_1 == (AController *)0x0) {
    pUVar2 = (UBrainComponent *)0x0;
  }
  else {
    pcVar1 = *(code **)(param_1->_padding_ + 0x738);
    local_res8 = UBrainComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar2 = (UBrainComponent *)(*pcVar1)(param_1,&local_res8);
  }
  Create(__return_storage_ptr__,pUVar2,param_2,param_3);
  return __return_storage_ptr__;
}

// Create @ 146f3a5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FAIMessageObserver,1> * __cdecl
FAIMessageObserver::Create
          (TSharedPtr<FAIMessageObserver,1> *__return_storage_ptr__,AController *param_1,
          FName param_2,FAIRequestID param_3,
          TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  UBrainComponent *pUVar2;
  UClass *local_res8;
  
  pUVar2 = (UBrainComponent *)0x0;
  if (param_1 != (AController *)0x0) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x738);
    local_res8 = UBrainComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar2 = (UBrainComponent *)(*pcVar1)(param_1,&local_res8);
  }
  Create(__return_storage_ptr__,pUVar2,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// Create @ 146f3a680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FAIMessageObserver,1> * __cdecl
FAIMessageObserver::Create
          (TSharedPtr<FAIMessageObserver,1> *__return_storage_ptr__,APawn *param_1,FName param_2,
          TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  AController *pAVar1;
  code *pcVar2;
  UBrainComponent *pUVar3;
  UClass *local_res8;
  
  if (param_1 == (APawn *)0x0) {
    pUVar3 = (UBrainComponent *)0x0;
  }
  else {
    pAVar1 = (param_1->Controller).field0_0x0.DebugPtr;
    if (pAVar1 != (AController *)0x0) {
      pcVar2 = *(code **)(pAVar1->_padding_ + 0x738);
      local_res8 = UBrainComponent::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pUVar3 = (UBrainComponent *)(*pcVar2)(pAVar1,&local_res8);
      if (pUVar3 != (UBrainComponent *)0x0) goto LAB_146f3a704;
    }
    pUVar3 = AActor::FindComponentByClass<UBrainComponent>((AActor *)param_1);
  }
LAB_146f3a704:
  Create(__return_storage_ptr__,pUVar3,param_2,param_3);
  return __return_storage_ptr__;
}

// Create @ 146f3a730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FAIMessageObserver,1> * __cdecl
FAIMessageObserver::Create
          (TSharedPtr<FAIMessageObserver,1> *__return_storage_ptr__,APawn *param_1,FName param_2,
          FAIRequestID param_3,
          TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  AController *pAVar1;
  code *pcVar2;
  UBrainComponent *pUVar3;
  UClass *local_res8;
  
  pUVar3 = (UBrainComponent *)0x0;
  if (param_1 != (APawn *)0x0) {
    pAVar1 = (param_1->Controller).field0_0x0.DebugPtr;
    if (pAVar1 != (AController *)0x0) {
      pcVar2 = *(code **)(pAVar1->_padding_ + 0x738);
      local_res8 = UBrainComponent::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pUVar3 = (UBrainComponent *)(*pcVar2)(pAVar1,&local_res8);
      if (pUVar3 != (UBrainComponent *)0x0) goto LAB_146f3a7b5;
    }
    pUVar3 = AActor::FindComponentByClass<UBrainComponent>((AActor *)param_1);
  }
LAB_146f3a7b5:
  Create(__return_storage_ptr__,pUVar3,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// Create @ 146f3a7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FAIMessageObserver,1> * __cdecl
FAIMessageObserver::Create
          (TSharedPtr<FAIMessageObserver,1> *__return_storage_ptr__,UBrainComponent *param_1,
          FName param_2,
          TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  FAIMessageObserver *pFVar3;
  TSharedPtr<FAIMessageObserver,1> *pTVar4;
  FAIMessageObserver *this;
  TRawPtrProxy<FAIMessageObserver> local_res8;
  
  this = (FAIMessageObserver *)0x0;
  __return_storage_ptr__->Object = (FAIMessageObserver *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1 != (UBrainComponent *)0x0) {
    pFVar3 = ::operator_new(0x40);
    if (pFVar3 != (FAIMessageObserver *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      (pFVar3->MessageID).RequestID = 0xffffffff;
      *(undefined8 *)&pFVar3->ObserverDelegate = 0;
      *(undefined8 *)&(pFVar3->ObserverDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar3->ObserverDelegate).field_0x10 = 0;
      (pFVar3->Owner).WeakPtr = (FWeakObjectPtr)0x0;
      this = pFVar3;
    }
    this->MessageType = param_2;
    this->bFilterByID = false;
    TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>::
    operator=(&this->ObserverDelegate,param_3);
    Register(this,param_1);
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FAIMessageObserver,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_res8.Object = this;
    TSharedPtr<FAIMessageObserver,1>::operator=<FAIMessageObserver>
              (__return_storage_ptr__,&local_res8);
  }
  return __return_storage_ptr__;
}

// Create @ 146f3a8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedPtr<FAIMessageObserver,1> * __cdecl
FAIMessageObserver::Create
          (TSharedPtr<FAIMessageObserver,1> *__return_storage_ptr__,UBrainComponent *param_1,
          FName param_2,FAIRequestID param_3,
          TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  FAIMessageObserver *pFVar3;
  TSharedPtr<FAIMessageObserver,1> *pTVar4;
  FAIMessageObserver *this;
  TRawPtrProxy<FAIMessageObserver> local_res8;
  
  this = (FAIMessageObserver *)0x0;
  __return_storage_ptr__->Object = (FAIMessageObserver *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1 != (UBrainComponent *)0x0) {
    pFVar3 = ::operator_new(0x40);
    if (pFVar3 != (FAIMessageObserver *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      *(undefined8 *)&pFVar3->ObserverDelegate = 0;
      *(undefined8 *)&(pFVar3->ObserverDelegate).field_0x8 = 0;
      *(undefined4 *)&(pFVar3->ObserverDelegate).field_0x10 = 0;
      (pFVar3->Owner).WeakPtr = (FWeakObjectPtr)0x0;
      this = pFVar3;
    }
    this->MessageType = param_2;
    (this->MessageID).RequestID = param_3.RequestID;
    this->bFilterByID = true;
    TDelegate<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>::
    operator=(&this->ObserverDelegate,param_4);
    Register(this,param_1);
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FAIMessageObserver,1> *)(*pcVar1)();
      return pTVar4;
    }
    local_res8.Object = this;
    TSharedPtr<FAIMessageObserver,1>::operator=<FAIMessageObserver>
              (__return_storage_ptr__,&local_res8);
  }
  return __return_storage_ptr__;
}

// DescribeObservedMessage @ 146f40d50

FString * __thiscall
FAIMessageObserver::DescribeObservedMessage
          (FAIMessageObserver *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->MessageType,__return_storage_ptr__);
  if (this->bFilterByID != false) {
    ::FString::AppendChar(__return_storage_ptr__,L':');
    ::FString::AppendInt(__return_storage_ptr__,(this->MessageID).RequestID);
  }
  return __return_storage_ptr__;
}

// OnMessage @ 146f5e3e0

void __thiscall FAIMessageObserver::OnMessage(FAIMessageObserver *this,FAIMessage *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  UObject *pUVar4;
  FReadAccessScope local_28;
  
  if ((param_1->MessageName == this->MessageType) &&
     ((this->bFilterByID == false ||
      (((uVar1 = (this->MessageID).RequestID, uVar1 != 0xffffffff &&
        (uVar2 = (param_1->RequestID).RequestID, uVar2 != 0xffffffff)) &&
       ((uVar2 == uVar1 || ((uVar2 == 0 || (uVar1 == 0)))))))))) {
    pUVar4 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ObserverDelegate,
               &local_28);
    if ((*(int *)&(this->ObserverDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->ObserverDelegate).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,pUVar4,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// Register @ 146f652a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FAIMessageObserver::Register(FAIMessageObserver *this,UBrainComponent *param_1)

{
  int *piVar1;
  TArray<FAIMessageObserver_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UBrainComponent *local_res8;
  FAIMessageObserver *local_18 [2];
  
  pTVar2 = &param_1->MessageObservers;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(param_1->MessageObservers).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->MessageObservers).ArrayNum;
  piVar1 = &(param_1->MessageObservers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_1->MessageObservers).ArrayNum = iVar6 + 1;
  *(FAIMessageObserver **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBrainComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// Unregister @ 146f7c990

void __thiscall FAIMessageObserver::Unregister(FAIMessageObserver *this)

{
  longlong *plVar1;
  UObject *pUVar2;
  int iVar3;
  longlong *plVar4;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    plVar1 = *(longlong **)&pUVar2[5].field_0x20;
    plVar4 = plVar1;
    if (plVar1 != plVar1 + *(int *)(pUVar2 + 6)) {
      while ((FAIMessageObserver *)*plVar4 != this) {
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar1 + *(int *)(pUVar2 + 6)) {
          return;
        }
      }
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
      if (iVar3 != -1) {
        memmove(plVar1 + iVar3,plVar1 + iVar3 + 1,
                (longlong)((*(int *)(pUVar2 + 6) - iVar3) + -1) << 3);
        *(int *)(pUVar2 + 6) = *(int *)(pUVar2 + 6) + -1;
      }
    }
  }
  return;
}

