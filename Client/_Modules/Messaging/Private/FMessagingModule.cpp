// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 14

// Exec_Runtime @ 142d371f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMessagingModule::Exec_Runtime
          (FMessagingModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"MESSAGING",true);
  if (bVar1) {
    bVar1 = FParse::Command(local_res18,L"STATUS",true);
    if (bVar1) {
      pwVar2 = L"Default message bus has been initialized.";
      if ((this->DefaultBus).Object == (IMessageBus *)0x0) {
        pwVar2 = L"Default message bus has NOT been initialized yet.";
      }
    }
    else {
      FOutputDevice::Log(param_3,L"Usage: MESSAGING <Command>");
      FOutputDevice::Log(param_3,L"");
      FOutputDevice::Log(param_3,L"Command");
      pwVar2 = L"    STATUS = Displays the status of the default message bus";
    }
    FOutputDevice::Log(param_3,pwVar2);
    return true;
  }
  return false;
}

// OnMessageBusStartup @ 142d372b0

TMulticastDelegate<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy> * __thiscall
FMessagingModule::OnMessageBusStartup(FMessagingModule *this)

{
  return (TMulticastDelegate<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy> *)
         &(this->WeakBuses).ArrayNum;
}

// OnMessageBusShutdown @ 142d372c0

TMulticastDelegate<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy> * __thiscall
FMessagingModule::OnMessageBusShutdown(FMessagingModule *this)

{
  return (TMulticastDelegate<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy> *)
         &(this->OnMessageBusStartupDelegate).field_0x18;
}

// CreateBridge @ 142d372d0

TSharedPtr<IMessageBridge,1> * __thiscall
FMessagingModule::CreateBridge
          (FMessagingModule *this,TSharedPtr<IMessageBridge,1> *__return_storage_ptr__,
          FMessageAddress *param_1,TSharedRef<IMessageBus,1> *param_2,
          TSharedRef<IMessageTransport,1> *param_3)

{
  TTypeCompatibleBytes<FMessageBridge> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TIntrusiveReferenceController<FMessageBridge,1> *pTVar9;
  TSharedPtr<IMessageBridge,1> *pTVar10;
  
  pTVar9 = SharedPointerInternals::
           NewIntrusiveReferenceController<1,FMessageBridge,FMessageAddress_const_&,TSharedRef<IMessageBus,1>_const_&,TSharedRef<IMessageTransport,1>_const_&>
                     (param_1,param_2,param_3);
  pTVar1 = &pTVar9->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<FMessageBridge> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedPtr<IMessageBridge,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  else if (((*(longlong *)((pTVar9->ObjectStorage).Pad + 0x20) == 0) ||
           (lVar5 = *(longlong *)((pTVar9->ObjectStorage).Pad + 0x28), lVar5 == 0)) ||
          (*(int *)(lVar5 + 8) < 1)) {
    if (pTVar9 != (TIntrusiveReferenceController<FMessageBridge,1> *)0x0) {
      LOCK();
      *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<FMessageBridge> **)((pTVar9->ObjectStorage).Pad + 0x20) = pTVar1;
    if (pTVar9 != *(TIntrusiveReferenceController<FMessageBridge,1> **)
                   ((pTVar9->ObjectStorage).Pad + 0x28)) {
      if (pTVar9 != (TIntrusiveReferenceController<FMessageBridge,1> *)0x0) {
        LOCK();
        puVar2 = (undefined1 *)((longlong)&pTVar9->_padding_ + 4);
        *(int *)puVar2 = *(int *)puVar2 + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)((pTVar9->ObjectStorage).Pad + 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(TIntrusiveReferenceController<FMessageBridge,1> **)((pTVar9->ObjectStorage).Pad + 0x28) =
           pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar9);
  }
  __return_storage_ptr__->Object = (IMessageBridge *)pTVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar9;
  if (pTVar9 != (TIntrusiveReferenceController<FMessageBridge,1> *)0x0) {
    LOCK();
    *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar9);
  return __return_storage_ptr__;
}

// CreateBus @ 142d373d0

TSharedPtr<IMessageBus,1> * __thiscall
FMessagingModule::CreateBus
          (FMessagingModule *this,TSharedPtr<IMessageBus,1> *__return_storage_ptr__,
          TSharedPtr<IAuthorizeMessageRecipients,1> *param_1)

{
  code *pcVar1;
  FGuid *this_00;
  FString local_28;
  FGuid local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x58);
  this_00 = FGuid::NewGuid(&local_18);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(this_00,&local_28,Digits);
  (*pcVar1)(this,__return_storage_ptr__,&local_28,param_1);
  return __return_storage_ptr__;
}

