// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 5

// FWidgetSnapshotService @ 142e0b8c0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetSnapshotService * __thiscall
FWidgetSnapshotService::FWidgetSnapshotService(FWidgetSnapshotService *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  FMessageEndpoint *pFVar4;
  TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *pTVar5;
  IMessageBus *pIVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  FName *pFVar12;
  FModuleManager *this_00;
  IModuleInterface *pIVar13;
  FWidgetSnapshotService *pFVar14;
  FTaskGraphInterface *pFVar15;
  TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *pTVar16;
  UPackage *pUVar17;
  FTopLevelAssetPath *pFVar18;
  TSharedRef<FMessageEndpoint,1> *pTVar19;
  longlong lVar20;
  TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *pTVar21;
  undefined4 local_res8 [2];
  FName local_res10;
  TRawPtrProxy<TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_> local_res18;
  TRawPtrProxy<TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_> local_res20;
  undefined1 local_138 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  int local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  bool local_f8;
  FName local_f4;
  Type local_ec;
  TSharedPtr<IMessageHandler,1> local_e8;
  TSharedPtr<IMessageHandler,1> local_d8;
  undefined1 local_c8 [16];
  IMessageBus *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FMessageEndpoint *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FDestructionSentinel local_98;
  FName local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TSharedRef<FMessageEndpoint,1> local_68;
  FTopLevelAssetPath local_58;
  
  pTVar21 = (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *)0x0;
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->PendingSnapshotResponseHandlers = 0;
  *(undefined8 *)&(this->PendingSnapshotResponseHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->PendingSnapshotResponseHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->PendingSnapshotResponseHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->PendingSnapshotResponseHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingSnapshotResponseHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingSnapshotResponseHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->PendingSnapshotResponseHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->PendingSnapshotResponseHandlers).field_0x48 = 0;
  bVar9 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar9) {
    pFVar12 = ::FName::FName(&local_80,"Messaging");
    FVar3 = *pFVar12;
    this_00 = FModuleManager::Get();
    pIVar13 = FModuleManager::LoadModuleChecked(this_00,FVar3);
    (**(code **)((longlong)*pIVar13 + 0x68))(pIVar13,&local_b8);
    if ((local_b8 == (IMessageBus *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar14 = (FWidgetSnapshotService *)(*pcVar7)();
      return pFVar14;
    }
    pTVar8 = local_b0;
    if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_b8 == (IMessageBus *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar14 = (FWidgetSnapshotService *)(*pcVar7)();
      return pFVar14;
    }
    ::FName::FName(&local_res10,"FWidgetSnapshotService");
    local_138._0_8_ = local_b8;
    local_138._8_8_ = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_118.Data = (FScriptContainerElement *)0x0;
    local_f4 = local_res10;
    local_138[0x10] = false;
    local_110 = 0;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100._0_4_ = 0;
    local_100._4_4_ = 0;
    local_f8 = false;
    pFVar15 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar15 + 0x10))(pFVar15,0);
    local_ec = GameThread;
    pTVar16 = ::operator_new(0x18);
    local_res18.Object = pTVar21;
    if (pTVar16 != (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *)0x0) {
      *(FWidgetSnapshotService **)&pTVar16->Handler = this;
      pTVar16->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFWidgetSnapshotRequest__VFWidgetSnapshotService____6B_;
      *(code **)&(pTVar16->Func).field_0x0 = HandleWidgetSnapshotRequestMessage;
      local_res18.Object = pTVar16;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService>_>
              (&local_e8,&local_res18);
    if (((local_108.Data <= &local_e8) &&
        (&local_e8 <
         (TSharedPtr<IMessageHandler,1> *)(local_108.Data + (longlong)local_100._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar14 = (FWidgetSnapshotService *)(*pcVar7)();
      return pFVar14;
    }
    iVar10 = (int)local_100;
    if ((int)local_100 == local_100._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_108,(int *)((longlong)&local_100 + 4));
    }
    *(IMessageHandler **)&local_108.Data[(longlong)iVar10 * 0x10].field_0x0 = local_e8.Object;
    *(TReferenceControllerBase<1> **)(local_108.Data + (longlong)iVar10 * 0x10 + 8) =
         local_e8.SharedReferenceCount.ReferenceController;
    local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_e8.Object = (IMessageHandler *)0x0;
    local_100._0_4_ = iVar10 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar16 = ::operator_new(0x18);
    local_res20.Object =
         (TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *)pTVar21;
    if (pTVar16 != (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *)0x0) {
      *(FWidgetSnapshotService **)&pTVar16->Handler = this;
      pTVar16->_padding_ =
           (longlong)
           &___7__TRawMessageHandler_UFWidgetSnapshotResponse__VFWidgetSnapshotService____6B_;
      *(code **)&(pTVar16->Func).field_0x0 = HandleWidgetSnapshotResponseMessage;
      local_res20.Object =
           (TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService> *)pTVar16;
    }
    TSharedPtr<IMessageHandler,1>::
    TSharedPtr<IMessageHandler,1><TRawMessageHandler<FWidgetSnapshotResponse,FWidgetSnapshotService>_>
              (&local_d8,&local_res20);
    if (((local_108.Data <= &local_d8) &&
        (&local_d8 <
         (TSharedPtr<IMessageHandler,1> *)(local_108.Data + (longlong)local_100._4_4_ * 0x10))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar14 = (FWidgetSnapshotService *)(*pcVar7)();
      return pFVar14;
    }
    if ((int)local_100 == local_100._4_4_) {
      local_100._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_108,(int *)((longlong)&local_100 + 4));
    }
    lVar20 = (longlong)(int)local_100;
    local_100._0_4_ = (int)local_100 + 1;
    *(IMessageHandler **)&local_108.Data[lVar20 * 0x10].field_0x0 = local_d8.Object;
    *(TReferenceControllerBase<1> **)(local_108.Data + lVar20 * 0x10 + 8) =
         local_d8.SharedReferenceCount.ReferenceController;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_d8.Object = (IMessageHandler *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FMessageEndpointBuilder::Build
              ((FMessageEndpointBuilder *)local_138,(TSharedPtr<FMessageEndpoint,1> *)local_c8);
    if (this != (FWidgetSnapshotService *)local_c8) {
      (this->MessageEndpoint).Object = (FMessageEndpoint *)local_c8._0_8_;
      local_c8._0_8_ = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,
                 (FSharedReferencer<1> *)(local_c8 + 8));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c8._8_8_);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)local_108.Data,(int)local_100);
    if ((TSharedPtr<IMessageHandler,1> *)local_108.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
      FMemory::Free(local_108.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_120,(FWriteAccessScope *)&local_98);
    if ((local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_118.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
      local_110 = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (FStack_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
    if ((TReferenceControllerBase<1> *)local_138._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)(local_138._8_8_ + 0xc);
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_138._8_8_ + 8))(local_138._8_8_,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar4 = (this->MessageEndpoint).Object;
    if (pFVar4 != (FMessageEndpoint *)0x0) {
      local_res8[0] = 0x20001;
      if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar17 = Z_Construct_UPackage__Script_SlateReflector();
        Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest,(UObject *)pUVar17,
                             L"WidgetSnapshotRequest");
      }
      pFVar18 = UStruct::GetStructPathName
                          ((UStruct *)
                           Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton,
                           &local_58);
      pTVar16 = pTVar21;
      if ((pFVar4->Enabled != false) &&
         (pTVar5 = (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *)
                   (pFVar4->BusPtr).WeakReferenceCount.ReferenceController, pTVar16 = pTVar5,
         pTVar5 != (TRawMessageHandler<FWidgetSnapshotRequest,FWidgetSnapshotService> *)0x0)) {
        aVar2 = *(atomic<int> *)&pTVar5->Handler;
        do {
          pTVar16 = pTVar21;
          if (aVar2 == (atomic<int>)0x0) goto LAB_142e0bd97;
          LOCK();
          aVar11 = *(atomic<int> *)&pTVar5->Handler;
          bVar9 = aVar2 == aVar11;
          if (bVar9) {
            *(atomic<int> *)&pTVar5->Handler = (atomic<int>)((int)aVar2 + 1);
            aVar11 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar11;
        } while (!bVar9);
        pIVar6 = (pFVar4->BusPtr).Object;
        pTVar16 = pTVar5;
        if (pIVar6 != (IMessageBus *)0x0) {
          pcVar7 = *(code **)((longlong)*pIVar6 + 0x40);
          pTVar19 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                              ((TSharedFromThis<FMessageEndpoint,1> *)&pFVar4->_padding_,&local_68);
          local_a8 = pTVar19->Object;
          local_a0 = (pTVar19->SharedReferenceCount).ReferenceController;
          if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar7)(pIVar6,local_78,&local_a8,pFVar18,local_res8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
      }
LAB_142e0bd97:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar16);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  }
  return this;
}

// AbortSnapshotRequest @ 142e2a850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetSnapshotService::AbortSnapshotRequest(FWidgetSnapshotService *this,FGuid *param_1)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->PendingSnapshotResponseHandlers).field_0x8 !=
      *(int *)&(this->PendingSnapshotResponseHandlers).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                         *)&this->PendingSnapshotResponseHandlers,(uint)uVar1,param_1);
  }
  return;
}

