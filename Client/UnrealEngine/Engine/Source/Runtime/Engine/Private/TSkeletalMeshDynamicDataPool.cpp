// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Acquire @ 14862c840

FDynamicSkelMeshObjectDataGPUSkin * __thiscall
TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::Acquire
          (TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin> *this,int param_1)

{
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *this_00;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar1;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar2;
  uint uVar3;
  
  pFVar2 = (FDynamicSkelMeshObjectDataGPUSkin *)0x0;
  if (param_1 < 0x41) {
    uVar3 = 4;
  }
  else if (param_1 < 0x81) {
    uVar3 = 3;
  }
  else if (param_1 < 0x101) {
    uVar3 = 2;
  }
  else {
    uVar3 = (uint)(param_1 < 0x201);
  }
  this_00 = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *)GetBucket(uVar3);
  pFVar1 = FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1>::Pop(this_00);
  if (pFVar1 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    pFVar1 = ::operator_new(0x310);
    if (pFVar1 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
      *(undefined8 *)&pFVar1->field_0x8 = 0;
      *(undefined8 *)&pFVar1->field_0x10 = 0;
      *(undefined ***)pFVar1 = &___7FDynamicSkelMeshObjectDataGPUSkin__6B_;
      (pFVar1->ReferenceToLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->ReferenceToLocal).ArrayNum = 0;
      (pFVar1->ReferenceToLocal).ArrayMax = 0;
      (pFVar1->ReferenceToLocalForRayTracing).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->ReferenceToLocalForRayTracing).ArrayNum = 0;
      (pFVar1->ReferenceToLocalForRayTracing).ArrayMax = 0;
      (pFVar1->PreviousReferenceToLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->PreviousReferenceToLocal).ArrayNum = 0;
      (pFVar1->PreviousReferenceToLocal).ArrayMax = 0;
      (pFVar1->PreviousReferenceToLocalForRayTracing).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->PreviousReferenceToLocalForRayTracing).ArrayNum = 0;
      (pFVar1->PreviousReferenceToLocalForRayTracing).ArrayMax = 0;
      (pFVar1->MeshComponentSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar1->MeshComponentSpaceTransforms).ArrayNum = 0;
      (pFVar1->MeshComponentSpaceTransforms).ArrayMax = 0;
      *(undefined8 *)&pFVar1->ActiveMorphTargets = 0;
      *(undefined8 *)&(pFVar1->ActiveMorphTargets).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ActiveMorphTargets).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ActiveMorphTargets).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ActiveMorphTargets).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ActiveMorphTargets).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ActiveMorphTargets).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ActiveMorphTargets).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ActiveMorphTargets).field_0x48 = 0;
      (pFVar1->MorphTargetWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->MorphTargetWeights).ArrayNum = 0;
      (pFVar1->MorphTargetWeights).ArrayMax = 0;
      (pFVar1->SectionIdsUseByActiveMorphTargets).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->SectionIdsUseByActiveMorphTargets).ArrayNum = 0;
      (pFVar1->SectionIdsUseByActiveMorphTargets).ArrayMax = 0;
      (pFVar1->SectionIdsUseByActiveMorphTargetsForRayTracing).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->SectionIdsUseByActiveMorphTargetsForRayTracing).ArrayNum = 0;
      (pFVar1->SectionIdsUseByActiveMorphTargetsForRayTracing).ArrayMax = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphWeightData).MorphSets = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x48 = 0;
      (pFVar1->ExternalMorphWeightData).NumActiveMorphTargets = 0;
      *(undefined8 *)&pFVar1->ExternalMorphSets = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphSets).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphSets).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ExternalMorphSets).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ExternalMorphSets).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ExternalMorphSets).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ExternalMorphSets).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ExternalMorphSets).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ExternalMorphSets).field_0x48 = 0;
      *(undefined8 *)&pFVar1->ClothingSimData = 0;
      *(undefined8 *)&(pFVar1->ClothingSimData).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ClothingSimData).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ClothingSimData).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ClothingSimData).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ClothingSimData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->ClothingSimData).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->ClothingSimData).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ClothingSimData).field_0x48 = 0;
      FDynamicSkelMeshObjectDataGPUSkin::Reset(pFVar1);
      pFVar2 = pFVar1;
    }
    *(uint *)&pFVar2->field_0x10 = uVar3;
  }
  else {
    FSkeletalMeshDynamicDataPool::AddStatsMemory
              ((FSkeletalMeshDynamicDataPool *)this,uVar3,-*(int *)&pFVar1->field_0x14);
    LOCK();
    this->NumFreeBytes =
         (atomic<__int64>)((longlong)this->NumFreeBytes - (longlong)*(int *)&pFVar1->field_0x14);
    UNLOCK();
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetBucket @ 148645900

TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> * __cdecl
TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int param_1)

