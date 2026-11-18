// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 17

// AddOnScreenRecordingMessage @ 14630d090

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
FChaosVDEngineEditorBridge::AddOnScreenRecordingMessage
          (FChaosVDEngineEditorBridge *this,float param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *this_00;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FTSTicker *this_01;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  FString *pFVar12;
  int iVar13;
  wchar_t *pwVar14;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = &this->DeferredShowMessageOnScreenHandle;
    bVar6 = IsInGameThread();
    if (bVar6) {
      if (this_00 != &local_78) {
        pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
        this_00->Object = (FElement *)0x0;
        (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&ChaosVDRecordingStartedMessage,L"ChaosVisualDebugger",
                   L"OnScreenChaosVDRecordingStartedMessage",
                   L"Chaos Visual Debugger recording in progress...");
        atexit(`FChaosVDEngineEditorBridge::AddOnScreenRecordingMessage'::__l2::
               _dynamic_atexit_destructor_for__ChaosVDRecordingStartedMessage__);
        _Init_thread_footer(&::_TSS0);
      }
      if (this->CVDRecordingMessageKey == 0) {
        pFVar12 = FText::ToString(&ChaosVDRecordingStartedMessage);
        iVar3 = (pFVar12->Data).ArrayNum;
        iVar13 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar14 = L"";
          iVar13 = 0;
        }
        else {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar14);
        this->CVDRecordingMessageKey = (ulonglong)uVar8;
      }
      pFVar12 = FText::ToString(&ChaosVDRecordingStartedMessage);
      UEngine::AddOnScreenDebugMessage
                (GEngine,this->CVDRecordingMessageKey,__real_45610000,FColor::Red,pFVar12,true,
                 &UE::Math::TVector2<double>::UnitVector);
    }
    else if (((this_00->Object == (FElement *)0x0) ||
             (pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.
                       ReferenceController, pTVar4 == (TReferenceControllerBase<1> *)0x0)) ||
            ((int)pTVar4->SharedReferenceCount < 1)) {
      this_01 = FTSTicker::GetCoreTicker();
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_60;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDEngineEditorBridge____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[4] = AddOnScreenRecordingMessage;
        puVar9[3] = this;
        if ((this == (FChaosVDEngineEditorBridge *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      pTVar11 = FTSTicker::AddTicker
                          (this_01,&local_88,
                           (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0
                          );
      TWeakPtr<FTSTicker::FElement,1>::operator=(this_00,pTVar11);
      if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_88.WeakReferenceCount.ReferenceController,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  return false;
}

// BroadcastSessionStatus @ 14630d980

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FChaosVDEngineEditorBridge::BroadcastSessionStatus(FChaosVDEngineEditorBridge *this,float param_1)

{
  float fVar1;
  FMessageEndpoint *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  FChaosVDRuntimeModule *pFVar7;
  FGuid *pFVar8;
  undefined8 *puVar9;
  UPackage *pUVar10;
  FDateTime local_res8;
  FTimespan local_res18 [2];
  FGuid local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  float local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  pFVar7 = FChaosVDRuntimeModule::Get();
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  pFVar8 = FApp::GetInstanceId(&local_b8);
  bVar5 = pFVar7->bIsRecording;
  fVar1 = pFVar7->AccumulatedRecordingTime;
  uVar3._0_4_ = pFVar8->A;
  uVar3._4_4_ = pFVar8->B;
  uVar4._0_4_ = pFVar8->C;
  uVar4._4_4_ = pFVar8->D;
  this_00 = (((this->RemoteSessionsManager).Object)->MessageEndpoint).Object;
  local_a8 = uVar3;
  uStack_a0 = uVar4;
  local_98 = bVar5;
  local_94 = fVar1;
  if (this_00 == (FMessageEndpoint *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x139,"MessageEndpoint");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  else {
    puVar9 = FMemory::Malloc(0x68,0);
    local_res18[0].Ticks = 0;
    *(bool *)(puVar9 + 2) = bVar5;
    *(float *)((longlong)puVar9 + 0x14) = fVar1;
    *puVar9 = uVar3;
    puVar9[1] = uVar4;
    puVar9[3] = local_90;
    puVar9[4] = uStack_88;
    puVar9[5] = local_80;
    puVar9[6] = uStack_78;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[10] = 0;
    *(undefined4 *)(puVar9 + 9) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x4c) = 0;
    puVar9[0xb] = 0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    if (Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRecordingStatusMessage,
                           (UObject *)pUVar10,L"ChaosVDRecordingStatusMessage");
    }
    FMessageEndpoint::Publish
              (this_00,puVar9,
               Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton,
               Network,local_res18,&local_res8);
  }
  return true;
}

// GenerateParticleMetadata @ 146311d90

FChaosVDParticleMetadata * __cdecl
FChaosVDEngineEditorBridge::GenerateParticleMetadata
          (FChaosVDParticleMetadata *__return_storage_ptr__,IPhysicsProxyBase *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *pTVar6;
  FName FVar7;
  FGCScopeGuard local_res8 [8];
  undefined8 local_res10;
  FSoftObjectPath local_98;
  FName local_78;
  FName FStack_70;
  FName local_68;
  undefined4 uStack_60;
  FNameEntryId FStack_5c;
  uint uStack_58;
  FNameEntryId FStack_54;
  uint uStack_50;
  FNameEntryId FStack_4c;
  uint uStack_48;
  FNameEntryId FStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulong64 local_38;
  
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  uStack_60 = 0xffffffff;
  FStack_5c.Value = 0;
  uStack_58 = 0;
  FStack_54.Value = 0;
  uStack_50 = 0;
  FStack_4c.Value = 0;
  uStack_48 = 0;
  FStack_44.Value = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_1 == (IPhysicsProxyBase *)0x0) {
    (__return_storage_ptr__->OwnerName).ComparisonIndex = 0;
    (__return_storage_ptr__->OwnerName).Number = 0;
    (__return_storage_ptr__->ComponentName).ComparisonIndex = 0;
    (__return_storage_ptr__->ComponentName).Number = 0;
    (__return_storage_ptr__->BoneName).ComparisonIndex = 0;
    (__return_storage_ptr__->BoneName).Number = 0;
    __return_storage_ptr__->Index = -1;
    (__return_storage_ptr__->MapAssetPath).PackageName.ComparisonIndex = 0;
    *(undefined8 *)&(__return_storage_ptr__->MapAssetPath).PackageName.Number = 0;
    *(undefined8 *)&(__return_storage_ptr__->MapAssetPath).AssetName.Number = 0;
    *(undefined8 *)&(__return_storage_ptr__->OwnerAssetPath).PackageName.Number = 0;
    *(ulonglong *)&(__return_storage_ptr__->OwnerAssetPath).AssetName.Number =
         (ulonglong)uStack_3c << 0x20;
    __return_storage_ptr__->MetadataID = 0;
  }
  else {
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar2 = param_1->Owner;
    if (pUVar2 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        local_78.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_78.Number = *(uint *)&pUVar2->field_0x1c;
      }
      else {
        FStack_70.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        FStack_70.Number = *(uint *)&pUVar2->field_0x1c;
        pUVar5 = (UObject *)(**(code **)(*(longlong *)pUVar2 + 0x180))(pUVar2);
        local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_98.AssetPath.PackageName.Number = 0;
        local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_98.AssetPath.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_98.AssetPath,pUVar5);
        lVar3 = *(longlong *)&pUVar2[4].field_0x8;
        FStack_5c = local_98.AssetPath.PackageName.ComparisonIndex.Value;
        uStack_58 = local_98.AssetPath.PackageName.Number;
        FStack_54 = local_98.AssetPath.AssetName.ComparisonIndex.Value;
        uStack_50 = local_98.AssetPath.AssetName.Number;
        if (lVar3 == 0) {
          local_res10 = 0;
          local_78 = FVar7;
        }
        else {
          local_78 = *(FName *)(lVar3 + 0x18);
          local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_98.AssetPath.PackageName.Number = 0;
          local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_98.AssetPath.AssetName.Number = 0;
          local_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.SubPathString.Data.ArrayNum = 0;
          local_98.SubPathString.Data.ArrayMax = 0;
          FSoftObjectPath::SetPath(&local_98,*(UObject **)(lVar3 + 0x10));
          FStack_4c = local_98.AssetPath.PackageName.ComparisonIndex.Value;
          uStack_48 = local_98.AssetPath.PackageName.Number;
          FStack_44 = local_98.AssetPath.AssetName.ComparisonIndex.Value;
          uStack_40 = local_98.AssetPath.AssetName.Number;
          if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
          }
        }
      }
      if (CONCAT44(uStack_48,FStack_4c.Value) == 0) {
        local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_98.AssetPath.PackageName.Number = 0;
        local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_98.AssetPath.AssetName.Number = 0;
        local_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.SubPathString.Data.ArrayNum = 0;
        local_98.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_98,pUVar2);
        FStack_4c = local_98.AssetPath.PackageName.ComparisonIndex.Value;
        uStack_48 = local_98.AssetPath.PackageName.Number;
        FStack_44 = local_98.AssetPath.AssetName.ComparisonIndex.Value;
        uStack_40 = local_98.AssetPath.AssetName.Number;
        if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    switch(param_1->Type) {
    default:
      `FChaosVDEngineEditorBridge::GenerateParticleMetadata'::__l21::<lambda_1>::operator()
                (&local_res10);
      break;
    case GeometryCollectionType:
      if (param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
          FVar7 = (FName)param_2;
        }
        pTVar6 = TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                         *)&param_1[0xd].Owner,(TPBDRigidParticleHandleImp<double,3,1> *)FVar7);
        uStack_60 = 0xffffffff;
        if ((pTVar6 != (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *)0x0) &&
           (&pTVar6->field_0x8 != (undefined1 *)0x0)) {
          uStack_60 = *(undefined4 *)&pTVar6->field_0x8;
        }
      }
      break;
    case SingleParticleProxy:
      pUVar2 = param_1[1].Owner;
      if (pUVar2 != (UObject *)0x0) {
        local_68.ComparisonIndex.Value = *(uint *)&pUVar2->field_0xc;
        local_68.Number = *(uint *)&pUVar2->field_0x10;
      }
    }
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    __return_storage_ptr__->OwnerName = local_78;
    __return_storage_ptr__->ComponentName = FStack_70;
    __return_storage_ptr__->BoneName = local_68;
    __return_storage_ptr__->Index = uStack_60;
    (__return_storage_ptr__->MapAssetPath).PackageName.ComparisonIndex =
         (FNameEntryId)FStack_5c.Value;
    *(ulonglong *)&(__return_storage_ptr__->MapAssetPath).PackageName.Number =
         CONCAT44(FStack_54.Value,uStack_58);
    *(ulonglong *)&(__return_storage_ptr__->MapAssetPath).AssetName.Number =
         CONCAT44(FStack_4c.Value,uStack_50);
    *(ulonglong *)&(__return_storage_ptr__->OwnerAssetPath).PackageName.Number =
         CONCAT44(FStack_44.Value,uStack_48);
    *(ulonglong *)&(__return_storage_ptr__->OwnerAssetPath).AssetName.Number =
         CONCAT44(uStack_3c,uStack_40);
    __return_storage_ptr__->MetadataID = local_38;
  }
  return __return_storage_ptr__;
}