// CreateBus @ 142d37450

TSharedPtr<IMessageBus,1> * __thiscall
FMessagingModule::CreateBus
          (FMessagingModule *this,TSharedPtr<IMessageBus,1> *__return_storage_ptr__,FString *param_1
          ,TSharedPtr<IAuthorizeMessageRecipients,1> *param_2)

{
  TTypeCompatibleBytes<FMessageBus> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TIntrusiveReferenceController<FMessageBus,1> *pTVar10;
  TSharedPtr<IMessageBus,1> *pTVar11;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 local_68 [16];
  TWeakPtr<IMessageBus,1> local_58;
  undefined1 *local_48;
  TTypeCompatibleBytes<FMessageBus> *local_40;
  TIntrusiveReferenceController<FMessageBus,1> *local_38;
  
  pTVar10 = SharedPointerInternals::
            NewIntrusiveReferenceController<1,FMessageBus,FString,TSharedPtr<IAuthorizeMessageRecipients,1>_const_&>
                      (param_1,param_2);
  pTVar1 = &pTVar10->ObjectStorage;
  if (pTVar1 == (TTypeCompatibleBytes<FMessageBus> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<IMessageBus,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  else if (((*(longlong *)((pTVar10->ObjectStorage).Pad + 8) == 0) ||
           (lVar4 = *(longlong *)((pTVar10->ObjectStorage).Pad + 0x10), lVar4 == 0)) ||
          (*(int *)(lVar4 + 8) < 1)) {
    if (pTVar10 != (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
      LOCK();
      *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
      UNLOCK();
    }
    *(TTypeCompatibleBytes<FMessageBus> **)((pTVar10->ObjectStorage).Pad + 8) = pTVar1;
    if (pTVar10 !=
        *(TIntrusiveReferenceController<FMessageBus,1> **)((pTVar10->ObjectStorage).Pad + 0x10)) {
      if (pTVar10 != (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
        LOCK();
        puVar2 = (undefined1 *)((longlong)&pTVar10->_padding_ + 4);
        *(int *)puVar2 = *(int *)puVar2 + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)((pTVar10->ObjectStorage).Pad + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TIntrusiveReferenceController<FMessageBus,1> **)((pTVar10->ObjectStorage).Pad + 0x10) =
           pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
  if (pTVar10 != (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
    LOCK();
    *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar10);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(*(longlong *)pTVar1->Pad + 0x90))(pTVar1);
  if (pTVar10 != (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)&pTVar10->_padding_ + 4);
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
  }
  local_48 = &this[-1].OnMessageBusShutdownDelegate.field_0x18;
  local_40 = pTVar1;
  local_38 = pTVar10;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FMessagingModule::CreateBus_::__l2::<lambda_1>_>
            (this_00,(<lambda_1> *)&stack0x00000008);
  if (local_38 != (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)&local_38->_padding_ + 4);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(local_38->_padding_ + 8))(local_38,1);
    }
  }
  if (pTVar10 != (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)&pTVar10->_padding_ + 4);
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
  }
  pTVar12 = (this->DefaultBus).SharedReferenceCount.ReferenceController;
  local_68._0_8_ = pTVar1;
  local_68._8_8_ = pTVar10;
  if ((pTVar12 <= (TReferenceControllerBase<1> *)local_68) &&
     ((TReferenceControllerBase<1> *)local_68 <
      pTVar12 + *(int *)((longlong)&(this->WeakBuses).AllocatorInstance.Data + 4))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<IMessageBus,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  iVar9 = *(int *)&(this->WeakBuses).AllocatorInstance.Data;
  piVar3 = (int *)((longlong)&(this->WeakBuses).AllocatorInstance.Data + 4);
  if (iVar9 == *piVar3) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->DefaultBus).SharedReferenceCount,piVar3);
  }
  pTVar12 = (this->DefaultBus).SharedReferenceCount.ReferenceController + iVar9;
  *(int *)&(this->WeakBuses).AllocatorInstance.Data = iVar9 + 1;
  piVar3 = &(this->WeakBuses).ArrayNum;
  pTVar12->_padding_ = local_68._0_8_;
  pTVar12->SharedReferenceCount = (atomic<int>)local_68._8_4_;
  pTVar12->WeakReferenceCount = (atomic<int>)local_68._12_4_;
  local_58.Object = (IMessageBus *)pTVar1;
  local_58.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar10;
  if (pTVar10 == (TIntrusiveReferenceController<FMessageBus,1> *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy>,TWeakPtr<IMessageBus,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)piVar3,&local_58);
    __return_storage_ptr__->Object = (IMessageBus *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    puVar2 = (undefined1 *)((longlong)&pTVar10->_padding_ + 4);
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
    LOCK();
    puVar2 = (undefined1 *)((longlong)&pTVar10->_padding_ + 4);
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy>,TWeakPtr<IMessageBus,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)piVar3,&local_58);
    LOCK();
    puVar2 = (undefined1 *)((longlong)&pTVar10->_padding_ + 4);
    iVar9 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
    __return_storage_ptr__->Object = (IMessageBus *)pTVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar10;
    LOCK();
    *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar10);
  pFVar6 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return __return_storage_ptr__;
}

