// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// FDynamicRenderAssetInstanceManager @ 1487769b0

FDynamicRenderAssetInstanceManager * __thiscall
FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager
          (FDynamicRenderAssetInstanceManager *this,
          TFunction<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&)>
          *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FRenderAssetInstanceState *pFVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  puVar8 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7FDynamicRenderAssetInstanceManager__6B_;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,&local_50);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_PEBVUStreamableRenderAsset__V__TSizedInlineAllocator__0M__0CA_V__TSizedDefaultAllocator__0CA________ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TArray_PEBVUStreamableRenderAsset__V__TSizedInlineAllocator__0M__0CA_V__TSizedDefaultAllocator__0CA________ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXAEBV__TArray_PEBVUStreamableRenderAsset__V__TSizedInlineAllocator__0M__0CA_V__TSizedDefaultAllocator__0CA________Z____V__6B_
    ;
    puVar4[4] = *(undefined8 *)param_1;
    puVar4[9] = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined8 *)&param_1->field_0x18;
    puVar4[6] = *(undefined8 *)&param_1->field_0x10;
    puVar4[7] = uVar2;
    puVar4[8] = *(undefined8 *)&param_1->field_0x20;
    if (puVar4[4] != 0) {
      *(undefined8 *)param_1 = 0;
    }
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar6 = ::operator_new(0x1d8);
  if (pFVar6 == (FRenderAssetInstanceState *)0x0) {
    (this->StateSync)._padding_ = 0;
  }
  else {
    pFVar6 = FRenderAssetInstanceState::FRenderAssetInstanceState(pFVar6,true);
    (this->StateSync)._padding_ = (longlong)pFVar6;
    if (pFVar6 != (FRenderAssetInstanceState *)0x0) {
      *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    }
  }
  (this->StateSync)._padding_ = 0;
  (this->StateSync)._padding_ = 0;
  TDelegate<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
            (&(this->StateSync).OnSyncDoneDelegate,
             (TDelegate<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  (this->AsyncView).Reference = (FRenderAssetInstanceView *)0x0;
  this->DirtyIndex = 0;
  this->PendingDefragSrcBoundIndex = -1;
  this->PendingDefragDstBoundIndex = -1;
  (this->PendingComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingComponents).ArrayNum = 0;
  (this->PendingComponents).ArrayMax = 0;
  puVar7 = ::operator_new(0x58);
  puVar4 = puVar8;
  puVar9 = puVar8;
  if (puVar7 != (undefined8 *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXHHAEBV__TArray_HV__TSizedDefaultAllocator__0CA_____HH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy,`FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TDoWorkTask_VFRefreshFull_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
    ;
    RenderAssetInstanceTask::FRefreshFull::FRefreshFull
              ((FRefreshFull *)(puVar7 + 2),
               (TDelegate<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
                *)local_58);
    *(undefined4 *)(puVar7 + 10) = 0;
    puVar4 = puVar7;
    puVar9 = (undefined8 *)&DAT_00000001;
  }
  puVar7 = (undefined8 *)(this->StateSync)._padding_;
  if (puVar7 != puVar4) {
    (this->StateSync)._padding_ = (longlong)puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  bVar3 = false;
  puVar4 = ::operator_new(0x48);
  if (puVar4 != (undefined8 *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    bVar3 = true;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVFRenderAssetInstanceView___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar5;
      *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy,`FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager'::`2'::<lambda_2>_>
                 ::_vftable_;
      puVar8[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &
              ___7__TDoWorkTask_VFCreateViewWithUninitializedBounds_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
    ;
    TDelegate<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy> *)
               (puVar4 + 2),
               (TDelegate<void___cdecl(FRenderAssetInstanceView_*),FDefaultDelegateUserPolicy> *)
               local_58);
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    puVar8 = puVar4;
  }
  puVar4 = (undefined8 *)(this->StateSync)._padding_;
  if (puVar4 != puVar8) {
    (this->StateSync)._padding_ = (longlong)puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return this;
}

// ~FDynamicRenderAssetInstanceManager @ 14877ec20

void __thiscall
FDynamicRenderAssetInstanceManager::~FDynamicRenderAssetInstanceManager
          (FDynamicRenderAssetInstanceManager *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRenderAssetInstanceView *pFVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FDynamicRenderAssetInstanceManager__6B_;
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&this->StateSync);
  pFVar2 = (this->PendingComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->AsyncView).Reference;
  if (pFVar3 != (FRenderAssetInstanceView *)0x0) {
    plVar1 = &pFVar3->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->StateSync).OnSyncDoneDelegate);
  pvVar4 = *(void **)&(this->StateSync).OnSyncDoneDelegate.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StateSync).OnSyncDoneDelegate);
  FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::
  ~FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>
            ((FRenderAssetInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks> *)
             &this->StateSync);
  this->_padding_ = (longlong)&___7IRenderAssetInstanceManager__6B_;
  return;
}