{
  uint uVar1;
  TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> *pTVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      puVar3 = (undefined8 *)
               &`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                ::__l2::Buckets.Elements[0].field_0x8;
      lVar4 = 5;
      pTVar2 = `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
               ::__l2::Buckets.Elements;
      do {
        *(ulonglong *)pTVar2 = 0;
        *puVar3 = 0;
        *(ulonglong *)pTVar2 = 0;
        *(undefined8 *)&pTVar2->field_0x8 = 0;
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        puVar3 = puVar3 + 2;
        *(ulonglong *)pTVar2 = *(ulonglong *)pTVar2 & 0xfffffffffc000000 | (ulonglong)uVar1;
        *(ulonglong *)&pTVar2->field_0x8 =
             *(ulonglong *)&pTVar2->field_0x8 & 0xfffffffffc000000 | (ulonglong)uVar1;
        lVar4 = lVar4 + -1;
        pTVar2 = pTVar2 + 1;
      } while (lVar4 != 0);
      atexit(`TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket'::__l2::
             _dynamic_atexit_destructor_for__Buckets__);
      _Init_thread_footer(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                           ::__l2::_thread_safe_static_guard_0__);
      return `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
             ::__l2::Buckets.Elements + (uint)param_1;
    }
  }
  return `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
         ::__l2::Buckets.Elements + (uint)param_1;
}

// Trim @ 1486699e0

void __thiscall
TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::Trim
          (TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin> *this)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar7;
  TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0> *pTVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint local_res10;
  
  iVar5 = GSkeletalMeshDynamicDataPoolBudget << 10;
  uVar11 = 0;
  local_res10 = 0;
  if (GSkeletalMeshDynamicDataPoolBudget << 10 < 0) {
    iVar5 = 0;
  }
  if ((longlong)iVar5 < (longlong)this->NumFreeBytes) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      iVar12 = 0;
      iVar13 = 5 - (int)uVar11;
      iVar5 = 0;
      if (0 < iVar13) {
        lVar2 = *plVar1;
        do {
          if ((*(int *)(lVar2 + 0x9d4c) <
               `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            lVar10 = 5;
            puVar9 = (undefined8 *)
                     &`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                      ::__l2::Buckets.Elements[0].field_0x8;
            pTVar8 = `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                     ::__l2::Buckets.Elements;
            do {
              *(ulonglong *)pTVar8 = 0;
              *puVar9 = 0;
              *(ulonglong *)pTVar8 = 0;
              *(undefined8 *)&pTVar8->field_0x8 = 0;
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              puVar9 = puVar9 + 2;
              *(ulonglong *)pTVar8 = *(ulonglong *)pTVar8 & 0xfffffffffc000000 | (ulonglong)uVar6;
              *(ulonglong *)&pTVar8->field_0x8 =
                   *(ulonglong *)&pTVar8->field_0x8 & 0xfffffffffc000000 | (ulonglong)uVar6;
              lVar10 = lVar10 + -1;
              pTVar8 = pTVar8 + 1;
            } while (lVar10 != 0);
            atexit(`TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket'::
                   __l2::_dynamic_atexit_destructor_for__Buckets__);
            _Init_thread_footer(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          pFVar7 = FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1>::Pop
                             ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *)
                              (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataGPUSkin,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket(int)'
                               ::__l2::Buckets.Elements + uVar11));
          if (pFVar7 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) break;
          iVar12 = iVar12 + *(int *)&pFVar7->field_0x14;
          *(undefined4 *)&(pFVar7->ClothingSimData).field_0x48 = 0;
          pvVar3 = *(void **)&(pFVar7->ClothingSimData).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar7->ClothingSimData);
          *(undefined4 *)&(pFVar7->ExternalMorphSets).field_0x48 = 0;
          pvVar3 = *(void **)&(pFVar7->ExternalMorphSets).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar7->ExternalMorphSets);
          *(undefined4 *)&(pFVar7->ExternalMorphWeightData).MorphSets.field_0x48 = 0;
          pvVar3 = *(void **)&(pFVar7->ExternalMorphWeightData).MorphSets.field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar7->ExternalMorphWeightData);
          pFVar4 = (pFVar7->SectionIdsUseByActiveMorphTargetsForRayTracing).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->SectionIdsUseByActiveMorphTargets).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->MorphTargetWeights).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          *(undefined4 *)&(pFVar7->ActiveMorphTargets).field_0x48 = 0;
          pvVar3 = *(void **)&(pFVar7->ActiveMorphTargets).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UMorphTarget_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar7->ActiveMorphTargets);
          pFVar4 = (pFVar7->MeshComponentSpaceTransforms).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->PreviousReferenceToLocalForRayTracing).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->PreviousReferenceToLocal).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->ReferenceToLocalForRayTracing).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->ReferenceToLocal).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          ::operator_delete(pFVar7,0x310);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar13);
        uVar11 = (ulonglong)local_res10;
        if (0 < iVar12) {
          FSkeletalMeshDynamicDataPool::AddStatsMemory
                    ((FSkeletalMeshDynamicDataPool *)this,local_res10,-iVar12);
          LOCK();
          this->NumFreeBytes = (atomic<__int64>)((longlong)this->NumFreeBytes - (longlong)iVar12);
          UNLOCK();
        }
      }
      local_res10 = ((int)uVar11 + 1) % 5;
      uVar11 = (ulonglong)local_res10;
      iVar5 = GSkeletalMeshDynamicDataPoolBudget << 10;
      if (GSkeletalMeshDynamicDataPoolBudget << 10 < 0) {
        iVar5 = 0;
      }
    } while ((longlong)iVar5 < (longlong)this->NumFreeBytes);
  }
  return;
}

// GetBucket @ 1486bb500

TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> * __cdecl
TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int param_1)

{
  uint uVar1;
  TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> *pTVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      puVar3 = (undefined8 *)
               &`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                ::__l2::Buckets.Elements[0].field_0x8;
      lVar4 = 5;
      pTVar2 = `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
               ::__l2::Buckets.Elements;
      do {
        *(ulonglong *)pTVar2 = 0;
        *puVar3 = 0;
        *(ulonglong *)pTVar2 = 0;
        *(undefined8 *)&pTVar2->field_0x8 = 0;
        uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
        puVar3 = puVar3 + 2;
        *(ulonglong *)pTVar2 = *(ulonglong *)pTVar2 & 0xfffffffffc000000 | (ulonglong)uVar1;
        *(ulonglong *)&pTVar2->field_0x8 =
             *(ulonglong *)&pTVar2->field_0x8 & 0xfffffffffc000000 | (ulonglong)uVar1;
        lVar4 = lVar4 + -1;
        pTVar2 = pTVar2 + 1;
      } while (lVar4 != 0);
      atexit(`TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket'::__l2::
             _dynamic_atexit_destructor_for__Buckets__);
      _Init_thread_footer(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                           ::__l2::_thread_safe_static_guard_0__);
      return `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
             ::__l2::Buckets.Elements + (uint)param_1;
    }
  }
  return `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
         ::__l2::Buckets.Elements + (uint)param_1;
}