// GetDefaultBus @ 142d376f0

TSharedPtr<IMessageBus,1> * __thiscall
FMessagingModule::GetDefaultBus
          (FMessagingModule *this,TSharedPtr<IMessageBus,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IMessageBus *)this->_padding_;
  pTVar1 = (TReferenceControllerBase<1> *)(this->DefaultBus).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetAllBuses @ 142d37720

TArray<TSharedRef<IMessageBus,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMessagingModule::GetAllBuses
          (FMessagingModule *this,
          TArray<TSharedRef<IMessageBus,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  TArray<TSharedRef<IMessageBus,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = *(int *)&(this->WeakBuses).AllocatorInstance.Data;
  pTVar11 = (this->DefaultBus).SharedReferenceCount.ReferenceController;
  pTVar10 = pTVar11 + iVar1;
  do {
    while( true ) {
      if (*(int *)&(this->WeakBuses).AllocatorInstance.Data != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<IMessageBus,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pTVar11 == pTVar10) {
        return __return_storage_ptr__;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_142d377a4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pTVar11 = pTVar11 + 1;
    }
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142d377a4;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    lVar2 = pTVar11->_padding_;
    if (lVar2 == 0) goto LAB_142d377a4;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = lVar2;
    local_30 = pTVar9;
    if ((lVar2 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<TSharedRef<IMessageBus,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<TSharedRef<IMessageBus,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(longlong *)pFVar8 = local_38;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_30;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar11 = pTVar11 + 1;
  } while( true );
}

// StartupModule @ 142d378f0

void __thiscall FMessagingModule::StartupModule(FMessagingModule *this)

{
  code *pcVar1;
  FString *pFVar2;
  longlong *plVar3;
  code *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  pTStack_30 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_30 & 0xffffffff00000000);
  local_38 = HandleCorePreExit;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FMessagingModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FMessagingModule *)&stack0x00000008,
             (pmf_bdf09eb2 *)&this[-1].OnMessageBusShutdownDelegate.field_0x18);
  local_38 = (code *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  pcVar1 = *(code **)(this->_padding_ + 0x58);
  pFVar2 = ::FString::FString(&local_18,L"DefaultBus");
  plVar3 = (longlong *)(*pcVar1)(this,local_28,pFVar2,&local_38);
  if (&this->_padding_ != plVar3) {
    this->_padding_ = *plVar3;
    *plVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->DefaultBus,(FSharedReferencer<1> *)(plVar3 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// ShutdownModule @ 142d379c0

void __thiscall FMessagingModule::ShutdownModule(FMessagingModule *this)

{
  undefined1 *this_00;
  
  this_00 = &this[-1].OnMessageBusShutdownDelegate.field_0x18;
  ShutdownDefaultBus((FMessagingModule *)this_00);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,
             this_00);
  return;
}

// SupportsDynamicReloading @ 142d379f0

bool __thiscall FMessagingModule::SupportsDynamicReloading(FMessagingModule *this)

{
  return false;
}

// operator() @ 142d3f550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall `FMessagingModule::CreateBus'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<IMessageBus,1> local_18;
  
  TArray<TWeakPtr<IMessageBus,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
            ((TArray<TWeakPtr<IMessageBus,1>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x20),(TWeakPtr<IMessageBus,1> *)((longlong)this + 8),Default);
  lVar3 = *(longlong *)this;
  local_18.Object = *(IMessageBus **)((longlong)this + 8);
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  local_18.WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy>,TWeakPtr<IMessageBus,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x50),&local_18);
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TWeakPtr<IMessageBus,1>),FDefaultDelegateUserPolicy>,TWeakPtr<IMessageBus,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x50),&local_18);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142d3f5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