// operator() @ 148781870

void __thiscall
`FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager'::__l2::<lambda_1>::
operator()(void *this,int param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FRenderAssetInstanceState *this_00;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  lVar3 = *(longlong *)this;
  this_00 = *(FRenderAssetInstanceState **)(lVar3 + 8);
  if (*(int *)(lVar3 + 0x40) != param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyIndex == BeginIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                       ,0xc0,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = (param_3->AllocatorInstance).Data;
  iVar2 = param_3->ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar1) break;
    FRenderAssetInstanceState::UpdateBounds(this_00,*(int *)pFVar7);
    pFVar7 = pFVar7 + 4;
  }
  *(int *)(lVar3 + 0x40) = param_2;
  pTVar5 = CVarStreamingDefragDynamicBounds.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (0 < pTVar5->ShadowedValue[0]) {
    if (param_4 < param_5) {
      *(int *)(lVar3 + 0x48) = param_4;
      *(int *)(lVar3 + 0x44) = param_5;
    }
  }
  return;
}

// operator() @ 148782830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FDynamicRenderAssetInstanceManager::IncrementalUpdate'::__l25::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  UPrimitiveComponent *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FTaskTagScope local_78;
  FStreamingTextureLevelContext local_68;
  
  lVar8 = (longlong)param_1;
  FTaskTagScope::FTaskTagScope(&local_78,EParallelGameThread);
  lVar1 = *(longlong *)this;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar1 + 0x58)) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar2 = *(UPrimitiveComponent **)(*(longlong *)(lVar1 + 0x50) + lVar8 * 8);
  if (pUVar2 == (UPrimitiveComponent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                       ,0x7b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((((pUVar2->bAttachedToStreamingManagerAsDynamic == '\0') &&
       ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0)) &&
      ((*(uint *)&pUVar2->field_0x8 & 0x18000) == 0)) &&
     (((pUVar2->field_0x98 & 1) != 0 &&
      (((pUVar2->field_0x98 & 2) == 0 || (pUVar2->SceneProxy != (FPrimitiveSceneProxy *)0x0)))))) {
    TVar6 = GetCurrentMaterialQualityLevelChecked();
    FStreamingTextureLevelContext::FStreamingTextureLevelContext(&local_68,TVar6,pUVar2);
    plVar3 = *(longlong **)((longlong)this + 8);
    local_68.bForceNoUseBuiltData = true;
    uVar7 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRenderAssetInstanceState::PreAddComponentIgnoreBounds
              (pUVar2,&local_68,(FPreAddComponentIgnoreBoundsPayload *)(lVar8 * 0x20 + *plVar3));
    FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_68);
  }
  else {
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined1 *)(lVar8 * 0x20 + 8 + *plVar3) = 0;
  }
  FTaskTagScope::~FTaskTagScope(&local_78);
  return;
}

// Add @ 148786390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FDynamicRenderAssetInstanceManager::Add
          (FDynamicRenderAssetInstanceManager *this,UPrimitiveComponent *param_1,
          FStreamingTextureLevelContext *param_2,float param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EAddComponentResult EVar5;
  int iVar6;
  UPrimitiveComponent *local_res10 [3];
  
  if (((param_1 != (UPrimitiveComponent *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0))
     && ((*(uint *)&param_1->field_0x8 & 0x18000) == 0)) {
    param_1->bHandledByStreamingManagerAsDynamic = '\x01';
    if (!(bool)param_1->bIgnoreStreamingManagerUpdate) {
      param_1->field_0x27a = param_1->field_0x27a | 0x80;
      pFVar2 = (this->PendingComponents).AllocatorInstance.Data;
      local_res10[0] = param_1;
      if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
         ((FScriptContainerElement *)local_res10 <
          pFVar2 + (longlong)(this->PendingComponents).ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      iVar6 = (this->PendingComponents).ArrayNum;
      piVar1 = &(this->PendingComponents).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->PendingComponents).AllocatorInstance,piVar1);
      }
      (this->PendingComponents).ArrayNum = iVar6 + 1;
      *(UPrimitiveComponent **)
       ((this->PendingComponents).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10[0];
      local_res10[0]->bAttachedToStreamingManagerAsDynamic = '\x01';
    }
    return Success;
  }
  return Fail;
}

// CanManage @ 14878adc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FDynamicRenderAssetInstanceManager::CanManage
          (FDynamicRenderAssetInstanceManager *this,UPrimitiveComponent *param_1)

{
  if (((param_1 != (UPrimitiveComponent *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0))
     && ((*(uint *)&param_1->field_0x8 & 0x18000) == 0)) {
    return true;
  }
  return false;
}

// GetAllocatedSize @ 14879b570

uint __thiscall
FDynamicRenderAssetInstanceManager::GetAllocatedSize(FDynamicRenderAssetInstanceManager *this)

{
  FRenderAssetInstanceState *this_00;
  uint uVar1;
  
  this_00 = (FRenderAssetInstanceState *)(this->StateSync)._padding_;
  if (this_00 != (FRenderAssetInstanceState *)0x0) {
    uVar1 = FRenderAssetInstanceState::GetAllocatedSize(this_00);
    return uVar1 + 0x1d8;
  }
  return 0;
}

// GetAsyncView @ 14879c710

FRenderAssetInstanceView * __thiscall
FDynamicRenderAssetInstanceManager::GetAsyncView
          (FDynamicRenderAssetInstanceManager *this,bool param_1)

{
  TRefCountPtr<FRenderAssetInstanceView_const_> *pTVar1;
  longlong *plVar2;
  int *piVar3;
  FRenderAssetInstanceView *pFVar4;
  TRefCountPtr<FRenderAssetInstanceView_const_> TVar5;
  undefined8 *local_res18;
  
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&this->StateSync);
  pTVar1 = &this->AsyncView;
  if (((this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0) && (param_1)) {
    TVar5 = FRenderAssetInstanceView::CreateView((FRenderAssetInstanceView *)&local_res18);
    if ((FRenderAssetInstanceView *)pTVar1 != TVar5.Reference) {
      pFVar4 = pTVar1->Reference;
      pTVar1->Reference = (FRenderAssetInstanceView *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (pFVar4 != (FRenderAssetInstanceView *)0x0) {
        plVar2 = &pFVar4->_padding_;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if (local_res18 != (undefined8 *)0x0) {
      piVar3 = (int *)(local_res18 + 1);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  pFVar4 = pTVar1->Reference;
  this->DirtyIndex = 0;
  return pFVar4;
}

// GetGameThreadView @ 1487a0580

FRenderAssetInstanceView * __thiscall
FDynamicRenderAssetInstanceManager::GetGameThreadView(FDynamicRenderAssetInstanceManager *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderAssetInstanceView *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                       ,0x168,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRenderAssetInstanceView *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRenderAssetInstanceView *)(this->StateSync)._padding_;
}

// GetReferencedComponents @ 1487a36f0

void __thiscall
FDynamicRenderAssetInstanceManager::GetReferencedComponents
          (FDynamicRenderAssetInstanceManager *this,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&this->StateSync);
  FRenderAssetInstanceState::GetReferencedComponents
            ((FRenderAssetInstanceState *)(this->StateSync)._padding_,param_1);
  return;
}

// IncrementalUpdate @ 1487ac7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDynamicRenderAssetInstanceManager::IncrementalUpdate
          (FDynamicRenderAssetInstanceManager *this,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_1,float param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FRenderAssetInstanceState *pFVar4;
  UPrimitiveComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  EAddComponentResult EVar8;
  Type TVar9;
  int iVar10;
  int iVar11;
  FPreAddComponentIgnoreBoundsPayload *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  <lambda_1> local_res8;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6 [6];
  ForAnyElementType local_e0;
  int local_d8 [2];
  FRenderAssetInstanceState *local_d0;
  FDynamicRenderAssetInstanceManager *local_c8;
  ForAnyElementType *local_c0;
  TArrayView<std::nullptr_t,int> local_b8;
  code *local_a8;
  FDynamicRenderAssetInstanceManager **local_a0;
  FStreamingTextureLevelContext local_98;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId85,"FDynamicRenderAssetInstanceManager::IncrementalUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
               ,0x55);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId85);
  }
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&this->StateSync);
  pFVar4 = (FRenderAssetInstanceState *)(this->StateSync)._padding_;
  local_d0 = pFVar4;
  if ((this->PendingDefragSrcBoundIndex != -1) && (this->PendingDefragDstBoundIndex != -1)) {
    bVar7 = FRenderAssetInstanceState::MoveBound
                      (pFVar4,this->PendingDefragSrcBoundIndex,this->PendingDefragDstBoundIndex);
    if (bVar7) {
      FRenderAssetInstanceState::TrimBounds(pFVar4);
    }
    this->PendingDefragSrcBoundIndex = -1;
    this->PendingDefragDstBoundIndex = -1;
  }
  iVar11 = (this->PendingComponents).ArrayNum;
  pFVar13 = (this->PendingComponents).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->PendingComponents).ArrayNum != iVar11) {
      local_e8 = 0;
      `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_e8);
    }
    if (pFVar13 == pFVar2) break;
    pUVar5 = *(UPrimitiveComponent **)pFVar13;
    if ((pUVar5 == (UPrimitiveComponent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Component",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                           ,0x66,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FRenderAssetInstanceState::RemoveComponent(pFVar4,pUVar5,param_1);
    pUVar5->bAttachedToStreamingManagerAsDynamic = '\0';
    pUVar5->bIgnoreStreamingManagerUpdate = '\0';
    pFVar13 = pFVar13 + 8;
  }
  uVar3 = (this->PendingComponents).ArrayNum;
  if (uVar3 != 0) {
    if (((UE::Private::RenderAssetStreamingManager::bAllowParallelForDuringIncrementalUpdate ==
          false) || (bVar7 = FApp::ShouldUseThreadingForPerformance(), !bVar7)) ||
       ((int)uVar3 < MinNumElementsToProcess)) {
      pFVar4 = local_d0;
      pFVar13 = (this->PendingComponents).AllocatorInstance.Data;
      iVar11 = (this->PendingComponents).ArrayNum;
      pFVar2 = pFVar13 + (longlong)iVar11 * 8;
      while( true ) {
        if ((this->PendingComponents).ArrayNum != iVar11) {
          local_e7 = 0;
          `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_e7);
        }
        if (pFVar13 == pFVar2) break;
        pUVar5 = *(UPrimitiveComponent **)pFVar13;
        if ((pUVar5 == (UPrimitiveComponent *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Component",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                               ,0x96,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((((pUVar5->bAttachedToStreamingManagerAsDynamic == '\0') &&
             ((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) == 0)) &&
            (((*(uint *)&pUVar5->field_0x8 & 0x18000) == 0 && ((pUVar5->field_0x98 & 1) != 0)))) &&
           (((pUVar5->field_0x98 & 2) == 0 || (pUVar5->SceneProxy != (FPrimitiveSceneProxy *)0x0))))
        {
          TVar9 = GetCurrentMaterialQualityLevelChecked();
          FStreamingTextureLevelContext::FStreamingTextureLevelContext(&local_98,TVar9,pUVar5);
          EVar8 = FRenderAssetInstanceState::AddComponentIgnoreBounds(pFVar4,pUVar5,&local_98);
          if (EVar8 == Success) {
            pUVar5->bAttachedToStreamingManagerAsDynamic = '\x01';
          }
          FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_98);
        }
        pFVar13 = pFVar13 + 8;
      }
    }
    else {
      if ((UE::Private::RenderAssetStreamingManager::
           GWorkerCountForParallelForDuringIncrementalUpdate < 1) ||
         ((int)uVar3 <=
          UE::Private::RenderAssetStreamingManager::
          GWorkerCountForParallelForDuringIncrementalUpdate)) {
        iVar11 = 1;
      }
      else {
        iVar11 = (int)(UE::Private::RenderAssetStreamingManager::
                       GWorkerCountForParallelForDuringIncrementalUpdate + -1 + uVar3) /
                 UE::Private::RenderAssetStreamingManager::
                 GWorkerCountForParallelForDuringIncrementalUpdate;
      }
      local_e0.Data = (FScriptContainerElement *)0x0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      if ((int)uVar3 < 1) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
      }
      else {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,uVar3,&local_e0,local_d8,local_d8 + 1);
        DefaultConstructItems<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int>
                  (local_e0.Data + (longlong)iVar10 * 0x20,uVar3);
      }
      local_c0 = &local_e0;
      local_b8.DataPtr = (void **)0x0;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FDynamicRenderAssetInstanceManager::IncrementalUpdate'::__l25::<lambda_1>,void,int>
                 ::Call;
      local_a0 = &local_c8;
      local_b8.ArrayNum = 0;
      local_res8 = SUB81(this,0);
      local_c8 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"PreAddComponentsIgnoreBounds",uVar3,iVar11,
                 (TFunctionRef<void___cdecl(int)> *)&local_a8,local_res8,None,&local_b8);
      pFVar4 = local_d0;
      iVar11 = local_d8[0];
      pFVar12 = (FPreAddComponentIgnoreBoundsPayload *)
                (local_e0.Data + (longlong)local_d8[0] * 0x20);
      FVar14.Data = local_e0.Data;
      while( true ) {
        if (local_d8[0] != iVar11) {
          `TCheckedPointerIterator<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_e6);
        }
        if ((FPreAddComponentIgnoreBoundsPayload *)FVar14.Data == pFVar12) break;
        EVar8 = FRenderAssetInstanceState::AddComponentIgnoreBounds
                          (pFVar4,(FPreAddComponentIgnoreBoundsPayload *)FVar14.Data);
        if (EVar8 == Success) {
          ((FPreAddComponentIgnoreBoundsPayload *)FVar14.Data)->Component->
          bAttachedToStreamingManagerAsDynamic = '\x01';
        }
        FVar14.Data = FVar14.Data + 0x20;
      }
      DestructItems<FRenderAssetInstanceState::FPreAddComponentIgnoreBoundsPayload,int>
                ((FPreAddComponentIgnoreBoundsPayload *)local_e0.Data,local_d8[0]);
      if ((FPreAddComponentIgnoreBoundsPayload *)local_e0.Data !=
          (FPreAddComponentIgnoreBoundsPayload *)0x0) {
        FMemory::Free(local_e0.Data);
      }
    }
    (this->PendingComponents).ArrayNum = 0;
    if ((this->PendingComponents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingComponents).AllocatorInstance,0,
                 &(this->PendingComponents).ArrayMax);
    }
  }
  Refresh(this,param_2);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsReferenced @ 1487af2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FDynamicRenderAssetInstanceManager::IsReferenced
          (FDynamicRenderAssetInstanceManager *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (param_1->bAttachedToStreamingManagerAsDynamic != '\0')) {
    lVar2 = (this->StateSync)._padding_;
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (*(int *)(lVar2 + 400) != *(int *)(lVar2 + 0x1bc)) {
      lVar6 = *(longlong *)(lVar2 + 0x1c8);
      if (*(longlong *)(lVar2 + 0x1c8) == 0) {
        lVar6 = lVar2 + 0x1c0;
      }
      iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar2 + 0x1d0) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                               4);
      if (iVar3 != -1) {
        do {
          if (*(UPrimitiveComponent **)(*(longlong *)(lVar2 + 0x188) + (longlong)iVar3 * 0x18) ==
              param_1) {
            return true;
          }
          iVar3 = *(int *)(*(longlong *)(lVar2 + 0x188) + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
    pFVar4 = (this->PendingComponents).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->PendingComponents).ArrayNum * 8;
    for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
      if (*(UPrimitiveComponent **)pFVar4 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// OnCreateViewDone @ 1487b1230

void __thiscall
FDynamicRenderAssetInstanceManager::OnCreateViewDone
          (FDynamicRenderAssetInstanceManager *this,FRenderAssetInstanceView *param_1)

{
  TRefCountPtr<FRenderAssetInstanceView_const_> *pTVar1;
  longlong *plVar2;
  FRenderAssetInstanceView *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong local_18 [2];
  
  pFVar3 = (FRenderAssetInstanceView *)(this->StateSync)._padding_;
  if ((this->DirtyIndex < *(int *)&pFVar3[1].Bounds4.AllocatorInstance.Data) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyIndex >= State->NumBounds()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                         ,0xb3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FRenderAssetInstanceView::SwapData(param_1,pFVar3);
  if (param_1 != (FRenderAssetInstanceView *)0x0) {
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
  }
  pTVar1 = &this->AsyncView;
  if (pTVar1 == (TRefCountPtr<FRenderAssetInstanceView_const_> *)local_18) {
    if (param_1 == (FRenderAssetInstanceView *)0x0) {
      return;
    }
    plVar2 = &param_1->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 != 0) {
      return;
    }
    puVar6 = (undefined8 *)param_1->_padding_;
  }
  else {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = param_1;
    if (pFVar3 == (FRenderAssetInstanceView *)0x0) {
      return;
    }
    plVar2 = &pFVar3->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 != 0) {
      return;
    }
    puVar6 = (undefined8 *)pFVar3->_padding_;
    param_1 = pFVar3;
  }
  (*(code *)*puVar6)(param_1,1);
  return;
}

// OnPreGarbageCollect @ 1487b13a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDynamicRenderAssetInstanceManager::OnPreGarbageCollect
          (FDynamicRenderAssetInstanceManager *this,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar11 = 0;
  if (0 < (this->PendingComponents).ArrayNum) {
    lVar13 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < (this->PendingComponents).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar3 = *(UPrimitiveComponent **)((this->PendingComponents).AllocatorInstance.Data + lVar13);
      if ((pUVar3 == (UPrimitiveComponent *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Primitive",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                             ,0xd8,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((((pUVar3->field_0x98 & 1) == 0) || (pUVar3 == (UPrimitiveComponent *)0x0)) ||
          ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0)) ||
         ((*(uint *)&pUVar3->field_0x8 & 0x18000) != 0)) {
        uVar9 = 0;
        if ((int)uVar11 < (this->PendingComponents).ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = (this->PendingComponents).ArrayNum;
        pFVar4 = (this->PendingComponents).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar11;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar11 * 8,pFVar4 + (longlong)(iVar2 - iVar8) * 8,
                  (longlong)iVar8 << 3);
        }
        piVar1 = &(this->PendingComponents).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->PendingComponents).AllocatorInstance,
                   (this->PendingComponents).ArrayNum,&(this->PendingComponents).ArrayMax);
        pUVar3->bIgnoreStreamingManagerUpdate = '\0';
        lVar5 = (this->StateSync)._padding_;
        uVar11 = uVar11 - 1;
        lVar13 = lVar13 + -8;
        uVar9 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (*(int *)(lVar5 + 400) != *(int *)(lVar5 + 0x1bc)) {
          lVar10 = lVar5 + 0x1c0;
          if (*(longlong *)(lVar5 + 0x1c8) != 0) {
            lVar10 = *(longlong *)(lVar5 + 0x1c8);
          }
          iVar8 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)(lVar5 + 0x1d0) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar8 != -1) {
            do {
              if (*(UPrimitiveComponent **)(*(longlong *)(lVar5 + 0x188) + (longlong)iVar8 * 0x18)
                  == pUVar3) {
                if (GStreamingDeferredRemoveDyanmicInstances == 0) {
                  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>
                  ::Sync(&this->StateSync);
                  FRenderAssetInstanceState::RemoveComponent
                            ((FRenderAssetInstanceState *)(this->StateSync)._padding_,pUVar3,param_1
                            );
                }
                else {
                  lVar5 = (this->StateSync)._padding_;
                  LOCK();
                  bVar7 = *(int *)(lVar5 + 0x50) == 1;
                  if (bVar7) {
                    *(int *)(lVar5 + 0x50) = 2;
                  }
                  UNLOCK();
                  if (bVar7) {
                    RenderAssetInstanceTask::FRefreshFull::operator()
                              ((FRefreshFull *)(lVar5 + 0x10),false);
                    *(undefined4 *)(lVar5 + 0x50) = 3;
                  }
                  lVar5 = (this->StateSync)._padding_;
                  if (*(int *)(lVar5 + 0x50) != 0) {
                    iVar8 = *(int *)(lVar5 + 0x50);
                    while (iVar8 != 3) {
                      FWindowsPlatformProcess::Sleep(0.0);
                      iVar8 = *(int *)(lVar5 + 0x50);
                    }
                    RenderAssetInstanceTask::FRefreshFull::Sync((FRefreshFull *)(lVar5 + 0x10));
                  }
                  *(undefined4 *)(lVar5 + 0x50) = 0;
                  FRenderAssetInstanceState::RemoveComponentReferences
                            ((FRenderAssetInstanceState *)(this->StateSync)._padding_,pUVar3);
                }
                break;
              }
              iVar8 = *(int *)(*(longlong *)(lVar5 + 0x188) + 0x10 + (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        pUVar3->bAttachedToStreamingManagerAsDynamic = '\0';
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < (this->PendingComponents).ArrayNum);
  }
  return;
}

// OnRefreshVisibilityDone @ 1487b20a0

void __thiscall
FDynamicRenderAssetInstanceManager::OnRefreshVisibilityDone
          (FDynamicRenderAssetInstanceManager *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRenderAssetInstanceState *this_00;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  this_00 = (FRenderAssetInstanceState *)(this->StateSync)._padding_;
  if (this->DirtyIndex != param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirtyIndex == BeginIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                       ,0xc0,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = (param_3->AllocatorInstance).Data;
  iVar2 = param_3->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar1) break;
    FRenderAssetInstanceState::UpdateBounds(this_00,*(int *)pFVar6);
    pFVar6 = pFVar6 + 4;
  }
  this->DirtyIndex = param_2;
  pTVar4 = CVarStreamingDefragDynamicBounds.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (0 < pTVar4->ShadowedValue[0]) {
    if (param_4 < param_5) {
      this->PendingDefragDstBoundIndex = param_4;
      this->PendingDefragSrcBoundIndex = param_5;
    }
  }
  return;
}

// PrepareAsyncView @ 1487b2700

void __thiscall
FDynamicRenderAssetInstanceManager::PrepareAsyncView(FDynamicRenderAssetInstanceManager *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FRenderAssetInstanceView *pFVar7;
  code *pcVar8;
  bool bVar9;
  FRenderAssetInstanceView *pFVar10;
  
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&this->StateSync);
  puVar4 = (undefined8 *)(this->StateSync)._padding_;
  Refresh(this,__real_3f800000);
  pFVar10 = (this->AsyncView).Reference;
  lVar5 = (this->StateSync)._padding_;
  if (pFVar10 != (FRenderAssetInstanceView *)0x0) {
    iVar3 = (int)pFVar10->_padding_;
    if (iVar3 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                         ,0x262,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (iVar3 == 1) {
      pFVar10 = (this->AsyncView).Reference;
      goto LAB_1487b2774;
    }
  }
  pFVar10 = (FRenderAssetInstanceView *)0x0;
LAB_1487b2774:
  if (*(int *)(lVar5 + 0x40) != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Done",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.h"
                       ,0x3f,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar6 = *(undefined8 **)(lVar5 + 0x30);
  if (puVar6 != puVar4) {
    *(undefined8 **)(lVar5 + 0x30) = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  pFVar7 = *(FRenderAssetInstanceView **)(lVar5 + 0x38);
  if (pFVar7 != pFVar10) {
    *(FRenderAssetInstanceView **)(lVar5 + 0x38) = pFVar10;
    if (pFVar10 != (FRenderAssetInstanceView *)0x0) {
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
    }
    if (pFVar7 != (FRenderAssetInstanceView *)0x0) {
      plVar2 = &pFVar7->_padding_;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
  *(undefined4 *)(lVar5 + 0x40) = 1;
  pFVar10 = (this->AsyncView).Reference;
  if (pFVar10 != (FRenderAssetInstanceView *)0x0) {
    (this->AsyncView).Reference = (FRenderAssetInstanceView *)0x0;
    plVar2 = &pFVar10->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// Refresh @ 1487b48b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDynamicRenderAssetInstanceManager::Refresh(FDynamicRenderAssetInstanceManager *this,float param_1)

{
  int *piVar1;
  int iVar2;
  FRenderAssetInstanceState *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FDynamicRenderAssetInstanceManager::Refresh(float)_::_2_::FStat_FDynamicRenderAssetInstanceManager_Refresh>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  int iVar15;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FDynamicRenderAssetInstanceManager_Refresh ==
          (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FDynamicRenderAssetInstanceManager::Refresh(float)_::_2_::FStat_FDynamicRenderAssetInstanceManager_Refresh>
           )0x0) {
        pFVar10 = ::FName::FName(&local_68,"FDynamicRenderAssetInstanceManager_Refresh");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FDynamicRenderAssetInstanceManager_Refresh,
                   *pFVar10,L"FDynamicRenderAssetInstanceManager_Refresh","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_FDynamicRenderAssetInstanceManager_Refresh;
  if (StatPtr_FDynamicRenderAssetInstanceManager_Refresh ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FDynamicRenderAssetInstanceManager::Refresh(float)_::_2_::FStat_FDynamicRenderAssetInstanceManager_Refresh>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"FDynamicRenderAssetInstanceManager_Refresh");
    FVar11 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FDynamicRenderAssetInstanceManager::Refresh(float)_::_2_::FStat_FDynamicRenderAssetInstanceManager_Refresh>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FDynamicRenderAssetInstanceManager_Refresh,*pFVar10,
                          L"FDynamicRenderAssetInstanceManager_Refresh","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                   ,0x104);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar13.Value;
      local_res20.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_1487b4a32;
    }
  }
  bVar7 = false;
  FVar14 = local_58;
LAB_1487b4a32:
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&this->StateSync);
  pFVar3 = (FRenderAssetInstanceState *)(this->StateSync)._padding_;
  iVar2 = (pFVar3->Bounds4Components).ArrayNum;
  if (this->DirtyIndex < iVar2) {
    lVar4 = (this->StateSync)._padding_;
    iVar15 = this->DirtyIndex -
             ((int)ROUND(__real_bf000000 - (param_1 + param_1) * (float)iVar2) >> 1);
    if (iVar2 < iVar15) {
      iVar15 = iVar2;
    }
    if (*(int *)(lVar4 + 0x50) != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskState == TS_Done",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.h"
                         ,0x3f,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    RenderAssetInstanceTask::FRefreshFull::Init
              ((FRefreshFull *)(lVar4 + 0x10),pFVar3,this->DirtyIndex,iVar15);
    *(undefined4 *)(lVar4 + 0x50) = 1;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RegisterTasks @ 1487b5a90

void __thiscall
FDynamicRenderAssetInstanceManager::RegisterTasks
          (FDynamicRenderAssetInstanceManager *this,FDoWorkTask *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong local_18;
  longlong local_10;
  
  local_18 = (this->StateSync)._padding_;
  if (local_18 != 0) {
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
  }
  pFVar2 = (param_1->RefreshFullTasks).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2 + (longlong)(param_1->RefreshFullTasks).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->RefreshFullTasks).ArrayNum;
  piVar1 = &(param_1->RefreshFullTasks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->RefreshFullTasks).ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->RefreshFullTasks).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 8) = 0;
  *(longlong *)(pFVar2 + (longlong)iVar5 * 8) = local_18;
  local_10 = (this->StateSync)._padding_;
  local_18 = 0;
  if (local_10 != 0) {
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
  }
  pFVar2 = (param_1->CreateViewWithUninitializedBoundsTasks).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 <
      pFVar2 + (longlong)(param_1->CreateViewWithUninitializedBoundsTasks).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->CreateViewWithUninitializedBoundsTasks).ArrayNum;
  piVar1 = &(param_1->CreateViewWithUninitializedBoundsTasks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->CreateViewWithUninitializedBoundsTasks).AllocatorInstance,
                       piVar1);
  }
  (param_1->CreateViewWithUninitializedBoundsTasks).ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->CreateViewWithUninitializedBoundsTasks).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 8) = 0;
  *(longlong *)(pFVar2 + (longlong)iVar5 * 8) = local_10;
  return;
}