// Trim @ 1486f27a0

void __thiscall
TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::Trim
          (TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite> *this)

{
  longlong *plVar1;
  atomic<__int64> aVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  long64 lVar6;
  FDynamicSkelMeshObjectDataNanite *pFVar7;
  TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0> *pTVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint local_res10;
  
  aVar2 = this->NumFreeBytes;
  uVar12 = 0;
  local_res10 = 0;
  lVar6 = FSkeletalMeshDynamicDataPool::GetPoolBudget();
  if (lVar6 < (longlong)aVar2) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      iVar13 = 0;
      iVar14 = 5 - (int)uVar12;
      iVar9 = 0;
      if (0 < iVar14) {
        lVar3 = *plVar1;
        do {
          if ((*(int *)(lVar3 + 0x9d4c) <
               `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            lVar11 = 5;
            puVar10 = (undefined8 *)
                      &`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                       ::__l2::Buckets.Elements[0].field_0x8;
            pTVar8 = `private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                     ::__l2::Buckets.Elements;
            do {
              *(ulonglong *)pTVar8 = 0;
              *puVar10 = 0;
              *(ulonglong *)pTVar8 = 0;
              *(undefined8 *)&pTVar8->field_0x8 = 0;
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              puVar10 = puVar10 + 2;
              *(ulonglong *)pTVar8 = *(ulonglong *)pTVar8 & 0xfffffffffc000000 | (ulonglong)uVar5;
              *(ulonglong *)&pTVar8->field_0x8 =
                   *(ulonglong *)&pTVar8->field_0x8 & 0xfffffffffc000000 | (ulonglong)uVar5;
              lVar11 = lVar11 + -1;
              pTVar8 = pTVar8 + 1;
            } while (lVar11 != 0);
            atexit(`TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket'::__l2
                   ::_dynamic_atexit_destructor_for__Buckets__);
            _Init_thread_footer(&`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          pFVar7 = FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::Pop
                             ((FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
                              (`private:_static_class_TLockFreePointerListFIFO<FDynamicSkelMeshObjectDataNanite,0>&___ptr64___cdecl_TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(int)'
                               ::__l2::Buckets.Elements + uVar12));
          if (pFVar7 == (FDynamicSkelMeshObjectDataNanite *)0x0) break;
          iVar13 = iVar13 + *(int *)((longlong)&pFVar7->_padding_ + 4);
          pFVar4 = (pFVar7->ComponentSpaceTransforms).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->PreviousReferenceToLocal).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->ReferenceToLocalForRayTracing).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pFVar4 = (pFVar7->ReferenceToLocal).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          ::operator_delete(pFVar7,0x78);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar14);
        uVar12 = (ulonglong)local_res10;
        if (0 < iVar13) {
          FSkeletalMeshDynamicDataPool::AddStatsMemory
                    ((FSkeletalMeshDynamicDataPool *)this,local_res10,-iVar13);
          LOCK();
          this->NumFreeBytes = (atomic<__int64>)((longlong)this->NumFreeBytes - (longlong)iVar13);
          UNLOCK();
        }
      }
      aVar2 = this->NumFreeBytes;
      local_res10 = ((int)uVar12 + 1) % 5;
      uVar12 = (ulonglong)local_res10;
      lVar6 = FSkeletalMeshDynamicDataPool::GetPoolBudget();
    } while (lVar6 < (longlong)aVar2);
  }
  return;
}

