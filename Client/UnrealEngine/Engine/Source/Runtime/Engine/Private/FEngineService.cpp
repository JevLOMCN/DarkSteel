// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FEngineService @ 147b39530

/* WARNING: Enum "Type": Some values do not have unique names */

FEngineService * __thiscall FEngineService::FEngineService(FEngineService *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  FMessageEndpoint *pFVar4;
  TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *pTVar5;
  IMessageBus *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  atomic<int> aVar10;
  FName *pFVar11;
  FModuleManager *this_00;
  IModuleInterface *pIVar12;
  undefined8 *puVar13;
  FTaskGraphInterface *pFVar14;
  TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *pTVar15;
  FEngineService *pFVar16;
  UScriptStruct *this_01;
  FTopLevelAssetPath *pFVar17;
  TSharedRef<FMessageEndpoint,1> *pTVar18;
  longlong lVar19;
  TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *pTVar20;
  undefined4 local_res8 [2];
  FName local_res10;
  TRawPtrProxy<TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_> local_res18;
  TRawPtrProxy<TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_> local_res20;
  undefined1 local_178 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  ForAnyElementType FStack_158;
  int local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  bool local_138;
  FName local_134;
  Type local_12c;
  TSharedPtr<IMessageHandler,1> local_128;
  TSharedPtr<IMessageHandler,1> local_118;
  TSharedPtr<IMessageHandler,1> local_108;
  TSharedPtr<IMessageHandler,1> local_f8;
  TSharedPtr<IMessageHandler,1> local_e8;
  TSharedPtr<FMessageEndpoint,1> local_d8;
  TRawPtrProxy<TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_> local_c8;
  TRawPtrProxy<TRawMessageHandler<FEngineServicePing,FEngineService>_> local_c0;
  TRawPtrProxy<TRawMessageHandler<FEngineServiceTerminate,FEngineService>_> local_b8;
  FMessageEndpoint *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FDestructionSentinel local_a0;
  FName local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  TSharedRef<FMessageEndpoint,1> local_60;
  FTopLevelAssetPath local_50;
  
  pTVar20 = (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0;
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FName::FName(&local_res10,"FEngineService");
  pFVar11 = ::FName::FName(&local_88,"Messaging");
  FVar3 = *pFVar11;
  this_00 = FModuleManager::Get();
  pIVar12 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x68))(pIVar12,local_80);
  local_178._0_8_ = *puVar13;
  local_178._8_8_ = puVar13[1];
  if ((TReferenceControllerBase<1> *)local_178._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_178._8_8_)->WeakReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_178._8_8_)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  local_160.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_158.Data = (FScriptContainerElement *)0x0;
  local_134 = local_res10;
  local_178[0x10] = false;
  local_150 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140._0_4_ = 0;
  local_140._4_4_ = 0;
  local_138 = false;
  pFVar14 = FTaskGraphInterface::Get();
  local_12c = (**(code **)((longlong)*pFVar14 + 0x10))(pFVar14,0);
  pTVar15 = ::operator_new(0x18);
  local_res18.Object = (TRawMessageHandler<FEngineServiceAuthDeny,FEngineService> *)pTVar20;
  if (pTVar15 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0) {
    *(FEngineService **)&pTVar15->Handler = this;
    pTVar15->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFEngineServiceAuthDeny__VFEngineService____6B_;
    *(code **)&(pTVar15->Func).field_0x0 = HandleAuthDenyMessage;
    local_res18.Object = (TRawMessageHandler<FEngineServiceAuthDeny,FEngineService> *)pTVar15;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_>
            (&local_128,&local_res18);
  if (((local_148.Data <= &local_128) &&
      (&local_128 <
       (TSharedPtr<IMessageHandler,1> *)(local_148.Data + (longlong)local_140._4_4_ * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FEngineService *)(*pcVar7)();
    return pFVar16;
  }
  iVar9 = (int)local_140;
  if ((int)local_140 == local_140._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_148,(int *)((longlong)&local_140 + 4));
  }
  *(IMessageHandler **)&local_148.Data[(longlong)iVar9 * 0x10].field_0x0 = local_128.Object;
  *(TReferenceControllerBase<1> **)(local_148.Data + (longlong)iVar9 * 0x10 + 8) =
       local_128.SharedReferenceCount.ReferenceController;
  local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_128.Object = (IMessageHandler *)0x0;
  local_140._0_4_ = iVar9 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar15 = ::operator_new(0x18);
  local_res20.Object = (TRawMessageHandler<FEngineServiceAuthGrant,FEngineService> *)pTVar20;
  if (pTVar15 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0) {
    *(FEngineService **)&pTVar15->Handler = this;
    pTVar15->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFEngineServiceAuthGrant__VFEngineService____6B_;
    *(code **)&(pTVar15->Func).field_0x0 = HandleAuthGrantMessage;
    local_res20.Object = (TRawMessageHandler<FEngineServiceAuthGrant,FEngineService> *)pTVar15;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_>
            (&local_118,&local_res20);
  if (((local_148.Data <= &local_118) &&
      (&local_118 <
       (TSharedPtr<IMessageHandler,1> *)(local_148.Data + (longlong)local_140._4_4_ * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FEngineService *)(*pcVar7)();
    return pFVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_148,(int *)((longlong)&local_140 + 4));
  }
  *(IMessageHandler **)&local_148.Data[(longlong)(int)local_140 * 0x10].field_0x0 = local_118.Object
  ;
  *(TReferenceControllerBase<1> **)(local_148.Data + (longlong)(int)local_140 * 0x10 + 8) =
       local_118.SharedReferenceCount.ReferenceController;
  local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_118.Object = (IMessageHandler *)0x0;
  local_140._0_4_ = (int)local_140 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar15 = ::operator_new(0x18);
  local_c8.Object = pTVar20;
  if (pTVar15 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0) {
    *(FEngineService **)&pTVar15->Handler = this;
    pTVar15->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFEngineServiceExecuteCommand__VFEngineService____6B_;
    *(code **)&(pTVar15->Func).field_0x0 = HandleExecuteCommandMessage;
    local_c8.Object = pTVar15;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_>
            (&local_108,&local_c8);
  if (((local_148.Data <= &local_108) &&
      (&local_108 <
       (TSharedPtr<IMessageHandler,1> *)(local_148.Data + (longlong)local_140._4_4_ * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FEngineService *)(*pcVar7)();
    return pFVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_148,(int *)((longlong)&local_140 + 4));
  }
  *(IMessageHandler **)&local_148.Data[(longlong)(int)local_140 * 0x10].field_0x0 = local_108.Object
  ;
  *(TReferenceControllerBase<1> **)(local_148.Data + (longlong)(int)local_140 * 0x10 + 8) =
       local_108.SharedReferenceCount.ReferenceController;
  local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_108.Object = (IMessageHandler *)0x0;
  local_140._0_4_ = (int)local_140 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar15 = ::operator_new(0x18);
  local_c0.Object = (TRawMessageHandler<FEngineServicePing,FEngineService> *)pTVar20;
  if (pTVar15 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0) {
    *(FEngineService **)&pTVar15->Handler = this;
    pTVar15->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFEngineServicePing__VFEngineService____6B_;
    *(code **)&(pTVar15->Func).field_0x0 = HandlePingMessage;
    local_c0.Object = (TRawMessageHandler<FEngineServicePing,FEngineService> *)pTVar15;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServicePing,FEngineService>_>
            (&local_f8,&local_c0);
  if (((local_148.Data <= &local_f8) &&
      (&local_f8 <
       (TSharedPtr<IMessageHandler,1> *)(local_148.Data + (longlong)local_140._4_4_ * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FEngineService *)(*pcVar7)();
    return pFVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_148,(int *)((longlong)&local_140 + 4));
  }
  lVar19 = (longlong)(int)local_140;
  local_140._0_4_ = (int)local_140 + 1;
  *(IMessageHandler **)&local_148.Data[lVar19 * 0x10].field_0x0 = local_f8.Object;
  *(TReferenceControllerBase<1> **)(local_148.Data + lVar19 * 0x10 + 8) =
       local_f8.SharedReferenceCount.ReferenceController;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar15 = ::operator_new(0x18);
  local_b8.Object = (TRawMessageHandler<FEngineServiceTerminate,FEngineService> *)pTVar20;
  if (pTVar15 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0) {
    *(FEngineService **)&pTVar15->Handler = this;
    pTVar15->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFEngineServiceTerminate__VFEngineService____6B_;
    *(code **)&(pTVar15->Func).field_0x0 = HandleTerminateMessage;
    local_b8.Object = (TRawMessageHandler<FEngineServiceTerminate,FEngineService> *)pTVar15;
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FEngineServiceTerminate,FEngineService>_>
            (&local_e8,&local_b8);
  if (((local_148.Data <= &local_e8) &&
      (&local_e8 <
       (TSharedPtr<IMessageHandler,1> *)(local_148.Data + (longlong)local_140._4_4_ * 0x10))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar16 = (FEngineService *)(*pcVar7)();
    return pFVar16;
  }
  if ((int)local_140 == local_140._4_4_) {
    local_140._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_148,(int *)((longlong)&local_140 + 4));
  }
  lVar19 = (longlong)(int)local_140;
  local_140._0_4_ = (int)local_140 + 1;
  *(IMessageHandler **)&local_148.Data[lVar19 * 0x10].field_0x0 = local_e8.Object;
  *(TReferenceControllerBase<1> **)(local_148.Data + lVar19 * 0x10 + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_12c = GameThread;
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_178,&local_d8);
  if (&this->MessageEndpoint != &local_d8) {
    (this->MessageEndpoint).Object = local_d8.Object;
    local_d8.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_d8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_148.Data,(int)local_140);
  if ((TSharedPtr<IMessageHandler,1> *)local_148.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_148.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_160,(FWriteAccessScope *)&local_a0);
  if ((local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_158.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
    local_150 = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (FStack_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_158.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_160.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_178._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)(local_178._8_8_ + 0xc);
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_178._8_8_ + 8))(local_178._8_8_,1);
    }
  }
  pFVar4 = (this->MessageEndpoint).Object;
  if (pFVar4 != (FMessageEndpoint *)0x0) {
    local_res8[0] = 0x20001;
    this_01 = FEngineServicePing::StaticStruct();
    pFVar17 = UStruct::GetStructPathName((UStruct *)this_01,&local_50);
    pTVar15 = pTVar20;
    if ((pFVar4->Enabled != false) &&
       (pTVar5 = (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)
                 (pFVar4->BusPtr).WeakReferenceCount.ReferenceController, pTVar15 = pTVar5,
       pTVar5 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0)) {
      aVar2 = *(atomic<int> *)&pTVar5->Handler;
      do {
        pTVar15 = pTVar20;
        if (aVar2 == (atomic<int>)0x0) goto LAB_147b39c21;
        LOCK();
        aVar10 = *(atomic<int> *)&pTVar5->Handler;
        bVar8 = aVar2 == aVar10;
        if (bVar8) {
          *(atomic<int> *)&pTVar5->Handler = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar10;
      } while (!bVar8);
      pIVar6 = (pFVar4->BusPtr).Object;
      pTVar15 = pTVar5;
      if (pIVar6 != (IMessageBus *)0x0) {
        pcVar7 = *(code **)((longlong)*pIVar6 + 0x40);
        pTVar18 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                            ((TSharedFromThis<FMessageEndpoint,1> *)&pFVar4->_padding_,&local_60);
        local_b0 = pTVar18->Object;
        local_a8 = (pTVar18->SharedReferenceCount).ReferenceController;
        if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar7)(pIVar6,local_70,&local_b0,pFVar17,local_res8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
      }
    }
LAB_147b39c21:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar15);
  }
  return this;
}

// HandleAuthDenyMessage @ 147b72d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEngineService::HandleAuthDenyMessage
          (FEngineService *this,FEngineServiceAuthDeny *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  FMessageAddress *pFVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  pwVar2 = FWindowsPlatformProcess::UserName(false);
  if ((param_1->UserName).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar2);
  if (iVar1 != 0) {
    iVar1 = (param_1->UserName).Data.ArrayNum;
    if (FApp::SessionOwner.Data.ArrayNum == iVar1) {
      if (FApp::SessionOwner.Data.ArrayNum < 2) goto LAB_147b72e36;
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FApp::SessionOwner.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data);
      bVar5 = iVar1 == 0;
    }
    else {
      bVar5 = FApp::SessionOwner.Data.ArrayNum + iVar1 == 1;
    }
    if ((!bVar5) &&
       (bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          (&FApp::SessionUsers,&param_1->UserName), !bVar5)) {
      pFVar3 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      SendNotification(this,L"You are not authorized to grant or deny remote access to other users."
                       ,pFVar3);
      return;
    }
  }
LAB_147b72e36:
  TArray<FString,TSizedDefaultAllocator<32>_>::Remove(&FApp::SessionUsers,&param_1->UserToDeny);
  if (4 < (byte)LogEngineService._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineService);
  }
  return;
}

// HandleAuthGrantMessage @ 147b72ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEngineService::HandleAuthGrantMessage
          (FEngineService *this,FEngineServiceAuthGrant *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  FMessageAddress *pFVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  pwVar2 = FWindowsPlatformProcess::UserName(false);
  if ((param_1->UserName).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar2);
  if (iVar1 != 0) {
    iVar1 = (param_1->UserName).Data.ArrayNum;
    if (FApp::SessionOwner.Data.ArrayNum == iVar1) {
      if (FApp::SessionOwner.Data.ArrayNum < 2) goto LAB_147b72f46;
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FApp::SessionOwner.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data);
      bVar5 = iVar1 == 0;
    }
    else {
      bVar5 = FApp::SessionOwner.Data.ArrayNum + iVar1 == 1;
    }
    if ((!bVar5) &&
       (bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          (&FApp::SessionUsers,&param_1->UserName), !bVar5)) {
      pFVar3 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      SendNotification(this,L"You are not authorized to grant or deny remote access to other users."
                       ,pFVar3);
      return;
    }
  }
LAB_147b72f46:
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
            (&FApp::SessionUsers,&param_1->UserToGrant);
  if (4 < (byte)LogEngineService._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineService);
  }
  return;
}

// HandleExecuteCommandMessage @ 147b72fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEngineService::HandleExecuteCommandMessage
          (FEngineService *this,FEngineServiceExecuteCommand *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int *piVar1;
  FEngineServiceExecuteCommand *pFVar2;
  code *pcVar3;
  UEngine *pUVar4;
  int iVar5;
  wchar_t *pwVar6;
  FMessageAddress *pFVar7;
  wchar_t *pwVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  
  pwVar6 = FWindowsPlatformProcess::UserName(false);
  if ((param_1->UserName).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar6);
  if (iVar5 != 0) {
    iVar5 = (param_1->UserName).Data.ArrayNum;
    if (FApp::SessionOwner.Data.ArrayNum == iVar5) {
      if (FApp::SessionOwner.Data.ArrayNum < 2) goto LAB_147b7305b;
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FApp::SessionOwner.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data);
      bVar10 = iVar5 == 0;
    }
    else {
      bVar10 = FApp::SessionOwner.Data.ArrayNum + iVar5 == 1;
    }
    if ((!bVar10) &&
       (bVar10 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                           (&FApp::SessionUsers,&param_1->UserName), !bVar10)) {
      pFVar7 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      SendNotification(this,L"You are not authorized to execute console commands.",pFVar7);
      return;
    }
  }
LAB_147b7305b:
  pUVar4 = GEngine;
  if (GEngine == (UEngine *)0x0) {
    pFVar7 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    SendNotification(this,
                     L"The command could not be executed because the Engine has not started up yet."
                     ,pFVar7);
  }
  else {
    pTVar9 = &GEngine->DeferredCommands;
    pFVar2 = (FEngineServiceExecuteCommand *)(pTVar9->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) &&
        (param_1 < (FEngineServiceExecuteCommand *)
                   (&pFVar2->Command + (GEngine->DeferredCommands).ArrayMax))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (pUVar4->DeferredCommands).ArrayNum;
    piVar1 = &(pUVar4->DeferredCommands).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar9->AllocatorInstance,piVar1);
    }
    (pUVar4->DeferredCommands).ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       &param_1->Command);
    if (4 < (byte)LogEngineService._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineService);
    }
  }
  return;
}

