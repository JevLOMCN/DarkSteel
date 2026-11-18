// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// FD3D12BucketAllocator @ 1459a7d10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BucketAllocator * __thiscall
FD3D12BucketAllocator::FD3D12BucketAllocator
          (FD3D12BucketAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          FD3D12ResourceInitConfig *param_3,FString *param_4,ulong64 param_5)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  
  FD3D12ResourceAllocator::FD3D12ResourceAllocator
            ((FD3D12ResourceAllocator *)this,param_1,param_2,param_3,param_4,0x2000000);
  pTVar3 = (TNode *)0x0;
  lpCriticalSection = (LPCRITICAL_SECTION)this->AvailableBlocks;
  lVar4 = 0x16;
  do {
    lVar4 = lVar4 + -1;
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    pTVar1 = ::operator_new(0x20);
    pTVar2 = pTVar3;
    if (pTVar1 != (TNode *)0x0) {
      pTVar1->NextNode = (TNode *)0x0;
      (pTVar1->Item).FrameFence = 0;
      (pTVar1->Item).BucketIndex = 0;
      (pTVar1->Item).Offset = 0;
      (pTVar1->Item).ResourceHeap = (FD3D12Resource *)0x0;
      pTVar1->NextNode = (TNode *)0x0;
      pTVar2 = pTVar1;
    }
    lpCriticalSection[1].OwningThread = pTVar2;
    *(TNode **)&lpCriticalSection[1].LockCount = pTVar2;
    *(undefined4 *)&lpCriticalSection[1].LockSemaphore = 0;
    lpCriticalSection = lpCriticalSection + 2;
  } while (lVar4 != 0);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ExpiredBlocks,4000);
  pTVar2 = ::operator_new(0x20);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).FrameFence = 0;
    (pTVar2->Item).BucketIndex = 0;
    (pTVar2->Item).Offset = 0;
    (pTVar2->Item).ResourceHeap = (FD3D12Resource *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    pTVar3 = pTVar2;
  }
  (this->ExpiredBlocks).Items.Tail = pTVar3;
  (this->ExpiredBlocks).Items.Head = pTVar3;
  (this->ExpiredBlocks).Size = 0;
  this->BlockRetentionFrameCount = param_5;
  (this->SubAllocatedResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubAllocatedResources).ArrayNum = 0;
  (this->SubAllocatedResources).ArrayMax = 0;
  return this;
}

// CleanUpAllocations @ 1459b4e50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12BucketAllocator::CleanUpAllocations(FD3D12BucketAllocator *this,ulong64 param_1)

