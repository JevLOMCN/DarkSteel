// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 17

// FMessageBridge @ 142d3d450

FMessageBridge * __thiscall
FMessageBridge::FMessageBridge
          (FMessageBridge *this,FMessageAddress *param_1,TSharedRef<IMessageBus,1> *param_2,
          TSharedRef<IMessageTransport,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  FMessageBridge *pFVar8;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  LPCRITICAL_SECTION p_Var9;
  
  uVar3 = (param_1->UniqueId).A;
  uVar4 = (param_1->UniqueId).B;
  uVar5 = (param_1->UniqueId).C;
  uVar6 = (param_1->UniqueId).D;
  p_Var9 = (LPCRITICAL_SECTION)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMessageBridge__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMessageReceiver__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IMessageSender__;
  this->_padding_ = (longlong)&_vftable__for__IMessageTransportHandler__;
  (this->Address).UniqueId.A = uVar3;
  (this->Address).UniqueId.B = uVar4;
  (this->Address).UniqueId.C = uVar5;
  (this->Address).UniqueId.D = uVar6;
  *(undefined8 *)&(this->AddressBook).Entries = 0;
  *(undefined8 *)&(this->AddressBook).Entries.field_0x8 = 0;
  *(undefined8 *)&(this->AddressBook).Entries.field_0x20 = 0;
  *(undefined4 *)&(this->AddressBook).Entries.field_0x28 = 0;
  *(undefined4 *)&(this->AddressBook).Entries.field_0x2c = 0x80;
  *(undefined4 *)&(this->AddressBook).Entries.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddressBook).Entries.field_0x34 = 0;
  *(undefined8 *)&(this->AddressBook).Entries.field_0x40 = 0;
  *(undefined4 *)&(this->AddressBook).Entries.field_0x48 = 0;
  lpCriticalSection = ::operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    p_Var9 = lpCriticalSection;
  }
  (this->AddressBook).CriticalSection = (FWindowsRecursiveMutex *)p_Var9;
  (this->Bus).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Bus).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Enabled = false;
  FGuid::NewGuid(&this->Id);
  (this->MessageSubscription).Object = (IMessageSubscription *)0x0;
  (this->MessageSubscription).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Transport).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->Transport).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((this->Bus).Object == (IMessageBus *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FMessageBridge *)(*pcVar2)();
    return pFVar8;
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*(this->Bus).Object + 0x90))();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FMessageBridge>(this_00,(FMessageBridge *)&stack0x00000008,(pmf_cf478952 *)this);
  return this;
}

// ~FMessageBridge @ 142d3e930

void __thiscall FMessageBridge::~FMessageBridge(FMessageBridge *this)

