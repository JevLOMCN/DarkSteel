// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 15

// FD3D12BuddyAllocator @ 1459a7e20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BuddyAllocator * __thiscall
FD3D12BuddyAllocator::FD3D12BuddyAllocator
          (FD3D12BuddyAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          FD3D12ResourceInitConfig *param_3,FString *param_4,EResourceAllocationStrategy param_5,
          uint param_6,uint param_7,uint param_8,uint param_9)

{
  EResourceAllocationStrategy EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FD3D12BuddyAllocator *pFVar6;
  wchar_t *pwVar7;
  
  FD3D12ResourceAllocator::FD3D12ResourceAllocator
            ((FD3D12ResourceAllocator *)this,param_1,param_2,param_3,param_4,param_6);
  pwVar7 = L"BuddyAllocator (ManualSubAllocation)";
  this->MaxBlockSize = param_7;
  this->MinBlockSize = param_8;
  this->AllocationStrategy = param_5;
  (this->BackingResource).Reference = (FD3D12Resource *)0x0;
  (this->BackingHeap).Reference = (FD3D12Heap *)0x0;
  EVar1 = this->AllocationStrategy;
  (this->DeferredDeletionQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  (this->DeferredDeletionQueue).ArrayMax = 0;
  (this->FreeBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeBlocks).ArrayNum = 0;
  (this->FreeBlocks).ArrayMax = 0;
  this->LastUsedFrameFence = 0;
  this->TotalSizeUsed = 0;
  this->HeapFullMessageDisplayed = false;
  if (EVar1 == kPlacedResource) {
    pwVar7 = L"BuddyAllocator (PlacedResource)";
  }
  uVar4 = MemoryTrace_HeapSpec(param_9,pwVar7,None);
  this->TraceHeapId = uVar4;
  if (this->MaxBlockSize % this->MinBlockSize != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(MaxBlockSize / MinBlockSize) * MinBlockSize == MaxBlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0xfd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12BuddyAllocator *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = this->MaxBlockSize / this->MinBlockSize;
  if ((uVar4 & uVar4 - 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 == ((MaxBlockSize / MinBlockSize) & ((MaxBlockSize / MinBlockSize) - 1))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12BuddyAllocator *)(*pcVar2)();
      return pFVar6;
    }
  }
  if ((this->MinBlockSize & 0xf) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 == (MinBlockSize % 16)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FD3D12BuddyAllocator *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar5 = (((this->MaxBlockSize - 1) + this->MinBlockSize) / this->MinBlockSize) * 2 - 1;
  uVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  this->MaxOrder = uVar4;
  Reset(this);
  return this;
}

// Allocate @ 1459b0880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BuddyAllocator::Allocate
          (FD3D12BuddyAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3)

{
  longlong *lpCriticalSection;
  int *piVar1;
  uint uVar2;
  FD3D12Resource *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FLLMPauseScope local_50;
  FLLMPauseScope local_40 [2];
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((char)this->_padding_ == '\0') {
    Initialize(this);
    *(undefined1 *)&this->_padding_ = 1;
  }
  uVar2 = this->MinBlockSize;
  uVar6 = 0x10;
  if (0x10 < param_2) {
    uVar6 = param_2;
  }
  uVar9 = uVar6 + 0xf & 0xfffffff0;
  uVar6 = param_1 + uVar9;
  if (uVar2 % uVar9 == 0) {
    uVar6 = param_1;
  }
  uVar6 = (((uVar6 - 1) + uVar2) / uVar2) * 2 - 1;
  uVar2 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar6 = AllocateBlock(this,uVar2);
  uVar11 = this->MinBlockSize * uVar6;
  uVar10 = this->MinBlockSize << ((byte)uVar2 & 0x1f);
  iVar7 = 0;
  if (((uVar11 % uVar9 != 0) &&
      (iVar7 = (int)((((ulonglong)uVar11 - 1) + (ulonglong)uVar9) / (ulonglong)uVar9) * uVar9 -
               uVar11, uVar10 < iVar7 + param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Padding + SizeInBytes) <= AllocSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x1c3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)&this->_padding_ = (int)this->_padding_ + uVar10;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + param_1;
  FLLMPauseScope::FLLMPauseScope
            (local_40,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,-(ulonglong)param_1,
             Platform,System);
  FLLMPauseScope::FLLMPauseScope
            (&local_50,LLMTagDeclaration_D3D12AllocatorWasted.UniqueName,false,
             (ulonglong)(uVar10 - param_1),Platform,System);
  this->TotalSizeUsed = this->TotalSizeUsed + uVar10;
  uVar10 = *(uint *)((longlong)&this->_padding_ + 4);
  if (*(uint *)((longlong)&this->_padding_ + 4) < uVar10) {
    *(uint *)((longlong)&this->_padding_ + 4) = uVar10;
  }
  uVar8 = (ulonglong)(iVar7 + uVar11);
  if (((iVar7 + uVar11) % uVar9 != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AlignedOffsetFromResourceBase % Alignment) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x1d8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_3->AllocatorData).BuddyAllocatorPrivateData.Order = uVar2;
  (param_3->AllocatorData).BuddyAllocatorPrivateData.Offset = uVar6;
  param_3->Type = eSubAllocation;
  param_3->AllocatorType = AT_Default;
  (param_3->field3_0x18).Allocator = this;
  param_3->Size = (ulonglong)param_1;
  if (this->AllocationStrategy == kManualSubAllocation) {
    param_3->OffsetFromBaseOfResource = uVar8;
    FD3D12ResourceLocation::SetResource(param_3,(this->BackingResource).Reference);
    param_3->GPUVirtualAddress = ((this->BackingResource).Reference)->GPUVirtualAddress + uVar8;
    iVar7 = (int)this->_padding_;
    if ((iVar7 == 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x176,L""), iVar7 = _DAT_00000004, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar7 != 1) {
      pFVar3 = (this->BackingResource).Reference;
      if ((pFVar3->ResourceBaseAddress == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResourceBaseAddress",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                             ,0x13a,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_3->MappedBaseAddress = (void *)((longlong)pFVar3->ResourceBaseAddress + uVar8);
    }
  }
  FLLMPauseScope::~FLLMPauseScope(&local_50);
  FLLMPauseScope::~FLLMPauseScope(local_40);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AllocateBlock @ 1459b12d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FD3D12BuddyAllocator::AllocateBlock(FD3D12BuddyAllocator *this,uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint local_res8 [2];
  int local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  
  if (this->MaxOrder < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x16a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  uVar9 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->FreeBlocks).ArrayNum) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  pFVar13 = (this->FreeBlocks).AllocatorInstance.Data;
  lVar14 = (longlong)(int)param_1 * 0x50;
  if (*(int *)(pFVar13 + lVar14 + 8) == *(int *)(pFVar13 + lVar14 + 0x34)) {
    uVar5 = AllocateBlock(this,param_1 + 1);
    local_res10[0] = (1 << ((byte)param_1 & 0x1f)) + uVar5;
    uVar10 = 0;
    if ((int)param_1 < (this->FreeBlocks).ArrayNum) {
      uVar10 = uVar9;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               ((this->FreeBlocks).AllocatorInstance.Data + lVar14),local_res18,(bool *)local_res10)
    ;
  }
  else {
    uVar5 = 0;
    if ((int)param_1 < (this->FreeBlocks).ArrayNum) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    iVar7 = 0;
    pFVar13 = (this->FreeBlocks).AllocatorInstance.Data + lVar14;
    iVar2 = *(int *)(pFVar13 + 0x28);
    iVar11 = 0;
    iVar6 = 0;
    if (iVar2 != 0) {
      pFVar12 = *(FScriptContainerElement **)(pFVar13 + 0x20);
      if (*(FScriptContainerElement **)(pFVar13 + 0x20) == (FScriptContainerElement *)0x0) {
        pFVar12 = pFVar13 + 0x10;
      }
      uVar5 = *(uint *)pFVar12;
      while (uVar5 == 0) {
        lVar8 = (longlong)iVar7;
        iVar11 = iVar11 + 0x20;
        iVar7 = iVar7 + 1;
        iVar6 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_1459b1502;
        uVar5 = *(uint *)(pFVar12 + (lVar8 + 1) * 4);
      }
      uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res20 = (int)lVar8;
      iVar6 = iVar11 + -1 + local_res20;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
    }
LAB_1459b1502:
    uVar5 = *(uint *)(*(longlong *)pFVar13 + (longlong)iVar6 * 0xc);
    uVar10 = 0;
    if ((int)param_1 < (this->FreeBlocks).ArrayNum) {
      uVar10 = uVar9;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
              ((this->FreeBlocks).AllocatorInstance.Data + lVar14);
    local_res8[0] = *(uint *)(*(longlong *)pFVar13 + (longlong)iVar6 * 0xc);
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      RemoveImpl<unsigned_int>(this_00,local_res8[0],local_res8);
    }
  }
  return uVar5;
}

// CanAllocate @ 1459b4250

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12BuddyAllocator::CanAllocate(FD3D12BuddyAllocator *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = this->MaxBlockSize;
  if (this->TotalSizeUsed != uVar8) {
    if ((param_2 != 0) && (this->MinBlockSize % param_2 != 0)) {
      param_1 = param_1 + param_2;
    }
    uVar6 = (this->FreeBlocks).ArrayNum - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 * 0x50;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->FreeBlocks).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->FreeBlocks).AllocatorInstance.Data;
        if ((*(int *)(pFVar1 + lVar7 + 8) != *(int *)(pFVar1 + lVar7 + 0x34)) && (param_1 <= uVar8))
        {
          return true;
        }
        uVar8 = uVar8 >> 1;
        if (uVar8 < param_1) {
          return false;
        }
        lVar7 = lVar7 + -0x50;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
  }
  return false;
}

// CleanUpAllocations @ 1459b5240

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

void __thiscall FD3D12BuddyAllocator::CleanUpAllocations(FD3D12BuddyAllocator *this)

{
  longlong *lpCriticalSection;
  int *piVar1;
  FD3D12ManualFence *this_00;
  ulonglong uVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong64 uVar7;
  uint uVar8;
  longlong lVar9;
  RetiredBlock *pRVar10;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar9 = this->_padding_;
  if (*(longlong *)(lVar9 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x10);
  if (*(longlong *)(lVar9 + 0x548) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameFence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FD3D12ManualFence **)(lVar9 + 0x548);
  uVar8 = 0;
  if (0 < (this->DeferredDeletionQueue).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->DeferredDeletionQueue).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pRVar10 = (RetiredBlock *)((this->DeferredDeletionQueue).AllocatorInstance.Data + lVar9);
      uVar2 = pRVar10->FrameFence;
      uVar7 = FD3D12ManualFence::GetCompletedFenceValue(this_00,false);
      if (uVar7 < uVar2) break;
      DeallocateInternal(this,pRVar10);
      *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar8 < (this->DeferredDeletionQueue).ArrayNum);
    if (uVar8 != 0) {
      uVar5 = 0;
      if ((int)uVar8 <= (this->DeferredDeletionQueue).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Dst = (this->DeferredDeletionQueue).AllocatorInstance.Data;
      iVar6 = (this->DeferredDeletionQueue).ArrayNum - uVar8;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x20,(longlong)iVar6 << 5);
      }
      piVar1 = &(this->DeferredDeletionQueue).ArrayNum;
      *piVar1 = *piVar1 - uVar8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001459b5475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Deallocate @ 1459bc4e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BuddyAllocator::Deallocate(FD3D12BuddyAllocator *this,FD3D12ResourceLocation *param_1)

{
  longlong *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_1->AllocatorType != AT_Default) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AT_Default == AllocatorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,0x2b9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_1->field3_0x18).Allocator != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOwner(ResourceLocation)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                       ,0x214,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = this->_padding_;
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x548) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->DeferredDeletionQueue).ArrayNum;
    piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
    lVar2 = *(longlong *)(lVar2 + 0x548);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->DeferredDeletionQueue).AllocatorInstance,piVar1);
    }
    (this->DeferredDeletionQueue).ArrayNum = iVar5 + 1;
    pFVar7 = (this->DeferredDeletionQueue).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
    *(longlong *)pFVar7 = 0;
    *(longlong *)(pFVar7 + 8) = 0;
    *(longlong *)(pFVar7 + 0x10) = 0;
    *(longlong *)(pFVar7 + 0x18) = 0;
    uVar6 = (ulonglong)(*(int *)(lVar2 + 0x58) + 1);
    *(ulonglong *)(pFVar7 + 8) = uVar6;
    *(uint *)(pFVar7 + 0x14) = (param_1->AllocatorData).BuddyAllocatorPrivateData.Order;
    *(uint *)(pFVar7 + 0x10) = (param_1->AllocatorData).BuddyAllocatorPrivateData.Offset;
    *(int *)(pFVar7 + 0x18) = (int)param_1->Size;
    if (uVar6 < this->LastUsedFrameFence) {
      uVar6 = this->LastUsedFrameFence;
    }
    this->LastUsedFrameFence = uVar6;
    if ((param_1->UnderlyingResource->Heap).Reference != (FD3D12Heap *)0x0) {
      *(FD3D12Resource **)pFVar7 = param_1->UnderlyingResource;
    }
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
                    /* WARNING: Could not recover jumptable at 0x0001459bc6af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DeallocateBlock @ 1459bcc70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BuddyAllocator::DeallocateBlock(FD3D12BuddyAllocator *this,uint param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  
  uVar6 = param_1 ^ 1 << (param_2 & 0x1f);
  uVar8 = ~param_2 >> 0x1f;
  uVar4 = 0;
  if ((int)param_2 < (this->FreeBlocks).ArrayNum) {
    uVar4 = uVar8;
  }
  local_res10[0] = param_1;
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = (longlong)(int)param_2 * 0x50;
  pFVar7 = (this->FreeBlocks).AllocatorInstance.Data + lVar9;
  if (*(int *)(pFVar7 + 8) != *(int *)(pFVar7 + 0x34)) {
    pFVar5 = *(FScriptContainerElement **)(pFVar7 + 0x40);
    if (*(FScriptContainerElement **)(pFVar7 + 0x40) == (FScriptContainerElement *)0x0) {
      pFVar5 = pFVar7 + 0x38;
    }
    uVar4 = *(uint *)(pFVar5 + (ulonglong)(*(int *)(pFVar7 + 0x48) - 1U & uVar6) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)pFVar7 + (longlong)(int)uVar4 * 0xc);
        if (*(uint *)(*(longlong *)pFVar7 + (longlong)(int)uVar4 * 0xc) == uVar6) {
          if (puVar1 != (uint *)0x0) {
            if (local_res10[0] < uVar6) {
              uVar6 = local_res10[0];
            }
            DeallocateBlock(this,uVar6,param_2 + 1);
            uVar6 = 0;
            if ((int)param_2 < (this->FreeBlocks).ArrayNum) {
              uVar6 = uVar8;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_res18[0] = *puVar1;
            this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                      ((this->FreeBlocks).AllocatorInstance.Data + lVar9);
            if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
              return;
            }
            TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
            RemoveImpl<unsigned_int>(this_00,local_res18[0],local_res18);
            return;
          }
          break;
        }
        uVar4 = puVar1[1];
      } while (uVar4 != 0xffffffff);
    }
  }
  uVar6 = 0;
  if ((int)param_2 < (this->FreeBlocks).ArrayNum) {
    uVar6 = uVar8;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>
            ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             ((this->FreeBlocks).AllocatorInstance.Data + lVar9),local_res8,(bool *)local_res10);
  return;
}

// DeallocateInternal @ 1459bce50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BuddyAllocator::DeallocateInternal(FD3D12BuddyAllocator *this,RetiredBlock *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  FD3D12Resource *pFVar7;
  int iVar8;
  FD3D12Resource *pFVar9;
  FLLMPauseScope local_28;
  FLLMPauseScope local_18;
  
  DeallocateBlock(this,(param_1->Data).Offset,(param_1->Data).Order);
  bVar4 = (byte)(param_1->Data).Order & 0x1f;
  iVar8 = this->MinBlockSize << bVar4;
  *(int *)&this->_padding_ = (int)this->_padding_ - iVar8;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 - param_1->AllocationSize;
  FLLMPauseScope::FLLMPauseScope
            (&local_18,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,
             (ulonglong)param_1->AllocationSize,Platform,System);
  FLLMPauseScope::FLLMPauseScope
            (&local_28,LLMTagDeclaration_D3D12AllocatorWasted.UniqueName,false,
             -(ulonglong)(iVar8 - param_1->AllocationSize),Platform,System);
  this->TotalSizeUsed = this->TotalSizeUsed - iVar8;
  if (this->AllocationStrategy == kPlacedResource) {
    if (param_1->PlacedResource == (FD3D12Resource *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Block.PlacedResource != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x24e,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar7 = param_1->PlacedResource;
    plVar2 = &pFVar7->_padding_;
    LOCK();
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    pFVar9 = (FD3D12Resource *)(ulonglong)(uint)(0 << bVar4);
    if ((int)lVar5 == 1) {
      if (plVar2 == (longlong *)0x0) {
        pFVar7 = pFVar9;
      }
      if (pFVar7 != (FD3D12Resource *)0x0) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    param_1->PlacedResource = pFVar9;
  }
  FLLMPauseScope::~FLLMPauseScope(&local_28);
  FLLMPauseScope::~FLLMPauseScope(&local_18);
  return;
}

// Destroy @ 1459bd180

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BuddyAllocator::Destroy(FD3D12BuddyAllocator *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FD3D12Resource *pFVar4;
  ulong64 uVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  RetiredBlock *pRVar9;
  RetiredBlock *pRVar10;
  undefined1 auStackX_8 [8];
  FLLMPauseScope FStack_38;
  FLLMPauseScope FStack_28;
  
  FLLMPauseScope::FLLMPauseScope(&FStack_28,Untagged,false,0,Default,System);
  FLLMPauseScope::FLLMPauseScope
            (&FStack_38,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,
             -(ulonglong)this->MaxBlockSize,Platform,System);
  if (((this->AllocationStrategy != kPlacedResource) &&
      (pFVar4 = (this->BackingResource).Reference, pFVar4 != (FD3D12Resource *)0x0)) &&
     (uVar5 = pFVar4->GPUVirtualAddress, uVar5 != 0)) {
    MemoryTrace_UnmarkAllocAsHeap(uVar5,this->TraceHeapId,0);
    MemoryTrace_Free(uVar5,1,0);
  }
  iVar3 = (this->DeferredDeletionQueue).ArrayNum;
  pRVar10 = (RetiredBlock *)(this->DeferredDeletionQueue).AllocatorInstance.Data;
  pRVar9 = pRVar10 + iVar3;
  while( true ) {
    if ((this->DeferredDeletionQueue).ArrayNum != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FD3D12BuddyAllocator::RetiredBlock,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (pRVar10 == pRVar9) break;
    DeallocateInternal(this,pRVar10);
    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
    pRVar10 = pRVar10 + 1;
  }
  piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar1);
  }
  pFVar4 = (this->BackingResource).Reference;
  if (pFVar4 != (FD3D12Resource *)0x0) {
    if (((int)pFVar4->_padding_ != 1) && (GNumExplicitGPUsForRendering < 2)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<981708483097264786>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x292,
                         "BackingResource->GetRefCount() == 1 || GNumExplicitGPUsForRendering > 1");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (this->BackingResource).Reference;
    if (pFVar4 != (FD3D12Resource *)0x0) {
      (this->BackingResource).Reference = (FD3D12Resource *)0x0;
      plVar2 = &pFVar4->_padding_;
      LOCK();
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  FLLMPauseScope::~FLLMPauseScope(&FStack_38);
  FLLMPauseScope::~FLLMPauseScope(&FStack_28);
  return;
}

// DumpAllocatorStats @ 1459bde00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12BuddyAllocator::DumpAllocatorStats(FD3D12BuddyAllocator *this,FOutputDevice *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  undefined4 local_88;
  FName local_78 [2];
  FBufferedOutputDevice local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FBufferedOutputDevice::FBufferedOutputDevice(&local_68);
  iVar1 = (int)this->_padding_;
  if (iVar1 < 1) {
    local_b8 = 0;
    local_b0 = (longlong)iVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FName::FName(local_78,(wchar_t *)this->_padding_);
  FOutputDevice::CategorizedLogfImpl((FOutputDevice *)&local_68,local_78,Log,L"");
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_68,local_78,Log,
             L"Heap Size | MinBlock Size | Space Used | Peak Usage | Unpooled Allocations | Internal Fragmentation | Blocks in Deferred Delete Queue "
            );
  FOutputDevice::CategorizedLogfImpl((FOutputDevice *)&local_68,local_78,Log,L"----------");
  local_a8 = (int)this->_padding_;
  local_88 = (undefined4)this->_padding_;
  local_90 = (ulonglong)(uint)(local_a8 - *(int *)((longlong)&this->_padding_ + 4));
  local_98 = (undefined4)this->_padding_;
  local_a0 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_b0 = CONCAT44(local_b0._4_4_,this->MinBlockSize);
  local_b8 = CONCAT44(local_b8._4_4_,this->MaxBlockSize);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_68,local_78,Log,L"% 10i % 10i % 16i % 12i % 13i % 8i % 10I");
  FBufferedOutputDevice::RedirectTo(&local_68,param_1);
  FBufferedOutputDevice::~FBufferedOutputDevice(&local_68);
  return;
}

// Initialize @ 1459c4f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

void __thiscall FD3D12BuddyAllocator::Initialize(FD3D12BuddyAllocator *this)

{
  longlong *plVar1;
  TRefCountPtr<FD3D12Resource> *pTVar2;
  uint uVar3;
  FRHIGPUMask FVar4;
  ED3D12Access EVar5;
  longlong lVar6;
  FD3D12Adapter *this_00;
  ID3D12Device *pIVar7;
  FD3D12Resource *pFVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  FD3D12Heap *pFVar13;
  FD3D12Heap *pFVar14;
  undefined1 auStackY_128 [32];
  FLLMScope local_d8 [2];
  ID3D12Heap *local_d0;
  FString local_c8;
  FString local_b8;
  FLLMPauseScope local_a8;
  FLLMPauseScope local_98;
  FLLMPauseScope local_88;
  FLLMPauseScope local_78;
  D3D12_HEAP_PROPERTIES local_68;
  ulonglong local_50;
  undefined4 local_48;
  undefined8 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar6 = this->_padding_;
  if ((*(longlong *)(lVar6 + 0x10) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_68.VisibleNodeMask = 1;
  this_00 = *(FD3D12Adapter **)(lVar6 + 0x10);
  if (this->AllocationStrategy == kPlacedResource) {
    local_48 = (undefined4)this->_padding_;
    if (GVirtualMGPU == 0) {
      local_68.VisibleNodeMask = (uint)this->_padding_;
      local_38 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    }
    else {
      local_38 = 1;
    }
    local_50 = (ulonglong)this->MaxBlockSize;
    pFVar14 = (FD3D12Heap *)0x0;
    local_28 = *(uint *)((longlong)&this->_padding_ + 4);
    local_34 = 0;
    local_24 = 0;
    local_44 = 0;
    local_30 = 0;
    if (this_00->bHeapNotZeroedSupported != false) {
      local_28 = local_28 | 0x1000;
    }
    local_d0 = (ID3D12Heap *)0x0;
    local_3c = local_68.VisibleNodeMask;
    FLLMScope::FLLMScope(local_d8,GraphicsPlatform,false,None,Platform,true);
    FLLMPauseScope::FLLMPauseScope(&local_98,Untagged,false,0,Default,System);
    pIVar7 = (this_00->RootDevice).Reference;
    iVar12 = (**(code **)((longlong)*pIVar7 + 0xe0))
                       (pIVar7,&local_50,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3,&local_d0);
    if (iVar12 < 0) {
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar12,"Adapter->GetD3DDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&Heap))",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                 ,0x121,(ID3D12Device *)0x0,&local_c8);
    }
    FLLMPauseScope::FLLMPauseScope
              (&local_a8,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,
               (ulonglong)this->MaxBlockSize,Platform,System);
    FLLMPauseScope::~FLLMPauseScope(&local_a8);
    FLLMPauseScope::~FLLMPauseScope(&local_98);
    FLLMScope::~FLLMScope(local_d8);
    pFVar13 = ::operator_new(0x88);
    if (pFVar13 != (FD3D12Heap *)0x0) {
      uVar3 = this->TraceHeapId;
      FVar4.GPUMask = *(uint *)((longlong)&this->_padding_ + 4);
      if ((this->_padding_ == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parent != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x59,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar14 = FD3D12Heap::FD3D12Heap(pFVar13,(FD3D12Device *)this->_padding_,FVar4,uVar3);
    }
    pFVar13 = (this->BackingHeap).Reference;
    if (pFVar13 != pFVar14) {
      (this->BackingHeap).Reference = pFVar14;
      if (pFVar14 != (FD3D12Heap *)0x0) {
        LOCK();
        *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar13 != (FD3D12Heap *)0x0) {
        plVar1 = &pFVar13->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar13->_padding_)(pFVar13,1);
        }
      }
    }
    FD3D12Heap::SetHeap((this->BackingHeap).Reference,local_d0,L"BuddyAllocator Heap",true,false);
    iVar12 = (int)this->_padding_;
    if ((iVar12 == 4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                            ,0x176,L""), iVar12 = _DAT_00000004, bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (iVar12 == 1) {
      FD3D12Heap::BeginTrackingResidency((this->BackingHeap).Reference,local_50);
    }
  }
  else {
    if (GVirtualMGPU == 0) {
      local_68.VisibleNodeMask = *(uint *)((longlong)&this->_padding_ + 4);
      local_68.CreationNodeMask = (uint)this->_padding_;
    }
    else {
      local_68.CreationNodeMask = 1;
    }
    local_68.Type = (D3D12_HEAP_TYPE)this->_padding_;
    local_68.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    local_68.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    FLLMPauseScope::FLLMPauseScope(&local_78,Untagged,false,0,Default,System);
    lVar6 = this->_padding_;
    pTVar2 = &this->BackingResource;
    pFVar8 = pTVar2->Reference;
    if (pFVar8 != (FD3D12Resource *)0x0) {
      pTVar2->Reference = (FD3D12Resource *)0x0;
      plVar1 = &pFVar8->_padding_;
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
    EVar5 = *(ED3D12Access *)((longlong)&this->_padding_ + 4);
    iVar12 = FD3D12Adapter::CreateBuffer
                       (this_00,&local_68,(FRHIGPUMask)(uint)this->_padding_,EVar5,SingleState,EVar5
                        ,(ulonglong)this->MaxBlockSize,&pTVar2->Reference,
                        L"Resource Allocator Underlying Buffer",(D3D12_RESOURCE_FLAGS)lVar6);
    if (iVar12 < 0) {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar12,
                 "Adapter->CreateBuffer( HeapProps, GetGPUMask(), InitConfig.InitialD3D12Access, ED3D12ResourceStateMode::SingleState, InitConfig.InitialD3D12Access, MaxBlockSize, BackingResource.GetInitReference(), TEXT(\"Resource Allocator Underlying Buffer\"), InitConfig.ResourceFlags)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                 ,0x142,(ID3D12Device *)0x0,&local_b8);
    }
    FLLMPauseScope::FLLMPauseScope
              (&local_88,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,
               (ulonglong)this->MaxBlockSize,Platform,System);
    MemoryTrace_MarkAllocAsHeap(pTVar2->Reference->GPUVirtualAddress,this->TraceHeapId,None,0);
    FLLMPauseScope::~FLLMPauseScope(&local_88);
    FLLMPauseScope::~FLLMPauseScope(&local_78);
    iVar12 = (int)this->_padding_;
    if ((iVar12 == 4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                            ,0x176,L""), iVar12 = _DAT_00000004, bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (iVar12 != 1) {
      FD3D12Resource::Map(pTVar2->Reference,(D3D12_RANGE *)0x0);
    }
  }
  return;
}

// ReleaseAllResources @ 1459d4280

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BuddyAllocator::ReleaseAllResources(FD3D12BuddyAllocator *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FD3D12Resource *pFVar4;
  ulong64 uVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  RetiredBlock *pRVar9;
  RetiredBlock *pRVar10;
  undefined1 local_res8 [8];
  FLLMPauseScope local_38;
  FLLMPauseScope local_28;
  
  FLLMPauseScope::FLLMPauseScope(&local_28,Untagged,false,0,Default,System);
  FLLMPauseScope::FLLMPauseScope
            (&local_38,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,
             -(ulonglong)this->MaxBlockSize,Platform,System);
  if (((this->AllocationStrategy != kPlacedResource) &&
      (pFVar4 = (this->BackingResource).Reference, pFVar4 != (FD3D12Resource *)0x0)) &&
     (uVar5 = pFVar4->GPUVirtualAddress, uVar5 != 0)) {
    MemoryTrace_UnmarkAllocAsHeap(uVar5,this->TraceHeapId,0);
    MemoryTrace_Free(uVar5,1,0);
  }
  iVar3 = (this->DeferredDeletionQueue).ArrayNum;
  pRVar10 = (RetiredBlock *)(this->DeferredDeletionQueue).AllocatorInstance.Data;
  pRVar9 = pRVar10 + iVar3;
  while( true ) {
    if ((this->DeferredDeletionQueue).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FD3D12BuddyAllocator::RetiredBlock,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pRVar10 == pRVar9) break;
    DeallocateInternal(this,pRVar10);
    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
    pRVar10 = pRVar10 + 1;
  }
  piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar1);
  }
  pFVar4 = (this->BackingResource).Reference;
  if (pFVar4 != (FD3D12Resource *)0x0) {
    if (((int)pFVar4->_padding_ != 1) && (GNumExplicitGPUsForRendering < 2)) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<981708483097264786>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                         ,0x292,
                         "BackingResource->GetRefCount() == 1 || GNumExplicitGPUsForRendering > 1");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (this->BackingResource).Reference;
    if (pFVar4 != (FD3D12Resource *)0x0) {
      (this->BackingResource).Reference = (FD3D12Resource *)0x0;
      plVar2 = &pFVar4->_padding_;
      LOCK();
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  FLLMPauseScope::~FLLMPauseScope(&local_38);
  FLLMPauseScope::~FLLMPauseScope(&local_28);
  return;
}

// Reset @ 1459d67c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BuddyAllocator::Reset(FD3D12BuddyAllocator *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *this_00;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool local_res8 [8];
  uint local_res10 [2];
  
  this_00 = &this->FreeBlocks;
  piVar1 = &(this->FreeBlocks).ArrayNum;
  DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
            ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             (this_00->AllocatorInstance).Data,(this->FreeBlocks).ArrayNum);
  piVar2 = &(this->FreeBlocks).ArrayMax;
  *piVar1 = 0;
  if ((this->FreeBlocks).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&this_00->AllocatorInstance,0,piVar2);
  }
  iVar3 = *piVar1;
  uVar7 = this->MaxOrder + 1;
  if (iVar3 < (int)uVar7) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,uVar7 - iVar3,&this_00->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x50,uVar7 - iVar3);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar3) {
      uVar8 = iVar3 - uVar7;
      if (((int)(uVar8 | uVar7) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar7,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  uVar7 = this->MaxOrder;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8[0] = false;
  local_res8[1] = false;
  local_res8[2] = false;
  local_res8[3] = false;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
             ((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x50),local_res10,
             local_res8);
  return;
}

// TryAllocate @ 1459dc8e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12BuddyAllocator::TryAllocate
          (FD3D12BuddyAllocator *this,uint param_1,uint param_2,FD3D12ResourceLocation *param_3)

{
  longlong *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = this->MaxBlockSize;
  if (this->TotalSizeUsed != uVar6) {
    uVar9 = param_1;
    if ((param_2 != 0) && (this->MinBlockSize % param_2 != 0)) {
      uVar9 = param_1 + param_2;
    }
    uVar7 = (this->FreeBlocks).ArrayNum - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (longlong)(int)uVar7 * 0x50;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->FreeBlocks).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar1 = (this->FreeBlocks).AllocatorInstance.Data;
        if ((*(int *)(pFVar1 + lVar8 + 8) != *(int *)(pFVar1 + lVar8 + 0x34)) && (uVar9 <= uVar6)) {
          Allocate(this,param_1,param_2,param_3);
          bVar3 = true;
          goto LAB_1459dc9eb;
        }
        uVar6 = uVar6 >> 1;
        if (uVar6 < uVar9) break;
        lVar8 = lVar8 + -0x50;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
  }
  *(uint *)&this->_padding_ = (int)this->_padding_ + param_1;
  bVar3 = false;
LAB_1459dc9eb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// UpdateMemoryStats @ 1459de3f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BuddyAllocator::UpdateMemoryStats
          (FD3D12BuddyAllocator *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6)

{
  *param_1 = *param_1 + this->MaxBlockSize;
  *param_2 = *param_2 + *(int *)((longlong)&this->_padding_ + 4);
  *param_3 = *param_3 + (this->MaxBlockSize - (int)this->_padding_);
  *param_4 = *param_4 + ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  *param_5 = *param_5 + 1;
  if (this->MaxBlockSize == (uint)this->_padding_) {
    *param_6 = *param_6 + 1;
  }
  return;
}