// HandleCorePreExit @ 142d488d0

void __thiscall FMessagingModule::HandleCorePreExit(FMessagingModule *this)

{
  TSharedPtr<IMessageBus,1> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackX_8 [8];
  longlong lStack_48;
  FSharedReferencer<1> aFStack_40 [3];
  
  pTVar1 = &this->DefaultBus;
  if ((this->DefaultBus).Object == (IMessageBus *)0x0) {
    return;
  }
  pTVar6 = (this->DefaultBus).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  if ((pTVar1->Object == (IMessageBus *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)((longlong)*pTVar1->Object + 0x38))();
  iVar12 = 0;
  lStack_48 = 0;
  aFStack_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<IMessageBus,1> *)&lStack_48) {
    pTVar1->Object = (IMessageBus *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DefaultBus).SharedReferenceCount,aFStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_40[0].ReferenceController);
  fVar10 = __real_3dcccccd;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    while (0 < (int)pTVar6->SharedReferenceCount) {
      if (10 < iVar12) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Something is holding on the default message bus\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\MessagingModule.cpp"
                            ,0xa6,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        break;
      }
      iVar12 = iVar12 + 1;
      FWindowsPlatformProcess::Sleep(fVar10);
    }
  }
  iVar12 = (this->WeakBuses).ArrayNum;
  pFVar13 = (this->WeakBuses).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar12 * 0x10;
  do {
    if ((this->WeakBuses).ArrayNum != iVar12) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<IMessageBus,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pFVar13 == pFVar14) goto LAB_142d4e6c8;
    plVar7 = *(longlong **)(pFVar13 + 8);
    lVar8 = *(longlong *)pFVar13;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
    if (lVar8 == 0) {
LAB_142d4e663:
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    else if (plVar7 != (longlong *)0x0) {
      if ((int)plVar7[1] < 1) goto LAB_142d4e663;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Something is holding on a message bus\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\MessagingModule.cpp"
                          ,0xb2,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
LAB_142d4e6c8:
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        return;
      }
      LOCK();
      paVar3 = &pTVar6->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 != (atomic<int>)0x1) {
        return;
      }
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      return;
    }
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// ShutdownDefaultBus @ 142d4e510

void __thiscall FMessagingModule::ShutdownDefaultBus(FMessagingModule *this)

{
  TSharedPtr<IMessageBus,1> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  FSharedReferencer<1> aFStack_40 [3];
  
  pTVar1 = &this->DefaultBus;
  if ((this->DefaultBus).Object == (IMessageBus *)0x0) {
    return;
  }
  pTVar6 = (this->DefaultBus).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  if ((pTVar1->Object == (IMessageBus *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)((longlong)*pTVar1->Object + 0x38))();
  iVar12 = 0;
  local_48 = 0;
  aFStack_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<IMessageBus,1> *)&local_48) {
    pTVar1->Object = (IMessageBus *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DefaultBus).SharedReferenceCount,aFStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_40[0].ReferenceController);
  fVar10 = __real_3dcccccd;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    while (0 < (int)pTVar6->SharedReferenceCount) {
      if (10 < iVar12) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Something is holding on the default message bus\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\MessagingModule.cpp"
                            ,0xa6,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        break;
      }
      iVar12 = iVar12 + 1;
      FWindowsPlatformProcess::Sleep(fVar10);
    }
  }
  iVar12 = (this->WeakBuses).ArrayNum;
  pFVar13 = (this->WeakBuses).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar12 * 0x10;
  do {
    if ((this->WeakBuses).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<IMessageBus,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar14) goto LAB_142d4e6c8;
    plVar7 = *(longlong **)(pFVar13 + 8);
    lVar8 = *(longlong *)pFVar13;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
    }
    if (lVar8 == 0) {
LAB_142d4e663:
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    else if (plVar7 != (longlong *)0x0) {
      if ((int)plVar7[1] < 1) goto LAB_142d4e663;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Something is holding on a message bus\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\MessagingModule.cpp"
                          ,0xb2,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
LAB_142d4e6c8:
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        return;
      }
      LOCK();
      paVar3 = &pTVar6->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 != (atomic<int>)0x1) {
        return;
      }
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      return;
    }
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