// HandlePingMessage @ 147b735f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEngineService::HandlePingMessage
          (FEngineService *this,FEngineServicePing *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  SendPong(this,param_2);
  return;
}

// HandleTerminateMessage @ 147b73600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEngineService::HandleTerminateMessage
          (FEngineService *this,FEngineServiceTerminate *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  code *pcVar1;
  UEngine *pUVar2;
  int iVar3;
  wchar_t *pwVar4;
  FMessageAddress *pFVar5;
  FOutputDeviceRedirector *pFVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  pwVar4 = FWindowsPlatformProcess::UserName(false);
  if ((param_1->UserName).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar4);
  if (iVar3 != 0) {
    iVar3 = (param_1->UserName).Data.ArrayNum;
    if (FApp::SessionOwner.Data.ArrayNum == iVar3) {
      if (FApp::SessionOwner.Data.ArrayNum < 2) goto LAB_147b7369e;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FApp::SessionOwner.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->UserName).Data.AllocatorInstance.Data);
      bVar8 = iVar3 == 0;
    }
    else {
      bVar8 = FApp::SessionOwner.Data.ArrayNum + iVar3 == 1;
    }
    if ((!bVar8) &&
       (bVar8 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          (&FApp::SessionUsers,&param_1->UserName), !bVar8)) {
      pFVar5 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      pwVar4 = L"You are not authorized to terminate this instance.";
      goto LAB_147b73733;
    }
  }
