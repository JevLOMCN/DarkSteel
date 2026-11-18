// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 12

// FD3D12MultiBuddyAllocator @ 1459a9c30

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12MultiBuddyAllocator * __thiscall
FD3D12MultiBuddyAllocator::FD3D12MultiBuddyAllocator
          (FD3D12MultiBuddyAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          FD3D12ResourceInitConfig *param_3,FString *param_4,EResourceAllocationStrategy param_5,
          uint param_6,uint param_7,uint param_8,uint param_9)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  FD3D12ResourceAllocator::FD3D12ResourceAllocator
            ((FD3D12ResourceAllocator *)this,param_1,param_2,param_3,param_4,param_6);
  this->AllocationStrategy = param_5;
  this->MinBlockSize = param_8;
  this->DefaultPoolSize = param_7;
  (this->Allocators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocators).ArrayNum = 0;
  (this->Allocators).ArrayMax = 0;
  if ((param_4->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  uVar1 = MemoryTrace_HeapSpec(param_9,pwVar2,None);
  this->TraceHeapId = uVar1;
  return this;
}

// ~FD3D12MultiBuddyAllocator @ 1459ac9b0

void __thiscall
FD3D12MultiBuddyAllocator::~FD3D12MultiBuddyAllocator(FD3D12MultiBuddyAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  ReleaseAllResources(this);
  pFVar1 = (this->Allocators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CleanUpAllocations @ 1459b54a0

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
FD3D12MultiBuddyAllocator::CleanUpAllocations(FD3D12MultiBuddyAllocator *this,ulong64 param_1)

{
  int *piVar1;
  TArray<FD3D12BuddyAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  ulong64 local_res10;
  uint local_res18;
  LPCRITICAL_SECTION local_res20;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->_padding_;
  local_res10 = param_1;
  local_res20 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar2 = &this->Allocators;
  pFVar14 = (pTVar2->AllocatorInstance).Data;
  iVar12 = (this->Allocators).ArrayNum;
  pFVar3 = pFVar14 + (longlong)iVar12 * 8;
  while( true ) {
    if ((this->Allocators).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FD3D12BuddyAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 == pFVar3) break;
    FD3D12BuddyAllocator::CleanUpAllocations(*(FD3D12BuddyAllocator **)pFVar14);
    pFVar14 = pFVar14 + 8;
  }
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar16 = this->_padding_;
  if ((*(longlong *)(lVar16 + 0x10) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar16 = *(longlong *)(lVar16 + 0x10);
  if ((*(longlong *)(lVar16 + 0x548) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = FD3D12ManualFence::GetCompletedFenceValue(*(FD3D12ManualFence **)(lVar16 + 0x548),true);
  uVar13 = (this->Allocators).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar17 = (longlong)(int)uVar13;
    lVar16 = lVar17 * 8;
    do {
      local_res18 = ~uVar13;
      uVar15 = local_res18 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->Allocators).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar16);
      uVar9 = *(uint *)(lVar4 + 0xc0);
      uVar10 = 0;
      if ((int)uVar9 < *(int *)(lVar4 + 0xb0)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)((longlong)(int)uVar9 * 0x50 + 8 + *(longlong *)(lVar4 + 0xa8)) -
          *(int *)((longlong)(int)uVar9 * 0x50 + 0x34 + *(longlong *)(lVar4 + 0xa8)) == 1) {
        uVar9 = 0;
        if ((int)uVar13 < (this->Allocators).ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_res10 +
            *(longlong *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar16) + 0xb8) <= uVar11
           ) {
          uVar9 = 0;
          if ((int)uVar13 < (this->Allocators).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FD3D12BuddyAllocator::ReleaseAllResources
                    (*(FD3D12BuddyAllocator **)((pTVar2->AllocatorInstance).Data + lVar16));
          uVar9 = 0;
          if ((int)uVar13 < (this->Allocators).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pvVar5 = *(void **)((pTVar2->AllocatorInstance).Data + lVar16);
          if (pvVar5 != (void *)0x0) {
            DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
                      (*(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> **)
                        ((longlong)pvVar5 + 0xa8),*(int *)((longlong)pvVar5 + 0xb0));
            if (*(void **)((longlong)pvVar5 + 0xa8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar5 + 0xa8));
            }
            if (*(void **)((longlong)pvVar5 + 0x98) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar5 + 0x98));
            }
            puVar6 = *(undefined8 **)((longlong)pvVar5 + 0x90);
            if (puVar6 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar6 + 1);
              LOCK();
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar12 == 1) && (piVar1 != (int *)0x0)) {
                (**(code **)*puVar6)(puVar6,1);
              }
            }
            puVar6 = *(undefined8 **)((longlong)pvVar5 + 0x88);
            if (puVar6 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar6 + 1);
              LOCK();
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar12 == 1) && (piVar1 != (int *)0x0)) {
                (**(code **)*puVar6)(puVar6,1);
              }
            }
            DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar5 + 0x38));
            if (*(void **)((longlong)pvVar5 + 0x20) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar5 + 0x20));
            }
            ::operator_delete(pvVar5,0xd0);
          }
          uVar9 = 0;
          if ((int)uVar13 < (this->Allocators).ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar3 = (pTVar2->AllocatorInstance).Data + lVar17 * 8;
          iVar12 = local_res18 + (this->Allocators).ArrayNum;
          if (iVar12 != 0) {
            memmove(pFVar3,pFVar3 + 8,(longlong)iVar12 << 3);
          }
          piVar1 = &(this->Allocators).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->Allocators).ArrayNum,
                     &(this->Allocators).ArrayMax);
        }
      }
      lVar17 = lVar17 + -1;
      lVar16 = lVar16 + -8;
      uVar13 = uVar13 - 1;
      lpCriticalSection = local_res20;
    } while (-1 < (int)uVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x0001459b592c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// CreateNewAllocator @ 1459bae50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BuddyAllocator * __thiscall
FD3D12MultiBuddyAllocator::CreateNewAllocator(FD3D12MultiBuddyAllocator *this,uint param_1)

{
  ulonglong uVar1;
  FRHIGPUMask FVar2;
  EResourceAllocationStrategy EVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FD3D12BuddyAllocator *pFVar9;
  wchar_t *pwVar10;
  uint uVar11;
  
  if (*(uint *)((longlong)&this->_padding_ + 4) < param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMinSizeInBytes <= MaximumAllocationSizeForPooling",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,799,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FD3D12BuddyAllocator *)(*pcVar6)();
      return pFVar9;
    }
  }
  uVar11 = this->DefaultPoolSize;
  if (uVar11 < param_1) {
    uVar11 = 1;
    if (param_1 != 0) {
      uVar11 = param_1;
    }
    uVar1 = (ulonglong)(uVar11 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  pFVar9 = ::operator_new(0xd0);
  if (pFVar9 != (FD3D12BuddyAllocator *)0x0) {
    FVar2.GPUMask = *(uint *)((longlong)&this->_padding_ + 4);
    EVar3 = this->AllocationStrategy;
    uVar8 = this->TraceHeapId;
    uVar4 = this->MinBlockSize;
    if (this->_padding_ == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FD3D12BuddyAllocator *)(*pcVar6)();
        return pFVar9;
      }
    }
    FD3D12ResourceAllocator::FD3D12ResourceAllocator
              ((FD3D12ResourceAllocator *)pFVar9,(FD3D12Device *)this->_padding_,FVar2,
               (FD3D12ResourceInitConfig *)&this->_padding_,(FString *)&this->_padding_,uVar11);
    pFVar9->MaxBlockSize = uVar11;
    pFVar9->MinBlockSize = uVar4;
    pwVar10 = L"BuddyAllocator (ManualSubAllocation)";
    pFVar9->AllocationStrategy = EVar3;
    (pFVar9->BackingResource).Reference = (FD3D12Resource *)0x0;
    (pFVar9->BackingHeap).Reference = (FD3D12Heap *)0x0;
    EVar3 = pFVar9->AllocationStrategy;
    (pFVar9->DeferredDeletionQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->DeferredDeletionQueue).ArrayNum = 0;
    (pFVar9->DeferredDeletionQueue).ArrayMax = 0;
    (pFVar9->FreeBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->FreeBlocks).ArrayNum = 0;
    (pFVar9->FreeBlocks).ArrayMax = 0;
    pFVar9->LastUsedFrameFence = 0;
    pFVar9->TotalSizeUsed = 0;
    pFVar9->HeapFullMessageDisplayed = false;
    if (EVar3 == kPlacedResource) {
      pwVar10 = L"BuddyAllocator (PlacedResource)";
    }
    uVar11 = MemoryTrace_HeapSpec(uVar8,pwVar10,None);
    pFVar9->TraceHeapId = uVar11;
    if (pFVar9->MaxBlockSize % pFVar9->MinBlockSize != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(MaxBlockSize / MinBlockSize) * MinBlockSize == MaxBlockSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0xfd,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FD3D12BuddyAllocator *)(*pcVar6)();
        return pFVar9;
      }
    }
    uVar11 = pFVar9->MaxBlockSize / pFVar9->MinBlockSize;
    if ((uVar11 & uVar11 - 1) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == ((MaxBlockSize / MinBlockSize) & ((MaxBlockSize / MinBlockSize) - 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FD3D12BuddyAllocator *)(*pcVar6)();
        return pFVar9;
      }
    }
    if ((pFVar9->MinBlockSize & 0xf) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == (MinBlockSize % 16)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0xff,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FD3D12BuddyAllocator *)(*pcVar6)();
        return pFVar9;
      }
    }
    uVar8 = (((pFVar9->MaxBlockSize - 1) + pFVar9->MinBlockSize) / pFVar9->MinBlockSize) * 2 - 1;
    uVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    pFVar9->MaxOrder = uVar11;
    FD3D12BuddyAllocator::Reset(pFVar9);
    return pFVar9;
  }
  return (FD3D12BuddyAllocator *)0x0;
}

