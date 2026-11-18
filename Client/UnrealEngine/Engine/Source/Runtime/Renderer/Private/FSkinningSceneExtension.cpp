// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 20

// FSkinningSceneExtension @ 145665e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSkinningSceneExtension * __thiscall
FSkinningSceneExtension::FSkinningSceneExtension(FSkinningSceneExtension *this,FScene *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  FTickState *pFVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TWeakPtr<FTSTicker::FElement,1> *pTVar9;
  UObject *local_res8;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FSkinningSceneExtension__6B_;
  FSpanAllocator::FSpanAllocator(&this->ObjectSpaceAllocator,false);
  FSpanAllocator::FSpanAllocator(&this->HierarchyAllocator,false);
  FSpanAllocator::FSpanAllocator(&this->TransformAllocator,false);
  *(undefined8 *)&this->HeaderData = 0;
  *(undefined8 *)&(this->HeaderData).field_0x8 = 0;
  *(undefined8 *)&(this->HeaderData).field_0x20 = 0;
  *(undefined4 *)&(this->HeaderData).field_0x28 = 0;
  *(undefined4 *)&(this->HeaderData).field_0x2c = 0x80;
  *(undefined4 *)&(this->HeaderData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HeaderData).field_0x34 = 0;
  *(undefined8 *)&(this->HeaderDataIndices).Elements = 0;
  *(undefined8 *)&(this->HeaderDataIndices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HeaderDataIndices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HeaderDataIndices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HeaderDataIndices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HeaderDataIndices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HeaderDataIndices).Elements.field_0x34 = 0;
  (this->HeaderDataIndices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HeaderDataIndices).HashSize = 0;
  *(undefined8 *)&this->BatchHeaderData = 0;
  *(undefined8 *)&(this->BatchHeaderData).field_0x8 = 0;
  *(undefined8 *)&(this->BatchHeaderData).field_0x20 = 0;
  *(undefined4 *)&(this->BatchHeaderData).field_0x28 = 0;
  *(undefined4 *)&(this->BatchHeaderData).field_0x2c = 0x80;
  *(undefined4 *)&(this->BatchHeaderData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BatchHeaderData).field_0x34 = 0;
  *(undefined8 *)&(this->BatchHeaderData).field_0x40 = 0;
  *(undefined4 *)&(this->BatchHeaderData).field_0x48 = 0;
  (this->Buffers).Ptr = (FBuffers *)0x0;
  (this->Uploader).Ptr = (FUploader *)0x0;
  (this->TaskHandles).Elements[0].Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskHandles).Elements[1].Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskHandles).Elements[2].Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskHandles).Elements[3].Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskHandles).Elements[4].Pimpl.Reference = (FTaskBase *)0x0;
  (this->TaskHandles).Elements[5].Pimpl.Reference = (FTaskBase *)0x0;
  pFVar6 = ::operator_new(0x30);
  if (pFVar6 == (FTickState *)0x0) {
    (this->TickState).Reference = (FTickState *)0x0;
  }
  else {
    *(undefined4 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FTickState_FSkinningSceneExtension__6B_;
    pFVar6->DeltaTime = 0.0;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pFVar6->CameraLocation).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pFVar6->CameraLocation).field0_0x0._s_0.Y = (double)uVar5;
    (pFVar6->CameraLocation).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (this->TickState).Reference = pFVar6;
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
  }
  pTVar2 = &this->UpdateTimerHandle;
  (this->WorldRef).WeakPtr = (FWeakObjectPtr)0x0;
  pTVar2->Object = (FElement *)0x0;
  (this->UpdateTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res8 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x410))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->WorldRef).WeakPtr,(FObjectPtr)&local_res8);
  this_00 = FTSTicker::GetCoreTicker();
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSkinningSceneExtension____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Tick;
    puVar7[3] = this;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pTVar9 = FTSTicker::AddTicker
                     (this_00,&local_78,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
  if (pTVar2 != pTVar9) {
    pTVar2->Object = pTVar9->Object;
    pTVar9->Object = (FElement *)0x0;
    pTVar4 = (this->UpdateTimerHandle).WeakReferenceCount.ReferenceController;
    (this->UpdateTimerHandle).WeakReferenceCount.ReferenceController =
         (pTVar9->WeakReferenceCount).ReferenceController;
    (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
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
  return this;
}

// ~FSkinningSceneExtension @ 145666f70

void __thiscall FSkinningSceneExtension::~FSkinningSceneExtension(FSkinningSceneExtension *this)

{
  atomic<int> *paVar1;
  longlong *plVar2;
  atomic<unsigned_int> *paVar3;
  atomic<int> aVar4;
  atomic<unsigned_int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  FTickState *pFVar7;
  FTaskBase *pFVar8;
  void *pvVar9;
  ForElementType<FSetElementId> FVar10;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar11;
  FTaskHandle *pFVar12;
  longlong lVar13;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FSkinningSceneExtension__6B_;
  local_18.Object = (this->UpdateTimerHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->UpdateTimerHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar6 = (this->UpdateTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pFVar12 = (FTaskHandle *)&this->TickState;
  pFVar7 = ((TRefCountPtr<FSkinningSceneExtension::FTickState> *)pFVar12)->Reference;
  if (pFVar7 != (FTickState *)0x0) {
    plVar2 = &pFVar7->_padding_;
    LOCK();
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar13 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  lVar13 = 6;
  do {
    pFVar8 = pFVar12[-1].Pimpl.Reference;
    pFVar12 = pFVar12 + -1;
    lVar13 = lVar13 + -1;
    if (pFVar8 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar8->RefCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
  } while (lVar13 != 0);
  TDefaultDelete<FSkinningSceneExtension::FUploader>::operator()
            ((TDefaultDelete<FSkinningSceneExtension::FUploader> *)&this->Uploader,
             (this->Uploader).Ptr);
  TDefaultDelete<FSkinningSceneExtension::FBuffers>::operator()
            ((TDefaultDelete<FSkinningSceneExtension::FBuffers> *)&this->Buffers,(this->Buffers).Ptr
            );
  *(undefined4 *)&(this->BatchHeaderData).field_0x48 = 0;
  pvVar9 = *(void **)&(this->BatchHeaderData).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BatchHeaderData);
  (this->HeaderDataIndices).HashSize = 0;
  FVar10 = (this->HeaderDataIndices).Hash.SecondaryData;
  if (FVar10 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HeaderDataIndices).Elements);
  TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>
            (&this->HeaderData);
  FVar11 = (this->TransformAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar11 = (this->TransformAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar11 = (this->HierarchyAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar11 = (this->HierarchyAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar11 = (this->ObjectSpaceAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar11 = (this->ObjectSpaceAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  this->_padding_ = (longlong)&___7ISceneExtension__6B_;
  return;
}

// operator() @ 14566b5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l2::<lambda_2>::operator()
          (void *this,FRDGScatterUploader *param_1)

{
  FScriptContainerElement *pFVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  FSkeletalMeshObject *this_00;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar20;
  void *pvVar21;
  undefined8 *puVar22;
  int *piVar23;
  ulonglong uVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ushort *puVar28;
  uint uVar29;
  longlong lVar30;
  undefined4 *puVar31;
  FScriptContainerElement *pFVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  bool bVar39;
  undefined1 auVar40 [16];
  undefined1 local_res20 [8];
  undefined1 local_e8 [8];
  longlong local_e0;
  uint local_d8;
  int local_d4;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  longlong local_c0;
  int local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  int local_98;
  ulonglong local_90;
  undefined4 local_88;
  void *local_80;
  ulonglong *local_78;
  
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1503,
               "FSkinningSceneExtension::ProvideAnimRuntimeTransformsTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x5df);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1503);
  }
  iVar15 = _UNK_150631e0c;
  iVar14 = _UNK_150631e08;
  iVar13 = __xmm_00000003000000020000000100000000._4_4_;
  iVar12 = (int)__xmm_00000003000000020000000100000000;
  local_a8 = *(ulonglong **)this;
  local_78 = (ulonglong *)((longlong)local_a8 + (longlong)*(int *)((longlong)this + 8) * 0xc);
  if (local_a8 != local_78) {
    do {
      uVar24 = 0;
      uVar36 = 0;
      local_88 = (undefined4)local_a8[1];
      local_90 = *local_a8;
      lVar30 = (longlong)(int)local_90;
      if (((int)local_90 < 0 || *(int *)((longlong)this + 0x18) <= (int)local_90) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar30 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + lVar30 * 8);
      this_00 = *(FSkeletalMeshObject **)(lVar30 + 0x10);
      uVar5 = *(ushort *)(lVar30 + 0x38);
      uVar27 = (uint)uVar5;
      uVar29 = uVar27 * 2;
      local_d8 = (uint)uVar5;
      (**(code **)(this_00->_padding_ + 0x68))(this_00,&local_a0);
      (**(code **)(this_00->_padding_ + 0x70))(this_00,&local_c0);
      uVar38 = local_90 / 0x3000000000;
      uVar37 = (uint)uVar38;
      local_b0 = uVar38;
      if (local_98 == 0) {
        lVar30 = param_1->_padding_ + (ulonglong)(uint)param_1->_padding_ * 4;
        if (uVar27 != 0) {
          if (0xf < uVar29) {
            uVar36 = 8;
            do {
              iVar17 = (int)uVar24 + uVar37;
              iVar18 = uVar37 + (uVar36 - 4);
              uVar34 = uVar36 + 4;
              piVar23 = (int *)(lVar30 + uVar24 * 4);
              *piVar23 = iVar17 + iVar12;
              piVar23[1] = iVar17 + iVar13;
              piVar23[2] = iVar17 + iVar14;
              piVar23[3] = iVar17 + iVar15;
              iVar25 = uVar36 + 5;
              uVar35 = (int)uVar24 + 0x10;
              uVar24 = (ulonglong)uVar35;
              iVar19 = uVar37 + uVar36;
              piVar23 = (int *)(lVar30 + (ulonglong)(uVar36 - 4) * 4);
              *piVar23 = iVar18 + iVar12;
              piVar23[1] = iVar18 + iVar13;
              piVar23[2] = iVar18 + iVar14;
              piVar23[3] = iVar18 + iVar15;
              iVar17 = uVar36 + 6;
              piVar23 = (int *)(lVar30 + (ulonglong)uVar36 * 4);
              *piVar23 = iVar19 + iVar12;
              piVar23[1] = iVar19 + iVar13;
              piVar23[2] = iVar19 + iVar14;
              piVar23[3] = iVar19 + iVar15;
              iVar18 = uVar36 + 7;
              uVar36 = uVar36 + 0x10;
              auVar40._0_4_ = uVar34 + uVar37;
              auVar40._4_4_ = iVar25 + uVar37;
              auVar40._8_4_ = iVar17 + uVar37;
              auVar40._12_4_ = iVar18 + uVar37;
              *(undefined1 (*) [16])(lVar30 + (ulonglong)uVar34 * 4) = auVar40;
            } while (uVar35 < (uVar29 & 0xfffffff0));
          }
          if ((uint)uVar24 < uVar29) {
            piVar23 = (int *)(lVar30 + uVar24 * 4);
            do {
              iVar17 = (int)uVar24;
              uVar36 = iVar17 + 1;
              uVar24 = (ulonglong)uVar36;
              *piVar23 = iVar17 + uVar37;
              piVar23 = piVar23 + 1;
            } while (uVar36 < uVar29);
          }
        }
        iVar17 = (int)param_1->_padding_;
        *(uint *)&param_1->_padding_ = iVar17 + uVar29;
        if (uVar27 != 0) {
          puVar22 = (undefined8 *)
                    ((ulonglong)(uint)(iVar17 * (int)param_1->_padding_) + 8 + param_1->_padding_);
          uVar24 = (ulonglong)uVar29;
          do {
            puVar22[-1] = 0x3f800000;
            *puVar22 = 0;
            *(undefined4 *)(puVar22 + 1) = 0;
            *(undefined8 *)((longlong)puVar22 + 0xc) = 0x3f800000;
            *(undefined8 *)((longlong)puVar22 + 0x14) = 0;
            *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
            puVar22[4] = 0x3f800000;
            puVar22 = puVar22 + 6;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      else if ((*(byte *)(lVar30 + 0x3e) & 4) == 0) {
        pvVar21 = FRDGScatterUploadBase::Add_GetRef
                            ((FRDGScatterUploadBase *)param_1,uVar37,(uint)uVar5);
        uVar36 = (uint)uVar5;
        if (uVar5 != 0) {
          do {
            uVar29 = (uint)uVar24;
            uVar27 = 0;
            if ((int)uVar29 < local_98) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar30 = (longlong)(int)uVar29;
            puVar31 = (undefined4 *)(lVar30 * 0x40 + local_a0);
            uVar27 = 0;
            if ((int)uVar29 < (int)(uint)uVar5) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar7 = puVar31[1];
            uVar8 = puVar31[2];
            uVar24 = (ulonglong)(uVar29 + 1);
            auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
            uVar9 = puVar31[4];
            uVar10 = puVar31[5];
            uVar11 = puVar31[6];
            auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
            puVar3 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30);
            *puVar3 = *puVar31;
            puVar3[1] = uVar9;
            puVar3[2] = auVar40._0_4_;
            puVar3[3] = auVar4._0_4_;
            puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x10);
            *puVar31 = uVar7;
            puVar31[1] = uVar10;
            puVar31[2] = auVar40._4_4_;
            puVar31[3] = auVar4._4_4_;
            puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x20);
            *puVar31 = uVar8;
            puVar31[1] = uVar11;
            puVar31[2] = auVar40._8_4_;
            puVar31[3] = auVar4._8_4_;
            uVar38 = local_b0;
          } while (uVar29 + 1 < uVar36);
        }
        if (local_b8 != 0) {
          pvVar21 = FRDGScatterUploadBase::Add_GetRef
                              ((FRDGScatterUploadBase *)param_1,(int)uVar38 + (uint)uVar5,uVar36);
          uVar27 = 0;
          if (uVar36 != 0) {
            do {
              uVar29 = 0;
              if ((int)uVar27 < local_b8) {
                uVar29 = ~uVar27 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar30 = (longlong)(int)uVar27;
              puVar31 = (undefined4 *)(lVar30 * 0x40 + local_c0);
              uVar29 = 0;
              if ((int)uVar27 < (int)uVar36) {
                uVar29 = ~uVar27 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar7 = puVar31[1];
              uVar8 = puVar31[2];
              uVar27 = uVar27 + 1;
              auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
              uVar9 = puVar31[4];
              uVar10 = puVar31[5];
              uVar11 = puVar31[6];
              auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
              puVar3 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30);
              *puVar3 = *puVar31;
              puVar3[1] = uVar9;
              puVar3[2] = auVar40._0_4_;
              puVar3[3] = auVar4._0_4_;
              puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x10);
              *puVar31 = uVar7;
              puVar31[1] = uVar10;
              puVar31[2] = auVar40._4_4_;
              puVar31[3] = auVar4._4_4_;
              puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x20);
              *puVar31 = uVar8;
              puVar31[1] = uVar11;
              puVar31[2] = auVar40._8_4_;
              puVar31[3] = auVar4._8_4_;
            } while (uVar27 < uVar36);
          }
        }
      }
      else {
        iVar17 = (**(code **)(this_00->_padding_ + 0xa0))(this_00);
        pTVar20 = FSkeletalMeshObject::GetRenderSections(this_00,iVar17);
        iVar17 = pTVar20->ArrayNum;
        pFVar26 = (pTVar20->AllocatorInstance).Data;
        local_d4 = iVar17;
        local_c8 = pFVar26;
        if ((iVar17 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = pFVar26 + (longlong)iVar17 * 0x118;
        for (pFVar33 = pFVar26; pFVar33 != pFVar32; pFVar33 = pFVar33 + 0x118) {
          if ((*(int *)(pFVar33 + 8) != 0) && (pFVar33[0x110] == (FScriptContainerElement)0x0)) {
            uVar24 = (ulonglong)(uint)((int)uVar24 + *(int *)(pFVar33 + 0x40));
          }
          uVar36 = (uint)uVar24;
        }
        local_d0 = pFVar32;
        local_80 = FRDGScatterUploadBase::Add_GetRef((FRDGScatterUploadBase *)param_1,uVar37,uVar36)
        ;
        if (((int)uVar36 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar30 = 0;
        uVar29 = 0;
        local_e0 = 0;
        uVar27 = (uint)uVar5;
        if (pFVar26 != pFVar32) {
          pFVar33 = pFVar26 + 0x40;
          do {
            if ((*(int *)(pFVar33 + -0x38) != 0) && (pFVar33[0xd0] == (FScriptContainerElement)0x0))
            {
              puVar28 = *(ushort **)(pFVar33 + -8);
              iVar17 = *(int *)pFVar33;
              puVar2 = puVar28 + iVar17;
              while( true ) {
                if (*(int *)pFVar33 != iVar17) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res20);
                }
                pFVar32 = local_d0;
                if (puVar28 == puVar2) break;
                uVar5 = *puVar28;
                if ((local_98 <= (int)(uint)uVar5) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar31 = (undefined4 *)((ulonglong)uVar5 * 0x40 + local_a0);
                uVar27 = 0;
                if ((int)uVar29 < (int)uVar36) {
                  uVar27 = ~uVar29 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar7 = puVar31[1];
                uVar8 = puVar31[2];
                auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
                local_e0 = local_e0 + 1;
                uVar9 = puVar31[4];
                uVar10 = puVar31[5];
                uVar11 = puVar31[6];
                uVar29 = uVar29 + 1;
                auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
                puVar28 = puVar28 + 1;
                puVar3 = (undefined4 *)((longlong)local_80 + lVar30 * 0x30);
                *puVar3 = *puVar31;
                puVar3[1] = uVar9;
                puVar3[2] = auVar40._0_4_;
                puVar3[3] = auVar4._0_4_;
                puVar31 = (undefined4 *)((longlong)local_80 + lVar30 * 0x30 + 0x10);
                *puVar31 = uVar7;
                puVar31[1] = uVar10;
                puVar31[2] = auVar40._4_4_;
                puVar31[3] = auVar4._4_4_;
                puVar31 = (undefined4 *)((longlong)local_80 + lVar30 * 0x30 + 0x20);
                *puVar31 = uVar8;
                puVar31[1] = uVar11;
                puVar31[2] = auVar40._8_4_;
                puVar31[3] = auVar4._8_4_;
                lVar30 = local_e0;
              }
            }
            pFVar1 = pFVar33 + 0xd8;
            pFVar26 = local_c8;
            uVar38 = local_b0;
            pFVar33 = pFVar33 + 0x118;
            iVar17 = local_d4;
            uVar27 = local_d8;
          } while (pFVar1 != pFVar32);
        }
        if (local_b8 != 0) {
          local_c8 = FRDGScatterUploadBase::Add_GetRef
                               ((FRDGScatterUploadBase *)param_1,(int)uVar38 + uVar27,uVar36);
          if (((int)uVar36 < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar30 = 0;
          uVar27 = 0;
          local_e0 = 0;
          pFVar33 = pFVar26 + (longlong)iVar17 * 0x118;
          local_d0 = pFVar33;
          if (pFVar26 != pFVar33) {
            pFVar26 = pFVar26 + 0x40;
            do {
              if ((*(int *)(pFVar26 + -0x38) != 0) &&
                 (pFVar26[0xd0] == (FScriptContainerElement)0x0)) {
                puVar28 = *(ushort **)(pFVar26 + -8);
                iVar17 = *(int *)pFVar26;
                puVar2 = puVar28 + iVar17;
                while( true ) {
                  if (*(int *)pFVar26 != iVar17) {
                    local_e8[0] = 0;
                    `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_e8);
                  }
                  pFVar33 = local_d0;
                  if (puVar28 == puVar2) break;
                  uVar5 = *puVar28;
                  if ((local_b8 <= (int)(uint)uVar5) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  puVar31 = (undefined4 *)((ulonglong)uVar5 * 0x40 + local_c0);
                  uVar29 = 0;
                  if ((int)uVar27 < (int)uVar36) {
                    uVar29 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar7 = puVar31[1];
                  uVar8 = puVar31[2];
                  auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
                  local_e0 = local_e0 + 1;
                  uVar9 = puVar31[4];
                  uVar10 = puVar31[5];
                  uVar11 = puVar31[6];
                  uVar27 = uVar27 + 1;
                  auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
                  puVar28 = puVar28 + 1;
                  pFVar33 = local_c8 + lVar30 * 0x30;
                  *(undefined4 *)pFVar33 = *puVar31;
                  *(undefined4 *)(pFVar33 + 4) = uVar9;
                  *(int *)(pFVar33 + 8) = auVar40._0_4_;
                  *(int *)(pFVar33 + 0xc) = auVar4._0_4_;
                  pFVar33 = local_c8 + (lVar30 * 0xc + 4) * 4;
                  *(undefined4 *)pFVar33 = uVar7;
                  *(undefined4 *)(pFVar33 + 4) = uVar10;
                  *(int *)(pFVar33 + 8) = auVar40._4_4_;
                  *(int *)(pFVar33 + 0xc) = auVar4._4_4_;
                  pFVar33 = local_c8 + (lVar30 * 0xc + 8) * 4;
                  *(undefined4 *)pFVar33 = uVar8;
                  *(undefined4 *)(pFVar33 + 4) = uVar11;
                  *(int *)(pFVar33 + 8) = auVar40._8_4_;
                  *(int *)(pFVar33 + 0xc) = auVar4._8_4_;
                  lVar30 = local_e0;
                }
              }
              pFVar32 = pFVar26 + 0xd8;
              pFVar26 = pFVar26 + 0x118;
            } while (pFVar32 != pFVar33);
          }
        }
      }
      local_a8 = (ulonglong *)((longlong)local_a8 + 0xc);
    } while (local_a8 != local_78);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14566c9f0

void __thiscall
`FSkinningSceneExtension::PerformSkinning'::__l13::<lambda_2>::operator()
          (void *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSkinningTransformProvider::FProviderRange,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  int iVar4;
  ForElementType<FSkinningTransformProvider::FProviderRange> FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ForElementType<FSkinningTransformProvider::FProviderRange> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
              (0x18,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar4 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar12 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar11) break;
    iVar8 = param_2->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
                        (0x418,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar8 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<FSkinningTransformProvider::FProviderRange>)param_2;
    if (FVar5 != (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
      FVar10 = FVar5;
    }
    lVar9 = (longlong)iVar8;
    puVar3 = (uchar *)((longlong)FVar10 + 0x10) + lVar9 * 0x18;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    *(undefined8 *)((longlong)FVar10 + lVar9 * 0x18) = 0;
    puVar3 = (uchar *)((longlong)FVar10 + 8) + lVar9 * 0x18;
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3[4] = '\0';
    puVar3[5] = '\0';
    puVar3[6] = '\0';
    puVar3[7] = '\0';
    uVar6 = *(undefined8 *)pFVar12;
    uVar7 = *(undefined8 *)(pFVar12 + 8);
    pFVar12 = pFVar12 + 0x10;
    puVar2 = (undefined8 *)((longlong)FVar10 + lVar9 * 0x18);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
  }
  return;
}

// CreateRenderer @ 145679cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
FSkinningSceneExtension::CreateRenderer
          (FSkinningSceneExtension *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  if ((this->Buffers).Ptr != (FBuffers *)0x0) {
    pIVar1 = ::operator_new(0x18);
    if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
      pIVar1->SceneRendererInternal = param_1;
      pIVar1->_padding_ = (longlong)&___7FRenderer_FSkinningSceneExtension__6B_;
      pIVar1[1]._padding_ = (longlong)this;
      return pIVar1;
    }
  }
  return (ISceneExtensionRenderer *)0x0;
}

// CreateUpdater @ 14567a5c0

ISceneExtensionUpdater * __thiscall
FSkinningSceneExtension::CreateUpdater(FSkinningSceneExtension *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x48);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)this;
    *pIVar1 = (ISceneExtensionUpdater)&___7FUpdater_FSkinningSceneExtension__6B_;
    pIVar1[2] = (ISceneExtensionUpdater)0x0;
    *(undefined4 *)(pIVar1 + 3) = 0;
    pIVar1[4] = (ISceneExtensionUpdater)0x0;
    *(undefined4 *)(pIVar1 + 5) = 0;
    pIVar1[6] = (ISceneExtensionUpdater)0x0;
    pIVar1[7] = (ISceneExtensionUpdater)0x0;
    *(bool *)(pIVar1 + 8) = GSkinningBuffersAsyncUpdate;
    *(undefined2 *)&pIVar1[8].field_0x1 = 0;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// FinishSkinningBufferUpload @ 145680db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::FinishSkinningBufferUpload
          (FSkinningSceneExtension *this,FRDGBuilder *param_1,FSkinningSceneParameters *param_2)

{
  int *piVar1;
  TUniquePtr<FSkinningSceneExtension::FUploader,TDefaultDelete<FSkinningSceneExtension::FUploader>_>
  *this_00;
  int iVar2;
  int iVar3;
  FRHIGPUMask FVar4;
  int iVar5;
  undefined8 *puVar6;
  FRHIComputeCommandList *this_01;
  FBuffers *this_02;
  FUploader *pFVar7;
  undefined1 uVar8;
  FRDGBuffer *pFVar9;
  FRDGBuffer *pFVar10;
  FRDGBuffer *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBuffer **ppFVar13;
  longlong lVar14;
  undefined1 auStackY_b8 [32];
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_78;
  FRDGBufferSRVDesc local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((this->Buffers).Ptr != (FBuffers *)0x0) {
    local_68._padding_ = (longlong)(this->TaskHandles).Elements[3].Pimpl.Reference;
    if ((FTaskBase *)local_68._padding_ != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_68._padding_)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_68._padding_)->RefCount + 1);
      UNLOCK();
    }
    local_68._padding_ = (longlong)(this->TaskHandles).Elements[4].Pimpl.Reference;
    if ((FTaskBase *)local_68._padding_ != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_68._padding_)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_68._padding_)->RefCount + 1);
      UNLOCK();
    }
    local_68._padding_ = (longlong)(this->TaskHandles).Elements[5].Pimpl.Reference;
    if ((FTaskBase *)local_68._padding_ != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_68._padding_)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_68._padding_)->RefCount + 1);
      UNLOCK();
    }
    local_78.DataPtr = (FTaskHandle *)&local_68;
    lVar14 = 3;
    local_78.ArrayNum = 3;
    UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (&local_78,(FTimespan)0x7fffffffffffffff);
    ppFVar13 = &local_68.Buffer;
    do {
      puVar6 = &ppFVar13[-1]->_padding_;
      ppFVar13 = ppFVar13 + -1;
      lVar14 = lVar14 + -1;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    } while (lVar14 != 0);
    this_01 = (FRHIComputeCommandList *)param_1->_padding_;
    iVar2 = *(int *)&(this->HeaderData).field_0x8;
    lVar14 = 0x1c8;
    if ((this->TransformAllocator).bGrowOnly == false) {
      lVar14 = 0x1c4;
    }
    iVar3 = *(int *)((this->ObjectSpaceAllocator).FreeSpans.AllocatorInstance.InlineData +
                    lVar14 + -0x20);
    lVar14 = 0xf0;
    if ((this->HierarchyAllocator).bGrowOnly == false) {
      lVar14 = 0xec;
    }
    FVar4.GPUMask = *(uint *)&this_01->field_0x29c;
    iVar5 = *(int *)((this->ObjectSpaceAllocator).FreeSpans.AllocatorInstance.InlineData +
                    lVar14 + -0x20);
    lVar14 = 0x18;
    if ((this->ObjectSpaceAllocator).bGrowOnly == false) {
      lVar14 = 0x14;
    }
    local_78.DataPtr =
         (FTaskHandle *)
         CONCAT44(local_78.DataPtr._4_4_,
                  *(undefined4 *)
                   ((this->ObjectSpaceAllocator).FreeSpans.AllocatorInstance.InlineData +
                   lVar14 + -0x20));
    FRHIComputeCommandList::SetGPUMask
              (this_01,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    this_02 = (this->Buffers).Ptr;
    this_00 = &this->Uploader;
    if (this_00->Ptr == (FUploader *)0x0) {
      pFVar9 = UE::RendererPrivateUtils::Implementation::
               TPersistentBuffer<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
               ::ResizeBufferIfNeeded(&this_02->HeaderDataBuffer,param_1,iVar2 + 1);
      pFVar10 = UE::RendererPrivateUtils::Implementation::
                TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                ::ResizeBufferIfNeeded(&((this->Buffers).Ptr)->BoneHierarchyBuffer,param_1,iVar5);
      local_78.DataPtr =
           (FTaskHandle *)
           UE::RendererPrivateUtils::Implementation::
           TPersistentBuffer<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
           ::ResizeBufferIfNeeded
                     (&((this->Buffers).Ptr)->BoneObjectSpaceBuffer,param_1,(int)local_78.DataPtr);
      pFVar11 = UE::RendererPrivateUtils::Implementation::
                TPersistentBuffer<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
                ::ResizeBufferIfNeeded(&((this->Buffers).Ptr)->TransformDataBuffer,param_1,iVar3);
    }
    else {
      local_68._padding_ = 0;
      local_68._padding_ = local_68._padding_ & 0xffffffff00000000;
      pFVar9 = UE::RendererPrivateUtils::Implementation::
               TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
               ::ResizeAndUploadTo(&this_00->Ptr->HeaderDataUploader,param_1,
                                   &this_02->HeaderDataBuffer,iVar2 + 1,(FScatterInfo *)&local_68);
      local_68._padding_ = 0;
      local_68._padding_ = local_68._padding_ & 0xffffffff00000000;
      pFVar10 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                ::ResizeAndUploadTo(&this_00->Ptr->BoneHierarchyUploader,param_1,
                                    &((this->Buffers).Ptr)->BoneHierarchyBuffer,iVar5,
                                    (FScatterInfo *)&local_68);
      local_68._padding_ = 0;
      local_68._padding_ = local_68._padding_ & 0xffffffff00000000;
      local_78.DataPtr =
           (FTaskHandle *)
           UE::RendererPrivateUtils::Implementation::
           TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
           ::ResizeAndUploadTo(&this_00->Ptr->BoneObjectSpaceUploader,param_1,
                               &((this->Buffers).Ptr)->BoneObjectSpaceBuffer,(int)local_78.DataPtr,
                               (FScatterInfo *)&local_68);
      local_68._padding_ = 0;
      local_68._padding_ = local_68._padding_ & 0xffffffff00000000;
      pFVar11 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                ::ResizeAndUploadTo(&this_00->Ptr->TransformDataUploader,param_1,
                                    &((this->Buffers).Ptr)->TransformDataBuffer,iVar3,
                                    (FScatterInfo *)&local_68);
      pFVar7 = this_00->Ptr;
      this_00->Ptr = (FUploader *)0x0;
      TDefaultDelete<FSkinningSceneExtension::FUploader>::operator()
                ((TDefaultDelete<FSkinningSceneExtension::FUploader> *)this_00,pFVar7);
    }
    if (param_2 != (FSkinningSceneParameters *)0x0) {
      local_68._padding_._1_7_ = (uint7)((ulonglong)local_68._padding_ >> 8) & 0xffffff;
      local_68._padding_ = 0;
      local_68._padding_._0_4_ = 0xffffffff;
      local_68._padding_._0_1_ = 0;
      if (((pFVar9->Desc).Usage & DrawIndirect) != None) {
        local_68._padding_._0_1_ = 0x1c;
      }
      local_68.Buffer = pFVar9;
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_68);
      param_2->Headers = pFVar12;
      local_68._padding_._0_4_ = 0xffffffff;
      uVar8 = 0;
      local_68._padding_ = 0;
      if (((pFVar10->Desc).Usage & DrawIndirect) != None) {
        uVar8 = 0x1c;
      }
      local_68._padding_ = (longlong)CONCAT31((int3)local_68._padding_._1_7_,uVar8);
      local_68.Buffer = pFVar10;
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_68);
      param_2->BoneHierarchy = pFVar12;
      uVar8 = 0;
      local_68.Buffer = (FRDGBuffer *)local_78.DataPtr;
      local_68._padding_._0_4_ = 0xffffffff;
      local_68._padding_ = 0;
      if ((((FRDGBufferDesc *)((longlong)local_78.DataPtr + 0x80))->Usage & DrawIndirect) != None) {
        uVar8 = 0x1c;
      }
      local_68._padding_ = CONCAT71((int7)((ulonglong)local_68._padding_ >> 8),uVar8) & 0xffffffff;
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_68);
      param_2->BoneObjectSpace = pFVar12;
      uVar8 = 0;
      local_68._padding_ = CONCAT44(local_68._padding_._4_4_,0xffffffff);
      local_68._padding_ = 0;
      if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
        uVar8 = 0x1c;
      }
      local_68._padding_ = CONCAT71((int7)((ulonglong)local_68._padding_ >> 8),uVar8) & 0xffffffff;
      local_68.Buffer = pFVar11;
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_68);
      param_2->BoneTransforms = pFVar12;
    }
    FRHIComputeCommandList::SetGPUMask(this_01,FVar4);
  }
  return;
}

// GetAnimRuntimeProviderId @ 1456820e0

FGuid * __cdecl FSkinningSceneExtension::GetAnimRuntimeProviderId(void)

{
  return &AnimRuntimeProviderId;
}

// GetRefPoseProviderId @ 145683d00

FGuid * __cdecl FSkinningSceneExtension::GetRefPoseProviderId(void)

{
  return &RefPoseProviderId;
}

// GetSkinnedPrimitives @ 145684130

void __thiscall
FSkinningSceneExtension::GetSkinnedPrimitives
          (FSkinningSceneExtension *this,
          TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *pTVar13;
  FTaskHandle local_98;
  FTaskBase *local_90;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_88;
  int local_78;
  uint uStack_74;
  undefined1 *puStack_70;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  if ((this->Buffers).Ptr != (FBuffers *)0x0) {
    local_98.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (this->TaskHandles).Elements[0].Pimpl.Reference;
    if (local_98.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_98.Pimpl.Reference)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_98.Pimpl.Reference)->RefCount + 1);
      UNLOCK();
    }
    local_90 = (this->TaskHandles).Elements[1].Pimpl.Reference;
    if (local_90 != (FTaskBase *)0x0) {
      LOCK();
      local_90->RefCount = (atomic<unsigned_int>)((int)local_90->RefCount + 1);
      UNLOCK();
    }
    local_88.DataPtr = &local_98;
    lVar10 = 2;
    local_88.ArrayNum = 2;
    UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (&local_88,(FTimespan)0x7fffffffffffffff);
    pTVar13 = &local_88;
    do {
      puVar4 = *(undefined8 **)&pTVar13[-1].ArrayNum;
      pTVar13 = (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)&pTVar13[-1].ArrayNum;
      lVar10 = lVar10 + -1;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 6);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    } while (lVar10 != 0);
    uVar11 = *(int *)&(this->HeaderData).field_0x8 - *(int *)&(this->HeaderData).field_0x34;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (*piVar1 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    local_58 = &this->HeaderData;
    local_78 = 0;
    iVar8 = *(int *)&(this->HeaderData).field_0x28;
    puStack_70 = &(this->HeaderData).field_0x10;
    uStack_74 = 1;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar8 != 0) {
      puVar12 = *(uint **)&(this->HeaderData).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)puStack_70;
      }
      uVar11 = *puVar12;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar11 == 0) {
        iStack_60 = iStack_60 + 0x20;
        lVar10 = (longlong)local_78;
        local_78 = local_78 + 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78) goto LAB_1456842fb;
        uVar11 = puVar12[lVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uStack_74 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_64 = (int)lVar10 + -1 + iStack_60;
      if (iVar8 < iStack_64) {
LAB_1456842fb:
        iStack_64 = iVar8;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
    if (iStack_64 < iVar8) {
      do {
        pFVar5 = (param_1->AllocatorInstance).Data;
        pFVar9 = (FScriptContainerElement *)
                 ((longlong)local_50.CurrentBitIndex * 0x50 + *(longlong *)local_58);
        if (((pFVar5 <= pFVar9) && (pFVar9 < pFVar5 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return;
}

// GetWorld @ 14568b300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FSkinningSceneExtension::GetWorld(FSkinningSceneExtension *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldRef).WeakPtr);
  return pUVar1;
}

// InitExtension @ 14568b430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::InitExtension(FSkinningSceneExtension *this,FScene *param_1)

{
  longlong lVar1;
  FSkinningTransformProvider *this_00;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  EShaderPlatform EVar5;
  longlong lVar6;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  lVar1 = this->_padding_;
  if ((-1 < (int)FSkinningTransformProvider::ExtensionRegistration._8_4_) &&
     ((int)FSkinningTransformProvider::ExtensionRegistration._8_4_ < *(int *)(lVar1 + 0x4d28))) {
    lVar6 = *(longlong *)(lVar1 + 0x4d20);
    if (*(longlong *)(lVar1 + 0x4d20) == 0) {
      lVar6 = lVar1 + 0x4d10;
    }
    if (((*(uint *)(lVar6 + (longlong)
                            ((int)(FSkinningTransformProvider::ExtensionRegistration._8_4_ +
                                  ((int)FSkinningTransformProvider::ExtensionRegistration._8_4_ >>
                                   0x1f & 0x1fU)) >> 5) * 4) >>
          (FSkinningTransformProvider::ExtensionRegistration._8_4_ & 0x1f) & 1) != 0) &&
       (this_00 = *(FSkinningTransformProvider **)
                   (*(longlong *)(lVar1 + 0x4d00) +
                   (longlong)(int)FSkinningTransformProvider::ExtensionRegistration._8_4_ * 8),
       this_00 != (FSkinningTransformProvider *)0x0)) {
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = ProvideRefPoseTransforms;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      FSkinningTransformProvider::RegisterProvider
                (this_00,&RefPoseProviderId,
                 (TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                  *)local_68,false);
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
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = ProvideAnimRuntimeTransforms;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAUFProviderContext_FSkinningTransformProvider___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      FSkinningTransformProvider::RegisterProvider
                (this_00,&AnimRuntimeProviderId,
                 (TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
                  *)local_68,false);
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
      if (*(int *)&param_1->field_0x8 == 5) {
        EVar5 = SP_NumPlatforms;
      }
      else {
        EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
      }
      bVar2 = UseNanite(EVar5,true,true);
      SetEnabled(this,bVar2);
    }
  }
  return;
}

// PerformSkinning @ 14568d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::PerformSkinning
          (FSkinningSceneExtension *this,FSkinningSceneParameters *param_1,FRDGBuilder *param_2)

{
  FSkeletonBatch *pFVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  FTickState *pFVar7;
  undefined1 *puVar8;
  FPrimitiveSceneInfo *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FSkinningSceneExtension *pFVar14;
  FNameEntryId FVar15;
  int iVar16;
  FName FVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  FRDGScope *this_00;
  FSkinningTransformProvider *pFVar21;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar22;
  FProviderIndirection *pFVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  ForElementType<FSkinningTransformProvider::FProviderRange> FVar28;
  uchar *puVar29;
  ForElementType<FSkinningTransformProvider::FProviderRange> FVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  FName FVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 *puVar38;
  uint *puVar39;
  ulonglong uVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  uint uVar44;
  FName FVar45;
  undefined1 auStackY_658 [32];
  undefined1 local_600;
  undefined1 local_5ff;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined1 local_5fb;
  undefined1 local_5fa;
  undefined1 local_5f9;
  undefined1 local_5f8 [4];
  uint local_5f4;
  undefined1 local_5f0 [8];
  ForAnyElementType local_5e8;
  uint local_5e0;
  uint local_5dc;
  FName local_5d8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_5d0;
  TBitArray<FDefaultBitArrayAllocator> *local_5c0;
  FName local_5b8;
  undefined1 local_5b0 [8];
  FProviderIndirection *local_5a8;
  FSkeletonBatch *local_5a0;
  undefined8 local_598;
  FSkinningSceneExtension *local_590;
  ForElementType<unsigned_char> local_588;
  int local_580 [2];
  FRDGBuilder *local_578;
  FName local_570;
  FName FStack_568;
  FName local_560;
  uint uStack_558;
  uint uStack_554;
  int local_550;
  undefined4 uStack_54c;
  int iStack_548;
  undefined4 uStack_544;
  TArrayView<_private:_void___cdecl_FSkinningSceneExtension::PerformSkinning(FSkinningSceneParameters_&,FRDGBuilder_&)_::_13_::FOffsets,int>
  local_540;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_530;
  undefined8 uStack_528;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_520;
  uint uStack_518;
  int iStack_514;
  int iStack_510;
  undefined4 uStack_50c;
  int local_508;
  undefined4 uStack_504;
  FSkinningSceneParameters *local_500;
  FSkinningTransformProvider *local_4f8;
  FPrimitiveSceneInfo **local_4f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e8;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  int local_4bc;
  TRDGEventScopeGuard<FRDGScope_RHI> local_4b8;
  char local_4a8;
  FName local_4a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_498;
  undefined8 uStack_478;
  FName local_470;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_468;
  undefined8 uStack_448;
  FName local_440;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_438;
  undefined8 uStack_418;
  FProviderIndirection *local_410;
  int iStack_408;
  undefined4 uStack_404;
  FSkeletonBatch *local_400;
  uint uStack_3f8;
  undefined4 uStack_3f4;
  ForElementType<FSkinningTransformProvider::FProviderRange> local_3e8;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  FPrimitiveSceneInfo **local_3d8;
  int iStack_3d0;
  undefined4 uStack_3cc;
  FSkeletonBatch *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FName local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  ForElementType<FSkinningTransformProvider::FProviderRange> local_3a8;
  uint uStack_3a0;
  undefined4 uStack_39c;
  FProviderContext local_398;
  TArrayView<FSkinningTransformProvider::FProviderRange_const_,int> local_338;
  TArrayView<FSkinningTransformProvider::FProviderRange_const_,int> local_328;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_> local_318;
  FProviderContext local_308;
  uint uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 local_27c;
  undefined4 local_26c;
  undefined4 local_25c;
  undefined4 local_23c;
  undefined4 local_21c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  ForElementType<FSkinningTransformProvider::FProviderRange> local_1f8;
  uint local_130;
  uint local_12c;
  TArray<FSkinningTransformProvider::FProviderRange,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_658;
  cVar5 = *(char *)((longlong)&param_2->_padding_ + 6);
  local_4a8 = '\0';
  local_590 = this;
  local_578 = param_2;
  local_500 = param_1;
  if ((cVar5 != '\0') && ((cVar5 != '\x01' || ((param_2->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_298 = 0;
      uStack_294 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_29c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_Skinning;
      ::Desc._padding_ = (longlong)u_Skinning;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x13e;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSkinningSceneExtension::PerformSkinning'::__l7::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_318._Myfirst._Val = &::Desc;
    local_4b8.State = (FRDGScopeState *)param_2;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_2->_padding_,(FRDGScope **)param_2);
    param_2->_padding_ = (longlong)this_00;
    local_4b8.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_2,&local_318);
    if (*(char *)((longlong)&param_2->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_2->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_2->_padding_);
    }
    local_4a8 = '\x01';
  }
  pFVar7 = (this->TickState).Reference;
  fVar4 = pFVar7->DeltaTime;
  pFVar7->DeltaTime = 0.0;
  if (((GSkinningTransformProviders == false) ||
      (pFVar21 = FScene::GetExtensionPtr<FSkinningTransformProvider>((FScene *)this->_padding_),
      local_4f8 = pFVar21, pFVar21 == (FSkinningTransformProvider *)0x0)) ||
     (*(int *)&(this->HeaderData).field_0x8 == *(int *)&(this->HeaderData).field_0x34))
  goto LAB_14568f035;
  uVar24 = (pFVar21->Providers).ArrayNum;
  local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.ArrayNum = 0;
  local_5d0.ArrayMax = 0;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (0 < (int)uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar24,&local_5d0.AllocatorInstance,0,&local_5d0.ArrayMax);
  }
  uVar12._4_4_ = (pFVar21->Providers).ArrayNum;
  pFVar27 = (pFVar21->Providers).AllocatorInstance.Data;
  pFVar35 = pFVar27 + (longlong)uVar12._4_4_ * 0x30;
  while( true ) {
    if ((pFVar21->Providers).ArrayNum != uVar12._4_4_) {
      local_5fa = 0;
      `TCheckedPointerIterator<FSkinningTransformProvider::FTransformProvider_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_5fa);
    }
    if (pFVar27 == pFVar35) break;
    if (((byte)pFVar27[0x28] & 1) != 0) {
      if (((local_5d0.AllocatorInstance.Data <= pFVar27) &&
          (pFVar27 < local_5d0.AllocatorInstance.Data + (longlong)local_5d0.ArrayMax * 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_5d0.ArrayNum == local_5d0.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_5d0.AllocatorInstance,&local_5d0.ArrayMax);
        local_5d0.ArrayNum = iVar19;
      }
      lVar25 = (longlong)local_5d0.ArrayNum;
      local_5d0.ArrayNum = local_5d0.ArrayNum + 1;
      uVar11 = *(undefined8 *)(pFVar27 + 8);
      *(undefined8 *)(local_5d0.AllocatorInstance.Data + lVar25 * 0x10) = *(undefined8 *)pFVar27;
      *(undefined8 *)(local_5d0.AllocatorInstance.Data + lVar25 * 0x10 + 8) = uVar11;
    }
    pFVar27 = pFVar27 + 0x30;
  }
  uVar24 = (pFVar21->Providers).ArrayNum;
  local_5e8.Data = (FScriptContainerElement *)0x0;
  local_5e0 = 0;
  local_5dc = 0;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (0 < (int)uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar24,&local_5e8,0,(int *)&local_5dc);
  }
  uVar12._4_4_ = (pFVar21->Providers).ArrayNum;
  pFVar27 = (pFVar21->Providers).AllocatorInstance.Data;
  pFVar35 = pFVar27 + (longlong)uVar12._4_4_ * 0x30;
  uVar24 = local_5e0;
  while( true ) {
    if ((pFVar21->Providers).ArrayNum != uVar12._4_4_) {
      local_600 = 0;
      `TCheckedPointerIterator<FSkinningTransformProvider::FTransformProvider_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_600);
      uVar24 = local_5e0;
    }
    if (pFVar27 == pFVar35) break;
    if (((byte)pFVar27[0x28] & 1) == 0) {
      uVar20 = uVar24;
      if (((local_5e8.Data <= pFVar27) &&
          (pFVar27 < local_5e8.Data + (longlong)(int)local_5dc * 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar20 = local_5e0, bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar20 == local_5dc) {
        uVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_5e8,(int *)&local_5dc);
      }
      uVar24 = uVar20 + 1;
      uVar11 = *(undefined8 *)(pFVar27 + 8);
      *(undefined8 *)(local_5e8.Data + (longlong)(int)uVar20 * 0x10) = *(undefined8 *)pFVar27;
      *(undefined8 *)(local_5e8.Data + (longlong)(int)uVar20 * 0x10 + 8) = uVar11;
      local_5e0 = uVar24;
    }
    pFVar27 = pFVar27 + 0x30;
  }
  if (0xff < (int)(uVar24 + local_5d0.ArrayNum)) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(SkeletonProviderIds.Num() + PrimitiveProviderIds.Num()) < 256",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                        ,0x152,
                        L"The number of provider ids exceeds storage capacity for PrimitivesToRangeIndex."
                       );
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_598 = 1;
  if (*(int *)&(this->BatchHeaderData).field_0x8 - *(int *)&(this->BatchHeaderData).field_0x34 < 1)
  {
LAB_14568e4ad:
    if (0 < *(int *)&(this->HeaderDataIndices).Elements.field_0x8 -
            *(int *)&(this->HeaderDataIndices).Elements.field_0x34) {
      local_588.Data = (uchar *)0x0;
      local_580[0] = 0;
      local_580[1] = 0;
      UE::Core::Private::
      ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<unsigned_char>_>
                ((uint)local_598,(uint)local_598,
                 *(int *)&(this->HeaderData).field_0x8 - *(int *)&(this->HeaderData).field_0x34,
                 &local_588,local_580,local_580 + 1);
      uVar36 = (ulonglong)local_5e0;
      local_1f8.SecondaryData = (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0;
      local_130 = 0;
      local_12c = 8;
      if ((int)local_5e0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar36);
      }
      if ((int)local_5e0 < 9) {
LAB_14568e5a4:
        local_130 = 0;
      }
      else {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
                  (0x18,4,local_5e0,&local_1f8,0,(int *)&local_12c);
        if (-1 < (int)local_12c) {
          uVar36 = (ulonglong)local_5e0;
          goto LAB_14568e5a4;
        }
        local_130 = 0;
        if (local_12c == 0) {
          uVar36 = (ulonglong)local_5e0;
        }
        else {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
                    (0x18,4,0,&local_1f8,0,(int *)&local_12c);
          uVar36 = (ulonglong)local_5e0;
        }
      }
      uVar12._4_4_ = (int)uVar36;
      pFVar27 = local_5e8.Data + (longlong)uVar12._4_4_ * 0x10;
      FVar31.Data = local_5e8.Data;
      while( true ) {
        if ((int)uVar36 != uVar12._4_4_) {
          local_5f0[0] = 0;
          `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_5f0);
        }
        if (FVar31.Data == pFVar27) break;
        if (local_130 == local_12c) {
          local_130 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
                                (0x418,&local_1f8,(int *)&local_12c);
        }
        lVar25 = (longlong)(int)local_130;
        FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_1f8;
        if (local_1f8.SecondaryData !=
            (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
          FVar28 = local_1f8.SecondaryData;
        }
        puVar29 = (uchar *)((longlong)FVar28 + 0x10) + lVar25 * 0x18;
        local_130 = local_130 + 1;
        puVar29[0] = '\0';
        puVar29[1] = '\0';
        puVar29[2] = '\0';
        puVar29[3] = '\0';
        puVar29[4] = '\0';
        puVar29[5] = '\0';
        puVar29[6] = '\0';
        puVar29[7] = '\0';
        *(undefined8 *)((longlong)FVar28 + lVar25 * 0x18) = 0;
        puVar29 = (uchar *)((longlong)FVar28 + 8) + lVar25 * 0x18;
        puVar29[0] = '\0';
        puVar29[1] = '\0';
        puVar29[2] = '\0';
        puVar29[3] = '\0';
        puVar29[4] = '\0';
        puVar29[5] = '\0';
        puVar29[6] = '\0';
        puVar29[7] = '\0';
        uVar11 = *(undefined8 *)FVar31.Data;
        uVar13 = *(undefined8 *)(FVar31.Data + 8);
        FVar31.Data = FVar31.Data + 0x10;
        puVar2 = (undefined8 *)((longlong)FVar28 + lVar25 * 0x18);
        *puVar2 = uVar11;
        puVar2[1] = uVar13;
        uVar36 = (ulonglong)local_5e0;
      }
      uVar24 = *(int *)&(this->HeaderDataIndices).Elements.field_0x8 -
               *(int *)&(this->HeaderDataIndices).Elements.field_0x34;
      local_5a8 = (FProviderIndirection *)CONCAT44(local_5a8._4_4_,uVar24);
      local_4f0 = FMemStackBase::Alloc
                            ((FMemStackBase *)&param_2->_padding_,(ulonglong)uVar24 << 3,8);
      if (((int)uVar24 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar24 = *(int *)&(this->HeaderDataIndices).Elements.field_0x8 -
               *(int *)&(this->HeaderDataIndices).Elements.field_0x34;
      local_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_5c0._4_4_,uVar24);
      local_5a0 = FMemStackBase::Alloc
                            ((FMemStackBase *)&param_2->_padding_,(ulonglong)uVar24 << 3,8);
      if (((int)uVar24 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar20 = *(int *)&(this->HeaderDataIndices).Elements.field_0x8 -
               *(int *)&(this->HeaderDataIndices).Elements.field_0x34;
      local_5d8 = (FName)FMemStackBase::Alloc
                                   ((FMemStackBase *)&param_2->_padding_,(ulonglong)uVar20 << 3,4);
      if (((int)uVar20 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar14 = local_590;
      FVar45 = (FName)&this->HeaderDataIndices;
      uVar32 = 0;
      iVar19 = 0;
      iStack_510 = 0;
      FVar33 = (FName)&(local_590->HeaderDataIndices).Elements.field_0x10;
      uVar12._4_4_ = *(int *)&(local_590->HeaderDataIndices).Elements.field_0x28;
      iStack_514 = 0;
      if (uVar12._4_4_ == 0) {
LAB_14568e7f2:
        uVar26 = (uint)local_598;
      }
      else {
        puVar39 = *(uint **)&(local_590->HeaderDataIndices).Elements.field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)FVar33;
        }
        uVar26 = *puVar39;
        while (uVar26 == 0) {
          lVar25 = (longlong)iVar19;
          iStack_510 = iStack_510 + 0x20;
          iVar19 = iVar19 + 1;
          iStack_514 = uVar12._4_4_;
          if ((int)(uVar12._4_4_ + -1 + (uVar12._4_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_14568e7f2;
          uVar26 = puVar39[lVar25 + 1];
        }
        uVar26 = -uVar26 & uVar26;
        uVar36 = (ulonglong)uVar26 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_4c0 = (int)lVar25;
        iStack_514 = iStack_510 + -1 + local_4c0;
        if (uVar12._4_4_ < iStack_514) {
          iStack_514 = uVar12._4_4_;
        }
      }
      uVar44 = *(uint *)&(local_590->HeaderDataIndices).Elements.field_0x28;
      local_508 = *(int *)&(local_590->HeaderDataIndices).Elements.field_0x8 -
                  *(int *)&(local_590->HeaderDataIndices).Elements.field_0x34;
      uVar34 = uVar44 & 0xffffffe0;
      uStack_518 = 0xffffffff;
      uStack_528 = CONCAT44(uVar26,iVar19);
      uStack_50c = local_21c;
      TStack_438._padding_ = uStack_528;
      uVar12._4_4_ = (int)uVar44 >> 5;
      uStack_418 = CONCAT44(uStack_504,local_508);
      TStack_438.UnvisitedBitMask = 0xffffffff;
      TStack_438.CurrentBitIndex = iStack_514;
      TStack_438.BaseBitIndex = iStack_510;
      TStack_438._28_4_ = local_21c;
      local_5f4 = uVar44;
      local_5b8 = FVar33;
      local_570 = FVar45;
      local_530 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar45;
      pTStack_520 = (TBitArray<FDefaultBitArrayAllocator> *)FVar33;
      local_440 = FVar45;
      TStack_438.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar33;
      if (((int)uVar44 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar26 = *(uint *)&(pFVar14->HeaderDataIndices).Elements.field_0x28;
      uVar41 = 0;
      if (uVar44 != uVar26) {
        puVar8 = *(undefined1 **)&(pFVar14->HeaderDataIndices).Elements.field_0x20;
        puVar38 = (undefined1 *)FVar33;
        if (puVar8 != (undefined1 *)0x0) {
          puVar38 = puVar8;
        }
        uVar44 = -1 << ((byte)uVar44 & 0x1f) & *(uint *)(puVar38 + (longlong)uVar12._4_4_ * 4);
        while (uVar41 = uVar32, uVar44 == 0) {
          lVar25 = (longlong)uVar12._4_4_;
          uVar34 = uVar34 + 0x20;
          uVar12._4_4_ = uVar12._4_4_ + 1;
          uVar44 = uVar26;
          local_5f4 = uVar26;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < uVar12._4_4_)
          goto LAB_14568e920;
          uVar44 = *(uint *)(puVar38 + lVar25 * 4 + 4);
        }
        uVar36 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_4bc = (int)lVar25;
        uVar44 = (uVar34 - 1) + local_4bc;
        local_5f4 = uVar44;
        if ((int)uVar26 < (int)uVar44) {
          uVar44 = uVar26;
          local_5f4 = uVar26;
        }
      }
LAB_14568e920:
      while( true ) {
        FVar17 = local_440;
        if (*(int *)((longlong)local_440 + 8) - *(int *)((longlong)local_440 + 0x34) !=
            (int)uStack_418) {
          local_5f9 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f9);
        }
        uVar32 = local_130;
        if (((TStack_438.CurrentBitIndex == uVar44) && ((FName)TStack_438.Array == FVar33)) &&
           (FVar17 == FVar45)) break;
        uVar26 = 0;
        lVar25 = *(longlong *)&local_590->HeaderData;
        lVar43 = (longlong)
                 *(int *)(*(longlong *)FVar17 + (longlong)TStack_438.CurrentBitIndex * 0xc) * 0x50;
        if (0 < (int)local_130) {
          do {
            uVar44 = 0;
            if ((int)uVar26 < (int)uVar32) {
              uVar44 = ~uVar26 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar32 = local_130, bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_1f8;
            if (local_1f8.SecondaryData !=
                (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
              FVar28 = local_1f8.SecondaryData;
            }
            lVar42 = (longlong)(int)uVar26;
            if (((*(int *)((uchar *)((longlong)FVar28 + 8) + lVar42 * 0x18) ==
                  *(int *)(lVar43 + 0x18 + lVar25) &&
                 *(int *)((uchar *)((longlong)FVar28 + 4) + lVar42 * 0x18) ==
                 *(int *)(lVar43 + 0x14 + lVar25)) &&
                *(int *)((uchar *)((longlong)FVar28 + 0xc) + lVar42 * 0x18) ==
                *(int *)(lVar43 + 0x1c + lVar25)) &&
                *(int *)((longlong)FVar28 + lVar42 * 0x18) == *(int *)(lVar43 + 0x10 + lVar25)) {
              *(int *)((uchar *)((longlong)FVar28 + 0x10) + lVar42 * 0x18) =
                   *(int *)((uchar *)((longlong)FVar28 + 0x10) + lVar42 * 0x18) + 1;
              uVar32 = local_130;
              break;
            }
            uVar26 = uVar26 + 1;
          } while ((int)uVar26 < (int)uVar32);
        }
        if ((uVar26 == uVar32) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("RangeIndex != PrimitiveRanges.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                ,0x1e8,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar44 = ~uVar41 >> 0x1f;
        uVar32 = 0;
        if ((int)uVar41 < local_580[0]) {
          uVar32 = uVar44;
        }
        if ((uVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar42 = (longlong)(int)uVar41;
        local_588.Data[lVar42] = (uchar)uVar26;
        pFVar9 = *(FPrimitiveSceneInfo **)(lVar43 + lVar25);
        uVar32 = 0;
        if ((int)uVar41 < (int)local_5a8) {
          uVar32 = uVar44;
        }
        if ((uVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_4f0[lVar42] = pFVar9;
        FVar33 = *(FName *)(lVar43 + 8 + lVar25);
        uVar32 = 0;
        if ((int)uVar41 < (int)uVar24) {
          uVar32 = uVar44;
        }
        if ((uVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (&local_5a0->SkeletonName)[lVar42] = FVar33;
        uVar24 = *(uint *)(lVar43 + 0x38 + lVar25);
        uVar44 = (int)uVar41 < (int)uVar20 & uVar44;
        if ((uVar44 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(uint *)((longlong)local_5d8 + lVar42 * 8) = uVar24;
        uVar6 = *(undefined4 *)(lVar43 + 0x30 + lVar25);
        if ((uVar44 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TStack_438.UnvisitedBitMask = TStack_438.UnvisitedBitMask & ~TStack_438._padding_._4_4_;
        *(undefined4 *)((uchar *)((longlong)local_5d8 + 4) + lVar42 * 8) = uVar6;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_438);
        FVar33 = local_5b8;
        FVar45 = local_570;
        uVar24 = (uint)local_5c0;
        uVar44 = local_5f4;
        uVar41 = uVar41 + 1;
      }
      uVar36 = (ulonglong)(int)local_130;
      uVar40 = 0;
      FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_1f8;
      if (local_1f8.SecondaryData != (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0
         ) {
        FVar28 = local_1f8.SecondaryData;
      }
      puVar29 = (uchar *)((longlong)FVar28 + 0x10);
      lVar25 = uVar36 * 0x18;
      while( true ) {
        if ((uint)uVar36 != uVar32) {
          local_5f8[0] = 0;
          `TCheckedPointerIterator<FSkinningTransformProvider::FProviderRange,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_5f8);
        }
        uVar12._4_4_ = (int)uVar40;
        if ((ForElementType<FSkinningTransformProvider::FProviderRange> *)(puVar29 + -0x10) ==
            (ForElementType<FSkinningTransformProvider::FProviderRange> *)
            ((longlong)FVar28 + lVar25)) break;
        *(int *)(puVar29 + 4) = uVar12._4_4_;
        uVar40 = (ulonglong)(uint)(uVar12._4_4_ + *(int *)puVar29);
        puVar29[0] = '\0';
        puVar29[1] = '\0';
        puVar29[2] = '\0';
        puVar29[3] = '\0';
        puVar29 = puVar29 + 0x18;
        uVar36 = (ulonglong)local_130;
      }
      local_5b8 = (FName)FMemStackBase::Alloc((FMemStackBase *)&local_578->_padding_,uVar40 * 0xc,4)
      ;
      if ((uVar12._4_4_ < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar24 = 0;
      if (uVar41 != 0) {
        do {
          uVar32 = 0;
          if ((int)uVar24 < local_580[0]) {
            uVar32 = ~uVar24 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar25 = (longlong)(int)uVar24;
          uVar36 = (ulonglong)local_588.Data[lVar25];
          if (((int)local_130 <= (int)(uint)local_588.Data[lVar25]) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_1f8;
          if (local_1f8.SecondaryData !=
              (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
            FVar28 = local_1f8.SecondaryData;
          }
          uVar32 = (uint)((int)uVar24 < (int)uVar20) & ~uVar24 >> 0x1f;
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar19 = *(int *)((uchar *)((longlong)local_5d8 + 4) + lVar25 * 8);
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar32 = *(uint *)((longlong)local_5d8 + lVar25 * 8);
          uVar44 = *(int *)((uchar *)((longlong)FVar28 + 0x14) + uVar36 * 0x18) +
                   *(int *)((uchar *)((longlong)FVar28 + 0x10) + uVar36 * 0x18);
          uVar26 = 0;
          if ((int)uVar44 < uVar12._4_4_) {
            uVar26 = ~uVar44 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar25 = (longlong)(int)uVar44;
          *(uint *)((longlong)local_5b8 + lVar25 * 0xc) = uVar24;
          uVar24 = uVar24 + 1;
          *(uint *)((longlong)local_5b8 + lVar25 * 0xc + 4) = uVar32 * 0x30;
          *(int *)((longlong)local_5b8 + lVar25 * 0xc + 8) = iVar19 << 2;
          *(int *)((uchar *)((longlong)FVar28 + 0x10) + uVar36 * 0x18) =
               *(int *)((uchar *)((longlong)FVar28 + 0x10) + uVar36 * 0x18) + 1;
        } while (uVar24 < uVar41);
      }
      uVar24 = local_130;
      local_308.TransformBuffer = (local_500->BoneTransforms->Desc).Buffer;
      local_3c8 = local_5a0;
      iStack_3c0 = (uint)local_5c0;
      local_308.Proxies._12_4_ = uStack_3bc;
      local_308.Proxies.ArrayNum = (uint)local_5c0;
      local_3d8 = local_4f0;
      iStack_3d0 = (int)local_5a8;
      local_308.Primitives._12_4_ = uStack_3cc;
      local_308.Primitives.ArrayNum = (int)local_5a8;
      local_308.SkeletonBatches._12_4_ = local_27c;
      local_308.GraphBuilder = local_578;
      local_308.HierarchyBufferSRV = local_500->BoneHierarchy;
      local_308.Primitives.DataPtr = local_4f0;
      local_308.Indirections._12_4_ = uStack_3ac;
      local_308.Indirections.ArrayNum = uVar12._4_4_;
      local_3a8 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_1f8;
      if (local_1f8.SecondaryData != (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0
         ) {
        local_3a8 = local_1f8.SecondaryData;
      }
      local_308.SkeletonBatches.DataPtr = (FSkeletonBatch *)0x0;
      local_308.Proxies.DataPtr = (FSkinningSceneExtensionProxy **)local_5a0;
      local_308.SkeletonBatches.ArrayNum = 0;
      local_3b8 = local_5b8;
      iStack_3b0 = uVar12._4_4_;
      local_308.Indirections.DataPtr = (FProviderIndirection *)local_5b8;
      local_308.DeltaTime = fVar4;
      if (((int)local_130 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStack_3a0 = uVar24;
      local_328._12_4_ = uStack_39c;
      local_328.ArrayNum = uVar24;
      local_328.DataPtr = (FProviderRange *)local_3a8;
      FSkinningTransformProvider::Broadcast(local_4f8,&local_328,&local_308);
      if (local_1f8.SecondaryData != (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0
         ) {
        FMemory::Free((void *)local_1f8.SecondaryData);
      }
      if (local_588.Data != (uchar *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_588.Data);
      }
    }
  }
  else {
    local_128.AllocatorInstance.SecondaryData =
         (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 8;
    if (local_5d0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_5d0.ArrayNum);
    }
    if (8 < local_5d0.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSkinningTransformProvider::FProviderRange>_>
                (0x18,4,local_5d0.ArrayNum,&local_128.AllocatorInstance,0,&local_128.ArrayMax);
    }
    `FSkinningSceneExtension::PerformSkinning'::__l13::<lambda_2>::operator()
              (local_5b0,&local_5d0,&local_128);
    uVar24 = *(int *)&(this->BatchHeaderData).field_0x8 -
             *(int *)&(this->BatchHeaderData).field_0x34;
    local_5a0 = FMemStackBase::Alloc((FMemStackBase *)&param_2->_padding_,(ulonglong)uVar24 << 5,4);
    if (((int)uVar24 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FRDGBuilder::AllocPODArrayView<_FSkinningSceneExtension::PerformSkinning_::__l13::FOffsets>
              (param_2,&local_540,
               *(int *)&(this->BatchHeaderData).field_0x8 -
               *(int *)&(this->BatchHeaderData).field_0x34);
    puVar8 = &(this->BatchHeaderData).field_0x10;
    local_5f4 = 0;
    FVar33 = (FName)&this->BatchHeaderData;
    local_4e8._padding_._0_4_ = 0;
    local_4e8._padding_._4_4_ = 1;
    local_4e8.UnvisitedBitMask = 0xffffffff;
    local_4e8.CurrentBitIndex = 0;
    local_4e8.BaseBitIndex = 0;
    local_5d8 = (FName)puVar8;
    local_5b8 = FVar33;
    local_4e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
    if (*(int *)&(this->BatchHeaderData).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4e8);
    }
    uStack_528 = CONCAT44(local_4e8._padding_._4_4_,(undefined4)local_4e8._padding_);
    iStack_514 = local_4e8.CurrentBitIndex;
    uStack_518 = local_4e8.UnvisitedBitMask;
    uStack_50c = local_4e8._28_4_;
    iStack_510 = local_4e8.BaseBitIndex;
    local_508 = *(int *)&(this->BatchHeaderData).field_0x8 -
                *(int *)&(this->BatchHeaderData).field_0x34;
    pTStack_520 = local_4e8.Array;
    uStack_478 = CONCAT44(uStack_504,local_508);
    TStack_498.Array = local_4e8.Array;
    local_530 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar33;
    local_4a0 = FVar33;
    TStack_498._padding_ = uStack_528;
    TStack_498._16_8_ = _uStack_518;
    TStack_498._24_8_ = _iStack_510;
    pTVar22 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_218,(TBitArray<FDefaultBitArrayAllocator> *)puVar8,
                         *(int *)&(this->BatchHeaderData).field_0x28);
    uStack_528 = pTVar22->_padding_;
    local_5c0 = pTVar22->Array;
    uVar12._0_4_ = pTVar22->UnvisitedBitMask;
    uVar12._4_4_ = pTVar22->CurrentBitIndex;
    iStack_510 = pTVar22->BaseBitIndex;
    uStack_50c = *(undefined4 *)&pTVar22->field_0x1c;
    local_5a8 = (FProviderIndirection *)CONCAT44(local_5a8._4_4_,uVar12._4_4_);
    pTStack_520 = local_5c0;
    _uStack_518 = uVar12;
    while( true ) {
      FVar45 = local_4a0;
      if (*(int *)((longlong)local_4a0 + 8) - *(int *)((longlong)local_4a0 + 0x34) !=
          (int)uStack_478) {
        local_5ff = 0;
        `TSparseArray<TSparseSetElement<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5ff);
      }
      iVar19 = local_128.ArrayNum;
      if (((TStack_498.CurrentBitIndex == uVar12._4_4_) && (TStack_498.Array == local_5c0)) &&
         (FVar45 == FVar33)) break;
      lVar25 = *(longlong *)FVar45;
      uVar36 = (ulonglong)local_128.ArrayNum;
      lVar43 = (longlong)TStack_498.CurrentBitIndex * 0x80;
      FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData !=
          (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
        FVar28 = local_128.AllocatorInstance.SecondaryData;
      }
      puVar2 = (undefined8 *)(lVar43 + 0x18 + lVar25);
      local_570 = (FName)*puVar2;
      uVar12 = puVar2[1];
      FStack_568.Number = (uint)((ulonglong)uVar12 >> 0x20);
      uVar20 = FStack_568.Number;
      FVar30 = (ForElementType<FSkinningTransformProvider::FProviderRange>)
               ((longlong)FVar28 + uVar36 * 0x18);
      FStack_568.ComparisonIndex.Value = (uint)uVar12;
      FVar15.Value = FStack_568.ComparisonIndex.Value;
      FStack_568 = (FName)uVar12;
      while( true ) {
        if ((uint)uVar36 != iVar19) {
          local_5fe = 0;
          `TCheckedPointerIterator<FSkinningTransformProvider::FProviderRange,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_5fe);
          uVar36 = (ulonglong)(uint)local_128.ArrayNum;
        }
        uVar32 = local_5f4;
        if (FVar28 == FVar30) goto LAB_14568dd2b;
        if (((uVar20 == *(int *)((longlong)FVar28 + 0xc) &&
             FVar15.Value == *(int *)((longlong)FVar28 + 8)) &&
            local_570.Number == *(int *)((longlong)FVar28 + 4)) &&
            local_570.ComparisonIndex.Value == *(int *)FVar28) break;
        FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)
                 ((longlong)FVar28 + 0x18);
      }
      *(int *)((longlong)FVar28 + 0x10) = *(int *)((longlong)FVar28 + 0x10) + 1;
LAB_14568dd2b:
      local_570 = *(FName *)(lVar43 + lVar25);
      lVar42 = (longlong)(int)local_5f4;
      pFVar3 = (FName *)(lVar43 + 8 + lVar25);
      FStack_568 = *pFVar3;
      local_560 = pFVar3[1];
      uStack_558 = (uint)*(ushort *)(lVar43 + 0x68 + lVar25);
      uVar26 = ~local_5f4 >> 0x1f;
      uStack_554 = (uint)*(byte *)(lVar43 + 0x6f + lVar25);
      uVar20 = 0;
      if ((int)local_5f4 < (int)uVar24) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar12._4_4_ = local_540.ArrayNum;
      pFVar1 = local_5a0 + lVar42;
      pFVar1->SkeletonName = local_570;
      (pFVar1->SkeletonGuid).A = FStack_568.ComparisonIndex.Value;
      (pFVar1->SkeletonGuid).B = FStack_568.Number;
      pFVar1 = local_5a0 + lVar42;
      (pFVar1->SkeletonGuid).C = local_560.ComparisonIndex.Value;
      (pFVar1->SkeletonGuid).D = local_560.Number;
      *(ulonglong *)(&(pFVar1->SkeletonGuid).C + 2) = CONCAT44(uStack_554,uStack_558);
      uVar20 = *(uint *)(lVar43 + 0x60 + lVar25);
      uVar44 = 0;
      if ((int)uVar32 < local_540.ArrayNum) {
        uVar44 = uVar26;
      }
      if ((uVar44 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_540.DataPtr[lVar42].TransformOffset = uVar20;
      uVar20 = *(uint *)(lVar43 + 0x58 + lVar25);
      uVar44 = 0;
      if ((int)uVar32 < uVar12._4_4_) {
        uVar44 = uVar26;
      }
      if ((uVar44 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_540.DataPtr[lVar42].HierarchyOffset = uVar20;
      local_5f4 = uVar32 + 1;
      TStack_498.UnvisitedBitMask = TStack_498.UnvisitedBitMask & ~TStack_498._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_498);
      FVar33 = local_5b8;
      uVar12._4_4_ = (int)local_5a8;
    }
    uVar36 = (ulonglong)local_128.ArrayNum;
    uVar40 = 0;
    FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_128;
    if (local_128.AllocatorInstance.SecondaryData !=
        (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
      FVar28 = local_128.AllocatorInstance.SecondaryData;
    }
    puVar29 = (uchar *)((longlong)FVar28 + 0x10);
    lVar25 = uVar36 * 0x18;
    while( true ) {
      if ((uint)uVar36 != iVar19) {
        local_5fd = 0;
        `TCheckedPointerIterator<FSkinningTransformProvider::FProviderRange,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_5fd);
      }
      uVar12._4_4_ = (int)uVar40;
      if ((ForElementType<FSkinningTransformProvider::FProviderRange> *)(puVar29 + -0x10) ==
          (ForElementType<FSkinningTransformProvider::FProviderRange> *)((longlong)FVar28 + lVar25))
      break;
      *(int *)(puVar29 + 4) = uVar12._4_4_;
      uVar40 = (ulonglong)(uint)(uVar12._4_4_ + *(int *)puVar29);
      puVar29[0] = '\0';
      puVar29[1] = '\0';
      puVar29[2] = '\0';
      puVar29[3] = '\0';
      puVar29 = puVar29 + 0x18;
      uVar36 = (ulonglong)(uint)local_128.ArrayNum;
    }
    pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&local_578->_padding_,uVar40 * 0xc,4);
    local_5a8 = pFVar23;
    if ((uVar12._4_4_ < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FStack_568.ComparisonIndex.Value = 0;
    FStack_568.Number = (uint)local_598;
    local_550 = 0;
    uVar20 = *(uint *)((longlong)local_5d8 + 0x18);
    uStack_554 = 0;
    if (uVar20 != 0) {
      FVar33 = *(FName *)((longlong)local_5d8 + 0x10);
      if (*(FName *)((longlong)local_5d8 + 0x10) == (FName)0x0) {
        FVar33 = local_5d8;
      }
      uVar32 = *(uint *)FVar33;
      while (uVar32 == 0) {
        lVar25 = (longlong)(int)FStack_568.ComparisonIndex.Value;
        local_550 = local_550 + 0x20;
        FStack_568.ComparisonIndex.Value = FStack_568.ComparisonIndex.Value + 1;
        uStack_554 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)FStack_568.ComparisonIndex.Value) goto LAB_14568dfd0;
        uVar32 = ((uint *)((longlong)FVar33 + 4))[lVar25];
      }
      FStack_568.Number = -uVar32 & uVar32;
      uVar36 = (ulonglong)FStack_568.Number * 2 + 1;
      lVar25 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_4c8 = (int)lVar25;
      uStack_554 = local_550 + -1 + local_4c8;
      if ((int)uVar20 < (int)uStack_554) {
        uStack_554 = uVar20;
      }
    }
LAB_14568dfd0:
    local_570 = local_5b8;
    uStack_54c = local_23c;
    iStack_548 = *(int *)&(local_590->BatchHeaderData).field_0x8 -
                 *(int *)&(local_590->BatchHeaderData).field_0x34;
    local_560 = local_5d8;
    uVar20 = *(uint *)&(local_590->BatchHeaderData).field_0x28;
    uStack_558 = 0xffffffff;
    TStack_468.CurrentBitIndex = uStack_554;
    TStack_468.UnvisitedBitMask = 0xffffffff;
    uVar32 = uVar20 & 0xffffffe0;
    local_470 = local_5b8;
    TStack_468._padding_._0_4_ = FStack_568.ComparisonIndex.Value;
    TStack_468._padding_._4_4_ = FStack_568.Number;
    iVar19 = (int)uVar20 >> 5;
    TStack_468._28_4_ = local_23c;
    TStack_468.BaseBitIndex = local_550;
    uStack_448 = CONCAT44(uStack_544,iStack_548);
    local_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_5c0._4_4_,uVar20);
    TStack_468.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_5d8;
    if (((int)uVar20 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar26 = *(int *)((longlong)local_5d8 + 0x18);
    uVar36 = uVar40;
    uVar44 = 0;
    if (uVar20 != uVar26) {
      local_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_5c0._4_4_,uVar26);
      FVar33 = local_5d8;
      if (*(FName *)((longlong)local_5d8 + 0x10) != (FName)0x0) {
        FVar33 = *(FName *)((longlong)local_5d8 + 0x10);
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar33 + (longlong)iVar19 * 4);
      while (uVar44 = 0, uVar20 == 0) {
        lVar25 = (longlong)iVar19;
        uVar32 = uVar32 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar26;
        if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14568e0f3;
        uVar20 = ((uint *)((longlong)FVar33 + 4))[lVar25];
      }
      uVar37 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_4c4 = (int)lVar25;
      uVar20 = (uVar32 - 1) + local_4c4;
      if ((int)uVar26 < (int)uVar20) {
        uVar20 = uVar26;
      }
      local_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_5c0._4_4_,uVar20);
    }
LAB_14568e0f3:
    while( true ) {
      FVar33 = local_470;
      if (*(int *)((longlong)local_470 + 8) - *(int *)((longlong)local_470 + 0x34) !=
          (int)uStack_448) {
        local_5fc = 0;
        `TSparseArray<TSparseSetElement<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5fc);
      }
      iVar19 = local_128.ArrayNum;
      param_2 = local_578;
      if (((TStack_468.CurrentBitIndex == uVar20) && ((FName)TStack_468.Array == local_5d8)) &&
         (FVar33 == local_5b8)) break;
      uVar37 = (ulonglong)local_128.ArrayNum;
      pFVar3 = (FName *)((longlong)TStack_468.CurrentBitIndex * 0x80 + 0x18 + *(longlong *)FVar33);
      local_570 = *pFVar3;
      FStack_568 = pFVar3[1];
      uVar20 = FStack_568.Number;
      FVar28 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData !=
          (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
        FVar28 = local_128.AllocatorInstance.SecondaryData;
      }
      FVar15.Value = FStack_568.ComparisonIndex.Value;
      FVar30 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData !=
          (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
        FVar30 = local_128.AllocatorInstance.SecondaryData;
      }
      uVar32 = local_570.Number;
      lVar25 = uVar37 * 0x18;
      while( true ) {
        if ((uint)uVar37 != iVar19) {
          local_5fb = 0;
          `TCheckedPointerIterator<FSkinningTransformProvider::FProviderRange,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_5fb);
          uVar37 = (ulonglong)(uint)local_128.ArrayNum;
        }
        iVar16 = local_540.ArrayNum;
        uVar36 = uVar40;
        if (FVar30 == (ForElementType<FSkinningTransformProvider::FProviderRange>)
                      ((longlong)FVar28 + lVar25)) goto LAB_14568e2fd;
        if (((uVar20 == *(uint *)((longlong)FVar30 + 0xc) &&
             FVar15.Value == *(uint *)((longlong)FVar30 + 8)) &&
            uVar32 == *(uint *)((longlong)FVar30 + 4)) &&
            local_570.ComparisonIndex.Value == *(uint *)FVar30) break;
        FVar30 = (ForElementType<FSkinningTransformProvider::FProviderRange>)
                 ((longlong)FVar30 + 0x18);
      }
      uVar20 = 0;
      if ((int)uVar44 < local_540.ArrayNum) {
        uVar20 = ~uVar44 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar20 = local_540.DataPtr[(int)uVar44].HierarchyOffset;
      uVar32 = 0;
      if ((int)uVar44 < iVar16) {
        uVar32 = ~uVar44 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar34 = *(int *)((longlong)FVar30 + 0x14) + *(int *)((longlong)FVar30 + 0x10);
      uVar32 = local_540.DataPtr[(int)uVar44].TransformOffset;
      uVar26 = 0;
      if ((int)uVar34 < uVar12._4_4_) {
        uVar26 = ~uVar34 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_5a8[(int)uVar34].Index = uVar44;
      local_5a8[(int)uVar34].TransformOffset = uVar32 * 0x30;
      local_5a8[(int)uVar34].HierarchyOffset = uVar20 << 2;
      *(int *)((longlong)FVar30 + 0x10) = *(int *)((longlong)FVar30 + 0x10) + 1;
      uVar36 = (longlong)uVar12._4_4_;
LAB_14568e2fd:
      pFVar23 = local_5a8;
      uVar44 = uVar44 + 1;
      TStack_468.UnvisitedBitMask = TStack_468.UnvisitedBitMask & ~TStack_468._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_468);
      uVar20 = (uint)local_5c0;
    }
    if (local_5f4 == uVar44) {
      iStack_408 = (int)uVar36;
      local_398.Indirections._12_4_ = uStack_404;
      local_398.Indirections.ArrayNum = iStack_408;
      local_398.TransformBuffer = (local_500->BoneTransforms->Desc).Buffer;
      local_400 = local_5a0;
      local_398.SkeletonBatches._12_4_ = uStack_3f4;
      local_398.SkeletonBatches.ArrayNum = uVar24;
      local_398.Primitives._12_4_ = local_25c;
      local_398.Proxies._12_4_ = local_26c;
      local_398.HierarchyBufferSRV = local_500->BoneHierarchy;
      local_398.Primitives.DataPtr = (FPrimitiveSceneInfo **)0x0;
      local_3e8 = (ForElementType<FSkinningTransformProvider::FProviderRange>)&local_128;
      if (local_128.AllocatorInstance.SecondaryData !=
          (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
        local_3e8 = local_128.AllocatorInstance.SecondaryData;
      }
      local_398.Primitives.ArrayNum = 0;
      local_398.Proxies.DataPtr = (FSkinningSceneExtensionProxy **)0x0;
      local_398.Proxies.ArrayNum = 0;
      local_398.SkeletonBatches.DataPtr = local_5a0;
      local_398.GraphBuilder = local_578;
      local_410 = pFVar23;
      uStack_3f8 = uVar24;
      local_398.Indirections.DataPtr = pFVar23;
      local_398.DeltaTime = fVar4;
      if ((local_128.ArrayNum < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStack_3e0 = iVar19;
      local_338._12_4_ = uStack_3dc;
      local_338.ArrayNum = iVar19;
      local_338.DataPtr = (FProviderRange *)local_3e8;
      FSkinningTransformProvider::Broadcast(local_4f8,&local_338,&local_398);
      this = local_590;
      if (local_128.AllocatorInstance.SecondaryData !=
          (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
        FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
        this = local_590;
      }
      goto LAB_14568e4ad;
    }
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6342129600411206068>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                        ,0x1b4,"TotalBatches == TotalBatchIndices");
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_128.AllocatorInstance.SecondaryData !=
        (ForElementType<FSkinningTransformProvider::FProviderRange>)0x0) {
      FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
    }
  }
  if (local_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data);
  }
  if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.AllocatorInstance.Data);
  }
LAB_14568f035:
  if (local_4a8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_4b8);
  }
  return;
}

// ProcessBufferDefragmentation @ 14568ff80

bool __thiscall FSkinningSceneExtension::ProcessBufferDefragmentation(FSkinningSceneExtension *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  FSpanAllocator::Consolidate(&this->ObjectSpaceAllocator);
  FSpanAllocator::Consolidate(&this->HierarchyAllocator);
  FSpanAllocator::Consolidate(&this->TransformAllocator);
  bVar14 = GSkinningBuffersDefrag;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    MinTransformBufferCount =
         (int)((ulonglong)(longlong)GSkinningBuffersTransformDataMinSizeBytes / 0x30);
    _Init_thread_footer(&::_TSS0);
  }
  lVar7 = 0x1c8;
  if ((this->TransformAllocator).bGrowOnly == false) {
    lVar7 = 0x1c4;
  }
  iVar8 = *(int *)((this->ObjectSpaceAllocator).FreeSpans.AllocatorInstance.InlineData +
                  lVar7 + -0x20);
  iVar10 = 1;
  if (iVar8 != 0) {
    iVar10 = iVar8;
  }
  uVar1 = (ulonglong)(iVar10 - 1) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  iVar8 = 1 << ((byte)lVar7 & 0x1f);
  local_res10 = (undefined4)lVar7;
  if (bVar14 != false) {
    bVar14 = GSkinningBuffersForceDefrag != 0;
    if (GSkinningBuffersForceDefrag == 1) {
      GSkinningBuffersForceDefrag = 0;
    }
    if ((bVar14) ||
       ((MinTransformBufferCount < iVar8 &&
        ((this->TransformAllocator).CurrentSize <=
         (int)(longlong)((float)iVar8 * GSkinningBuffersDefragLowWatermark))))) {
      FSpanAllocator::Reset(&this->ObjectSpaceAllocator);
      FSpanAllocator::Reset(&this->HierarchyAllocator);
      FSpanAllocator::Reset(&this->TransformAllocator);
      TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
               *)&this->BatchHeaderData);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->HeaderDataIndices);
      uStack_84 = 1;
      iVar8 = *(int *)&(this->HeaderData).field_0x28;
      puVar2 = &(this->HeaderData).field_0x10;
      local_88 = 0;
      iStack_74 = 0;
      iStack_70 = 0;
      if (iVar8 != 0) {
        puVar12 = *(uint **)&(this->HeaderData).field_0x20;
        if (puVar12 == (uint *)0x0) {
          puVar12 = (uint *)puVar2;
        }
        uVar9 = *puVar12;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar9 == 0) {
          iStack_70 = iStack_70 + 0x20;
          lVar7 = (longlong)local_88;
          local_88 = local_88 + 1;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14569015b;
          uVar9 = puVar12[lVar7 + 1];
        }
        uStack_84 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uStack_84 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_res18 = (int)lVar7;
        iStack_74 = local_res18 + -1 + iStack_70;
        if (iVar8 < iStack_74) {
LAB_14569015b:
          iStack_74 = iVar8;
        }
      }
      uVar9 = *(uint *)&(this->HeaderData).field_0x28;
      local_40 = *(int *)&(this->HeaderData).field_0x8 - *(int *)&(this->HeaderData).field_0x34;
      local_60._padding_ = CONCAT44(uStack_84,local_88);
      iVar10 = (int)uVar9 >> 5;
      local_60.CurrentBitIndex = iStack_74;
      local_60.UnvisitedBitMask = 0xffffffff;
      local_60._28_4_ = uStack_6c;
      local_60.BaseBitIndex = iStack_70;
      uVar13 = uVar9 & 0xffffffe0;
      local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar9 < 0) || (iVar8 < (int)uVar9)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      uVar3 = *(uint *)&(this->HeaderData).field_0x28;
      if (uVar9 != uVar3) {
        puVar11 = *(undefined1 **)&(this->HeaderData).field_0x20;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
        while (uVar9 == 0) {
          lVar7 = (longlong)iVar10;
          uVar13 = uVar13 + 0x20;
          iVar10 = iVar10 + 1;
          uVar9 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_145690240;
          uVar9 = *(uint *)(puVar11 + lVar7 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar9 = (int)lVar7 + -1 + uVar13;
        if ((int)uVar3 < (int)uVar9) {
          uVar9 = uVar3;
        }
      }
LAB_145690240:
      while( true ) {
        if (*(int *)&(this->HeaderData).field_0x8 - *(int *)&(this->HeaderData).field_0x34 !=
            local_40) {
          `TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>::
          TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar7 = (longlong)local_60.CurrentBitIndex;
        if ((local_60.CurrentBitIndex == uVar9) &&
           (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
        lVar4 = *(longlong *)&this->HeaderData;
        if (*(int *)(lVar4 + 0x38 + lVar7 * 0x50) != -1) {
          *(undefined4 *)(lVar4 + 0x38 + lVar7 * 0x50) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0x3c + lVar7 * 0x50) = 0;
        }
        if (*(int *)(lVar4 + 0x30 + lVar7 * 0x50) != -1) {
          *(undefined4 *)(lVar4 + 0x30 + lVar7 * 0x50) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0x34 + lVar7 * 0x50) = 0;
        }
        if (*(int *)(lVar4 + 0x28 + lVar7 * 0x50) != -1) {
          *(undefined4 *)(lVar4 + 0x28 + lVar7 * 0x50) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0x2c + lVar7 * 0x50) = 0;
        }
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
      }
      return true;
    }
  }
  return false;
}

// ProvideAnimRuntimeTransforms @ 145690350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl FSkinningSceneExtension::ProvideAnimRuntimeTransforms(FProviderContext *param_1)

{
  int *piVar1;
  char cVar2;
  FRDGBuilder *pFVar3;
  FSkinningSceneExtensionProxy *pFVar4;
  code *pcVar5;
  FProviderIndirection *pFVar6;
  FSkinningSceneExtensionProxy **ppFVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  FRDGScope *this;
  FRDGScatterUploadBuilder *this_00;
  FRDGScatterUploader *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  FProviderIndirection *pFVar14;
  FPass *pFVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStackY_128 [32];
  FRDGAsyncScatterUploadBuffer local_f8;
  undefined1 local_e8 [32];
  FRDGScope *local_c8;
  char local_c0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_> local_b8;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1478,"FSkinningSceneExtension::ProvideAnimRuntimeTransforms"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x5c6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1478);
  }
  uVar16 = 0;
  local_c0 = '\0';
  cVar2 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_98 = 0;
      uStack_94 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_9c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_ProvideAnimRunt;
      ::Desc._padding_ = (longlong)u_ProvideAnimRunt;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x5c7;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l7::Desc::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar3 = param_1->GraphBuilder;
    local_b8._Myfirst._Val = &::Desc;
    local_e8._24_8_ = pFVar3;
    this = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&pFVar3->_padding_,(FRDGScope **)pFVar3);
    ((FState *)&pFVar3->_padding_)->Current = this;
    local_c8 = this;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
              (&(this->Impl).Impl,(FRDGScopeState *)pFVar3,&local_b8);
    if (*(bool *)((longlong)&pFVar3->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this,(FRHIComputeCommandList *)pFVar3->_padding_,false);
      FRDGScope::BeginGPU(this,(FRHIComputeCommandList *)pFVar3->_padding_);
    }
    local_c0 = '\x01';
  }
  pFVar14 = (param_1->Indirections).DataPtr;
  pFVar6 = pFVar14 + (param_1->Indirections).ArrayNum;
  if (pFVar14 != pFVar6) {
    do {
      local_e8._16_4_ = pFVar14->HierarchyOffset;
      local_e8._8_4_ = pFVar14->Index;
      local_e8._12_4_ = pFVar14->TransformOffset;
      lVar13 = (longlong)(int)local_e8._8_4_;
      if (((int)local_e8._8_4_ < 0 || (param_1->Proxies).ArrayNum <= (int)local_e8._8_4_) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = pFVar14 + 1;
      pFVar4 = (param_1->Proxies).DataPtr[lVar13];
      uVar16 = uVar16 + (uint)pFVar4->UniqueAnimationCount * (uint)pFVar4->MaxBoneTransformCount * 2
      ;
    } while (pFVar14 != pFVar6);
    if (uVar16 != 0) {
      pFVar3 = param_1->GraphBuilder;
      local_f8.ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
      local_f8.UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
      this_00 = FRDGScatterUploadBuilder::Create(pFVar3);
      pFVar6 = (param_1->Indirections).DataPtr;
      lVar13 = *(longlong *)&(param_1->Indirections).ArrayNum;
      ppFVar7 = (param_1->Proxies).DataPtr;
      lVar8 = *(longlong *)&(param_1->Proxies).ArrayNum;
      local_88 = (code *)0x0;
      local_60 = FMemory::Malloc(0x28,8);
      local_60[1] = (longlong)pFVar6;
      local_60[2] = lVar13;
      *local_60 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::`2'::<lambda_2>,0,1>
                   ::_vftable_;
      local_60[3] = (longlong)ppFVar7;
      local_60[4] = lVar8;
      if (local_60 != (longlong *)&DAT_fffffffffffffff8) {
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l2::<lambda_2>,void,FRDGScatterUploader_&>
                   ::Call;
      }
      pFVar11 = FRDGAsyncScatterUploadBuffer::Begin
                          (&local_f8,pFVar3,(FRDGViewableResource *)param_1->TransformBuffer,uVar16,
                           0x30,L"Skinning.AnimTransforms");
      piVar1 = &(this_00->Passes).ArrayMax;
      iVar10 = (this_00->Passes).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGScatterUploadBuilder::FPass>_>
                           (0x1040,(ForElementType<FRDGScatterUploadBuilder::FPass> *)this_00,piVar1
                           );
      }
      (this_00->Passes).ArrayNum = iVar10 + 1;
      pFVar15 = (this_00->Passes).AllocatorInstance.Data + iVar10;
      pFVar15->UploadBuffer = &local_f8;
      pFVar15->Uploader = pFVar11;
      *(code **)&pFVar15->Function = local_88;
      *(undefined8 *)&(pFVar15->Function).field_0x28 = 0;
      if (*(longlong *)&pFVar15->Function != 0) {
        plVar12 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar12 = local_60;
        }
        (**(code **)*plVar12)();
      }
      this_00->MaxBytes = this_00->MaxBytes + uVar16 * 0x30;
      if (local_88 != (code *)0x0) {
        plVar12 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar12 = local_60;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      FRDGScatterUploadBuilder::Execute(this_00,(FRDGBuilder *)local_e8);
      if ((undefined8 *)local_e8._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_e8._0_8_ + 0x30);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (*(code *)**(undefined8 **)local_e8._0_8_)(local_e8._0_8_,1);
        }
      }
      if (local_f8.UploadBuffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar12 = &(local_f8.UploadBuffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar12 != (longlong *)0x0)) {
          (**(code **)(local_f8.UploadBuffer.Reference)->_padding_)
                    (local_f8.UploadBuffer.Reference,1);
        }
      }
      if (local_f8.ScatterBuffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar12 = &(local_f8.ScatterBuffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar12 != (longlong *)0x0)) {
          (**(code **)(local_f8.ScatterBuffer.Reference)->_padding_)
                    (local_f8.ScatterBuffer.Reference,1);
        }
      }
    }
  }
  if (local_c0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
              ((TRDGEventScopeGuard<FRDGScope_RHI> *)(local_e8 + 0x18));
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProvideRefPoseTransforms @ 145690ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl FSkinningSceneExtension::ProvideRefPoseTransforms(FProviderContext *param_1)

{
  FProviderIndirection *pFVar1;
  int *piVar2;
  undefined8 uVar3;
  FSkinningSceneExtensionProxy *pFVar4;
  FRDGBuilder *this;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  void *pvVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  FRDGBufferUAV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar13;
  FShaderType *pFVar14;
  FName this_01;
  FRDGEventName *pFVar15;
  FShaderParametersMetadata *pFVar16;
  FProviderIndirection *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 local_res18;
  undefined8 *local_118;
  undefined8 local_110;
  uint local_108;
  FRDGBufferUAVDesc local_100;
  TIntVector3<int>_u_0 local_e8;
  ulonglong local_d8;
  FRDGBuilder *local_d0;
  FRDGBufferSRVDesc local_c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  undefined1 local_98 [8];
  FString local_90;
  TShaderRefBase<FRefPoseTransformProviderCS,FShaderMapPointerTable> local_78;
  FRDGEventName local_68;
  
  pFVar17 = (param_1->Indirections).DataPtr;
  uVar19 = 0;
  pFVar1 = pFVar17 + (param_1->Indirections).ArrayNum;
  if (pFVar17 != pFVar1) {
    do {
      local_108 = pFVar17->HierarchyOffset;
      local_110._0_4_ = pFVar17->Index;
      local_110._4_4_ = pFVar17->TransformOffset;
      lVar20 = (longlong)(int)(undefined4)local_110;
      if (((int)(undefined4)local_110 < 0 ||
           (param_1->Proxies).ArrayNum <= (int)(undefined4)local_110) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = pFVar17 + 1;
      pFVar4 = (param_1->Proxies).DataPtr[lVar20];
      uVar25 = (int)uVar19 +
               ((uint)pFVar4->UniqueAnimationCount * (uint)pFVar4->MaxBoneTransformCount + 0x3f >> 6
               );
      uVar19 = (ulonglong)uVar25;
    } while (pFVar17 != pFVar1);
    if (uVar25 != 0) {
      this = param_1->GraphBuilder;
      local_d8 = uVar19;
      local_d0 = this;
      pvVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,uVar19 * 0xc,4);
      pFVar17 = (param_1->Indirections).DataPtr;
      pFVar1 = pFVar17 + (param_1->Indirections).ArrayNum;
      uVar18 = 0;
      for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 1) {
        local_108 = pFVar17->HierarchyOffset;
        uVar3._0_4_ = pFVar17->Index;
        uVar3._4_4_ = pFVar17->TransformOffset;
        local_res10 = uVar25;
        local_110 = uVar3;
        if (((int)(undefined4)uVar3 < 0 || (param_1->Primitives).ArrayNum <= (int)(undefined4)uVar3)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
              bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((int)(undefined4)uVar3 < 0 || (param_1->Proxies).ArrayNum <= (int)(undefined4)uVar3) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Proxies).DataPtr[(int)(undefined4)uVar3];
        uVar23 = (uint)pFVar4->UniqueAnimationCount * (uint)pFVar4->MaxBoneTransformCount;
        uVar25 = 0;
        uVar22 = uVar23 >> 6;
        uVar19 = uVar18;
        iVar21 = local_110._4_4_;
        if (uVar23 >> 6 != 0) {
          do {
            uVar18 = (ulonglong)((int)uVar19 + 1);
            *(uint *)((longlong)pvVar8 + uVar19 * 0xc) = uVar25;
            uVar25 = uVar25 + 1;
            *(int *)((longlong)pvVar8 + uVar19 * 0xc + 8) = iVar21;
            iVar21 = iVar21 + 0x1800;
            *(undefined4 *)((longlong)pvVar8 + uVar19 * 0xc + 4) = 0x40;
            uVar19 = uVar18;
          } while (uVar25 < uVar22);
        }
        iVar24 = uVar23 + uVar22 * -0x40;
        uVar19 = uVar18;
        if (iVar24 != 0) {
          uVar19 = (ulonglong)((int)uVar18 + 1);
          *(uint *)((longlong)pvVar8 + uVar18 * 0xc) = uVar22;
          *(int *)((longlong)pvVar8 + uVar18 * 0xc + 4) = iVar24;
          *(int *)((longlong)pvVar8 + uVar18 * 0xc + 8) = iVar21;
        }
        uVar25 = local_res10;
        this = local_d0;
        uVar18 = uVar19;
        uVar19 = local_d8;
      }
      uVar22 = 1;
      if (1 < uVar25) {
        uVar22 = uVar25;
      }
      uVar23 = 1;
      if (uVar22 != 0) {
        uVar23 = uVar22;
      }
      uVar18 = (ulonglong)(uVar23 - 1) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_res18 = (undefined4)lVar20;
      pFVar9 = CreateStructuredBuffer
                         (this,L"Skinning.RefPoseHeaders",0xc,1 << ((byte)lVar20 & 0x1f),pvVar8,
                          uVar19 * 0xc,NoCopy);
      puVar10 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = &___7__TObject_VFParameters_FRefPoseTransformProviderCS___FRDGAllocator__6B_;
        puVar10[2] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
      }
      local_118 = puVar10;
      if ((((undefined8 **)this->_padding_ <= &local_118) &&
          (&local_118 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar21 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar21 == *piVar2) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&this->_padding_,piVar2);
      }
      *(int *)&this->_padding_ = iVar21 + 1;
      *(undefined8 **)(this->_padding_ + (longlong)iVar21 * 8) = local_118;
      local_100.Buffer = param_1->TransformBuffer;
      local_100._padding_._2_1_ = 0;
      bVar7 = 0;
      if ((((local_100.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar7 = 0x1c;
      }
      local_100._padding_._0_2_ = (ushort)bVar7;
      pFVar11 = FRDGBuilder::CreateUAV(this,&local_100,None);
      puVar10[4] = pFVar11;
      local_c8._padding_._0_4_ = 0xffffffff;
      local_c8._padding_._0_1_ = 0;
      local_c8._padding_._4_4_ = 0;
      local_c8._padding_ = 0;
      if (((pFVar9->Desc).Usage & DrawIndirect) != None) {
        local_c8._padding_._0_1_ = 0x1c;
      }
      local_c8.Buffer = pFVar9;
      pFVar12 = FRDGBuilder::CreateSRV(this,&local_c8);
      puVar10[5] = pFVar12;
      this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      pFVar13 = FRefPoseTransformProviderCS::GetStaticType();
      if (*(int *)&pFVar13->field_0x50 != 1) {
        local_res8[0] = 0;
        `FGlobalShaderMap::GetShader<FRefPoseTransformProviderCS>'::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      pFVar14 = (FShaderType *)FRefPoseTransformProviderCS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_a8,pFVar14,0);
      if (local_a8.ShaderContent == (FShader *)0x0) {
        this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_98);
        ::FName::ToString((FName *)this_01,&local_90);
        FRefPoseTransformProviderCS::GetStaticType();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FRefPoseTransformProviderCS::GetStaticType();
      local_78.ShaderContent = (FRefPoseTransformProviderCS *)local_a8.ShaderContent;
      local_78.ShaderMap = local_a8.ShaderMap;
      pFVar15 = FRDGEventName::FRDGEventName(&local_68,1,L"RefPoseProvider");
      pFVar16 = FRefPoseTransformProviderCS::FParameters::FTypeInfo::GetStructMetadata();
      local_e8._s_0.Y = 1;
      local_e8._s_0.Z = 1;
      local_e8._s_0.X = uVar25;
      FComputeShaderUtils::AddPass<FRefPoseTransformProviderCS>
                (this,pFVar15,Compute,&local_78,pFVar16,(FParameters *)(puVar10 + 2),
                 (TIntVector3<int> *)&local_e8._s_0);
      if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetEnabled @ 14569f9f0

void __thiscall FSkinningSceneExtension::SetEnabled(FSkinningSceneExtension *this,bool param_1)

{
  int *piVar1;
  TUniquePtr<FSkinningSceneExtension::FBuffers,TDefaultDelete<FSkinningSceneExtension::FBuffers>_>
  *this_00;
  int iVar2;
  FBuffers *pFVar3;
  undefined8 *puVar4;
  FBuffers *pFVar5;
  TDefaultDelete<FSkinningSceneExtension::FBuffers> local_18 [16];
  
  this_00 = &this->Buffers;
  pFVar5 = this_00->Ptr;
  if (param_1 != (pFVar5 != (FBuffers *)0x0)) {
    if (param_1) {
      pFVar5 = ::operator_new(0x80);
      if (pFVar5 == (FBuffers *)0x0) {
        pFVar5 = (FBuffers *)0x0;
      }
      else {
        pFVar5 = FBuffers::FBuffers(pFVar5);
      }
      if ((TDefaultDelete<FSkinningSceneExtension::FBuffers> *)this_00 != local_18) {
        pFVar3 = this_00->Ptr;
        this_00->Ptr = pFVar5;
        TDefaultDelete<FSkinningSceneExtension::FBuffers>::operator()
                  ((TDefaultDelete<FSkinningSceneExtension::FBuffers> *)this_00,pFVar3);
        return;
      }
      if (pFVar5 != (FBuffers *)0x0) {
        puVar4 = *(undefined8 **)&(pFVar5->TransformDataBuffer).field_0x18;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        puVar4 = *(undefined8 **)&(pFVar5->BoneObjectSpaceBuffer).field_0x18;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        puVar4 = *(undefined8 **)&(pFVar5->BoneHierarchyBuffer).field_0x18;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        puVar4 = *(undefined8 **)&(pFVar5->HeaderDataBuffer).field_0x18;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        ::operator_delete(pFVar5,0x80);
        return;
      }
    }
    else {
      this_00->Ptr = (FBuffers *)0x0;
      TDefaultDelete<FSkinningSceneExtension::FBuffers>::operator()
                ((TDefaultDelete<FSkinningSceneExtension::FBuffers> *)this_00,pFVar5);
      FSpanAllocator::Reset(&this->HierarchyAllocator);
      FSpanAllocator::Reset(&this->TransformAllocator);
      *(undefined4 *)&(this->HeaderData).field_0x8 = 0;
      if (*(int *)&(this->HeaderData).field_0xc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,(ForAnyElementType *)&this->HeaderData,0,
                   (int *)&(this->HeaderData).field_0xc);
      }
      *(undefined4 *)&(this->HeaderData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->HeaderData).field_0x34 = 0;
      *(undefined4 *)&(this->HeaderData).field_0x28 = 0;
      TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
               *)&this->BatchHeaderData);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->HeaderDataIndices);
    }
  }
  return;
}

// ShouldCreateExtension @ 1456a1170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FSkinningSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  bVar1 = NaniteSkinnedMeshesSupported();
  if (bVar1) {
    if (*(int *)&param_1->field_0x8 == 5) {
      EVar2 = SP_NumPlatforms;
    }
    else {
      EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
    }
    bVar1 = DoesRuntimeSupportNanite(EVar2,true,true);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Tick @ 1456a4290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkinningSceneExtension::Tick(FSkinningSceneExtension *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FTickState *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  UWorld *this_00;
  APlayerController *pAVar12;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  code *local_140;
  code *pcStack_138;
  code *local_130;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  undefined1 local_100 [24];
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId609,"FSkinningSceneExtension::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x261);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId609);
  }
  local_140 = (code *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pcStack_138 = (code *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_130 = (code *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldRef).WeakPtr);
  if (this_00 != (UWorld *)0x0) {
    pAVar12 = UWorld::GetFirstPlayerController(this_00);
    if (pAVar12 == (APlayerController *)0x0) {
      iVar2 = (this_00->ViewLocationsRenderedLastFrame).ArrayNum;
      if (0 < iVar2) {
        pFVar15 = (this_00->ViewLocationsRenderedLastFrame).AllocatorInstance.Data;
        pFVar1 = pFVar15 + (longlong)iVar2 * 0x18;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        while( true ) {
          if ((this_00->ViewLocationsRenderedLastFrame).ArrayNum != iVar2) {
            local_148[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_148);
          }
          if (pFVar15 == pFVar1) break;
          uVar5 = (double)uVar5 + *(double *)pFVar15;
          uVar6 = (double)uVar6 + *(double *)(pFVar15 + 8);
          uVar7 = (double)uVar7 + *(double *)(pFVar15 + 0x10);
          pFVar15 = pFVar15 + 0x18;
        }
        dVar18 = __real_3ff0000000000000 /
                 (double)(this_00->ViewLocationsRenderedLastFrame).ArrayNum;
        local_140 = (code *)(dVar18 * (double)uVar5);
        pcStack_138 = (code *)(dVar18 * (double)uVar6);
        local_130 = (code *)(dVar18 * (double)uVar7);
      }
    }
    else {
      (**(code **)(pAVar12->_padding_ + 0x840))(pAVar12,&local_140,local_100);
    }
  }
  pcVar9 = local_130;
  pcVar8 = pcStack_138;
  pcVar4 = local_140;
  pFVar3 = (this->TickState).Reference;
  if (pFVar3 != (FTickState *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  local_118 = local_140;
  pcStack_110 = pcStack_138;
  local_e8[0] = (code *)0x0;
  local_108 = local_130;
  local_c0 = FMemory::Malloc(0x30,8);
  local_c0[1] = (code *)pFVar3;
  *(float *)(local_c0 + 2) = param_1;
  *local_c0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkinningSceneExtension::Tick'::`2'::<lambda_1>,1,1>::
                       _vftable_;
  local_c0[3] = pcVar4;
  local_c0[4] = pcVar8;
  local_c0[5] = pcVar9;
  if (local_c0 != (code **)&DAT_fffffffffffffff8) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkinningSceneExtension::Tick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkinningSceneExtension::Tick_::__l2::TSTR_FTickSkinningSceneExtension635>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_c0 = (code **)0x0;
    local_b8._16_8_ = local_d8[0];
    local_b8._24_8_ = local_d8[1];
    local_b8._32_8_ = local_d8[2];
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FSkinningSceneExtension::Tick'::__l2::TSTR_FTickSkinningSceneExtension635>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar13);
    uVar16 = (ulonglong)local_88;
    if ((2 < uVar16) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(local_b8 + 0x10);
        if (local_90 != (code **)0x0) {
          ppcVar14 = local_90;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    ppcVar14 = local_e8 + 2;
    if (local_c0 != (code **)0x0) {
      ppcVar14 = local_c0;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// WaitForHeaderDataUpdateTasks @ 1456a6440

void __thiscall FSkinningSceneExtension::WaitForHeaderDataUpdateTasks(FSkinningSceneExtension *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *pTVar5;
  FTaskHandle local_28;
  FTaskBase *local_20;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_18;
  
  local_28.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->TaskHandles).Elements[0].Pimpl.Reference;
  if (local_28.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_28.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_28.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_20 = (this->TaskHandles).Elements[1].Pimpl.Reference;
  if (local_20 != (FTaskBase *)0x0) {
    LOCK();
    local_20->RefCount = (atomic<unsigned_int>)((int)local_20->RefCount + 1);
    UNLOCK();
  }
  local_18.DataPtr = &local_28;
  lVar4 = 2;
  local_18.ArrayNum = 2;
  UE::Tasks::Wait<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
            (&local_18,(FTimespan)0x7fffffffffffffff);
  pTVar5 = &local_18;
  do {
    puVar3 = *(undefined8 **)&pTVar5[-1].ArrayNum;
    pTVar5 = (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)&pTVar5[-1].ArrayNum;
    lVar4 = lVar4 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  } while (lVar4 != 0);
  return;
}