// Get @ 1463120d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FChaosVDEngineEditorBridge * __cdecl FChaosVDEngineEditorBridge::Get(void)

{
  code *pcVar1;
  bool bVar2;
  TIntrusiveReferenceController<FChaosVDRemoteSessionsManager,1> *this;
  FChaosVDEngineEditorBridge *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = ::operator_new(0x210);
      if (this == (TIntrusiveReferenceController<FChaosVDRemoteSessionsManager,1> *)0x0) {
        CVDEngineEditorBridge.RemoteSessionsManager = ___xmm_00000000000000000000000000000010;
      }
      else {
        CVDEngineEditorBridge.RemoteSessionsManager.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)
             SharedPointerInternals::TIntrusiveReferenceController<FChaosVDRemoteSessionsManager,1>
             ::TIntrusiveReferenceController<FChaosVDRemoteSessionsManager,1><>(this);
        CVDEngineEditorBridge.RemoteSessionsManager.Object =
             (FChaosVDRemoteSessionsManager *)
             (CVDEngineEditorBridge.RemoteSessionsManager.SharedReferenceCount.ReferenceController +
             1);
        if ((FChaosVDRemoteSessionsManager *)
            (CVDEngineEditorBridge.RemoteSessionsManager.SharedReferenceCount.ReferenceController +
            1) == (FChaosVDRemoteSessionsManager *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FChaosVDEngineEditorBridge *)(*pcVar1)();
            return pFVar3;
          }
        }
      }
      CVDEngineEditorBridge.DeferredShowMessageOnScreenHandle =
           (TWeakPtr<FTSTicker::FElement,1>)ZEXT816(0);
      CVDEngineEditorBridge.bIsInitialized = false;
      CVDEngineEditorBridge.RecordingStatusUpdateHandle =
           (TWeakPtr<FTSTicker::FElement,1>)ZEXT816(0);
      CVDEngineEditorBridge.EngineEditorBridgeInitializedDelegate._16_8_ =
           ___xmm_00000000000000020000000000000000;
      CVDEngineEditorBridge.EngineEditorBridgeInitializedDelegate._24_8_ = _UNK_150631d48;
      CVDEngineEditorBridge.EngineEditorBridgeInitializedDelegate._0_16_ =
           CVDEngineEditorBridge.RecordingStatusUpdateHandle;
      atexit(`FChaosVDEngineEditorBridge::Get'::__l2::
             _dynamic_atexit_destructor_for__CVDEngineEditorBridge__);
      _Init_thread_footer(&::_TSS0);
      return &CVDEngineEditorBridge;
    }
  }
  return &CVDEngineEditorBridge;
}

// HandleCVDPostRecordingStarted @ 146314250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::HandleCVDPostRecordingStarted(FChaosVDEngineEditorBridge *this)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  ETraceTypeQuery EVar4;
  UCollisionProfile *this_00;
  FName this_01;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1> *pTVar6;
  int *piVar7;
  longlong lVar8;
  ECollisionChannel EVar9;
  int iVar10;
  ulonglong *puVar11;
  FScriptContainerElement *_Src;
  undefined1 auStackY_588 [32];
  uchar *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  uchar *puStack_528;
  int iStack_520;
  undefined4 uStack_51c;
  FArchiveState FStack_518;
  undefined8 uStack_488;
  uchar **ppuStack_480;
  undefined8 uStack_478;
  FChaosVDSerializableNameTable *pFStack_470;
  TReferenceControllerBase<1> *pTStack_468;
  undefined1 auStack_458 [8];
  FString FStack_450;
  TStringView<wchar_t> TStack_438;
  TArrayView<unsigned_char_const_,int> TStack_428;
  FArchiveState FStack_418;
  undefined8 uStack_388;
  uchar **ppuStack_380;
  undefined8 uStack_378;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> aTStack_368 [2];
  FChaosVDCollisionChannelsInfoContainer FStack_348;
  ulonglong auStack_48 [4];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStackY_588;
  EVar9 = ECC_WorldStatic;
  puStack_540 = (uchar *)0x0;
  uStack_538 = 0;
  uStack_530 = 0;
  FStack_418._padding_ = 0;
  FStack_418.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  FStack_418.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  FStack_418.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  FStack_418.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  FStack_418._40_8_ = 0;
  FStack_418.ArSerializingDefaults = 0;
  FStack_418.ArPortFlags = 0;
  FStack_418.ArMaxSerializeSize = 0;
  FStack_418.ArUEVer.FileVersionUE4 = 0;
  FStack_418.ArUEVer.FileVersionUE5 = 0;
  FStack_418.ArLicenseeUEVer = 0;
  FStack_418.ArEngineVer.Major = 0;
  FStack_418.ArEngineVer.Minor = 0;
  FStack_418.ArEngineVer.Patch = 0;
  FStack_418.ArEngineVer._6_2_ = 0;
  FStack_418.ArEngineVer.Changelist = 0;
  FStack_418.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  FStack_418.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  FStack_418.SavePackageData = (FArchiveSavePackageData *)0x0;
  FStack_418.SerializedProperty = (FProperty *)0x0;
  FStack_418.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  FStack_418.bCustomVersionsAreReset = false;
  FStack_418._129_7_ = 0;
  FStack_418.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&FStack_418);
  uStack_388 = 0;
  FStack_418._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  ppuStack_380 = &puStack_540;
  uStack_378 = 0;
  FArchiveState::SetIsSaving(&FStack_418,true);
  (**(code **)(FStack_418._padding_ + 0x108))(&FStack_418);
  FStack_418._padding_ = (longlong)&___7FMemoryWriter__6B_;
  memset(&FStack_348,0,0x300);
  FStack_348.CustomChannelsNames[0].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[1].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[1].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[1].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[2].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[2].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[2].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[3].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[3].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[3].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[4].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[4].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[4].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[5].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[5].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[5].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[6].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[6].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[6].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[7].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[7].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[7].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[8].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0].bIsTraceType = false;
  FStack_348.CustomChannelsNames[1].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[1].bIsTraceType = false;
  FStack_348.CustomChannelsNames[2].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[2].bIsTraceType = false;
  FStack_348.CustomChannelsNames[3].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[3].bIsTraceType = false;
  FStack_348.CustomChannelsNames[4].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[4].bIsTraceType = false;
  FStack_348.CustomChannelsNames[5].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[5].bIsTraceType = false;
  FStack_348.CustomChannelsNames[6].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[6].bIsTraceType = false;
  FStack_348.CustomChannelsNames[7].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[7].bIsTraceType = false;
  FStack_348.CustomChannelsNames[9].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[9].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[9].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[10].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[10].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[10].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0xb].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0xb].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0xb].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0xc].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0xc].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0xc].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0xd].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0xd].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0xd].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0xe].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0xe].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0xe].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0xf].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0xf].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0xf].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x10].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x10].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x10].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x11].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x11].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x11].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x12].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x12].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x12].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x13].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x13].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x13].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x14].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x14].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x14].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x15].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x15].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x15].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x16].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x16].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x16].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x17].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x17].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x17].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x18].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x18].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x18].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[8].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[8].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[8].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[8].bIsTraceType = false;
  FStack_348.CustomChannelsNames[9].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[9].bIsTraceType = false;
  FStack_348.CustomChannelsNames[10].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[10].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0xb].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0xb].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0xc].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0xc].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0xd].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0xd].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0xe].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0xe].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0xf].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0xf].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x10].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x10].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x11].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x11].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x12].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x12].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x13].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x13].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x14].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x14].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x15].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x15].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x16].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x16].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x17].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x17].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x19].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x19].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x19].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x1a].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x1a].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x1a].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x1b].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x1b].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x1b].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x1c].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x1c].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x1c].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x1d].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x1d].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x1d].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x1e].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x1e].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x1e].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x1f].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  FStack_348.CustomChannelsNames[0x1f].DisplayName.Data.ArrayNum = 0;
  FStack_348.CustomChannelsNames[0x1f].DisplayName.Data.ArrayMax = 0;
  FStack_348.CustomChannelsNames[0x18].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x18].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x19].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x19].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x1a].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x1a].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x1b].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x1b].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x1c].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x1c].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x1d].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x1d].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x1e].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x1e].bIsTraceType = false;
  FStack_348.CustomChannelsNames[0x1f].CollisionChannel = -1;
  FStack_348.CustomChannelsNames[0x1f].bIsTraceType = false;
  this_00 = UCollisionProfile::Get();
  if (this_00 != (UCollisionProfile *)0x0) {
    piVar7 = &FStack_348.CustomChannelsNames[0].DisplayName.Data.ArrayMax;
    do {
      _Src = (FScriptContainerElement *)0x0;
      this_01 = UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)auStack_458);
      pTVar5 = &::FName::ToString((FName *)this_01,&FStack_450)->Data;
      iVar10 = 0;
      if (aTStack_368 != pTVar5) {
        _Src = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar10 = pTVar5->ArrayNum;
        pTVar5->ArrayNum = 0;
        pTVar5->ArrayMax = 0;
      }
      if (FStack_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_450.Data.AllocatorInstance.Data);
      }
      EVar4 = UCollisionProfile::ConvertToTraceType(this_00,EVar9);
      pTVar5 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar7 + -3);
      if (pTVar5 != aTStack_368) {
        piVar7[-1] = iVar10;
        if ((iVar10 == 0) && (*piVar7 == 0)) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,*piVar7,(ForAnyElementType *)pTVar5,iVar10,piVar7);
          if (iVar10 != 0) {
            memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar10 * 2);
          }
        }
      }
      piVar7[1] = EVar9;
      *(bool *)(piVar7 + 2) = EVar4 != TraceTypeQuery_MAX;
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
      }
      EVar9 = EVar9 + ECC_WorldDynamic;
      piVar7 = piVar7 + 6;
    } while ((int)EVar9 < 0x20);
  }
  pTVar6 = FChaosVisualDebuggerTrace::GetNameTableInstance();
  FStack_518._padding_ = 0;
  FStack_518.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  FStack_518.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  FStack_518.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  FStack_518.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  FStack_518._40_8_ = 0;
  FStack_518.ArSerializingDefaults = 0;
  FStack_518.ArPortFlags = 0;
  FStack_518.ArMaxSerializeSize = 0;
  FStack_518.ArUEVer.FileVersionUE4 = 0;
  FStack_518.ArUEVer.FileVersionUE5 = 0;
  FStack_518.ArLicenseeUEVer = 0;
  FStack_518.ArEngineVer.Major = 0;
  FStack_518.ArEngineVer.Minor = 0;
  FStack_518.ArEngineVer.Patch = 0;
  FStack_518.ArEngineVer._6_2_ = 0;
  FStack_518.ArEngineVer.Changelist = 0;
  FStack_518.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  FStack_518.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  FStack_518.SavePackageData = (FArchiveSavePackageData *)0x0;
  FStack_518.SerializedProperty = (FProperty *)0x0;
  FStack_518.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  FStack_518.bCustomVersionsAreReset = false;
  FStack_518._129_7_ = 0;
  FStack_518.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&FStack_518);
  uStack_488 = 0;
  FStack_518._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  ppuStack_480 = &puStack_540;
  uStack_478 = 0;
  FArchiveState::SetIsSaving(&FStack_518,true);
  (**(code **)(FStack_518._padding_ + 0x108))(&FStack_518,0);
  FStack_518._padding_ = (longlong)&___7FChaosVDMemoryWriter_VisualDebugger_Chaos__6B_;
  pFStack_470 = pTVar6->Object;
  pTStack_468 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (pTStack_468 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_468->SharedReferenceCount = (atomic<int>)((int)pTStack_468->SharedReferenceCount + 1);
    UNLOCK();
  }
  FArchiveState::SetShouldSkipUpdateCustomVersion(&FStack_518,true);
  FChaosVDCollisionChannelsInfoContainer::Serialize(&FStack_348,(FArchive *)&FStack_518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_468);
  FArchive::~FArchive((FArchive *)&FStack_518);
  TStack_438 = FChaosVDCollisionChannelsInfoContainer::WrapperTypeName;
  iStack_520 = (int)uStack_538;
  puStack_528 = puStack_540;
  if (((int)uStack_538 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TStack_428._12_4_ = uStack_51c;
  TStack_428.ArrayNum = iStack_520;
  TStack_428.DataPtr = puStack_528;
  FChaosVisualDebuggerTrace::TraceBinaryData(&TStack_428,&TStack_438,None);
  puVar11 = auStack_48;
  lVar8 = 0x20;
  do {
    puVar1 = puVar11 + -3;
    puVar11 = puVar11 + -3;
    lVar8 = lVar8 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar8 != 0);
  FArchive::~FArchive((FArchive *)&FStack_418);
  if (puStack_540 != (uchar *)0x0) {
    FMemory::Free(puStack_540);
  }
  return;
}

// HandleCVDRecordingStartFailed @ 146314260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::HandleCVDRecordingStartFailed
          (FChaosVDEngineEditorBridge *this,FText *param_1)

{
  int iVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"ChaosVisualDebugger",L"StartRecordingFailedOnScreenMessage",
                      L"Failed to start CVD recording. {0}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
  iVar1 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  local_48.ArrayNum = iVar1 + 1;
  FFormatArgumentValue::FFormatArgumentValue
            ((FFormatArgumentValue *)(local_48.AllocatorInstance.Data + (longlong)iVar1 * 0x20),
             param_1);
  FText::FormatOrderedImpl(&local_38,pFVar3,&local_48);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FFormatArgumentValue *)local_48.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar3->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::ToString(&local_38);
  UEngine::AddOnScreenDebugMessage
            (GEngine,this->CVDRecordingMessageKey,__real_40800000,FColor::Red,pFVar4,true,
             &UE::Math::TVector2<double>::UnitVector);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// HandleCVDRecordingStarted @ 1463143d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::HandleCVDRecordingStarted(FChaosVDEngineEditorBridge *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FTSTicker *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  AddOnScreenRecordingMessage(this,__real_3dcccccd);
  BroadcastSessionStatus(this,(float)(double)FApp::DeltaTime);
  if ((((this->RecordingStatusUpdateHandle).Object == (FElement *)0x0) ||
      (pTVar3 = (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    this_00 = FTSTicker::GetCoreTicker();
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDEngineEditorBridge____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[4] = BroadcastSessionStatus;
      puVar6[3] = this;
      if (this == (FChaosVDEngineEditorBridge *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pTVar8 = FTSTicker::AddTicker
                       (this_00,&local_78,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,
                        __real_3f000000);
    if (&this->RecordingStatusUpdateHandle != pTVar8) {
      (this->RecordingStatusUpdateHandle).Object = pTVar8->Object;
      pTVar8->Object = (FElement *)0x0;
      pTVar3 = (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController;
      (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController =
           (pTVar8->WeakReferenceCount).ReferenceController;
      (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// HandleCVDRecordingStopped @ 146314600

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
FChaosVDEngineEditorBridge::HandleCVDRecordingStopped(FChaosVDEngineEditorBridge *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TWeakPtr<FTSTicker::FElement,1> local_48;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1157677897419325501>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDEngineEditorBridge.cpp"
                         ,0x3d,"IsInGameThread()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (GEngine != (UEngine *)0x0) {
    pTVar1 = &this->DeferredShowMessageOnScreenHandle;
    if ((((this->DeferredShowMessageOnScreenHandle).Object == (FElement *)0x0) ||
        (pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController,
        pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
      if (this->CVDRecordingMessageKey != 0) {
        UEngine::RemoveOnScreenDebugMessage(GEngine,this->CVDRecordingMessageKey);
      }
    }
    else {
      local_48.Object = pTVar1->Object;
      local_48.WeakReferenceCount.ReferenceController =
           (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_48);
      if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_28) {
        pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
        pTVar1->Object = (FElement *)0x0;
        (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
  }
  local_38.Object = (this->RecordingStatusUpdateHandle).Object;
  local_38.WeakReferenceCount.ReferenceController =
       (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_38);
  if (&this->RecordingStatusUpdateHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
    pTVar4 = (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController;
    (this->RecordingStatusUpdateHandle).Object = (FElement *)0x0;
    (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  BroadcastSessionStatus(this,(float)(double)FApp::DeltaTime);
  return;
}

// HandleDataChannelChanged @ 146315980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::HandleDataChannelChanged
          (FChaosVDEngineEditorBridge *this,
          TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> *param_1)

{
  atomic<int> *paVar1;
  ForAnyElementType *pFVar2;
  atomic<int> aVar3;
  FChaosVDOptionalDataChannel *pFVar4;
  FMessageEndpoint *this_00;
  code *pcVar5;
  atomic<int> aVar6;
  FGuid *pFVar7;
  FString *pFVar8;
  FName FVar9;
  UPackage *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *_Src;
  int iVar12;
  bool bVar13;
  FDateTime local_res10;
  FName local_res18;
  FTimespan local_res20;
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FGuid local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FString local_58;
  undefined1 local_47;
  
  pTVar11 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1463159da;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar13 = aVar3 == aVar6;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar13);
    pFVar4 = param_1->Object;
    if (pFVar4 != (FChaosVDOptionalDataChannel *)0x0) {
      _Src = (FScriptContainerElement *)0x0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar12 = 0;
      local_58.Data.ArrayNum = 0;
      pFVar7 = FApp::GetInstanceId(&local_78);
      local_88._0_4_ = pFVar7->A;
      local_88._4_4_ = pFVar7->B;
      uStack_80._0_4_ = pFVar7->C;
      uStack_80._4_4_ = pFVar7->D;
      local_res10.Ticks._0_1_ = pFVar4->bIsEnabled;
      local_res18 = *(pFVar4->ChannelId).Object;
      local_68 = local_88;
      uStack_60 = uStack_80;
      pFVar8 = ::FName::ToString(&local_res18,&local_98);
      if (&local_58 != pFVar8) {
        _Src = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar12 = (pFVar8->Data).ArrayNum;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = _Src;
        local_58.Data.ArrayNum = iVar12;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      bVar13 = pFVar4->bCanChangeEnabledState;
      this_00 = (((this->RemoteSessionsManager).Object)->MessageEndpoint).Object;
      local_47 = bVar13;
      if (this_00 == (FMessageEndpoint *)0x0) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5659785178273283767>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                            ,0x149,"MessageEndpoint");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        FVar9 = (FName)FMemory::Malloc(0x28,0);
        pFVar2 = (ForAnyElementType *)((longlong)FVar9 + 0x10);
        *(undefined8 *)FVar9 = local_88;
        *(undefined8 *)((longlong)FVar9 + 8) = uStack_80;
        pFVar2->Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)FVar9 + 0x18) = iVar12;
        local_res18 = FVar9;
        if (iVar12 == 0) {
          *(int *)((longlong)FVar9 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,0,pFVar2,iVar12,(int *)((longlong)FVar9 + 0x1c));
          memcpy(pFVar2->Data,_Src,(longlong)iVar12 * 2);
        }
        *(atomic<bool> *)((longlong)FVar9 + 0x20) = local_res10.Ticks._0_1_;
        local_res10.Ticks = 0x2bca2875f4373fff;
        *(bool *)((longlong)FVar9 + 0x21) = bVar13;
        *(undefined1 *)((longlong)FVar9 + 0x22) = 0;
        local_res20.Ticks = 0;
        if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.
            OuterSingleton == (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UPackage__Script_ChaosSolverEngine();
          Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton
               = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeResponseMessage
                                 ,(UObject *)pUVar10,L"ChaosVDChannelStateChangeResponseMessage");
        }
        FMessageEndpoint::Publish
                  (this_00,(void *)local_res18,
                   Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.
                   OuterSingleton,Network,&local_res20,&local_res10);
      }
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_1463159da:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar11 = (param_1->WeakReferenceCount).ReferenceController;
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
  return;
}

// HandlePIEStarted @ 146316ab0

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
FChaosVDEngineEditorBridge::HandlePIEStarted
          (FChaosVDEngineEditorBridge *this,UGameInstance *param_1)

{
  FChaosVDRuntimeModule *pFVar1;
  
  pFVar1 = FChaosVDRuntimeModule::Get();
  if (pFVar1->bIsRecording != false) {
    AddOnScreenRecordingMessage(this,__real_3dcccccd);
    return;
  }
  return;
}

// HandleTraceConnectionDetailsUpdated @ 146317730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::HandleTraceConnectionDetailsUpdated(FChaosVDEngineEditorBridge *this)

{
  ForAnyElementType *pFVar1;
  FMessageEndpoint *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FChaosVDRuntimeModule *this_01;
  FGuid *pFVar6;
  FChaosVDTraceDetails *pFVar7;
  undefined8 *puVar8;
  UPackage *pUVar9;
  longlong lVar10;
  ForAnyElementType _Src;
  ForAnyElementType _Src_00;
  size_t _Size;
  FDateTime local_res8;
  FTimespan local_res10;
  FChaosVDTraceDetails local_e8;
  FGuid local_98;
  FChaosVDTraceDetails local_88;
  
  this_01 = FChaosVDRuntimeModule::Get();
  local_e8.TraceGuid.A = 0;
  local_e8.TraceGuid.B = 0;
  local_e8.TraceGuid.C = 0;
  local_e8.TraceGuid.D = 0;
  local_e8.SessionGuid.A = 0;
  local_e8.SessionGuid.B = 0;
  local_e8.SessionGuid.C = 0;
  local_e8.SessionGuid.D = 0;
  local_e8.TraceTarget.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.TraceTarget.Data.ArrayNum = 0;
  local_e8.TraceTarget.Data.ArrayMax = 0;
  local_e8.Port = 0;
  local_e8.bIsConnected = false;
  local_e8.Mode = Invalid;
  local_e8.TransportMode = Invalid;
  local_e8.CertAuth.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.CertAuth.ArrayNum = 0;
  local_e8.CertAuth.ArrayMax = 0;
  local_e8.bIsValid = false;
  pFVar6 = FApp::GetInstanceId(&local_98);
  uVar3 = *(undefined8 *)pFVar6;
  uVar4 = *(undefined8 *)&pFVar6->C;
  pFVar7 = FChaosVDRuntimeModule::GetCurrentTraceSessionDetails(this_01,&local_88);
  FChaosVDTraceDetails::operator=(&local_e8,pFVar7);
  if (local_88.CertAuth.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.CertAuth.AllocatorInstance.Data);
  }
  if (local_88.TraceTarget.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.TraceTarget.Data.AllocatorInstance.Data);
  }
  this_00 = (((this->RemoteSessionsManager).Object)->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283775>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x141,"MessageEndpoint");
    _Src.Data = local_e8.CertAuth.AllocatorInstance.Data;
    _Src_00.Data = local_e8.TraceTarget.Data.AllocatorInstance.Data;
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar8 = FMemory::Malloc(0x60,0);
    _Src_00.Data = local_e8.TraceTarget.Data.AllocatorInstance.Data;
    lVar10 = (longlong)local_e8.TraceTarget.Data.ArrayNum;
    pFVar1 = (ForAnyElementType *)(puVar8 + 6);
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    puVar8[2] = local_e8.TraceGuid._0_8_;
    puVar8[3] = local_e8.TraceGuid._8_8_;
    puVar8[4] = local_e8.SessionGuid._0_8_;
    puVar8[5] = local_e8.SessionGuid._8_8_;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar8 + 7) = local_e8.TraceTarget.Data.ArrayNum;
    if (local_e8.TraceTarget.Data.ArrayNum == 0) {
      *(int *)((longlong)puVar8 + 0x3c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8.TraceTarget.Data.ArrayNum,0,pFVar1,local_e8.TraceTarget.Data.ArrayNum,
                 (int *)((longlong)puVar8 + 0x3c));
      memcpy(pFVar1->Data,_Src_00.Data,lVar10 * 2);
    }
    _Src.Data = local_e8.CertAuth.AllocatorInstance.Data;
    pFVar1 = (ForAnyElementType *)(puVar8 + 9);
    _Size = (size_t)local_e8.CertAuth.ArrayNum;
    *(ushort *)(puVar8 + 8) = local_e8.Port;
    *(bool *)((longlong)puVar8 + 0x42) = local_e8.bIsConnected;
    *(EChaosVDRecordingMode *)((longlong)puVar8 + 0x43) = local_e8.Mode;
    *(EChaosVDTransportMode *)((longlong)puVar8 + 0x44) = local_e8.TransportMode;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar8 + 10) = local_e8.CertAuth.ArrayNum;
    if (local_e8.CertAuth.ArrayNum == 0) {
      *(int *)((longlong)puVar8 + 0x54) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_e8.CertAuth.ArrayNum,0,pFVar1,local_e8.CertAuth.ArrayNum,
                 (int *)((longlong)puVar8 + 0x54));
      memcpy(pFVar1->Data,_Src.Data,_Size);
    }
    *(bool *)(puVar8 + 0xb) = local_e8.bIsValid;
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_res10.Ticks = 0;
    if (Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDTraceConnectionDetailsMessage,
                           (UObject *)pUVar9,L"ChaosVDTraceConnectionDetailsMessage");
    }
    FMessageEndpoint::Publish
              (this_00,puVar8,
               Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.
               OuterSingleton,Network,&local_res10,&local_res8);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  if (_Src_00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src_00.Data);
  }
  return;
}

// Initialize @ 146317a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDEngineEditorBridge::Initialize(FChaosVDEngineEditorBridge *this)

{
  FChaosVDRuntimeModule *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FChaosVDDataChannelsManager *this_00;
  FDelegateHandle local_res8;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  int local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar1 = FChaosVDRuntimeModule::Get();
  FChaosVDRemoteSessionsManager::Initialize((this->RemoteSessionsManager).Object);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    puVar2[4] = HandleCVDRecordingStarted;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDEngineEditorBridge____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FChaosVDRuntimeModule::RecordingStartedDelegate,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  (this->RecordingStartedHandle).ID = local_res8.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    puVar2[4] = HandleCVDPostRecordingStarted;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDEngineEditorBridge____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FChaosVDRuntimeModule::PostRecordingStartedDelegate,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  (this->PostRecordingStartedHandle).ID = local_res8.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    puVar2[4] = HandleCVDRecordingStopped;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDEngineEditorBridge____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FChaosVDRuntimeModule::RecordingStopDelegate,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  if ((local_50 != 0) && (local_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  (this->RecordingStoppedHandle).ID = local_res8.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVFChaosVDEngineEditorBridge____A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[4] = HandleCVDRecordingStartFailed;
    puVar2[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  TMulticastDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
              *)&FChaosVDRuntimeModule::RecordingStartFailedDelegate,
             (TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)&local_res8);
  ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  (this->RecordingStartFailedHandle).ID = local_res8.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FChaosVDEngineEditorBridge>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar1->TraceConnectionDetailsUpdatedDelegate,
             (FChaosVDEngineEditorBridge *)&local_res8,(pmf_7495dec2)this);
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = GenerateParticleMetadata;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  FChaosVisualDebuggerTrace::RegisterExternalParticleDebugNameGenerator
            ((TDelegate<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
              *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  this_00 = Chaos::VisualDebugger::FChaosVDDataChannelsManager::Get();
  TMulticastDelegateRegistration<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>
  ::AddRaw<FChaosVDEngineEditorBridge>
            ((TMulticastDelegateRegistration<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>
              *)this_00,(FChaosVDEngineEditorBridge *)&local_res8,(pmf_418f1ab0)this);
  if (pFVar1->bIsRecording != false) {
    HandleCVDRecordingStarted(this);
    SerializeCollisionChannelsNames(this);
  }
  this->bIsInitialized = true;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->EngineEditorBridgeInitializedDelegate);
  return;
}

// RemoveOnScreenRecordingMessage @ 14631c4e0

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
FChaosVDEngineEditorBridge::RemoveOnScreenRecordingMessage(FChaosVDEngineEditorBridge *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  undefined8 local_18 [2];
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1157677897419325501>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDEngineEditorBridge.cpp"
                         ,0x3d,"IsInGameThread()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (GEngine != (UEngine *)0x0) {
    pTVar1 = &this->DeferredShowMessageOnScreenHandle;
    if ((((this->DeferredShowMessageOnScreenHandle).Object == (FElement *)0x0) ||
        (pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController,
        pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
      if (this->CVDRecordingMessageKey != 0) {
        UEngine::RemoveOnScreenDebugMessage(GEngine,this->CVDRecordingMessageKey);
      }
    }
    else {
      local_28.Object = pTVar1->Object;
      local_28.WeakReferenceCount.ReferenceController =
           (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
      if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_28);
      if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
        pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
        pTVar1->Object = (FElement *)0x0;
        (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014631c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            return;
          }
        }
      }
    }
  }
  return;
}

// SerializeCollisionChannelsNames @ 14631ed50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::SerializeCollisionChannelsNames(FChaosVDEngineEditorBridge *this)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  ETraceTypeQuery EVar4;
  UCollisionProfile *this_00;
  FName this_01;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1> *pTVar6;
  int *piVar7;
  longlong lVar8;
  ECollisionChannel EVar9;
  int iVar10;
  ulonglong *puVar11;
  FScriptContainerElement *_Src;
  undefined1 auStackY_588 [32];
  uchar *local_540;
  undefined8 local_538;
  undefined8 local_530;
  uchar *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  FArchiveState local_518;
  undefined8 local_488;
  uchar **local_480;
  undefined8 local_478;
  FChaosVDSerializableNameTable *local_470;
  TReferenceControllerBase<1> *local_468;
  undefined1 local_458 [8];
  FString local_450;
  TStringView<wchar_t> local_438;
  TArrayView<unsigned_char_const_,int> local_428;
  FArchiveState local_418;
  undefined8 local_388;
  uchar **local_380;
  undefined8 local_378;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_368 [2];
  FChaosVDCollisionChannelsInfoContainer local_348;
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_588;
  EVar9 = ECC_WorldStatic;
  local_540 = (uchar *)0x0;
  local_538 = 0;
  local_530 = 0;
  local_418._padding_ = 0;
  local_418.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_418.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_418.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_418.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_418._40_8_ = 0;
  local_418.ArSerializingDefaults = 0;
  local_418.ArPortFlags = 0;
  local_418.ArMaxSerializeSize = 0;
  local_418.ArUEVer.FileVersionUE4 = 0;
  local_418.ArUEVer.FileVersionUE5 = 0;
  local_418.ArLicenseeUEVer = 0;
  local_418.ArEngineVer.Major = 0;
  local_418.ArEngineVer.Minor = 0;
  local_418.ArEngineVer.Patch = 0;
  local_418.ArEngineVer._6_2_ = 0;
  local_418.ArEngineVer.Changelist = 0;
  local_418.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_418.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_418.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_418.SerializedProperty = (FProperty *)0x0;
  local_418.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_418.bCustomVersionsAreReset = false;
  local_418._129_7_ = 0;
  local_418.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_418);
  local_388 = 0;
  local_418._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_380 = &local_540;
  local_378 = 0;
  FArchiveState::SetIsSaving(&local_418,true);
  (**(code **)(local_418._padding_ + 0x108))(&local_418);
  local_418._padding_ = (longlong)&___7FMemoryWriter__6B_;
  memset(&local_348,0,0x300);
  local_348.CustomChannelsNames[0].CollisionChannel = -1;
  local_348.CustomChannelsNames[1].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[1].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[1].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[2].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[2].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[2].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[3].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[3].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[3].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[4].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[4].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[4].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[5].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[5].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[5].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[6].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[6].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[6].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[7].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[7].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[7].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[8].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0].bIsTraceType = false;
  local_348.CustomChannelsNames[1].CollisionChannel = -1;
  local_348.CustomChannelsNames[1].bIsTraceType = false;
  local_348.CustomChannelsNames[2].CollisionChannel = -1;
  local_348.CustomChannelsNames[2].bIsTraceType = false;
  local_348.CustomChannelsNames[3].CollisionChannel = -1;
  local_348.CustomChannelsNames[3].bIsTraceType = false;
  local_348.CustomChannelsNames[4].CollisionChannel = -1;
  local_348.CustomChannelsNames[4].bIsTraceType = false;
  local_348.CustomChannelsNames[5].CollisionChannel = -1;
  local_348.CustomChannelsNames[5].bIsTraceType = false;
  local_348.CustomChannelsNames[6].CollisionChannel = -1;
  local_348.CustomChannelsNames[6].bIsTraceType = false;
  local_348.CustomChannelsNames[7].CollisionChannel = -1;
  local_348.CustomChannelsNames[7].bIsTraceType = false;
  local_348.CustomChannelsNames[9].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[9].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[9].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[10].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[10].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[10].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0xb].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0xb].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0xb].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0xc].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0xc].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0xc].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0xd].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0xd].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0xd].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0xe].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0xe].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0xe].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0xf].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0xf].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0xf].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x10].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x10].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x10].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x11].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x11].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x11].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x12].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x12].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x12].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x13].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x13].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x13].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x14].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x14].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x14].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x15].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x15].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x15].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x16].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x16].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x16].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x17].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x17].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x17].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x18].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x18].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x18].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[8].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[8].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[8].CollisionChannel = -1;
  local_348.CustomChannelsNames[8].bIsTraceType = false;
  local_348.CustomChannelsNames[9].CollisionChannel = -1;
  local_348.CustomChannelsNames[9].bIsTraceType = false;
  local_348.CustomChannelsNames[10].CollisionChannel = -1;
  local_348.CustomChannelsNames[10].bIsTraceType = false;
  local_348.CustomChannelsNames[0xb].CollisionChannel = -1;
  local_348.CustomChannelsNames[0xb].bIsTraceType = false;
  local_348.CustomChannelsNames[0xc].CollisionChannel = -1;
  local_348.CustomChannelsNames[0xc].bIsTraceType = false;
  local_348.CustomChannelsNames[0xd].CollisionChannel = -1;
  local_348.CustomChannelsNames[0xd].bIsTraceType = false;
  local_348.CustomChannelsNames[0xe].CollisionChannel = -1;
  local_348.CustomChannelsNames[0xe].bIsTraceType = false;
  local_348.CustomChannelsNames[0xf].CollisionChannel = -1;
  local_348.CustomChannelsNames[0xf].bIsTraceType = false;
  local_348.CustomChannelsNames[0x10].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x10].bIsTraceType = false;
  local_348.CustomChannelsNames[0x11].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x11].bIsTraceType = false;
  local_348.CustomChannelsNames[0x12].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x12].bIsTraceType = false;
  local_348.CustomChannelsNames[0x13].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x13].bIsTraceType = false;
  local_348.CustomChannelsNames[0x14].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x14].bIsTraceType = false;
  local_348.CustomChannelsNames[0x15].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x15].bIsTraceType = false;
  local_348.CustomChannelsNames[0x16].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x16].bIsTraceType = false;
  local_348.CustomChannelsNames[0x17].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x17].bIsTraceType = false;
  local_348.CustomChannelsNames[0x19].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x19].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x19].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x1a].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x1a].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x1a].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x1b].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x1b].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x1b].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x1c].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x1c].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x1c].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x1d].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x1d].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x1d].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x1e].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x1e].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x1e].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x1f].DisplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_348.CustomChannelsNames[0x1f].DisplayName.Data.ArrayNum = 0;
  local_348.CustomChannelsNames[0x1f].DisplayName.Data.ArrayMax = 0;
  local_348.CustomChannelsNames[0x18].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x18].bIsTraceType = false;
  local_348.CustomChannelsNames[0x19].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x19].bIsTraceType = false;
  local_348.CustomChannelsNames[0x1a].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x1a].bIsTraceType = false;
  local_348.CustomChannelsNames[0x1b].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x1b].bIsTraceType = false;
  local_348.CustomChannelsNames[0x1c].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x1c].bIsTraceType = false;
  local_348.CustomChannelsNames[0x1d].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x1d].bIsTraceType = false;
  local_348.CustomChannelsNames[0x1e].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x1e].bIsTraceType = false;
  local_348.CustomChannelsNames[0x1f].CollisionChannel = -1;
  local_348.CustomChannelsNames[0x1f].bIsTraceType = false;
  this_00 = UCollisionProfile::Get();
  if (this_00 != (UCollisionProfile *)0x0) {
    piVar7 = &local_348.CustomChannelsNames[0].DisplayName.Data.ArrayMax;
    do {
      _Src = (FScriptContainerElement *)0x0;
      this_01 = UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)local_458);
      pTVar5 = &::FName::ToString((FName *)this_01,&local_450)->Data;
      iVar10 = 0;
      if (local_368 != pTVar5) {
        _Src = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->
               AllocatorInstance).Data;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar10 = pTVar5->ArrayNum;
        pTVar5->ArrayNum = 0;
        pTVar5->ArrayMax = 0;
      }
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      EVar4 = UCollisionProfile::ConvertToTraceType(this_00,EVar9);
      pTVar5 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar7 + -3);
      if (pTVar5 != local_368) {
        piVar7[-1] = iVar10;
        if ((iVar10 == 0) && (*piVar7 == 0)) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,*piVar7,(ForAnyElementType *)pTVar5,iVar10,piVar7);
          if (iVar10 != 0) {
            memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar10 * 2);
          }
        }
      }
      piVar7[1] = EVar9;
      *(bool *)(piVar7 + 2) = EVar4 != TraceTypeQuery_MAX;
      if (_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src);
      }
      EVar9 = EVar9 + ECC_WorldDynamic;
      piVar7 = piVar7 + 6;
    } while ((int)EVar9 < 0x20);
  }
  pTVar6 = FChaosVisualDebuggerTrace::GetNameTableInstance();
  local_518._padding_ = 0;
  local_518.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_518.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_518.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_518.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_518._40_8_ = 0;
  local_518.ArSerializingDefaults = 0;
  local_518.ArPortFlags = 0;
  local_518.ArMaxSerializeSize = 0;
  local_518.ArUEVer.FileVersionUE4 = 0;
  local_518.ArUEVer.FileVersionUE5 = 0;
  local_518.ArLicenseeUEVer = 0;
  local_518.ArEngineVer.Major = 0;
  local_518.ArEngineVer.Minor = 0;
  local_518.ArEngineVer.Patch = 0;
  local_518.ArEngineVer._6_2_ = 0;
  local_518.ArEngineVer.Changelist = 0;
  local_518.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_518.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_518.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_518.SerializedProperty = (FProperty *)0x0;
  local_518.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_518.bCustomVersionsAreReset = false;
  local_518._129_7_ = 0;
  local_518.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_518);
  local_488 = 0;
  local_518._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_480 = &local_540;
  local_478 = 0;
  FArchiveState::SetIsSaving(&local_518,true);
  (**(code **)(local_518._padding_ + 0x108))(&local_518,0);
  local_518._padding_ = (longlong)&___7FChaosVDMemoryWriter_VisualDebugger_Chaos__6B_;
  local_470 = pTVar6->Object;
  local_468 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_468 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_468->SharedReferenceCount = (atomic<int>)((int)local_468->SharedReferenceCount + 1);
    UNLOCK();
  }
  FArchiveState::SetShouldSkipUpdateCustomVersion(&local_518,true);
  FChaosVDCollisionChannelsInfoContainer::Serialize(&local_348,(FArchive *)&local_518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_468);
  FArchive::~FArchive((FArchive *)&local_518);
  local_438 = FChaosVDCollisionChannelsInfoContainer::WrapperTypeName;
  iStack_520 = (int)local_538;
  local_528 = local_540;
  if (((int)local_538 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_428._12_4_ = uStack_51c;
  local_428.ArrayNum = iStack_520;
  local_428.DataPtr = local_528;
  FChaosVisualDebuggerTrace::TraceBinaryData(&local_428,&local_438,None);
  puVar11 = local_48;
  lVar8 = 0x20;
  do {
    puVar1 = puVar11 + -3;
    puVar11 = puVar11 + -3;
    lVar8 = lVar8 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar8 != 0);
  FArchive::~FArchive((FArchive *)&local_418);
  if (local_540 != (uchar *)0x0) {
    FMemory::Free(local_540);
  }
  return;
}

// SetExternalTraceRelayInstance @ 14631f7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDEngineEditorBridge::SetExternalTraceRelayInstance
          (FChaosVDEngineEditorBridge *this,
          TSharedPtr<Chaos::VD::ITraceDataRelayTransport,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITraceDataRelayTransport *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((this->RelayTraceDataTransportInstance).Object == (ITraceDataRelayTransport *)0x0) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->RelayTraceDataTransportInstance).SharedReferenceCount.ReferenceController;
    (this->RelayTraceDataTransportInstance).Object = pIVar2;
    (this->RelayTraceDataTransportInstance).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1157677897419325705>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDEngineEditorBridge.cpp"
                     ,0x109,"!RelayTraceDataTransportInstance");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (1 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return;
  }
  return;
}

// TearDown @ 146320510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDEngineEditorBridge::TearDown(FChaosVDEngineEditorBridge *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ITraceDataRelayTransport *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDelegateHandle FVar5;
  FChaosVDRemoteSessionsManager *this_00;
  bool bVar6;
  FChaosVDRuntimeModule *pFVar7;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  pIVar3 = (this->RelayTraceDataTransportInstance).Object;
  if (pIVar3 != (ITraceDataRelayTransport *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  local_38.Object = (this->DeferredShowMessageOnScreenHandle).Object;
  local_38.WeakReferenceCount.ReferenceController =
       (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_38);
  if (&this->DeferredShowMessageOnScreenHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_28) {
    pTVar4 = (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController;
    (this->DeferredShowMessageOnScreenHandle).Object = (FElement *)0x0;
    (this->DeferredShowMessageOnScreenHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_38.Object = (this->RecordingStatusUpdateHandle).Object;
  local_38.WeakReferenceCount.ReferenceController =
       (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_38);
  if (&this->RecordingStatusUpdateHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
    pTVar4 = (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController;
    (this->RecordingStatusUpdateHandle).Object = (FElement *)0x0;
    (this->RecordingStatusUpdateHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  bVar6 = FChaosVDRuntimeModule::IsLoaded();
  if (bVar6) {
    pFVar7 = FChaosVDRuntimeModule::Get();
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    FVar5.ID = (this->RecordingStartedHandle).ID;
    if (FVar5.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStartedDelegate,FVar5);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    (this->RecordingStartedHandle).ID = 0;
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    FVar5.ID = (this->PostRecordingStartedHandle).ID;
    if (FVar5.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::PostRecordingStartedDelegate,FVar5);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    (this->PostRecordingStartedHandle).ID = 0;
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    FVar5.ID = (this->RecordingStoppedHandle).ID;
    if (FVar5.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStopDelegate,FVar5);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    (this->RecordingStoppedHandle).ID = 0;
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    FVar5.ID = (this->RecordingStartFailedHandle).ID;
    if (FVar5.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStartFailedDelegate,FVar5);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    (this->RecordingStartFailedHandle).ID = 0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar7->TraceConnectionDetailsUpdatedDelegate,this);
    if (pFVar7->bIsRecording != false) {
      HandleCVDRecordingStopped(this);
    }
    this_00 = (this->RemoteSessionsManager).Object;
    this_00->bInitialized = false;
    FChaosVDRemoteSessionsManager::ShutdownMessagingSystem(this_00);
  }
  this->bIsInitialized = false;
  return;
}

// operator() @ 1504e99c0

bool __thiscall
`FChaosVDEngineEditorBridge::GenerateParticleMetadata'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1157677897419325696>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1157677897419325696>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