// Deallocate @ 1459bc6d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12MultiBuddyAllocator::Deallocate
          (FD3D12MultiBuddyAllocator *this,FD3D12ResourceLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                     ,0x31a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Destroy @ 1459bd430

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12MultiBuddyAllocator::Destroy(FD3D12MultiBuddyAllocator *this)

{
  int *piVar1;
  TArray<FD3D12BuddyAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  pTVar2 = &this->Allocators;
  uVar10 = (this->Allocators).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 8;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < (this->Allocators).ArrayNum) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11) != 0) {
        uVar8 = 0;
        if ((int)uVar10 < (this->Allocators).ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FD3D12BuddyAllocator::ReleaseAllResources
                  (*(FD3D12BuddyAllocator **)((pTVar2->AllocatorInstance).Data + lVar11));
        uVar8 = 0;
        if ((int)uVar10 < (this->Allocators).ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar4 = *(void **)((pTVar2->AllocatorInstance).Data + lVar11);
        if (pvVar4 != (void *)0x0) {
          DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
                    (*(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> **)
                      ((longlong)pvVar4 + 0xa8),*(int *)((longlong)pvVar4 + 0xb0));
          if (*(void **)((longlong)pvVar4 + 0xa8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0xa8));
          }
          if (*(void **)((longlong)pvVar4 + 0x98) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x98));
          }
          puVar5 = *(undefined8 **)((longlong)pvVar4 + 0x90);
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          puVar5 = *(undefined8 **)((longlong)pvVar4 + 0x88);
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar4 + 0x38));
          if (*(void **)((longlong)pvVar4 + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x20));
          }
          ::operator_delete(pvVar4,0xd0);
        }
      }
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  (this->Allocators).ArrayNum = 0;
  if ((this->Allocators).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->Allocators).ArrayMax);
  }
  return;
}

