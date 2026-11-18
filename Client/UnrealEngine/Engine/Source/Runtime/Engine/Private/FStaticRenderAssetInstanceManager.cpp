// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FStaticRenderAssetInstanceManager @ 14877ca60

FStaticRenderAssetInstanceManager * __thiscall
FStaticRenderAssetInstanceManager::FStaticRenderAssetInstanceManager
          (FStaticRenderAssetInstanceManager *this,FDoWorkTask *param_1)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar6;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar7;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar8;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this->_padding_ = (longlong)&___7FStaticRenderAssetInstanceManager__6B_;
  pTVar7 = (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0;
  pFVar2 = ::operator_new(0x1d8);
  if (pFVar2 == (FRenderAssetInstanceState *)0x0) {
    (this->StateSync).State.Reference = (FRenderAssetInstanceState *)0x0;
  }
  else {
    pFVar2 = FRenderAssetInstanceState::FRenderAssetInstanceState(pFVar2,false);
    (this->StateSync).State.Reference = pFVar2;
    if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    }
  }
  (this->StateSync).Tasks.RefreshVisibilityTask.Reference =
       (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0;
  (this->StateSync).Tasks.NormalizeLightmapTexelFactorTask.Reference =
       (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *)0x0;
  (this->AsyncView).Reference = (FRenderAssetInstanceView *)0x0;
  this->DirtyIndex = 0;
  pTVar3 = ::operator_new(0x40);
  pTVar6 = pTVar7;
  pTVar8 = pTVar7;
  if (pTVar3 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXHH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy,`FStaticRenderAssetInstanceManager::FStaticRenderAssetInstanceManager'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    *(undefined4 *)&pTVar3->_padding_ = 0;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TDoWorkTask_VFRefreshVisibility_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
    ;
    RenderAssetInstanceTask::FRefreshVisibility::FRefreshVisibility
              (&pTVar3->Work,(TDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)local_58
              );
    pTVar3->TaskState = 0;
    pTVar6 = (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)&DAT_00000001;
    pTVar8 = pTVar3;
  }
  pTVar3 = (this->StateSync).Tasks.RefreshVisibilityTask.Reference;
  if (pTVar3 != pTVar8) {
    (this->StateSync).Tasks.RefreshVisibilityTask.Reference = pTVar8;
    if (pTVar8 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    }
    if (pTVar3 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
      plVar1 = &pTVar3->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar3->_padding_)(pTVar3,1);
      }
    }
  }
  if (pTVar6 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
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
  RenderAssetInstanceTask::FDoWorkTask::Add
            (param_1,(this->StateSync).Tasks.RefreshVisibilityTask.Reference);
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TDoWorkTask_VFNormalizeLightmapTexelFactor_RenderAssetInstanceTask___RenderAssetInstanceTask__6B_
    ;
    *(undefined8 *)&(pTVar6->Work).OnWorkDoneDelegate = 0;
    *(undefined4 *)&(pTVar6->Work).OnWorkDoneDelegate.field_0x8 = 0;
    pTVar7 = pTVar6;
  }
  pTVar6 = (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)
           (this->StateSync).Tasks.NormalizeLightmapTexelFactorTask.Reference;
  if (pTVar6 != pTVar7) {
    (this->StateSync).Tasks.NormalizeLightmapTexelFactorTask.Reference =
         (TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *)pTVar7;
    if (pTVar7 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
      *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
    }
    if (pTVar6 != (TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *)0x0) {
      plVar1 = &pTVar6->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar6->_padding_)(pTVar6,1);
      }
    }
  }
  RenderAssetInstanceTask::FDoWorkTask::Add
            (param_1,(this->StateSync).Tasks.NormalizeLightmapTexelFactorTask.Reference);
  return this;
}

// Add @ 1487864a0

EAddComponentResult __thiscall
FStaticRenderAssetInstanceManager::Add
          (FStaticRenderAssetInstanceManager *this,
          TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_>
          *param_1,TFunctionRef<void___cdecl(FRenderAssetInstanceState::FPreAddComponentPayload_const_&,EAddComponentResult)>
                   *param_2)

{
  EAddComponentResult EVar1;
  TFunctionRef<void___cdecl(FRenderAssetInstanceState::FPreAddComponentPayload_const_&,EAddComponentResult)>
  local_18;
  
  if ((this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0) {
    FTasks::SyncResults(&(this->StateSync).Tasks);
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
    EVar1 = FRenderAssetInstanceState::AddComponents
                      ((this->StateSync).State.Reference,param_1,&local_18);
    return EVar1;
  }
  return Fail;
}

// Add @ 148786520

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
FStaticRenderAssetInstanceManager::Add
          (FStaticRenderAssetInstanceManager *this,UPrimitiveComponent *param_1,
          FStreamingTextureLevelContext *param_2,float param_3)

{
  EAddComponentResult EVar1;
  
  if ((this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0) {
    FTasks::SyncResults(&(this->StateSync).Tasks);
    EVar1 = FRenderAssetInstanceState::AddComponent
                      ((this->StateSync).State.Reference,param_1,param_2,param_3);
  }
  else {
    EVar1 = Fail;
  }
  return EVar1;
}

// CanAddComponent @ 14878ad70

bool __thiscall
FStaticRenderAssetInstanceManager::CanAddComponent(FStaticRenderAssetInstanceManager *this)

{
  return (this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0;
}

// CanManage @ 14878adf0

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
FStaticRenderAssetInstanceManager::CanManage
          (FStaticRenderAssetInstanceManager *this,UPrimitiveComponent *param_1)

{
  bool bVar1;
  
  if (((((this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0) &&
       (param_1 != (UPrimitiveComponent *)0x0)) && (param_1->field_0x1ab == '\0')) &&
     (*(AActor **)&param_1->field_0xa8 != (AActor *)0x0)) {
    bVar1 = AActor::IsRootComponentStatic(*(AActor **)&param_1->field_0xa8);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetAllocatedSize @ 14879b780

uint __thiscall
FStaticRenderAssetInstanceManager::GetAllocatedSize(FStaticRenderAssetInstanceManager *this)

{
  FRenderAssetInstanceState *this_00;
  uint uVar1;
  
  this_00 = (this->StateSync).State.Reference;
  if (this_00 != (FRenderAssetInstanceState *)0x0) {
    uVar1 = FRenderAssetInstanceState::GetAllocatedSize(this_00);
    return uVar1 + 0x1d8;
  }
  return 0;
}

// GetAsyncView @ 14879c7b0

FRenderAssetInstanceView * __thiscall
FStaticRenderAssetInstanceManager::GetAsyncView
          (FStaticRenderAssetInstanceManager *this,bool param_1)

{
  FRenderAssetInstanceState *pFVar1;
  FRenderAssetInstanceView *pFVar2;
  
  FTasks::SyncResults(&(this->StateSync).Tasks);
  if ((((this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0) && (param_1)) &&
     (pFVar1 = (this->StateSync).State.Reference, pFVar1 != (FRenderAssetInstanceState *)0x0)) {
    (this->AsyncView).Reference = (FRenderAssetInstanceView *)pFVar1;
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
  }
  pFVar2 = (this->AsyncView).Reference;
  this->DirtyIndex = 0;
  return pFVar2;
}

// IsReferenced @ 1487af370

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
FStaticRenderAssetInstanceManager::IsReferenced
          (FStaticRenderAssetInstanceManager *this,UPrimitiveComponent *param_1)

{
  FRenderAssetInstanceState *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  pFVar1 = (this->StateSync).State.Reference;
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(pFVar1->ComponentMap).field_0x8 != *(int *)&(pFVar1->ComponentMap).field_0x34) {
    puVar4 = *(undefined1 **)&(pFVar1->ComponentMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(pFVar1->ComponentMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(pFVar1->ComponentMap).field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(UPrimitiveComponent **)(*(longlong *)&pFVar1->ComponentMap + (longlong)iVar2 * 0x18)
            == param_1) goto LAB_1487af40c;
        iVar2 = *(int *)(*(longlong *)&pFVar1->ComponentMap + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1487af40c:
  return iVar2 != -1;
}

// NormalizeLightmapTexelFactor @ 1487b02a0

void __thiscall
FStaticRenderAssetInstanceManager::NormalizeLightmapTexelFactor
          (FStaticRenderAssetInstanceManager *this)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *pTVar3;
  FRenderAssetInstanceState *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  if ((this->AsyncView).Reference == (FRenderAssetInstanceView *)0x0) {
    FTasks::SyncResults(&(this->StateSync).Tasks);
    pFVar2 = (this->StateSync).State.Reference;
    if (0 < (pFVar2->Bounds4Components).ArrayNum) {
      pTVar3 = (this->StateSync).Tasks.NormalizeLightmapTexelFactorTask.Reference;
      if ((pTVar3->TaskState != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskState == TS_Done",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.h"
                             ,0x3f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar3->Work).State.Reference;
      if (pFVar4 != pFVar2) {
        (pTVar3->Work).State.Reference = pFVar2;
        *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
        if (pFVar4 != (FRenderAssetInstanceState *)0x0) {
          plVar1 = &pFVar4->_padding_;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            (**(code **)pFVar4->_padding_)(pFVar4,1);
          }
        }
      }
      pTVar3->TaskState = 1;
    }
  }
  return;
}

// OffsetBounds @ 1487b1090

void __thiscall
FStaticRenderAssetInstanceManager::OffsetBounds
          (FStaticRenderAssetInstanceManager *this,TVector<double> *param_1)

{
  FRenderAssetInstanceState *this_00;
  
  FTasks::SyncResults(&(this->StateSync).Tasks);
  this_00 = (this->StateSync).State.Reference;
  if (this_00 != (FRenderAssetInstanceState *)0x0) {
    FRenderAssetInstanceState::OffsetBounds(this_00,param_1);
  }
  return;
}

// OnRefreshVisibilityDone @ 1487b21b0

void __thiscall
FStaticRenderAssetInstanceManager::OnRefreshVisibilityDone
          (FStaticRenderAssetInstanceManager *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = this->DirtyIndex;
  if (param_1 <= iVar1) {
    if (iVar1 < param_2) {
      iVar1 = param_2;
    }
    this->DirtyIndex = iVar1;
  }
  return;
}

// PrepareAsyncView @ 1487b2850

void __thiscall
FStaticRenderAssetInstanceManager::PrepareAsyncView(FStaticRenderAssetInstanceManager *this)

{
  return;
}

// Refresh @ 1487b4c60

void __thiscall
FStaticRenderAssetInstanceManager::Refresh(FStaticRenderAssetInstanceManager *this,float param_1)

{
  int iVar1;
  FRenderAssetInstanceState *pFVar2;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  FTasks::SyncResults(&(this->StateSync).Tasks);
  pFVar2 = (this->StateSync).State.Reference;
  iVar1 = (pFVar2->Bounds4Components).ArrayNum;
  if (this->DirtyIndex < iVar1) {
    pTVar3 = (this->StateSync).Tasks.RefreshVisibilityTask.Reference;
    iVar6 = this->DirtyIndex -
            ((int)ROUND(__real_bf000000 - (param_1 + param_1) * (float)iVar1) >> 1);
    if (iVar1 < iVar6) {
      iVar6 = iVar1;
    }
    if (pTVar3->TaskState != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskState == TS_Done",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.h"
                         ,0x3f,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    RenderAssetInstanceTask::FRefreshVisibility::Init(&pTVar3->Work,pFVar2,this->DirtyIndex,iVar6);
    pTVar3->TaskState = 1;
  }
  return;
}

// Remove @ 1487b8490

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
FStaticRenderAssetInstanceManager::Remove
          (FStaticRenderAssetInstanceManager *this,UPrimitiveComponent *param_1,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FRenderAssetInstanceState *this_00;
  
  FTasks::SyncResults(&(this->StateSync).Tasks);
  this_00 = (this->StateSync).State.Reference;
  if ((this->AsyncView).Reference != (FRenderAssetInstanceView *)0x0) {
    FRenderAssetInstanceState::RemoveComponentReferences(this_00,param_1);
    return;
  }
  FRenderAssetInstanceState::RemoveComponent(this_00,param_1,param_2);
  return;
}