// Remove @ 1487b7f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDynamicRenderAssetInstanceManager::Remove
          (FDynamicRenderAssetInstanceManager *this,UPrimitiveComponent *param_1,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FRenderAssetInstanceState *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  UPrimitiveComponent *local_res10 [3];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_res10[0] = param_1;
    bVar2 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,true);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Component || Component->IsValidLowLevelFast()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                           ,0x12e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((local_res10[0] != (UPrimitiveComponent *)0x0) &&
       (local_res10[0]->bAttachedToStreamingManagerAsDynamic != '\0')) {
      TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->PendingComponents,local_res10,Default);
      local_res10[0]->bIgnoreStreamingManagerUpdate = '\0';
      this_00 = (FRenderAssetInstanceState *)(this->StateSync)._padding_;
      uVar4 = ((uint)((ulonglong)local_res10[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res10[0] >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (*(int *)&(this_00->ComponentMap).field_0x8 != *(int *)&(this_00->ComponentMap).field_0x34)
      {
        puVar5 = *(undefined1 **)&(this_00->ComponentMap).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this_00->ComponentMap).field_0x38;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this_00->ComponentMap).field_0x48 - 1U &
                                  (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar3 != -1) {
          while (*(UPrimitiveComponent **)
                  (*(longlong *)&this_00->ComponentMap + (longlong)iVar3 * 0x18) != local_res10[0])
          {
            iVar3 = *(int *)(*(longlong *)&this_00->ComponentMap + 0x10 + (longlong)iVar3 * 0x18);
            if (iVar3 == -1) {
              local_res10[0]->bAttachedToStreamingManagerAsDynamic = '\0';
              return;
            }
          }
          if (GStreamingDeferredRemoveDyanmicInstances == 0) {
            FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::
            Sync(&this->StateSync);
            FRenderAssetInstanceState::RemoveComponent
                      ((FRenderAssetInstanceState *)(this->StateSync)._padding_,local_res10[0],
                       param_2);
          }
          else {
            FRenderAssetInstanceState::RemoveComponentReferences(this_00,local_res10[0]);
          }
        }
      }
      local_res10[0]->bAttachedToStreamingManagerAsDynamic = '\0';
    }
  }
  return;
}