// DumpAllocatorStats @ 1459bdf60

void __thiscall
FD3D12MultiBuddyAllocator::DumpAllocatorStats
          (FD3D12MultiBuddyAllocator *this,FOutputDevice *param_1)

{
  return;
}

// Initialize @ 1459c53b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12MultiBuddyAllocator::Initialize(FD3D12MultiBuddyAllocator *this)

{
  int *piVar1;
  TArray<FD3D12BuddyAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12BuddyAllocator *local_18 [2];
  
  pTVar2 = &this->Allocators;
  local_18[0] = CreateNewAllocator(this,this->DefaultPoolSize);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Allocators).ArrayMax * 8)) {
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
  iVar6 = (this->Allocators).ArrayNum;
  piVar1 = &(this->Allocators).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Allocators).ArrayNum = iVar6 + 1;
  *(FD3D12BuddyAllocator **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// ReleaseAllResources @ 1459d4440

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12MultiBuddyAllocator::ReleaseAllResources(FD3D12MultiBuddyAllocator *this)

{
  int *piVar1;
  TArray<FD3D12BuddyAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  pTVar2 = &this->Allocators;
  uVar10 = (this->Allocators).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 8;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < (this->Allocators).ArrayNum) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11) != 0) {
        uVar8 = 0;
        if ((int)uVar10 < (this->Allocators).ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FD3D12BuddyAllocator::ReleaseAllResources
                  (*(FD3D12BuddyAllocator **)((pTVar2->AllocatorInstance).Data + lVar11));
        uVar8 = 0;
        if ((int)uVar10 < (this->Allocators).ArrayNum) {
          uVar8 = uVar9;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar4 = *(void **)((pTVar2->AllocatorInstance).Data + lVar11);
        if (pvVar4 != (void *)0x0) {
          DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
                    (*(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> **)
                      ((longlong)pvVar4 + 0xa8),*(int *)((longlong)pvVar4 + 0xb0));
          if (*(void **)((longlong)pvVar4 + 0xa8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0xa8));
          }
          if (*(void **)((longlong)pvVar4 + 0x98) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x98));
          }
          puVar5 = *(undefined8 **)((longlong)pvVar4 + 0x90);
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          puVar5 = *(undefined8 **)((longlong)pvVar4 + 0x88);
          if (puVar5 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar5 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar4 + 0x38));
          if (*(void **)((longlong)pvVar4 + 0x20) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar4 + 0x20));
          }
          ::operator_delete(pvVar4,0xd0);
        }
      }
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  (this->Allocators).ArrayNum = 0;
  if ((this->Allocators).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->Allocators).ArrayMax);
  }
  return;
}