LAB_147b7369e:
  if (GEngine != (UEngine *)0x0) {
    if (4 < (byte)LogEngineService._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEngineService);
    }
    bVar8 = UEngine::IsEditor(GEngine);
    pUVar2 = GEngine;
    pcVar1 = *(code **)(GEngine->_padding_ + 8);
    if (bVar8) {
      pFVar6 = GetGlobalLogSingleton();
      (*pcVar1)(&pUVar2->_padding_,0,L"QUIT_EDITOR",pFVar6);
      return;
    }
    pFVar6 = GetGlobalLogSingleton();
    (*pcVar1)(&pUVar2->_padding_,0,L"QUIT",pFVar6);
    return;
  }
  pFVar5 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
  pwVar4 = L"Termination failed because the Engine has not started up yet or is unavailable.";
LAB_147b73733:
  SendNotification(this,pwVar4,pFVar5);
  return;
}

// SendNotification @ 147b88300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEngineService::SendNotification(FEngineService *this,wchar_t *param_1,FMessageAddress *param_2)

{
  int *piVar1;
  FMessageEndpoint *this_00;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  ForAnyElementType *pFVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8;
  FTimespan local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48 [2];
  
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 != (FMessageEndpoint *)0x0) {
    QueryPerformanceCounter(&local_res8);
    pFVar2 = (FScriptContainerElement *)
             (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000) - GStartTime);
    pFVar3 = FMemory::Malloc(0x18,0);
    ::FString::FString((FString *)&local_58,param_1);
    _Src.Data = local_58.Array.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    pFVar3->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar3[1].Data = local_58.Array.ArrayNum;
    if (local_58.Array.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Array.ArrayNum,0,pFVar3,local_58.Array.ArrayNum,piVar1);
      memcpy(pFVar3->Data,_Src.Data,(longlong)local_58.Array.ArrayNum * 2);
    }
    pFVar3[2].Data = pFVar2;
    if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
    local_res20.Ticks = 0;
    local_res8.QuadPart = 0x2bca2875f4373fff;
    local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Array.ArrayNum = 0;
    local_58.Array.ArrayMax = 0;
    pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_58,param_2);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = (pTVar4->Array).ArrayNum;
    lVar6 = (longlong)local_68.ArrayNum;
    pFVar2 = (pTVar4->Array).AllocatorInstance.Data;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,pFVar2,lVar6 << 4);
    }
    local_48[0].Object = (IMessageAttachment *)0x0;
    local_48[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar5 = FEngineServiceNotification::StaticStruct();
    FMessageEndpoint::Send
              (this_00,pFVar3,pUVar5,None,local_48,&local_68,&local_res20,(FDateTime *)&local_res8.s
              );
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// SendPong @ 147b88500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEngineService::SendPong(FEngineService *this,TSharedRef<IMessageContext,1> *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  FMessageEndpoint *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  FString *this_01;
  FGuid *pFVar9;
  FString *pFVar10;
  FMessageAddress *pFVar11;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar12;
  UScriptStruct *pUVar13;
  wchar_t *pwVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  undefined1 local_res18 [8];
  FDateTime local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_d8;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_c8;
  FTimespan local_b8;
  FScriptContainerElement *local_b0;
  int *piStack_a8;
  undefined8 local_a0;
  FScriptContainerElement *local_98;
  int *piStack_90;
  int local_88;
  undefined4 uStack_84;
  TSharedPtr<IMessageAttachment,1> local_80;
  FString local_70;
  FGuid local_60 [2];
  
  if ((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) {
    this_01 = FMemory::Malloc(0x50,0);
    *(undefined2 *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 5) = 0;
    *(undefined1 *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 7) = 0;
    this_01[4].Data.ArrayNum = 0;
    this_01[4].Data.ArrayMax = 0;
    (this_01->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->Data).ArrayNum = 0;
    (this_01->Data).ArrayMax = 0;
    *(undefined4 *)&this_01[1].Data.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 4) = 0;
    this_01[1].Data.ArrayNum = 0;
    this_01[1].Data.ArrayMax = 0;
    this_01[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[2].Data.ArrayNum = 0;
    this_01[2].Data.ArrayMax = 0;
    this_01[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[3].Data.ArrayNum = 0;
    this_01[3].Data.ArrayMax = 0;
    this_01[4].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar8 = FNetworkVersion::GetNetworkCompatibleChangelist();
    *(uint *)&this_01[1].Data.AllocatorInstance.Data = uVar8;
    pFVar9 = FApp::GetInstanceId(local_60);
    uVar8 = pFVar9->B;
    pFVar4 = *(FScriptContainerElement **)&pFVar9->C;
    this_01[1].Data.ArrayNum = pFVar9->A;
    this_01[1].Data.ArrayMax = uVar8;
    this_01[2].Data.AllocatorInstance.Data = pFVar4;
    *(FGuid *)&this_01[3].Data.ArrayNum = FApp::SessionId;
    if (GEngine == (UEngine *)0x0) {
      pwVar14 = L"Unknown";
    }
    else if (PRIVATE_GIsRunningCommandlet == false) {
      bVar7 = UEngine::IsEditor(GEngine);
      pwVar14 = L"Editor";
      if (!bVar7) {
        pwVar14 = L"Game";
      }
    }
    else {
      pwVar14 = L"Commandlet";
    }
    ::FString::operator=((FString *)&this_01[2].Data.ArrayNum,pwVar14);
    if (GEngine != (UEngine *)0x0) {
      piVar1 = &(GEngine->WorldList).Array.ArrayNum;
      local_b0 = (GEngine->WorldList).Array.AllocatorInstance.Data;
      iVar18 = *piVar1;
      pFVar4 = local_b0 + (longlong)iVar18 * 8;
      local_a0 = CONCAT44(uStack_84,iVar18);
      pcVar15 = (char *)0x0;
      piStack_a8 = piVar1;
      local_98 = local_b0;
      piStack_90 = piVar1;
      local_88 = iVar18;
      while( true ) {
        pFVar6 = local_b0;
        if (*piVar1 != iVar18) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        pcVar16 = pcVar15;
        if (pFVar6 == pFVar4) break;
        pcVar16 = *(char **)pFVar6;
        cVar2 = *pcVar16;
        if (cVar2 == '\x01') break;
        if (cVar2 == '\x03') {
          if ((pcVar15 != (char *)0x0) && (*pcVar15 == '\x03')) goto LAB_147b886a4;
          local_b0 = pFVar6 + 8;
          pcVar15 = pcVar16;
        }
        else {
          if ((cVar2 == '\x02') && (pcVar15 == (char *)0x0)) {
            pcVar15 = pcVar16;
          }
LAB_147b886a4:
          local_b0 = pFVar6 + 8;
        }
      }
      if ((pcVar16 != (char *)0x0) && (*(UWorld **)(pcVar16 + 0x2c0) != (UWorld *)0x0)) {
        pFVar10 = UWorld::GetMapName(*(UWorld **)(pcVar16 + 0x2c0),&local_70);
        iVar3 = (pFVar10->Data).ArrayNum;
        iVar18 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar18 = 0;
        }
        ::FString::AssignRange(this_01,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar18);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        bVar7 = UWorld::HasBegunPlay(*(UWorld **)(pcVar16 + 0x2c0));
        *(bool *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 4) = bVar7;
        this_01[4].Data.ArrayNum = (int)(float)*(double *)(*(longlong *)(pcVar16 + 0x2c0) + 0x8f8);
      }
    }
    if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (this->MessageEndpoint).Object;
    pFVar11 = (FMessageAddress *)(**(code **)((longlong)*param_1->Object + 0x48))();
    local_b8.Ticks = 0;
    local_res20.Ticks = 0x2bca2875f4373fff;
    local_c8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Array.ArrayNum = 0;
    local_c8.Array.ArrayMax = 0;
    pTVar12 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_c8,pFVar11);
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = (pTVar12->Array).ArrayNum;
    lVar17 = (longlong)local_d8.ArrayNum;
    pFVar4 = (pTVar12->Array).AllocatorInstance.Data;
    if (local_d8.ArrayNum == 0) {
      local_d8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
                 &local_d8.ArrayMax);
      memcpy(local_d8.AllocatorInstance.Data,pFVar4,lVar17 << 4);
    }
    local_80.Object = (IMessageAttachment *)0x0;
    local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar13 = FEngineServicePong::StaticStruct();
    FMessageEndpoint::Send(this_00,this_01,pUVar13,None,&local_80,&local_d8,&local_b8,&local_res20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_c8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Array.AllocatorInstance.Data);
    }
  }
  return;
}

