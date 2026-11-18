// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// Add @ 1448fca70

void __thiscall
TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Add
          (TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  FData *pFVar2;
  FPackedItem *pFVar3;
  FPackedBatch *pFVar4;
  code *pcVar5;
  uint uVar6;
  FPackedItem FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FPackedBatch local_38;
  FPackedItem local_34;
  
  uVar11 = 0;
  if (param_2 == 0) {
    this->TotalInstances = this->TotalInstances;
  }
  else {
    do {
      uVar9 = 0x40 - this->CurrentBatchPrefixSum;
      if (uVar9 == 0) {
LAB_1448fcbb7:
        pFVar2 = (this->Data).Reference;
        local_38.FirstItem_NumItems =
             this->CurrentBatchNumItems & 0x7f | this->CurrentBatchFirstItem << 7;
        pFVar4 = (pFVar2->Batches).AllocatorInstance.Data;
        if (((pFVar4 <= &local_38) && (&local_38 < pFVar4 + (pFVar2->Batches).ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (pFVar2->Batches).ArrayNum;
        piVar1 = &(pFVar2->Batches).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
                             (0x404,&(pFVar2->Batches).AllocatorInstance,piVar1);
        }
        (pFVar2->Batches).ArrayNum = iVar10 + 1;
        (pFVar2->Batches).AllocatorInstance.Data[iVar10].FirstItem_NumItems =
             local_38.FirstItem_NumItems;
        this->CurrentBatchFirstItem = (((this->Data).Reference)->Items).ArrayNum;
        this->CurrentBatchPrefixSum = 0;
        this->CurrentBatchNumItems = 0;
        this->CurrentBatchPackedPrefixSum = 0;
      }
      else {
        pFVar2 = (this->Data).Reference;
        uVar6 = param_2 - uVar11;
        if (uVar9 < param_2 - uVar11) {
          uVar6 = uVar9;
        }
        local_34.InstanceDataOffset_NumInstances = (uVar11 + param_1) * 0x80 | uVar6 & 0x7f;
        local_34.Payload_BatchPrefixOffset = this->CurrentBatchPrefixSum & 0x3f | param_3 << 6;
        pFVar3 = (pFVar2->Items).AllocatorInstance.Data;
        if (((pFVar3 <= &local_34) && (&local_34 < pFVar3 + (pFVar2->Items).ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (pFVar2->Items).ArrayNum;
        piVar1 = &(pFVar2->Items).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
                             (0x408,&(pFVar2->Items).AllocatorInstance,piVar1);
        }
        (pFVar2->Items).ArrayNum = iVar10 + 1;
        FVar7.Payload_BatchPrefixOffset = local_34.Payload_BatchPrefixOffset;
        FVar7.InstanceDataOffset_NumInstances = local_34.InstanceDataOffset_NumInstances;
        (pFVar2->Items).AllocatorInstance.Data[iVar10] = FVar7;
        uVar9 = this->CurrentBatchNumItems * 6;
        if (uVar9 < 0x20) {
          this->CurrentBatchPackedPrefixSum =
               this->CurrentBatchPackedPrefixSum |
               this->CurrentBatchPackedPrefixSum << ((byte)uVar9 & 0x1f);
        }
        this->CurrentBatchPrefixSum = this->CurrentBatchPrefixSum + uVar6;
        uVar11 = uVar11 + uVar6;
        this->CurrentBatchNumItems = this->CurrentBatchNumItems + 1;
        if (0x3f < this->CurrentBatchPrefixSum) goto LAB_1448fcbb7;
      }
    } while (uVar11 < param_2);
    this->TotalInstances = this->TotalInstances + uVar11;
  }
  return;
}

// Upload @ 144943bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUData * __thiscall
TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
Upload(TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
       *this,FGPUData *__return_storage_ptr__,FRDGBuilder *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FData *pFVar3;
  FPackedBatch *pFVar4;
  FData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FGPUData *pFVar9;
  FPackedBatch local_68 [2];
  undefined8 *local_60;
  FPackedItem *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FPackedBatch *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int> local_38;
  TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int> local_28;
  
  if (this->CurrentBatchNumItems != 0) {
    pFVar3 = (this->Data).Reference;
    local_68[0].FirstItem_NumItems =
         this->CurrentBatchFirstItem << 7 | this->CurrentBatchNumItems & 0x7f;
    pFVar4 = (pFVar3->Batches).AllocatorInstance.Data;
    if ((pFVar4 <= local_68) && (local_68 < pFVar4 + (pFVar3->Batches).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FGPUData *)(*pcVar6)();
        return pFVar9;
      }
    }
    iVar8 = (pFVar3->Batches).ArrayNum;
    piVar1 = &(pFVar3->Batches).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
                        (0x404,&(pFVar3->Batches).AllocatorInstance,piVar1);
    }
    (pFVar3->Batches).ArrayNum = iVar8 + 1;
    (pFVar3->Batches).AllocatorInstance.Data[iVar8].FirstItem_NumItems =
         local_68[0].FirstItem_NumItems;
    this->CurrentBatchNumItems = 0;
  }
  pFVar3 = (this->Data).Reference;
  local_60 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x10,0x10);
  if (local_60 == (undefined8 *)0x0) {
    local_60 = (undefined8 *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar6)();
      return pFVar9;
    }
  }
  else {
    *local_60 = &
                ___7__TObject_V__TRefCountPtr_UFData___TInstanceCullingLoadBalancer_V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________FRDGAllocator__6B_
    ;
    local_60[1] = 0;
    pFVar5 = (this->Data).Reference;
    local_60[1] = pFVar5;
    if (pFVar5 != (FData *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
  }
  if (((undefined8 **)param_1->_padding_ <= &local_60) &&
     (&local_60 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar6)();
      return pFVar9;
    }
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar8 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_60;
  local_58 = (pFVar3->Items).AllocatorInstance.Data;
  iVar8 = (pFVar3->Items).ArrayNum;
  if (iVar8 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_48 = (pFVar3->Batches).AllocatorInstance.Data;
  iVar2 = (pFVar3->Batches).ArrayNum;
  iStack_50 = iVar8;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar6)();
      return pFVar9;
    }
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_28.DataPtr = local_48;
  local_38.DataPtr = local_58;
  iStack_40 = iVar2;
  FInstanceCullingLoadBalancerBase::Upload
            ((FInstanceCullingLoadBalancerBase *)this,__return_storage_ptr__,param_1,&local_28,
             &local_38,NoCopy,param_2);
  return __return_storage_ptr__;
}

// Add @ 144ba7cf0

void __thiscall
TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::Add
          (TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> *this,uint param_1,uint param_2
          ,uint param_3)

{
  int *piVar1;
  FData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_38;
  uint local_34;
  uint uStack_30;
  
  uVar9 = 0;
  if (param_2 == 0) {
    this->TotalInstances = this->TotalInstances;
  }
  else {
    do {
      uVar7 = 0x40 - this->CurrentBatchPrefixSum;
      if (uVar7 == 0) {
LAB_144ba7e37:
        pFVar2 = (this->Data).Reference;
        local_38 = this->CurrentBatchNumItems & 0x7f | this->CurrentBatchFirstItem << 7;
        pFVar3 = (pFVar2->Batches).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar3 + (longlong)(pFVar2->Batches).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (pFVar2->Batches).ArrayNum;
        piVar1 = &(pFVar2->Batches).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(pFVar2->Batches).AllocatorInstance,piVar1);
        }
        (pFVar2->Batches).ArrayNum = iVar8 + 1;
        *(uint *)((pFVar2->Batches).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_38;
        this->CurrentBatchFirstItem = (((this->Data).Reference)->Items).ArrayNum;
        this->CurrentBatchPrefixSum = 0;
        this->CurrentBatchNumItems = 0;
        this->CurrentBatchPackedPrefixSum = 0;
      }
      else {
        pFVar2 = (this->Data).Reference;
        uVar5 = param_2 - uVar9;
        if (uVar7 < param_2 - uVar9) {
          uVar5 = uVar7;
        }
        local_34 = (uVar9 + param_1) * 0x80 | uVar5 & 0x7f;
        uStack_30 = this->CurrentBatchPrefixSum & 0x3f | param_3 << 6;
        pFVar3 = (pFVar2->Items).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_34) &&
            ((FScriptContainerElement *)&local_34 < pFVar3 + (longlong)(pFVar2->Items).ArrayMax * 8)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (pFVar2->Items).ArrayNum;
        piVar1 = &(pFVar2->Items).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(pFVar2->Items).AllocatorInstance,piVar1);
        }
        (pFVar2->Items).ArrayNum = iVar8 + 1;
        *(ulonglong *)((pFVar2->Items).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             CONCAT44(uStack_30,local_34);
        uVar7 = this->CurrentBatchNumItems * 6;
        if (uVar7 < 0x20) {
          this->CurrentBatchPackedPrefixSum =
               this->CurrentBatchPackedPrefixSum |
               this->CurrentBatchPackedPrefixSum << ((byte)uVar7 & 0x1f);
        }
        this->CurrentBatchPrefixSum = this->CurrentBatchPrefixSum + uVar5;
        uVar9 = uVar9 + uVar5;
        this->CurrentBatchNumItems = this->CurrentBatchNumItems + 1;
        if (0x3f < this->CurrentBatchPrefixSum) goto LAB_144ba7e37;
      }
    } while (uVar9 < param_2);
    this->TotalInstances = this->TotalInstances + uVar9;
  }
  return;
}