{
  int *piVar1;
  int iVar2;
  IMessageSubscription *pIVar3;
  IMessageTransport *pIVar4;
  IMessageBus *pIVar5;
  LPCRITICAL_SECTION p_Var6;
  void *pvVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_28;
  
  this->_padding_ = (longlong)&_vftable__for__IMessageBridge__;
  this->_padding_ = (longlong)&_vftable__for__IMessageReceiver__;
  this->_padding_ = (longlong)&_vftable__for__IMessageSender__;
  this->_padding_ = (longlong)&_vftable__for__IMessageTransportHandler__;
  if (this->Enabled != false) {
    pIVar3 = (this->MessageSubscription).Object;
    if (pIVar3 != (IMessageSubscription *)0x0) {
      (**(code **)*pIVar3)();
    }
    pIVar4 = (this->Transport).Object;
    if (pIVar4 != (IMessageTransport *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    this->Enabled = false;
  }
  pIVar5 = (this->Bus).Object;
  if (pIVar5 != (IMessageBus *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar5 + 0x90))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    if ((this->Bus).Object == (IMessageBus *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pIVar5 = (this->Bus).Object;
    (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,&this->Address);
    p_Var6 = (LPCRITICAL_SECTION)(this->AddressBook).CriticalSection;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if (p_Var6 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(p_Var6);
    TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
                *)&(this->AddressBook).Entries,&local_28);
    TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
             *)&(this->AddressBook).Entries);
    LeaveCriticalSection(p_Var6);
    iVar2 = local_28.ArrayNum;
    uVar11 = (ulonglong)local_28.ArrayNum;
    pFVar13 = local_28.AllocatorInstance.Data + uVar11 * 0x10;
    FVar12.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMessageAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar12.Data == pFVar13) break;
      if ((this->Bus).Object == (IMessageBus *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pIVar5 = (this->Bus).Object;
      (**(code **)((longlong)*pIVar5 + 0x60))(pIVar5,FVar12.Data);
      uVar11 = local_28._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Transport).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageSubscription).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Bus).SharedReferenceCount.ReferenceController);
  p_Var6 = (LPCRITICAL_SECTION)(this->AddressBook).CriticalSection;
  if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(p_Var6);
    ::operator_delete(p_Var6,0x28);
  }
  *(undefined4 *)&(this->AddressBook).Entries.field_0x48 = 0;
  pvVar7 = *(void **)&(this->AddressBook).Entries.field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AddressBook).Entries);
  this->_padding_ = (longlong)&___7IMessageTransportHandler__6B_;
  this->_padding_ = (longlong)&___7IMessageSender__6B_;
  this->_padding_ = (longlong)&___7IMessageReceiver__6B_;
  this->_padding_ = (longlong)&___7IMessageBridge__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// Disable @ 142d44310

void __thiscall FMessageBridge::Disable(FMessageBridge *this)

