// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// Init @ 14867c460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::Init(FSkeletalMeshUpdatePacketNanite *this,FInitializer *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1->NumUpdates;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->DynamicDatas).ArrayMax < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketNanite::FDynamicDataEntry>_>
              (0x10,8,uVar1,&(this->DynamicDatas).AllocatorInstance,(this->DynamicDatas).ArrayNum,
               &(this->DynamicDatas).ArrayMax);
  }
  bVar2 = IsRayTracingEnabled();
  this->bRayTracingEnabled = bVar2;
  uVar1 = param_1->NumUpdates;
  if (-1 < (int)uVar1) {
    if ((this->SkinCacheRayTracing).ArrayMax < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshObjectNanite_*>_>
                (8,8,uVar1,&(this->SkinCacheRayTracing).AllocatorInstance,
                 (this->SkinCacheRayTracing).ArrayNum,&(this->SkinCacheRayTracing).ArrayMax);
    }
    if (0 < GSkeletalMeshThrottleNaniteRayTracingUpdates) {
      uVar1 = param_1->NumUpdates;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      if ((this->SkinCacheRayTracingThrottled).ArrayMax < (int)uVar1) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled>_>
                  (0x10,8,uVar1,&(this->SkinCacheRayTracingThrottled).AllocatorInstance,
                   (this->SkinCacheRayTracingThrottled).ArrayNum,
                   &(this->SkinCacheRayTracingThrottled).ArrayMax);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ProcessStage_Inline @ 14867c550

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline
          (FSkeletalMeshUpdatePacketNanite *this,FRHICommandList *param_1,FTaskEvent *param_2)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskEvent FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
  *this_00;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  FDynamicSkelMeshObjectDataNanite **ppFVar9;
  int *piVar10;
  <lambda_1> local_18;
  
  if ((this->DynamicDatas).ArrayNum != 0) {
    local_18.DynamicDatas.AllocatorInstance.Data = (this->DynamicDatas).AllocatorInstance.Data;
    (this->DynamicDatas).AllocatorInstance.Data = (FDynamicDataEntry *)0x0;
    local_18.DynamicDatas.ArrayNum = (this->DynamicDatas).ArrayNum;
    local_18.DynamicDatas.ArrayMax = (this->DynamicDatas).ArrayMax;
    (this->DynamicDatas).ArrayNum = 0;
    (this->DynamicDatas).ArrayMax = 0;
    this_00 = UE::Tasks::Private::
              TExecutableTask<`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>_>
              ::Create(L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp(318)"
                       ,&local_18,High,None,None);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    FVar5 = *param_2;
    if (this_00 !=
        (TExecutableTask<_public:_virtual_void___cdecl_FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline(FRHICommandList_&,UE::Tasks::FTaskEvent_&)_::_5_::<lambda_1>_>
         *)0x0) {
      if (((*(atomic<unsigned_int> *)((longlong)FVar5 + 0x34) == (atomic<unsigned_int>)0x0) ||
          (0x7fffffff < (uint)*(atomic<unsigned_int> *)((longlong)FVar5 + 0x34))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                             ,0xe3,L"Prerequisites can be added only before the task is launched"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      paVar1 = (atomic<unsigned_int> *)((longlong)FVar5 + 0x34);
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
      UNLOCK();
      if ((0x7fffffff < (int)aVar3 + 1U) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrevNumLocks + 1 < ExecutionFlag",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                             ,0xea,L"Max number of task prerequisites reached: %d"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = UE::Tasks::Private::FTaskBase::AddSubsequent((FTaskBase *)this_00,(FTaskBase *)FVar5);
      if (bVar8) {
        LOCK();
        *(int *)&this_00->field_0x30 = *(int *)&this_00->field_0x30 + 1;
        UNLOCK();
        UE::Tasks::Private::FTaskBase::
        FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  ((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                   ((longlong)FVar5 + 0x58),(FTaskBase *)this_00);
      }
      else {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar5 + 0x34) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar5 + 0x34) + -1);
        UNLOCK();
      }
      LOCK();
      puVar2 = &this_00->field_0x30;
      iVar4 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)this_00)(this_00);
      }
    }
    if (local_18.DynamicDatas.AllocatorInstance.Data != (FDynamicDataEntry *)0x0) {
      ppFVar9 = &local_18.DynamicDatas.AllocatorInstance.Data[-1].Previous;
      MemoryTrace_Free((ulong64)ppFVar9,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_01 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_01 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_01,Default,ppFVar9,FMalloc,true);
      }
      piVar10 = (int *)((longlong)ppFVar9 - (ulonglong)*(uint *)ppFVar9);
      LOCK();
      iVar4 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        lVar6 = *(longlong *)(piVar10 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar10,0,0);
        if (lVar6 - (longlong)piVar10 == 0x10000) {
          this_02 = FPageAllocator::Get();
          FPageAllocator::Free(this_02,piVar10);
          return;
        }
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar10);
      }
    }
  }
  return;
}

// ProcessStage_SkinCache @ 14867c750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache
          (FSkeletalMeshUpdatePacketNanite *this,FRHICommandList *param_1,FTaskEvent *param_2)

{
  int *piVar1;
  FSkeletalMeshObjectNanite **ppFVar2;
  int iVar3;
  code *pcVar4;
  FSkeletalMeshObjectNanite *this_00;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FSkeletalMeshObjectNanite **ppFVar8;
  longlong lVar9;
  uint uVar10;
  FSkinCacheEntryThrottled *pFVar11;
  FSkinCacheEntryThrottled *pFVar12;
  bool bVar13;
  bool bVar14;
  <lambda_1> local_res8 [8];
  undefined1 local_res20 [8];
  uint uStack_3c;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId334,"Nanite",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId334);
  }
  if ((this->SkinCacheRayTracing).ArrayNum != 0) {
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId339,"SkinCacheRayTracing",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                 ,0x153);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId339);
    }
    ppFVar8 = (this->SkinCacheRayTracing).AllocatorInstance.Data;
    iVar3 = (this->SkinCacheRayTracing).ArrayNum;
    ppFVar2 = ppFVar8 + iVar3;
    while( true ) {
      if ((this->SkinCacheRayTracing).ArrayNum != iVar3) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<FSkeletalMeshObjectNanite_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (ppFVar8 == ppFVar2) break;
      FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData
                (*ppFVar8,param_1,(FGPUSkinCache *)this->_padding_);
      ppFVar8 = ppFVar8 + 1;
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((this->SkinCacheRayTracingThrottled).ArrayNum != 0) {
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId348,"SkinCacheRayTracingThrottled",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                 ,0x15c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId348);
    }
    if (0 < GSkeletalMeshThrottleNaniteRayTracingUpdates) {
      iVar3 = (this->SkinCacheRayTracingThrottled).ArrayNum;
      if (iVar3 != 0) {
        pFVar11 = (this->SkinCacheRayTracingThrottled).AllocatorInstance.Data;
        iVar7 = iVar3;
        if (GSkeletalMeshThrottleNaniteRayTracingUpdates < iVar3) {
          iVar7 = GSkeletalMeshThrottleNaniteRayTracingUpdates;
        }
        std::
        partial_sort<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled_*,_FSkeletalMeshUpdatePacketNanite::ProcessStage_SkinCache_::__l15::<lambda_1>_>
                  (pFVar11,pFVar11 + iVar7,pFVar11 + iVar3,local_res8[0]);
        iVar7 = GSkeletalMeshThrottleNaniteRayTracingUpdates;
        iVar3 = (this->SkinCacheRayTracingThrottled).ArrayNum;
        lVar9 = (longlong)GSkeletalMeshThrottleNaniteRayTracingUpdates;
        if (GSkeletalMeshThrottleNaniteRayTracingUpdates < iVar3) {
          if (iVar3 < GSkeletalMeshThrottleNaniteRayTracingUpdates) {
            UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled>_>
                      (0x10,8,GSkeletalMeshThrottleNaniteRayTracingUpdates - iVar3,
                       &(this->SkinCacheRayTracingThrottled).AllocatorInstance,
                       &(this->SkinCacheRayTracingThrottled).ArrayNum,
                       &(this->SkinCacheRayTracingThrottled).ArrayMax);
          }
          else {
            if (GSkeletalMeshThrottleNaniteRayTracingUpdates < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum
                        ((ulonglong)(uint)GSkeletalMeshThrottleNaniteRayTracingUpdates);
            }
            if (GSkeletalMeshThrottleNaniteRayTracingUpdates < iVar3) {
              uVar10 = iVar3 - GSkeletalMeshThrottleNaniteRayTracingUpdates;
              if (((int)(uVar10 | GSkeletalMeshThrottleNaniteRayTracingUpdates) < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (uVar10 != 0) {
                pFVar11 = (this->SkinCacheRayTracingThrottled).AllocatorInstance.Data + lVar9;
                iVar7 = ((this->SkinCacheRayTracingThrottled).ArrayNum - uVar10) - iVar7;
                if (iVar7 != 0) {
                  memmove(pFVar11,pFVar11 + (int)uVar10,(longlong)iVar7 << 4);
                }
                piVar1 = &(this->SkinCacheRayTracingThrottled).ArrayNum;
                *piVar1 = *piVar1 - uVar10;
              }
            }
          }
        }
      }
    }
    pFVar11 = (this->SkinCacheRayTracingThrottled).AllocatorInstance.Data;
    iVar3 = (this->SkinCacheRayTracingThrottled).ArrayNum;
    pFVar12 = pFVar11 + iVar3;
    while( true ) {
      if ((this->SkinCacheRayTracingThrottled).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar11 == pFVar12) break;
      this_00 = pFVar11->MeshObject;
      uVar5 = pFVar11->BoneFrameNumber;
      FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData
                (this_00,param_1,(FGPUSkinCache *)this->_padding_);
      pFVar11 = pFVar11 + 1;
      this_00->LastRayTracingBoneTransformUpdate = uVar5;
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessStage_Upload @ 14867ca60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::ProcessStage_Upload
          (FSkeletalMeshUpdatePacketNanite *this,FRHICommandList *param_1)

{
  FSkeletalMeshObjectNanite **ppFVar1;
  int iVar2;
  FSkeletalMeshObjectNanite **ppFVar3;
  FSkinCacheEntryThrottled *pFVar4;
  FSkinCacheEntryThrottled *pFVar5;
  undefined1 local_res8 [8];
  
  ppFVar3 = (this->SkinCacheRayTracing).AllocatorInstance.Data;
  iVar2 = (this->SkinCacheRayTracing).ArrayNum;
  ppFVar1 = ppFVar3 + iVar2;
  while( true ) {
    if ((this->SkinCacheRayTracing).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSkeletalMeshObjectNanite_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (ppFVar3 == ppFVar1) break;
    FSkeletalMeshObjectNanite::UpdateBoneData(*ppFVar3,param_1);
    ppFVar3 = ppFVar3 + 1;
  }
  iVar2 = (this->SkinCacheRayTracingThrottled).ArrayNum;
  pFVar4 = (this->SkinCacheRayTracingThrottled).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar2;
  while( true ) {
    if ((this->SkinCacheRayTracingThrottled).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    FSkeletalMeshObjectNanite::UpdateBoneData(pFVar4->MeshObject,param_1);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// operator() @ 14869eda0

void __thiscall
`FSkeletalMeshUpdatePacketNanite::ProcessStage_Inline'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FDynamicSkelMeshObjectDataNanite *pFVar4;
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *this_00;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId320,"ProcessNaniteDynamicDatas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
               ,0x140);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId320);
  }
  iVar2 = *(int *)((longlong)this + 8);
  puVar5 = *(undefined8 **)this;
  puVar7 = puVar5 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      `TCheckedPointerIterator<FSkeletalMeshUpdatePacketNanite::FDynamicDataEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar7) break;
    pFVar4 = (FDynamicSkelMeshObjectDataNanite *)puVar5[1];
    FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms
              ((FDynamicSkelMeshObjectDataNanite *)*puVar5,pFVar4);
    if (pFVar4 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
      (pFVar4->ComponentSpaceTransforms).ArrayNum = 0;
      if ((pFVar4->ComponentSpaceTransforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(pFVar4->ComponentSpaceTransforms).AllocatorInstance,0,
                   &(pFVar4->ComponentSpaceTransforms).ArrayMax);
      }
      iVar6 = (pFVar4->ComponentSpaceTransforms).ArrayMax;
      piVar1 = &(pFVar4->PreviousReferenceToLocal).ArrayMax;
      (pFVar4->PreviousReferenceToLocal).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,0,&(pFVar4->PreviousReferenceToLocal).AllocatorInstance,0,piVar1);
      }
      iVar3 = (pFVar4->PreviousReferenceToLocal).ArrayMax;
      (pFVar4->ReferenceToLocal).ArrayNum = 0;
      if ((pFVar4->ReferenceToLocal).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,0,&(pFVar4->ReferenceToLocal).AllocatorInstance,0,
                   &(pFVar4->ReferenceToLocal).ArrayMax);
      }
      iVar6 = ((pFVar4->ReferenceToLocal).ArrayMax + iVar3) * 0x40 + 0x78 + iVar6 * 0x60;
      *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar6;
      LOCK();
      TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool.NumFreeBytes =
           TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool.NumFreeBytes +
           (longlong)iVar6;
      UNLOCK();
      FSkeletalMeshDynamicDataPool::AddStatsMemory
                ((FSkeletalMeshDynamicDataPool *)
                 &TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool,
                 (int)pFVar4->_padding_,iVar6);
      this_00 = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
                TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket
                          ((int)pFVar4->_padding_);
      FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::Push(this_00,pFVar4);
    }
    puVar5 = puVar5 + 2;
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Add @ 1486a42f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::Add
          (FSkeletalMeshUpdatePacketNanite *this,FSkeletalMeshObjectNanite *param_1,
          FDynamicSkelMeshObjectDataNanite *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FDynamicSkelMeshObjectDataNanite *pFVar4;
  FDynamicDataEntry *pFVar5;
  FSkinCacheEntryThrottled *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  iVar9 = (this->DynamicDatas).ArrayNum;
  piVar1 = &(this->DynamicDatas).ArrayMax;
  pFVar4 = param_1->DynamicData;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketNanite::FDynamicDataEntry>_>
                      (0x810,&(this->DynamicDatas).AllocatorInstance,piVar1);
  }
  (this->DynamicDatas).ArrayNum = iVar9 + 1;
  pFVar5 = (this->DynamicDatas).AllocatorInstance.Data;
  pFVar5[iVar9].Current = param_2;
  pFVar5[iVar9].Previous = pFVar4;
  param_1->DynamicData = param_2;
  if (param_2 == (FDynamicSkelMeshObjectDataNanite *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x127,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((this->bRayTracingEnabled != false) && (*(char *)((longlong)&this->_padding_ + 1) != '\0'))
     && (*(char *)(*(longlong *)&param_1->field_0x48 + 0x1e) != '\0')) {
    if ((param_2->PreviousBoneTransformUpdateMode == None) &&
       (0 < GSkeletalMeshThrottleNaniteRayTracingUpdates)) {
      uVar2 = param_2->BoneTransformFrameNumber;
      piVar1 = &(this->SkinCacheRayTracingThrottled).ArrayMax;
      iVar9 = (this->SkinCacheRayTracingThrottled).ArrayNum;
      uVar3 = param_1->LastRayTracingBoneTransformUpdate;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketNanite::FSkinCacheEntryThrottled>_>
                          (0x810,&(this->SkinCacheRayTracingThrottled).AllocatorInstance,piVar1);
      }
      (this->SkinCacheRayTracingThrottled).ArrayNum = iVar9 + 1;
      pFVar6 = (this->SkinCacheRayTracingThrottled).AllocatorInstance.Data;
      pFVar6[iVar9].MeshObject = param_1;
      pFVar6[iVar9].BoneFrameDelta = uVar2 - uVar3;
      pFVar6[iVar9].BoneFrameNumber = uVar2;
    }
    else {
      iVar9 = (this->SkinCacheRayTracing).ArrayNum;
      piVar1 = &(this->SkinCacheRayTracing).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshObjectNanite_*>_>
                          (0x808,&(this->SkinCacheRayTracing).AllocatorInstance,piVar1);
      }
      (this->SkinCacheRayTracing).ArrayNum = iVar9 + 1;
      (this->SkinCacheRayTracing).AllocatorInstance.Data[iVar9] = param_1;
      param_1->LastRayTracingBoneTransformUpdate = param_2->BoneTransformFrameNumber;
    }
  }
  return;
}

// Free @ 1486b8400

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::Free
          (FSkeletalMeshUpdatePacketNanite *this,FDynamicSkelMeshObjectDataNanite *param_1)

{
  TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(param_1);
  return;
}

// UpdateImmediate @ 1486f5900

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketNanite::UpdateImmediate
          (FSkeletalMeshUpdatePacketNanite *this,FRHICommandList *param_1,
          FSkeletalMeshObjectNanite *param_2,FDynamicSkelMeshObjectDataNanite *param_3)

{
  FGPUSkinCache *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (FGPUSkinCache *)this->_padding_;
  if (param_3 == (FDynamicSkelMeshObjectDataNanite *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDynamicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x26d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms(param_3,param_2->DynamicData);
  TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(param_2->DynamicData);
  param_2->DynamicData = param_3;
  bVar3 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported();
  if (((bVar3) && (pFVar1 != (FGPUSkinCache *)0x0)) && (GEnableGPUSkinCache != 0)) {
    bVar3 = IsRayTracingEnabled();
    if ((bVar3) && (*(char *)(*(longlong *)&param_2->field_0x48 + 0x1e) != '\0')) {
      FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData(param_2,param_1,pFVar1);
      FSkeletalMeshObjectNanite::UpdateBoneData(param_2,param_1);
    }
  }
  return;
}