// FinalizeBatches @ 144bc2650

void __thiscall
TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::FinalizeBatches
          (TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  FData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint local_18 [4];
  
  if (this->CurrentBatchNumItems != 0) {
    local_18[0] = this->CurrentBatchFirstItem << 7 | this->CurrentBatchNumItems & 0x7f;
    pFVar2 = (this->Data).Reference;
    pFVar3 = (pFVar2->Batches).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(pFVar2->Batches).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar2->Batches).ArrayNum;
    piVar1 = &(pFVar2->Batches).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(pFVar2->Batches).AllocatorInstance,piVar1);
    }
    (pFVar2->Batches).ArrayNum = iVar6 + 1;
    *(uint *)((pFVar2->Batches).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18[0];
    this->CurrentBatchNumItems = 0;
  }
  return;
}

// Upload @ 144beb340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUData * __thiscall
TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::Upload
          (TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> *this,
          FGPUData *__return_storage_ptr__,FRDGBuilder *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  FData *pFVar3;
  FData *pFVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  FGPUData *pFVar9;
  FRDGBuffer *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  FPackedBatch *pFVar14;
  FPackedItem *pFVar15;
  ulong64 uVar16;
  undefined8 *local_38 [2];
  
  FinalizeBatches(this);
  pFVar3 = (this->Data).Reference;
  local_38[0] = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x10,0x10);
  if (local_38[0] == (undefined8 *)0x0) {
    local_38[0] = (undefined8 *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar5)();
      return pFVar9;
    }
  }
  else {
    *local_38[0] = &
                   ___7__TObject_V__TRefCountPtr_UFData___TInstanceCullingLoadBalancer_V__TSizedDefaultAllocator__0CA________FRDGAllocator__6B_
    ;
    local_38[0][1] = 0;
    pFVar4 = (this->Data).Reference;
    local_38[0][1] = pFVar4;
    if (pFVar4 != (FData *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
  }
  if (((undefined8 **)param_1->_padding_ <= local_38) &&
     (local_38 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar8 = (int)param_1->_padding_;
  piVar13 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar13) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar13);
  }
  *(int *)&param_1->_padding_ = iVar8 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_38[0];
  uVar1 = (pFVar3->Items).ArrayNum;
  pFVar15 = (FPackedItem *)(pFVar3->Items).AllocatorInstance.Data;
  if ((int)uVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar5)();
      return pFVar9;
    }
  }
  uVar2 = (pFVar3->Batches).ArrayNum;
  pFVar14 = (FPackedBatch *)(pFVar3->Batches).AllocatorInstance.Data;
  if ((int)uVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FGPUData *)(*pcVar5)();
      return pFVar9;
    }
  }
  pvVar6 = ThreadLocalStoragePointer;
  uVar11 = (ulonglong)_tls_index;
  __return_storage_ptr__->NumBatches = 0;
  __return_storage_ptr__->NumItems = 0;
  __return_storage_ptr__->NumGroupsPerBatch = 1;
  piVar13 = (int *)(*(longlong *)((longlong)pvVar6 + uVar11 * 8) + 0x9d4c);
  __return_storage_ptr__->BatchBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->ItemBuffer = (FRDGBuffer *)0x0;
  if (*piVar13 <
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
      ::__l2::DummyElement.FirstItem_NumItems = 0;
      _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (uVar2 == 0) {
    uVar16 = 4;
    pFVar14 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedBatch>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int>,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    uVar12 = 1;
  }
  else {
    uVar16 = (longlong)(int)uVar2 << 2;
    uVar12 = uVar2;
  }
  pFVar10 = CreateStructuredBuffer
                      (param_1,L"InstanceCullingLoadBalancer.Batches",4,uVar12,pFVar14,uVar16,NoCopy
                      );
  __return_storage_ptr__->BatchBuffer = pFVar10;
  if (*piVar13 <
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
      ::__l2::DummyElement.InstanceDataOffset_NumInstances = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
      ::__l2::DummyElement.Payload_BatchPrefixOffset = 0;
      _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (uVar1 == 0) {
    uVar16 = 8;
    pFVar15 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FInstanceCullingLoadBalancerBase::FPackedItem>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int>,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    uVar12 = 1;
  }
  else {
    uVar16 = (longlong)(int)uVar1 << 3;
    uVar12 = uVar1;
  }
  pFVar10 = CreateStructuredBuffer
                      (param_1,L"InstanceCullingLoadBalancer.Items",8,uVar12,pFVar15,uVar16,NoCopy);
  __return_storage_ptr__->ItemBuffer = pFVar10;
  __return_storage_ptr__->NumGroupsPerBatch = param_2;
  __return_storage_ptr__->NumBatches = uVar2;
  __return_storage_ptr__->NumItems = uVar1;
  return __return_storage_ptr__;
}

// FinalizeBatches @ 1457f18d0

void __thiscall
TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
FinalizeBatches(TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *this)

{
  int *piVar1;
  FData *pFVar2;
  FPackedBatch *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPackedBatch local_18 [4];
  
  if (this->CurrentBatchNumItems != 0) {
    local_18[0].FirstItem_NumItems =
         this->CurrentBatchFirstItem << 7 | this->CurrentBatchNumItems & 0x7f;
    pFVar2 = (this->Data).Reference;
    pFVar3 = (pFVar2->Batches).AllocatorInstance.Data;
    if ((pFVar3 <= local_18) && (local_18 < pFVar3 + (pFVar2->Batches).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar2->Batches).ArrayNum;
    piVar1 = &(pFVar2->Batches).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
                        (0x404,&(pFVar2->Batches).AllocatorInstance,piVar1);
    }
    (pFVar2->Batches).ArrayNum = iVar6 + 1;
    (pFVar2->Batches).AllocatorInstance.Data[iVar6].FirstItem_NumItems =
         local_18[0].FirstItem_NumItems;
    this->CurrentBatchNumItems = 0;
  }
  return;
}

// UploadFinalized @ 145818db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUData * __thiscall
TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
UploadFinalized(TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *this,FGPUData *__return_storage_ptr__,FRDGBuilder *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FData *pFVar3;
  FData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FGPUData *pFVar8;
  undefined8 *local_68 [2];
  FPackedItem *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FPackedBatch *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FInstanceCullingLoadBalancerBase::FPackedItem_const_,int> local_38;
  TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int> local_28;
  
  if (this->CurrentBatchNumItems != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGPUData *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar3 = (this->Data).Reference;
  local_68[0] = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x10,0x10);
  if (local_68[0] == (undefined8 *)0x0) {
    local_68[0] = (undefined8 *)0x0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGPUData *)(*pcVar5)();
      return pFVar8;
    }
  }
  else {
    *local_68[0] = &
                   ___7__TObject_V__TRefCountPtr_UFData___TInstanceCullingLoadBalancer_V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________FRDGAllocator__6B_
    ;
    local_68[0][1] = 0;
    pFVar4 = (this->Data).Reference;
    local_68[0][1] = pFVar4;
    if (pFVar4 != (FData *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
  }
  if (((undefined8 **)param_1->_padding_ <= local_68) &&
     (local_68 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGPUData *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_68[0];
  local_58 = (pFVar3->Items).AllocatorInstance.Data;
  iVar7 = (pFVar3->Items).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGPUData *)(*pcVar5)();
      return pFVar8;
    }
  }
  local_48 = (pFVar3->Batches).AllocatorInstance.Data;
  iVar2 = (pFVar3->Batches).ArrayNum;
  iStack_50 = iVar7;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGPUData *)(*pcVar5)();
      return pFVar8;
    }
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar2;
  local_28.DataPtr = local_48;
  local_38.DataPtr = local_58;
  iStack_40 = iVar2;
  FInstanceCullingLoadBalancerBase::Upload
            ((FInstanceCullingLoadBalancerBase *)this,__return_storage_ptr__,param_1,&local_28,
             &local_38,NoCopy,param_2);
  return __return_storage_ptr__;
}