// HandleWidgetSnapshotRequestMessage @ 142eb6f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetSnapshotService::HandleWidgetSnapshotRequestMessage
          (FWidgetSnapshotService *this,FWidgetSnapshotRequest *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FGuid *pFVar5;
  FSlateApplication *this_01;
  undefined8 *puVar6;
  undefined8 *puVar7;
  UPackage *pUVar8;
  longlong lVar9;
  FDateTime local_res8;
  FTimespan local_res20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_a8;
  FWidgetSnapshotData local_98;
  TSharedPtr<IMessageAttachment,1> local_48;
  FGuid local_38;
  
  if ((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) {
    pFVar5 = FApp::GetInstanceId(&local_38);
    if (((pFVar5->D == (param_1->TargetInstanceId).D && pFVar5->C == (param_1->TargetInstanceId).C)
        && pFVar5->B == (param_1->TargetInstanceId).B) && pFVar5->A == (param_1->TargetInstanceId).A
       ) {
      local_98.Windows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Windows.ArrayNum = 0;
      local_98.Windows.ArrayMax = 0;
      local_98.NavigationSimulationData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.NavigationSimulationData.ArrayNum = 0;
      local_98.NavigationSimulationData.ArrayMax = 0;
      local_98.WindowTextureData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.WindowTextureData.ArrayNum = 0;
      local_98.WindowTextureData.ArrayMax = 0;
      local_98.WindowTextureBrushes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.WindowTextureBrushes.ArrayNum = 0;
      local_98.WindowTextureBrushes.ArrayMax = 0;
      local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_98.EmptyNavigationSimulationData.SimulationData.ArrayNum = 0;
      local_98.EmptyNavigationSimulationData.SimulationData.ArrayMax = 0;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      this_01 = FSlateApplication::Get();
      FSlateApplication::GetAllVisibleWindowsOrdered(this_01,&local_b8);
      FWidgetSnapshotData::CreateSnapshot(&local_98,&local_b8,false);
      DestructItems<TSharedRef<SWindow,1>,int>
                ((TSharedRef<SWindow,1> *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      if ((TSharedRef<SWindow,1> *)local_b8.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0)
      {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      puVar6 = FMemory::Malloc(0x20,0);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar2 = *(undefined8 *)&(param_1->SnapshotRequestId).C;
      *puVar6 = *(undefined8 *)&param_1->SnapshotRequestId;
      puVar6[1] = uVar2;
      FWidgetSnapshotData::SaveSnapshotToBuffer
                (&local_98,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar6 + 2));
      if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = (this->MessageEndpoint).Object;
      puVar7 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
      local_res20.Ticks = 0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      local_res8.Ticks = 0x2bca2875f4373fff;
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_c8,(int *)((longlong)&local_c0 + 4));
      _Src.Data = local_c8.Data;
      uVar2 = puVar7[1];
      local_a8.ArrayNum = iVar4 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,local_a8.ArrayNum);
      *(undefined8 *)(local_c8.Data + (longlong)iVar4 * 0x10) = *puVar7;
      *(undefined8 *)(local_c8.Data + (longlong)iVar4 * 0x10 + 8) = uVar2;
      lVar9 = (longlong)local_a8.ArrayNum;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a8.ArrayNum == 0) {
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                   &local_a8.ArrayMax);
        memcpy(local_a8.AllocatorInstance.Data,_Src.Data,lVar9 << 4);
      }
      local_48.Object = (IMessageAttachment *)0x0;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_SlateReflector();
        Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse,(UObject *)pUVar8,
                             L"WidgetSnapshotResponse");
      }
      FMessageEndpoint::Send
                (this_00,puVar6,
                 Z_Registration_Info_UScriptStruct_FWidgetSnapshotResponse.OuterSingleton,None,
                 &local_48,&local_a8,&local_res20,&local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      FWidgetSnapshotData::DestroyBrushes(&local_98);
      DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
                ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
                 local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data,
                 local_98.EmptyNavigationSimulationData.SimulationData.ArrayNum);
      if ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
          local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data !=
          (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
        FMemory::Free(local_98.EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>
                ((TSharedPtr<FSlateDynamicImageBrush,1> *)
                 local_98.WindowTextureBrushes.AllocatorInstance.Data,
                 local_98.WindowTextureBrushes.ArrayNum);
      if ((TSharedPtr<FSlateDynamicImageBrush,1> *)
          local_98.WindowTextureBrushes.AllocatorInstance.Data !=
          (TSharedPtr<FSlateDynamicImageBrush,1> *)0x0) {
        FMemory::Free(local_98.WindowTextureBrushes.AllocatorInstance.Data);
      }
      DestructItems<FWidgetSnapshotTextureData,int>
                ((FWidgetSnapshotTextureData *)local_98.WindowTextureData.AllocatorInstance.Data,
                 local_98.WindowTextureData.ArrayNum);
      if ((FWidgetSnapshotTextureData *)local_98.WindowTextureData.AllocatorInstance.Data !=
          (FWidgetSnapshotTextureData *)0x0) {
        FMemory::Free(local_98.WindowTextureData.AllocatorInstance.Data);
      }
      DestructItems<FWidgetSnapshotNavigationSimulationData,int>
                ((FWidgetSnapshotNavigationSimulationData *)
                 local_98.NavigationSimulationData.AllocatorInstance.Data,
                 local_98.NavigationSimulationData.ArrayNum);
      if (local_98.NavigationSimulationData.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_98.NavigationSimulationData.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
                ((TSharedPtr<FWidgetReflectorNodeBase,1> *)local_98.Windows.AllocatorInstance.Data,
                 local_98.Windows.ArrayNum);
      if ((TSharedPtr<FWidgetReflectorNodeBase,1> *)local_98.Windows.AllocatorInstance.Data !=
          (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0) {
        FMemory::Free(local_98.Windows.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleWidgetSnapshotResponseMessage @ 142eb7260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetSnapshotService::HandleWidgetSnapshotResponseMessage
          (FWidgetSnapshotService *this,FWidgetSnapshotResponse *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  TMap<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>_>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong64 uVar4;
  atomic<unsigned___int64> aVar5;
  atomic<unsigned___int64> this_01;
  atomic<unsigned___int64> aVar6;
  FReadAccessScope local_38;
  
  this_00 = &this->PendingSnapshotResponseHandlers;
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar4,&param_1->SnapshotRequestId);
  aVar6 = (atomic<unsigned___int64>)0x0;
  aVar5 = aVar6;
  if (iVar3 != -1) {
    aVar5 = (atomic<unsigned___int64>)((longlong)iVar3 * 0x30 + *(longlong *)&this_00->field_0x0);
  }
  this_01 = (atomic<unsigned___int64>)((longlong)aVar5 + 0x10);
  if (aVar5 == (atomic<unsigned___int64>)0x0) {
    this_01 = aVar6;
  }
  if (this_01 != (atomic<unsigned___int64>)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_38);
    if (((*(int *)&(((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                    ((longlong)this_01 + 0x10))->AccessDetector).State == 0) ||
        (aVar5 = (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this_01 + 8)
                  )->AccessDetector).State, aVar5 == (atomic<unsigned___int64>)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)aVar5 + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (bVar1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_38);
      if (*(int *)&(((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                    ((longlong)this_01 + 0x10))->AccessDetector).State != 0) {
        aVar6 = (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this_01 + 8))
                ->AccessDetector).State;
      }
      (**(code **)(*(longlong *)aVar6 + 0x60))(aVar6,&param_1->SnapshotData);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (*(int *)&(this->PendingSnapshotResponseHandlers).field_0x8 !=
          *(int *)&(this->PendingSnapshotResponseHandlers).field_0x34) {
        uVar4 = CityHash64((char *)param_1,0x10);
        TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                             *)this_00,(uint)uVar4,&param_1->SnapshotRequestId);
      }
    }
  }
  return;
}

// RequestSnapshot @ 142ef9c60

/* WARNING: Enum "Type": Some values do not have unique names */

FGuid * __thiscall
FWidgetSnapshotService::RequestSnapshot
          (FWidgetSnapshotService *this,FGuid *__return_storage_ptr__,FGuid *param_1,
          TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  undefined8 *puVar1;
  FMessageEndpoint *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  FGuid *pFVar7;
  UPackage *pUVar8;
  FDateTime local_58;
  FTimespan local_50;
  undefined8 *local_48;
  TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *local_40;
  FGuid local_38;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  puVar6 = FMemory::Malloc(0x20,0);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar1 = puVar6 + 2;
  *puVar6 = 0;
  puVar6[1] = 0;
  uVar3 = *(undefined8 *)&param_1->C;
  *puVar6 = *(undefined8 *)param_1;
  puVar6[1] = uVar3;
  pFVar7 = FGuid::NewGuid(&local_38);
  uVar3 = *(undefined8 *)&pFVar7->C;
  *puVar1 = *(undefined8 *)pFVar7;
  puVar6[3] = uVar3;
  local_48 = puVar1;
  local_40 = param_2;
  TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGuid_const_&,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&>_>
            ((TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->PendingSnapshotResponseHandlers,
             (TPairInitializer<FGuid_const_&,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&>
              *)&stack0x00000008,(bool *)&local_48);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FGuid *)(*pcVar2)();
      return pFVar7;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_58.Ticks = 0x2bca2875f4373fff;
  local_50.Ticks = 0;
  if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_SlateReflector();
    Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest,(UObject *)pUVar8,
                         L"WidgetSnapshotRequest");
  }
  FMessageEndpoint::Publish
            (this_00,puVar6,Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton,
             Network,&local_50,&local_58);
  uVar3 = *puVar1;
  uVar4 = puVar6[3];
  __return_storage_ptr__->A = (int)uVar3;
  __return_storage_ptr__->B = (int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->C = (int)uVar4;
  __return_storage_ptr__->D = (int)((ulonglong)uVar4 >> 0x20);
  return __return_storage_ptr__;
}