{
  undefined1 *lpCriticalSection;
  FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *lpCriticalSection_00;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FD3D12ManualFence *this_00;
  HANDLE pvVar4;
  void *pvVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  LPCRITICAL_SECTION p_Var17;
  FD3D12Resource *local_res8;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 *local_50;
  
  lpCriticalSection = &this->field_0x38;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((*(longlong *)this == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar3 = *(longlong *)this;
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(longlong *)(lVar3 + 0x548) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FrameFence",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                            ,0xff,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_00 = *(FD3D12ManualFence **)(lVar3 + 0x548);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      for (lVar3 = 0x3f; 0x7ffffUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
      MinCleanupBucket = 0xfffffffc;
      if (5 < (uint)lVar3) {
        MinCleanupBucket = (uint)lVar3 - 10;
      }
      _Init_thread_footer(&::_TSS0);
    }
    uVar16 = (ulonglong)MinCleanupBucket;
    if (MinCleanupBucket < 0x16) {
      p_Var17 = (LPCRITICAL_SECTION)(this->AvailableBlocks + uVar16);
      do {
        uVar12 = this->BlockRetentionFrameCount;
        if (p_Var17 == (LPCRITICAL_SECTION)0x0) goto LAB_1459b5230;
        while (EnterCriticalSection(p_Var17), *(longlong *)p_Var17[1].OwningThread != 0) {
          lVar3 = *(longlong *)(*(longlong *)p_Var17[1].OwningThread + 8);
          local_50 = *(undefined8 **)(*(longlong *)p_Var17[1].OwningThread + 0x18);
          uVar11 = FD3D12ManualFence::GetCompletedFenceValue(this_00,false);
          if (uVar11 < (ulonglong)(uint)uVar12 + lVar3) break;
          pvVar4 = *(HANDLE *)p_Var17[1].OwningThread;
          if (pvVar4 != (HANDLE)0x0) {
            local_50 = *(undefined8 **)((longlong)pvVar4 + 0x18);
            pvVar5 = p_Var17[1].OwningThread;
            p_Var17[1].OwningThread = pvVar4;
            *(undefined8 *)((longlong)pvVar4 + 8) = 0;
            *(undefined8 *)((longlong)pvVar4 + 0x10) = 0;
            *(undefined8 *)((longlong)pvVar4 + 0x18) = 0;
            ::operator_delete(pvVar5,0x20);
          }
          *(int *)&p_Var17[1].LockSemaphore = *(int *)&p_Var17[1].LockSemaphore + -1;
          LeaveCriticalSection(p_Var17);
          if (local_50 != (undefined8 *)0x0) {
            piVar14 = (int *)(local_50 + 1);
            LOCK();
            iVar2 = *piVar14;
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if (piVar14 == (int *)0x0) {
                local_50 = (undefined8 *)0x0;
              }
              if (local_50 != (undefined8 *)0x0) {
                (**(code **)*local_50)();
              }
            }
          }
        }
        LeaveCriticalSection(p_Var17);
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        p_Var17 = p_Var17 + 2;
      } while (uVar15 < 0x16);
    }
    lpCriticalSection_00 = &this->ExpiredBlocks;
    if (lpCriticalSection_00 != (FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *)0x0) {
      while (EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00),
            ((this->ExpiredBlocks).Items.Tail)->NextNode != (TNode *)0x0) {
        pTVar6 = ((this->ExpiredBlocks).Items.Tail)->NextNode;
        local_78 = (pTVar6->Item).FrameFence;
        uStack_70._0_4_ = (pTVar6->Item).BucketIndex;
        uStack_70._4_4_ = (pTVar6->Item).Offset;
        local_res8 = (pTVar6->Item).ResourceHeap;
        uVar12 = FD3D12ManualFence::GetCompletedFenceValue(this_00,false);
        if (uVar12 < local_78) break;
        pTVar6 = ((this->ExpiredBlocks).Items.Tail)->NextNode;
        if (pTVar6 != (TNode *)0x0) {
          local_78 = (pTVar6->Item).FrameFence;
          uStack_70._0_4_ = (pTVar6->Item).BucketIndex;
          uStack_70._4_4_ = (pTVar6->Item).Offset;
          pTVar7 = (this->ExpiredBlocks).Items.Tail;
          local_res8 = (pTVar6->Item).ResourceHeap;
          (this->ExpiredBlocks).Items.Tail = pTVar6;
          (pTVar6->Item).FrameFence = 0;
          (pTVar6->Item).BucketIndex = 0;
          (pTVar6->Item).Offset = 0;
          (pTVar6->Item).ResourceHeap = (FD3D12Resource *)0x0;
          ::operator_delete(pTVar7,0x20);
        }
        puVar1 = &(this->ExpiredBlocks).Size;
        *puVar1 = *puVar1 - 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        p_Var17 = (LPCRITICAL_SECTION)(this->AvailableBlocks + (uStack_70 & 0xffffffff));
        if (p_Var17 == (LPCRITICAL_SECTION)0x0) goto LAB_1459b5230;
        EnterCriticalSection(p_Var17);
        puVar13 = ::operator_new(0x20);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = 0;
          puVar13[1] = local_78;
          puVar13[2] = uStack_70;
          puVar13[3] = local_res8;
          puVar8 = *(undefined8 **)&p_Var17[1].LockCount;
          *(undefined8 **)&p_Var17[1].LockCount = puVar13;
          *puVar8 = puVar13;
        }
        *(int *)&p_Var17[1].LockSemaphore = *(int *)&p_Var17[1].LockSemaphore + 1;
        LeaveCriticalSection(p_Var17);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x0001459b51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
LAB_1459b5230:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Deallocate @ 1459bc380

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BucketAllocator::Deallocate(FD3D12BucketAllocator *this,FD3D12ResourceLocation *param_1)

{
  undefined1 *lpCriticalSection;
  uint *puVar1;
  longlong lVar2;
  TNode *pTVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  TNode *pTVar9;
  FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *lpCriticalSection_00;
  
  lpCriticalSection = &this->field_0x38;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)this == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x548) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(longlong *)&param_1->AllocatorData =
         (longlong)(*(int *)(*(longlong *)(lVar2 + 0x548) + 0x58) + 1);
    lpCriticalSection_00 = &this->ExpiredBlocks;
    if (lpCriticalSection_00 != (FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 != (TNode *)0x0) {
        pTVar9->NextNode = (TNode *)0x0;
        uVar5 = (param_1->AllocatorData).BuddyAllocatorPrivateData.Order;
        uVar6 = (param_1->AllocatorData).BlockAllocatorPrivateData.BucketIndex;
        uVar7 = (param_1->AllocatorData).BlockAllocatorPrivateData.Offset;
        *(uint *)&(pTVar9->Item).FrameFence =
             (param_1->AllocatorData).BuddyAllocatorPrivateData.Offset;
        *(uint *)((longlong)&(pTVar9->Item).FrameFence + 4) = uVar5;
        (pTVar9->Item).BucketIndex = uVar6;
        (pTVar9->Item).Offset = uVar7;
        (pTVar9->Item).ResourceHeap =
             (param_1->AllocatorData).BlockAllocatorPrivateData.ResourceHeap;
        pTVar3 = (this->ExpiredBlocks).Items.Head;
        (this->ExpiredBlocks).Items.Head = pTVar9;
        pTVar3->NextNode = pTVar9;
      }
      puVar1 = &(this->ExpiredBlocks).Size;
      *puVar1 = *puVar1 + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x0001459bc4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Destroy @ 1459bd170

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BucketAllocator::Destroy(FD3D12BucketAllocator *this)

{
  FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *lpCriticalSection;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  HANDLE pvVar5;
  void *pvVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FD3D12Resource *pFVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong *plVar14;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 auStackX_10 [8];
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)this->AvailableBlocks;
  puVar12 = (undefined8 *)0x0;
  do {
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) goto LAB_1459d4272;
    while( true ) {
      EnterCriticalSection(lpCriticalSection_00);
      *(int *)&lpCriticalSection_00[1].LockSemaphore =
           *(int *)&lpCriticalSection_00[1].LockSemaphore + -1;
      pvVar5 = *(HANDLE *)lpCriticalSection_00[1].OwningThread;
      if (pvVar5 == (HANDLE)0x0) break;
      puVar10 = *(undefined8 **)((longlong)pvVar5 + 0x18);
      pvVar6 = lpCriticalSection_00[1].OwningThread;
      lpCriticalSection_00[1].OwningThread = pvVar5;
      *(undefined8 *)((longlong)pvVar5 + 8) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x18) = 0;
      ::operator_delete(pvVar6,0x20);
      LeaveCriticalSection(lpCriticalSection_00);
      if (puVar10 != (undefined8 *)0x0) {
        piVar13 = (int *)(puVar10 + 1);
        LOCK();
        iVar3 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if (piVar13 == (int *)0x0) {
            puVar10 = (undefined8 *)0x0;
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
    uVar16 = (int)puVar12 + 1;
    puVar12 = (undefined8 *)(ulonglong)uVar16;
    lpCriticalSection_00 = lpCriticalSection_00 + 2;
  } while (uVar16 < 0x16);
  lpCriticalSection = &this->ExpiredBlocks;
  if (lpCriticalSection != (FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *)0x0) {
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      puVar1 = &(this->ExpiredBlocks).Size;
      *puVar1 = *puVar1 - 1;
      pTVar7 = ((this->ExpiredBlocks).Items.Tail)->NextNode;
      if (pTVar7 == (TNode *)0x0) break;
      pFVar11 = (pTVar7->Item).ResourceHeap;
      pTVar8 = (this->ExpiredBlocks).Items.Tail;
      (this->ExpiredBlocks).Items.Tail = pTVar7;
      (pTVar7->Item).FrameFence = 0;
      (pTVar7->Item).BucketIndex = 0;
      (pTVar7->Item).Offset = 0;
      (pTVar7->Item).ResourceHeap = (FD3D12Resource *)0x0;
      ::operator_delete(pTVar8,0x20);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar11 != (FD3D12Resource *)0x0) {
        plVar14 = &pFVar11->_padding_;
        LOCK();
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          if (plVar14 == (longlong *)0x0) {
            pFVar11 = (FD3D12Resource *)0x0;
          }
          if (pFVar11 != (FD3D12Resource *)0x0) {
            (**(code **)pFVar11->_padding_)(pFVar11,1);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar15 = (this->SubAllocatedResources).AllocatorInstance.Data;
    iVar3 = (this->SubAllocatedResources).ArrayNum;
    pFVar2 = pFVar15 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->SubAllocatedResources).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FD3D12Resource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_10);
      }
      if (pFVar15 == pFVar2) break;
      puVar12 = *(undefined8 **)pFVar15;
      piVar13 = (int *)(puVar12 + 1);
      LOCK();
      iVar4 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        if (piVar13 == (int *)0x0) {
          puVar12 = (undefined8 *)0x0;
        }
        if (puVar12 != (undefined8 *)0x0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      puVar12 = *(undefined8 **)pFVar15;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
      pFVar15 = pFVar15 + 8;
    }
    return;
  }
