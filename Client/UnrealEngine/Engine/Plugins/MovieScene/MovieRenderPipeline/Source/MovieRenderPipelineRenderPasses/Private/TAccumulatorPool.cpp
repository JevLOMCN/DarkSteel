// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 3

// TAccumulatorPool<FImageOverlappedAccumulator> @ 14ddc48a0

TAccumulatorPool<FImageOverlappedAccumulator> * __thiscall
TAccumulatorPool<FImageOverlappedAccumulator>::TAccumulatorPool<FImageOverlappedAccumulator>
          (TAccumulatorPool<FImageOverlappedAccumulator> *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TAccumulatorPool<FImageOverlappedAccumulator> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  TReferenceControllerBase<1> *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TReferenceControllerBase<1> **local_b8;
  TReferenceControllerBase<1> *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_90;
  TReferenceControllerBase<1> *local_88;
  longlong local_80;
  TReferenceControllerBase<1> *pTStack_78;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FAccumulatorPool__6B_;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x28,4000);
  *(undefined ***)this = &___7__TAccumulatorPool_UFImageOverlappedAccumulator____6B_;
  if (0 < param_1) {
    uVar13 = (ulonglong)(uint)param_1;
    do {
      pTVar8 = ::operator_new(0xe8);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFImageOverlappedAccumulator___00_SharedPointerInternals__6B_
        ;
        pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[2]._padding_ = 0;
        pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar8[3]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar8[3]._padding_ + 4) = 0x3f800000;
        _eh_vector_constructor_iterator_
                  (&pTVar8[3].SharedReferenceCount,0x18,4,
                   TArray<float,TSizedDefaultAllocator<64>_>::
                   TArray<float,TSizedDefaultAllocator<64>_>,
                   TArray<float,TSizedDefaultAllocator<64>_>::
                   ~TArray<float,TSizedDefaultAllocator<64>_>);
        pTVar8[9].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[9].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[10]._padding_ = 0;
        pTVar8[10].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[10].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[0xb]._padding_ = 0;
        pTVar8[0xb].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[0xb].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[0xc]._padding_ = 0;
        pTVar8[0xc].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[0xc].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[0xd]._padding_ = 0;
        pTVar8[0xd].SharedReferenceCount = (atomic<int>)0x0;
        pTVar8[0xd].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8[0xe]._padding_ = 0;
        pTVar12 = pTVar8;
      }
      local_a8 = pTVar12 + 1;
      pTStack_a0 = pTVar12;
      if (local_a8 == (TReferenceControllerBase<1> *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TAccumulatorPool<FImageOverlappedAccumulator> *)(*pcVar4)();
          return pTVar9;
        }
      }
      else {
        lVar3._0_4_ = pTVar12[1].SharedReferenceCount;
        lVar3._4_4_ = pTVar12[1].WeakReferenceCount;
        if (((lVar3 == 0) || (pTVar12[2]._padding_ == 0)) ||
           (*(int *)(pTVar12[2]._padding_ + 8) < 1)) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(TReferenceControllerBase<1> **)&pTVar12[1].SharedReferenceCount = local_a8;
          local_90 = local_a8;
          local_88 = pTVar12;
          if (pTVar12 != (TReferenceControllerBase<1> *)pTVar12[2]._padding_) {
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar2 = (longlong *)pTVar12[2]._padding_;
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
            pTVar12[2]._padding_ = (longlong)pTVar12;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
        }
      }
      pTVar5 = pTStack_a0;
      pTVar8 = local_a8;
      local_68 = local_a8;
      pTStack_60 = pTStack_a0;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      pTVar10 = ::operator_new(0x58);
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      local_98 = pTVar10;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFAccumulatorInstance_FAccumulatorPool___00_SharedPointerInternals__6B_
        ;
        pTVar11 = pTVar10 + 1;
        local_d8 = pTVar8;
        pTStack_d0 = pTVar5;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8 = &local_d8;
        pTVar11->_padding_ = 0;
        pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar10[3]._padding_ = 0;
        pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar10[4]._padding_ = 0;
        pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar10[5]._padding_ = 0;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_80 = pTVar11->_padding_;
        pTStack_78 = *(TReferenceControllerBase<1> **)&pTVar10[1].SharedReferenceCount;
        pTVar11->_padding_ = (longlong)pTVar8;
        *(TReferenceControllerBase<1> **)&pTVar10[1].SharedReferenceCount = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_78);
        *(undefined4 *)&pTVar10[2]._padding_ = 0xffffffff;
        LOCK();
        pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d0);
        pTVar11 = pTVar10;
      }
      local_c8 = pTVar11 + 1;
      pTStack_c0 = pTVar11;
      if ((local_c8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TAccumulatorPool<FImageOverlappedAccumulator> *)(*pcVar4)();
        return pTVar9;
      }
      local_e8 = local_c8;
      pTStack_e0 = pTStack_c0;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (((*(TReferenceControllerBase<1> ***)&this->field_0x18 <= &local_e8) &&
          (&local_e8 <
           *(TReferenceControllerBase<1> ***)&this->field_0x18 +
           (longlong)*(int *)&this->field_0x24 * 2)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TAccumulatorPool<FImageOverlappedAccumulator> *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = *(int *)&this->field_0x20;
      if (iVar7 == *(int *)&this->field_0x24) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x18,(int *)&this->field_0x24);
      }
      *(int *)&this->field_0x20 = iVar7 + 1;
      lVar3 = *(longlong *)&this->field_0x18;
      *(TReferenceControllerBase<1> **)(lVar3 + (longlong)iVar7 * 0x10) = local_e8;
      *(TReferenceControllerBase<1> **)(lVar3 + 8 + (longlong)iVar7 * 0x10) = pTStack_e0;
      pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
      local_e8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return this;
}

// CreateNewAccumulatorInstance @ 14ddda0e0

TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> * __thiscall
TAccumulatorPool<FImageOverlappedAccumulator>::CreateNewAccumulatorInstance
          (TAccumulatorPool<FImageOverlappedAccumulator> *this,
          TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<FImageOverlappedAccumulator,1> *pTVar3;
  TSharedRef<FAccumulatorPool::FAccumulatorInstance,1> *pTVar4;
  TSharedPtr<MoviePipeline::IMoviePipelineOverlappedAccumulator,1> local_40;
  TSharedRef<FImageOverlappedAccumulator,1> local_30;
  TSharedRef<FAccumulatorPool::FAccumulatorInstance,1> local_20;
  
  pTVar3 = MakeShared<FImageOverlappedAccumulator,1>(&local_30);
  local_40.Object = (IMoviePipelineOverlappedAccumulator *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  pTVar4 = MakeShared<FAccumulatorPool::FAccumulatorInstance,1,TSharedPtr<MoviePipeline::IMoviePipelineOverlappedAccumulator,1>_&>
                     (&local_20,&local_40);
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPoolName @ 14dde33f0

FName __thiscall
TAccumulatorPool<FImageOverlappedAccumulator>::GetPoolName
          (TAccumulatorPool<FImageOverlappedAccumulator> *this)

{
  FName in_RDX;
  
  FImageOverlappedAccumulator::GetName();
  return in_RDX;
}