// Reset @ 1459d6b90

void __thiscall FD3D12MultiBuddyAllocator::Reset(FD3D12MultiBuddyAllocator *this)

{
  return;
}

// TryAllocate @ 1459dca40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12MultiBuddyAllocator::TryAllocate
          (FD3D12MultiBuddyAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3
          )

{
  longlong *lpCriticalSection;
  int *piVar1;
  TArray<FD3D12BuddyAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FD3D12BuddyAllocator *local_38 [2];
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = &this->Allocators;
  uVar8 = 0;
  if (0 < (this->Allocators).ArrayNum) {
    lVar10 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar8 < (this->Allocators).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = FD3D12BuddyAllocator::TryAllocate
                        (*(FD3D12BuddyAllocator **)((pTVar2->AllocatorInstance).Data + lVar10),
                         param_1,param_2,param_3);
      if (bVar5) {
        bVar5 = true;
        goto LAB_1459dcc3a;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < (this->Allocators).ArrayNum);
  }
  local_38[0] = CreateNewAllocator(this,param_1);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this->Allocators).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (this->Allocators).ArrayNum;
  piVar1 = &(this->Allocators).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
    (this->Allocators).ArrayNum = iVar7;
  }
  (this->Allocators).ArrayNum = iVar7 + 1;
  *(FD3D12BuddyAllocator **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
  iVar7 = (this->Allocators).ArrayNum;
  uVar9 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar7) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = FD3D12BuddyAllocator::TryAllocate
                    (*(FD3D12BuddyAllocator **)
                      ((pTVar2->AllocatorInstance).Data +
                      (longlong)(this->Allocators).ArrayNum * 8 + -8),param_1,param_2,param_3);
LAB_1459dcc3a:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

// UpdateMemoryStats @ 1459df690

void __thiscall
FD3D12MultiBuddyAllocator::UpdateMemoryStats
          (FD3D12MultiBuddyAllocator *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6)

{
  longlong *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  uint *local_res10;
  
  lpCriticalSection = &this->_padding_;
  local_res10 = param_1;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->Allocators).AllocatorInstance.Data;
    iVar2 = (this->Allocators).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Allocators).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FD3D12BuddyAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      lVar3 = *(longlong *)pFVar4;
      *local_res10 = *local_res10 + *(int *)(lVar3 + 0x78);
      *param_2 = *param_2 + *(int *)(lVar3 + 100);
      *param_3 = *param_3 + (*(int *)(lVar3 + 0x78) - *(int *)(lVar3 + 0x60));
      *param_4 = *param_4 + (*(int *)(lVar3 + 0x60) - *(int *)(lVar3 + 100));
      *param_5 = *param_5 + 1;
      if (*(int *)(lVar3 + 0x78) == *(int *)(lVar3 + 0x60)) {
        *param_6 = *param_6 + 1;
      }
      pFVar4 = pFVar4 + 8;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459df775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