LAB_1459d4272:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DumpAllocatorStats @ 1459bddf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BucketAllocator::DumpAllocatorStats(FD3D12BucketAllocator *this,FOutputDevice *param_1)

{
  return;
}

// Initialize @ 1459c4ef0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BucketAllocator::Initialize(FD3D12BucketAllocator *this)

{
  return;
}

// ReleaseAllResources @ 1459d4040

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BucketAllocator::ReleaseAllResources(FD3D12BucketAllocator *this)

{
  FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *lpCriticalSection;
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  HANDLE pvVar5;
  void *pvVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FD3D12Resource *pFVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong *plVar14;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)this->AvailableBlocks;
  puVar12 = (undefined8 *)0x0;
  do {
    if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) goto LAB_1459d4272;
    while( true ) {
      EnterCriticalSection(lpCriticalSection_00);
      *(int *)&lpCriticalSection_00[1].LockSemaphore =
           *(int *)&lpCriticalSection_00[1].LockSemaphore + -1;
      pvVar5 = *(HANDLE *)lpCriticalSection_00[1].OwningThread;
      if (pvVar5 == (HANDLE)0x0) break;
      puVar10 = *(undefined8 **)((longlong)pvVar5 + 0x18);
      pvVar6 = lpCriticalSection_00[1].OwningThread;
      lpCriticalSection_00[1].OwningThread = pvVar5;
      *(undefined8 *)((longlong)pvVar5 + 8) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x18) = 0;
      ::operator_delete(pvVar6,0x20);
      LeaveCriticalSection(lpCriticalSection_00);
      if (puVar10 != (undefined8 *)0x0) {
        piVar13 = (int *)(puVar10 + 1);
        LOCK();
        iVar3 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if (piVar13 == (int *)0x0) {
            puVar10 = (undefined8 *)0x0;
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
    uVar16 = (int)puVar12 + 1;
    puVar12 = (undefined8 *)(ulonglong)uVar16;
    lpCriticalSection_00 = lpCriticalSection_00 + 2;
  } while (uVar16 < 0x16);
  lpCriticalSection = &this->ExpiredBlocks;
  if (lpCriticalSection != (FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *)0x0) {
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      puVar1 = &(this->ExpiredBlocks).Size;
      *puVar1 = *puVar1 - 1;
      pTVar7 = ((this->ExpiredBlocks).Items.Tail)->NextNode;
      if (pTVar7 == (TNode *)0x0) break;
      pFVar11 = (pTVar7->Item).ResourceHeap;
      pTVar8 = (this->ExpiredBlocks).Items.Tail;
      (this->ExpiredBlocks).Items.Tail = pTVar7;
      (pTVar7->Item).FrameFence = 0;
      (pTVar7->Item).BucketIndex = 0;
      (pTVar7->Item).Offset = 0;
      (pTVar7->Item).ResourceHeap = (FD3D12Resource *)0x0;
      ::operator_delete(pTVar8,0x20);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pFVar11 != (FD3D12Resource *)0x0) {
        plVar14 = &pFVar11->_padding_;
        LOCK();
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          if (plVar14 == (longlong *)0x0) {
            pFVar11 = (FD3D12Resource *)0x0;
          }
          if (pFVar11 != (FD3D12Resource *)0x0) {
            (**(code **)pFVar11->_padding_)(pFVar11,1);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar15 = (this->SubAllocatedResources).AllocatorInstance.Data;
    iVar3 = (this->SubAllocatedResources).ArrayNum;
    pFVar2 = pFVar15 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->SubAllocatedResources).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FD3D12Resource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar15 == pFVar2) break;
      puVar12 = *(undefined8 **)pFVar15;
      piVar13 = (int *)(puVar12 + 1);
      LOCK();
      iVar4 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        if (piVar13 == (int *)0x0) {
          puVar12 = (undefined8 *)0x0;
        }
        if (puVar12 != (undefined8 *)0x0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      puVar12 = *(undefined8 **)pFVar15;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
      pFVar15 = pFVar15 + 8;
    }
    return;
  }