{
  IMessageSubscription *pIVar1;
  IMessageTransport *pIVar2;
  
  if (this->Enabled != false) {
    pIVar1 = (this->MessageSubscription).Object;
    if (pIVar1 != (IMessageSubscription *)0x0) {
      (**(code **)*pIVar1)();
    }
    pIVar2 = (this->Transport).Object;
    if (pIVar2 != (IMessageTransport *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    this->Enabled = false;
  }
  return;
}

// DiscoverTransportNode @ 142d44370

void __thiscall FMessageBridge::DiscoverTransportNode(FMessageBridge *this,FGuid *param_1)

{
  return;
}

// Enable @ 142d44de0

void __thiscall FMessageBridge::Enable(FMessageBridge *this)

{
  TSharedPtr<IMessageSubscription,1> *pTVar1;
  IMessageTransport *pIVar2;
  code *pcVar3;
  char cVar4;
  IMessageBus *pIVar5;
  TSharedRef<FMessageBridge,1> *pTVar6;
  undefined8 *puVar7;
  undefined4 local_res8 [2];
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FMessageBridge,1> local_38;
  TSharedRef<FMessageBridge,1> local_28;
  
  if ((((this->Enabled == false) && ((this->Bus).Object != (IMessageBus *)0x0)) &&
      (pIVar2 = (this->Transport).Object, pIVar2 != (IMessageTransport *)0x0)) &&
     (cVar4 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&this->_padding_), cVar4 != '\0')) {
    pIVar5 = TSharedPtr<IMessageBus,1>::operator->(&this->Bus);
    pcVar3 = *(code **)((longlong)*pIVar5 + 0x28);
    pTVar6 = TSharedFromThis<FMessageBridge,1>::AsShared
                       ((TSharedFromThis<FMessageBridge,1> *)&this->_padding_,&local_38);
    if (pTVar6->Object == (FMessageBridge *)0x0) {
      local_48 = (longlong *)0x0;
    }
    else {
      local_48 = &pTVar6->Object->_padding_;
    }
    local_40 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(pIVar5,&this->Address,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pTVar1 = &this->MessageSubscription;
    if (pTVar1->Object == (IMessageSubscription *)0x0) {
      pIVar5 = TSharedPtr<IMessageBus,1>::operator->(&this->Bus);
      local_res8[0] = 0x20201;
      pcVar3 = *(code **)((longlong)*pIVar5 + 0x40);
      pTVar6 = TSharedFromThis<FMessageBridge,1>::AsShared
                         ((TSharedFromThis<FMessageBridge,1> *)&this->_padding_,&local_28);
      if (pTVar6->Object == (FMessageBridge *)0x0) {
        local_48 = (longlong *)0x0;
      }
      else {
        local_48 = &pTVar6->Object->_padding_;
      }
      local_40 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar7 = (undefined8 *)
               (*pcVar3)(pIVar5,&local_38,&local_48,&IMessageBus::PATHNAME_All,local_res8);
      if (pTVar1 != (TSharedPtr<IMessageSubscription,1> *)puVar7) {
        pTVar1->Object = (IMessageSubscription *)*puVar7;
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MessageSubscription).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar7 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    else {
      (**(code **)((longlong)*pTVar1->Object + 8))();
    }
    this->Enabled = true;
  }
  return;
}

// ForgetTransportNode @ 142d46d80

void __thiscall FMessageBridge::ForgetTransportNode(FMessageBridge *this,FGuid *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FMessageAddressBook::RemoveNode((FMessageAddressBook *)&this->_padding_,param_1,&local_18);
  if (*(longlong *)&(this->AddressBook).Entries.field_0x38 != 0) {
    iVar3 = local_18.ArrayNum;
    uVar5 = (ulonglong)local_18.ArrayNum;
    pFVar7 = local_18.AllocatorInstance.Data + uVar5 * 0x10;
    FVar6.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMessageAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar7) break;
      if ((*(longlong *)&(this->AddressBook).Entries.field_0x38 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)&(this->AddressBook).Entries.field_0x38;
      (**(code **)(*plVar1 + 0x60))(plVar1,FVar6.Data);
      uVar5 = local_18._8_8_ & 0xffffffff;
      FVar6.Data = FVar6.Data + 0x10;
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetDebugName @ 142d47560

FName __thiscall FMessageBridge::GetDebugName(FMessageBridge *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  FName *this_00;
  FName in_RDX;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  if (((this->MessageSubscription).SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FName)(*pcVar2)();
    return FVar4;
  }
  pTVar1 = (this->MessageSubscription).SharedReferenceCount.ReferenceController;
  this_00 = (FName *)(**(code **)pTVar1->_padding_)(pTVar1,local_res8);
  ::FName::ToString(this_00,&local_18);
  ::FString::PrintfImpl(&local_28,L"FMessageBridge (%s)");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)FVar5.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetRecipientId @ 142d47ac0

FGuid * __thiscall FMessageBridge::GetRecipientId(FMessageBridge *this)

{
  return (FGuid *)((longlong)&(this->Bus).SharedReferenceCount.ReferenceController + 4);
}

// GetRecipientThread @ 142d47ad0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FMessageBridge::GetRecipientThread(FMessageBridge *this)

{
  return AnyNormalThreadNormalTask;
}

// GetSenderAddress @ 142d47b40

FMessageAddress * __thiscall
FMessageBridge::GetSenderAddress(FMessageBridge *this,FMessageAddress *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar2 = *(undefined4 *)&this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->UniqueId).A = *(undefined4 *)&this->_padding_;
  (__return_storage_ptr__->UniqueId).B = uVar1;
  (__return_storage_ptr__->UniqueId).C = uVar2;
  (__return_storage_ptr__->UniqueId).D = uVar3;
  return __return_storage_ptr__;
}

// HandleMessageBusShutdown @ 142d488e0

void __thiscall FMessageBridge::HandleMessageBusShutdown(FMessageBridge *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (**(code **)this->_padding_)();
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Bus != (TSharedPtr<IMessageBus,1> *)&local_18) {
    (this->Bus).Object = (IMessageBus *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Bus).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// IsEnabled @ 142d4a5a0

bool __thiscall FMessageBridge::IsEnabled(FMessageBridge *this)

{
  return this->Enabled;
}

// IsLocal @ 142d4a5c0

bool __thiscall FMessageBridge::IsLocal(FMessageBridge *this)

{
  return false;
}

// LookupAddress @ 142d4a670

FGuid * __thiscall
FMessageBridge::LookupAddress
          (FMessageBridge *this,FGuid *__return_storage_ptr__,FMessageAddress *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FGuid *pFVar5;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((((param_1->UniqueId).D != 0 || (param_1->UniqueId).C != 0) || (param_1->UniqueId).B != 0) ||
      (param_1->UniqueId).A != 0) {
    local_28._0_4_ = (param_1->UniqueId).A;
    local_28._4_4_ = (param_1->UniqueId).B;
    uStack_20._0_4_ = (param_1->UniqueId).C;
    uStack_20._4_4_ = (param_1->UniqueId).D;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    local_18 = local_28;
    uStack_10 = uStack_20;
    *(undefined8 *)local_48.AllocatorInstance.Data = local_28;
    *(undefined8 *)(local_48.AllocatorInstance.Data + 8) = uStack_20;
    FMessageAddressBook::GetNodesFor(&this->AddressBook,&local_38,&local_48);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if ((1 < local_38.ArrayNum) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<255623113289498735>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\Bridge\\MessageBridge.cpp"
                           ,0x6f,"RemoteNodes.Num() <= 1"), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGuid *)(*pcVar1)();
      return pFVar5;
    }
    if ((0 < local_38.ArrayNum) &&
       (((*(int *)(local_38.AllocatorInstance.Data + 0xc) != 0 ||
         *(int *)(local_38.AllocatorInstance.Data + 8) != 0) ||
        *(int *)(local_38.AllocatorInstance.Data + 4) != 0) ||
        *(int *)local_38.AllocatorInstance.Data != 0)) {
      if ((local_38.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar1)();
        return pFVar5;
      }
      uVar2 = *(undefined8 *)local_38.AllocatorInstance.Data;
      uVar3 = *(undefined8 *)(local_38.AllocatorInstance.Data + 8);
      __return_storage_ptr__->A = (int)uVar2;
      __return_storage_ptr__->B = (int)((ulonglong)uVar2 >> 0x20);
      __return_storage_ptr__->C = (int)uVar3;
      __return_storage_ptr__->D = (int)((ulonglong)uVar3 >> 0x20);
      if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_38.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// NotifyMessageError @ 142d4a7f0

void __thiscall
FMessageBridge::NotifyMessageError
          (FMessageBridge *this,TSharedRef<IMessageContext,1> *param_1,FString *param_2)

{
  return;
}

// ReceiveMessage @ 142d4b3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBridge::ReceiveMessage(FMessageBridge *this,TSharedRef<IMessageContext,1> *param_1)

{
  IMessageContext *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FGuid *this_00;
  longlong lVar5;
  FWeakObjectPtr *pFVar6;
  UStruct *this_01;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FTopLevelAssetPath local_48;
  FString local_38;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_28;
  
  if (5 < (byte)LogMessaging._0_1_) {
    this_00 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_58,Digits);
    pIVar1 = param_1->Object;
    lVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    if (lVar5 == 0) {
LAB_142d4b46d:
      local_48.PackageName.ComparisonIndex.Value = 0;
      local_48.PackageName.Number = 0;
      local_48.AssetName.ComparisonIndex.Value = 0;
      local_48.AssetName.Number = 0;
    }
    else {
      pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      bVar4 = FWeakObjectPtr::IsValid(pFVar6,false,true);
      if (!bVar4) goto LAB_142d4b46d;
      pFVar6 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar6);
      UStruct::GetStructPathName(this_01,&local_48);
    }
    FTopLevelAssetPath::ToString(&local_48,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (*(char *)&(this->Bus).SharedReferenceCount.ReferenceController == '\0') {
    return;
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  lVar5 = (**(code **)((longlong)*param_1->Object + 0x30))();
  if (0 < *(int *)(lVar5 + 8)) {
    pTVar7 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*param_1->Object + 0x30))();
    pTVar8 = FMessageAddressBook::GetNodesFor
                       ((FMessageAddressBook *)&(this->Address).UniqueId.C,&local_28,pTVar7);
    if (&local_68 != pTVar8) {
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      local_68.AllocatorInstance.Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = pTVar8->ArrayNum;
      local_68.ArrayMax = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_68.ArrayNum == 0) goto LAB_142d4b596;
  }
  if (((this->MessageSubscription).SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = (this->MessageSubscription).SharedReferenceCount.ReferenceController;
  (**(code **)(pTVar2->_padding_ + 0x18))(pTVar2,param_1,&local_68);
LAB_142d4b596:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// ReceiveTransportMessage @ 142d4b5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageBridge::ReceiveTransportMessage
          (FMessageBridge *this,TSharedRef<IMessageContext,1> *param_1,FGuid *param_2)

{
  undefined1 *this_00;
  IMessageContext *pIVar1;
  LPCRITICAL_SECTION p_Var2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  FGuid *pFVar8;
  longlong lVar9;
  FWeakObjectPtr *pFVar10;
  UStruct *this_01;
  FDateTime FVar11;
  FMessageAddress *pFVar12;
  FTopLevelAssetPath *this_02;
  IMessageBus *pIVar13;
  TSharedRef<FMessageBridge,1> *pTVar14;
  undefined8 uVar15;
  FGuid *pFVar16;
  FMessageBridge *local_res8;
  undefined1 local_res20 [8];
  FString local_78;
  FString local_68;
  FTopLevelAssetPath local_58;
  TSharedRef<FMessageBridge,1> local_48;
  
  local_res8 = this;
  if (5 < (byte)LogMessaging._0_1_) {
    plVar7 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x30))();
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar4 = true;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    lVar9 = plVar7[1];
    pFVar8 = (FGuid *)*plVar7;
    pFVar16 = pFVar8 + (int)lVar9;
    while( true ) {
      if ((int)plVar7[1] != (int)lVar9) {
        `TCheckedPointerIterator<FMessageAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      this = local_res8;
      if (pFVar8 == pFVar16) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_78,L"+",1);
      }
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar8,&local_68,Digits);
      iVar6 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar6);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar8 = pFVar8 + 1;
    }
    if (5 < (byte)LogMessaging._0_1_) {
      pFVar8 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar8,&local_68,Digits);
      pIVar1 = param_1->Object;
      lVar9 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      if (lVar9 == 0) {
LAB_142d4b746:
        local_58.PackageName.ComparisonIndex.Value = 0;
        local_58.PackageName.Number = 0;
        local_58.AssetName.ComparisonIndex.Value = 0;
        local_58.AssetName.Number = 0;
      }
      else {
        pFVar10 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
        bVar4 = FWeakObjectPtr::IsValid(pFVar10,false,true);
        if (!bVar4) goto LAB_142d4b746;
        pFVar10 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
        this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar10);
        UStruct::GetStructPathName(this_01,&local_58);
      }
      FTopLevelAssetPath::ToString(&local_58,(FString *)&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      if (local_48.Object != (FMessageBridge *)0x0) {
        FMemory::Free(local_48.Object);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (((this->AddressBook).Entries.field_0x48 != '\0') &&
     (this_00 = &(this->AddressBook).Entries.field_0x38, *(longlong *)this_00 != 0)) {
    plVar7 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x10))();
    FVar11 = FDateTime::UtcNow();
    if (*plVar7 < *(longlong *)FVar11.Ticks) {
      if (5 < (byte)LogMessaging._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
      }
    }
    else {
      pFVar12 = (FMessageAddress *)(**(code **)((longlong)*param_1->Object + 0x48))();
      p_Var2 = (LPCRITICAL_SECTION)this->_padding_;
      if (p_Var2 == (LPCRITICAL_SECTION)0x0) {
LAB_142d4ba15:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(p_Var2);
      uVar5 = FCrc::MemCrc_DEPRECATED(pFVar12,0x10,0);
      iVar6 = TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMessageAddress>
                        ((TSet<TTuple<FMessageAddress,FGuid>,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>,FDefaultSetAllocator>
                          *)&this->Address,uVar5,pFVar12);
      LeaveCriticalSection(p_Var2);
      if (iVar6 == -1) {
        if (5 < (byte)LogMessaging._0_1_) {
          this_02 = IMessageContext::GetMessageTypePathName(param_1->Object,&local_58);
          FTopLevelAssetPath::ToString(this_02,(FString *)&local_48);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMessaging);
          if (local_48.Object != (FMessageBridge *)0x0) {
            FMemory::Free(local_48.Object);
          }
        }
        pFVar12 = (FMessageAddress *)(**(code **)((longlong)*param_1->Object + 0x48))();
        p_Var2 = (LPCRITICAL_SECTION)this->_padding_;
        if (p_Var2 == (LPCRITICAL_SECTION)0x0) goto LAB_142d4ba15;
        EnterCriticalSection(p_Var2);
        local_48.Object = *(FMessageBridge **)param_2;
        local_48.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)&param_2->C;
        uVar5 = FCrc::MemCrc_DEPRECATED(pFVar12,0x10,0);
        pFVar8 = TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
                 ::FindOrAddImpl<FMessageAddress_const_&>
                           ((TMapBase<FMessageAddress,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,FGuid,0>_>
                             *)&this->Address,uVar5,pFVar12);
        pFVar8->A = (uint)local_48.Object;
        pFVar8->B = local_48.Object._4_4_;
        pFVar8->C = (uint)local_48.SharedReferenceCount.ReferenceController;
        pFVar8->D = local_48.SharedReferenceCount.ReferenceController._4_4_;
        LeaveCriticalSection(p_Var2);
        pIVar13 = TSharedPtr<IMessageBus,1>::operator->((TSharedPtr<IMessageBus,1> *)this_00);
        pcVar3 = *(code **)((longlong)*pIVar13 + 0x28);
        pTVar14 = TSharedFromThis<FMessageBridge,1>::AsShared
                            ((TSharedFromThis<FMessageBridge,1> *)&this->_padding_,&local_48);
        if (pTVar14->Object == (FMessageBridge *)0x0) {
          local_58.PackageName.ComparisonIndex.Value = 0;
          local_58.PackageName.Number = 0;
        }
        else {
          local_58.PackageName = (FName)&pTVar14->Object->_padding_;
        }
        local_58.AssetName = (FName)(pTVar14->SharedReferenceCount).ReferenceController;
        if (local_58.AssetName != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)local_58.AssetName + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)local_58.AssetName + 8) + 1);
          UNLOCK();
        }
        uVar15 = (**(code **)((longlong)*param_1->Object + 0x48))();
        (*pcVar3)(pIVar13,uVar15,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58.AssetName);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      pIVar13 = TSharedPtr<IMessageBus,1>::operator->((TSharedPtr<IMessageBus,1> *)this_00);
      pcVar3 = *(code **)*pIVar13;
      pTVar14 = TSharedFromThis<FMessageBridge,1>::AsShared
                          ((TSharedFromThis<FMessageBridge,1> *)&this->_padding_,&local_48);
      if (pTVar14->Object == (FMessageBridge *)0x0) {
        local_58.PackageName.ComparisonIndex.Value = 0;
        local_58.PackageName.Number = 0;
      }
      else {
        local_58.PackageName = (FName)&pTVar14->Object->_padding_;
      }
      local_58.AssetName = (FName)(pTVar14->SharedReferenceCount).ReferenceController;
      if (local_58.AssetName != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_58.AssetName + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_58.AssetName + 8) + 1);
        UNLOCK();
      }
      local_res8 = (FMessageBridge *)0x0;
      uVar15 = (**(code **)((longlong)*param_1->Object + 0x30))();
      (*pcVar3)(pIVar13,param_1,uVar15,&local_res8,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_58.AssetName);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