LAB_1459d4272:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Reset @ 1459d67b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BucketAllocator::Reset(FD3D12BucketAllocator *this)

{
  return;
}

// TryAllocate @ 1459dc200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12BucketAllocator::TryAllocate
          (FD3D12BucketAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<FD3D12Resource_*,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  FD3D12Resource *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  void *pvVar13;
  TNode *pTVar14;
  ulonglong uVar15;
  uint uVar16;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FD3D12Resource **ppFVar20;
  ulonglong uVar21;
  ulong64 uVar22;
  uint *puVar23;
  uint local_b8;
  FD3D12Resource *local_b0;
  uint local_a8;
  FD3D12Adapter *local_a0;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  uint *local_80;
  LPCRITICAL_SECTION local_70;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  FD3D12Resource *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->field_0x38;
  local_70 = lpCriticalSection_00;
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
LAB_1459dc8d3:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection_00);
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  lVar3 = *(longlong *)this;
  if ((*(longlong *)(lVar3 + 0x10) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  local_a0 = *(FD3D12Adapter **)(lVar3 + 0x10);
  uVar18 = 0x10;
  if (0x10 < param_2) {
    uVar18 = param_2;
  }
  uVar19 = uVar18 + 0xf & 0xfffffff0;
  uVar18 = uVar19;
  if (uVar19 < param_1) {
    uVar18 = param_1;
  }
  uVar22 = (ulong64)uVar18;
  uVar17 = 1;
  if (uVar18 != 0) {
    uVar17 = uVar18;
  }
  uVar21 = 0;
  uVar15 = (ulonglong)(uVar17 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_90 = (uint)lVar3;
  if (5 < local_90) {
    uVar21 = (ulonglong)(local_90 - 6);
  }
  local_b8 = (uint)uVar21;
  local_a8 = uVar18;
  if ((0x15 < local_b8) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bucket < NumBuckets",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                          ,0x38e,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if (uVar18 < 0x41) {
    uVar17 = 0x40;
  }
  else {
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_8c = (undefined4)lVar3;
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (uVar17 % uVar19 != 0) {
    uVar16 = uVar18 + uVar19;
    uVar17 = 1;
    if (uVar16 != 0) {
      uVar17 = uVar16;
    }
    uVar21 = 0;
    uVar15 = (ulonglong)(uVar17 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_88 = (uint)lVar3;
    if (5 < local_88) {
      uVar21 = (ulonglong)(local_88 - 6);
    }
    local_b8 = (uint)uVar21;
    if (uVar16 < 0x41) {
      uVar17 = 0x40;
    }
    else {
      lVar3 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_84 = (undefined4)lVar3;
      uVar17 = 1 << ((byte)lVar3 & 0x1f);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this->AvailableBlocks + uVar21);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_1459dc8d3;
  EnterCriticalSection(lpCriticalSection);
  puVar23 = &this->AvailableBlocks[uVar21].Size;
  *puVar23 = *puVar23 - 1;
  pTVar14 = (this->AvailableBlocks[uVar21].Items.Tail)->NextNode;
  if (pTVar14 == (TNode *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    local_b0 = (FD3D12Resource *)0x0;
    if ((uVar17 < uVar18) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlockSize >= SizeInBytes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                            ,0x3a8,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if (uVar18 < 0x40000) {
      uVar22 = 0x40000;
    }
    iVar12 = FD3D12Adapter::CreateBuffer
                       (local_a0,*(D3D12_HEAP_TYPE *)&this->field_0x10,
                        (FRHIGPUMask)*(uint *)&this->field_0x8,
                        (FRHIGPUMask)*(uint *)&this->field_0xc,uVar22,&local_b0,L"BucketAllocator",
                        *(D3D12_RESOURCE_FLAGS *)&this->field_0x18);
    if (iVar12 < 0) {
      bVar10 = false;
      goto LAB_1459dc8ac;
    }
    pTVar2 = &this->SubAllocatedResources;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 <
         pFVar4 + (longlong)(this->SubAllocatedResources).ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar12 = (this->SubAllocatedResources).ArrayNum;
    piVar1 = &(this->SubAllocatedResources).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SubAllocatedResources).ArrayNum = iVar12 + 1;
    *(FD3D12Resource **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_b0;
    iVar12 = *(int *)&this->field_0x10;
    if ((*(int *)&this->field_0x10 == 4) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                            ,0x176,L""), iVar12 = _DAT_00000004, bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    if (iVar12 != 1) {
      pvVar13 = FD3D12Resource::Map(local_b0,(D3D12_RANGE *)0x0);
      if ((pvVar13 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BaseAddress",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                              ,0x3b5,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      if ((pvVar13 !=
           (void *)(((ulonglong)uVar19 - 1) + (longlong)pvVar13 & ~((ulonglong)uVar19 - 1))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BaseAddress == (uint8*)(((uint64)BaseAddress + Alignment - 1) & ~((uint64)Alignment - 1))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                              ,0x3b6,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    puVar23 = &(param_3->AllocatorData).BlockAllocatorPrivateData.Offset;
    *puVar23 = 0;
    (param_3->AllocatorData).BlockAllocatorPrivateData.BucketIndex = local_b8;
    (param_3->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = local_b0;
    LOCK();
    *(int *)&local_b0->_padding_ = (int)local_b0->_padding_ + 1;
    UNLOCK();
    local_80 = puVar23;
    if (uVar17 < 0x40000) {
      for (uVar18 = uVar17; local_80 = puVar23, uVar18 <= 0x40000 - uVar17; uVar18 = uVar18 + uVar17
          ) {
        local_68 = 0;
        uStack_60 = local_b8;
        LOCK();
        *(int *)&local_b0->_padding_ = (int)local_b0->_padding_ + 1;
        UNLOCK();
        uStack_5c = uVar18;
        local_58 = local_b0;
        EnterCriticalSection(lpCriticalSection);
        pTVar14 = ::operator_new(0x20);
        if (pTVar14 != (TNode *)0x0) {
          pTVar14->NextNode = (TNode *)0x0;
          *(undefined4 *)&(pTVar14->Item).FrameFence = (undefined4)local_68;
          *(undefined4 *)((longlong)&(pTVar14->Item).FrameFence + 4) = local_68._4_4_;
          (pTVar14->Item).BucketIndex = uStack_60;
          (pTVar14->Item).Offset = uStack_5c;
          (pTVar14->Item).ResourceHeap = local_58;
          pTVar5 = this->AvailableBlocks[uVar21].Items.Head;
          this->AvailableBlocks[uVar21].Items.Head = pTVar14;
          pTVar5->NextNode = pTVar14;
        }
        puVar23 = &this->AvailableBlocks[uVar21].Size;
        *puVar23 = *puVar23 + 1;
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection_00 = local_70;
        puVar23 = local_80;
      }
    }
  }
  else {
    uVar9 = *(undefined4 *)((longlong)&(pTVar14->Item).FrameFence + 4);
    uVar8 = *(undefined8 *)&(pTVar14->Item).BucketIndex;
    local_40 = 0;
    *(uint *)&param_3->AllocatorData = *(undefined4 *)&(pTVar14->Item).FrameFence;
    *(undefined4 *)((longlong)&param_3->AllocatorData + 4) = uVar9;
    *(undefined8 *)((longlong)&param_3->AllocatorData + 8) = uVar8;
    (param_3->AllocatorData).BlockAllocatorPrivateData.ResourceHeap = (pTVar14->Item).ResourceHeap;
    pTVar5 = this->AvailableBlocks[uVar21].Items.Tail;
    this->AvailableBlocks[uVar21].Items.Tail = pTVar14;
    (pTVar14->Item).FrameFence = 0;
    (pTVar14->Item).BucketIndex = 0;
    (pTVar14->Item).Offset = 0;
    local_50 = 0;
    uStack_48 = 0;
    (pTVar14->Item).ResourceHeap = (FD3D12Resource *)0x0;
    ::operator_delete(pTVar5,0x20);
    LeaveCriticalSection(lpCriticalSection);
    if (((param_3->AllocatorData).BlockAllocatorPrivateData.ResourceHeap == (FD3D12Resource *)0x0)
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Block.ResourceHeap",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                               ,0x39f,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    puVar23 = &(param_3->AllocatorData).BlockAllocatorPrivateData.Offset;
  }
  ppFVar20 = &(param_3->AllocatorData).BlockAllocatorPrivateData.ResourceHeap;
  uVar22 = (ulong64)*puVar23;
  uVar15 = (ulonglong)uVar19;
  if (uVar22 % uVar15 != 0) {
    uVar21 = (uVar22 - 1) + uVar15;
    uVar22 = uVar21 - uVar21 % uVar15;
  }
  (param_3->field3_0x18).Allocator = (FD3D12BuddyAllocator *)this;
  param_3->Type = eSubAllocation;
  param_3->AllocatorType = AT_Default;
  FD3D12ResourceLocation::SetResource(param_3,*ppFVar20);
  uVar15 = (ulonglong)local_a8;
  param_3->Size = uVar15;
  param_3->OffsetFromBaseOfResource = uVar22;
  param_3->GPUVirtualAddress = (*ppFVar20)->GPUVirtualAddress + uVar22;
  iVar12 = *(int *)&this->field_0x10;
  if ((*(int *)&this->field_0x10 == 4) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                          ,0x176,L""), iVar12 = _DAT_00000004, bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if (iVar12 != 1) {
    pFVar6 = *ppFVar20;
    if ((pFVar6->ResourceBaseAddress == (void *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ResourceBaseAddress",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                            ,0x13a,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    param_3->MappedBaseAddress = (void *)((longlong)pFVar6->ResourceBaseAddress + uVar22);
  }
  if (((ulonglong)uVar17 < (uVar15 - *puVar23) + param_3->OffsetFromBaseOfResource) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ResourceLocation.GetOffsetFromBaseOfResource() - Block.Offset + SizeInBytes <= BlockSize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                          ,0x3e4,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  bVar10 = true;
LAB_1459dc8ac:
  LeaveCriticalSection(lpCriticalSection_00);
  return bVar10;
}

