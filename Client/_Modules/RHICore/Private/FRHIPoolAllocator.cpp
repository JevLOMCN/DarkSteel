// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 10

// FRHIPoolAllocator @ 1446cf290

FRHIPoolAllocator * __thiscall
FRHIPoolAllocator::FRHIPoolAllocator
          (FRHIPoolAllocator *this,ulong64 param_1,uint param_2,uint param_3,EFreeListOrder param_4,
          bool param_5)

{
  this->DefaultPoolSize = param_1;
  this->_padding_ = (longlong)&___7FRHIPoolAllocator__6B_;
  this->MaxAllocationSize = (ulonglong)param_3;
  this->FreeListOrder = param_4;
  this->bDefragEnabled = param_5;
  this->PoolAlignment = param_2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  (this->Pools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pools).ArrayNum = 0;
  (this->Pools).ArrayMax = 0;
  this->LastDefragPoolIndex = 0;
  (this->PoolAllocationOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoolAllocationOrder).ArrayNum = 0;
  (this->PoolAllocationOrder).ArrayMax = 0;
  this->TotalAllocatedBlocks = 0;
  return this;
}

// ~FRHIPoolAllocator @ 1446cf830

void __thiscall FRHIPoolAllocator::~FRHIPoolAllocator(FRHIPoolAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRHIPoolAllocator__6B_;
  Destroy(this);
  pFVar1 = (this->PoolAllocationOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001446cf86d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// operator() @ 1446d0060

bool __thiscall
`FRHIPoolAllocator::SortPools'::__l2::<lambda_1>::operator()(void *this,uint param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar1 = *(longlong *)this;
  lVar12 = (longlong)(int)param_1;
  lVar13 = (longlong)(int)param_2;
  uVar10 = ~param_1 >> 0x1f;
  if (*(char *)(lVar1 + 0x24) == '\0') {
    uVar5 = 0;
    uVar9 = uVar5;
    if ((int)param_1 < *(int *)(lVar1 + 0x58)) {
      uVar9 = uVar10;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar8 = 0xffff;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar12 * 8) == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      lVar1 = *(longlong *)this;
      uVar9 = uVar5;
      if ((int)param_1 < *(int *)(lVar1 + 0x58)) {
        uVar9 = uVar10;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar9 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar12 * 8) + 0x10);
    }
    lVar1 = *(longlong *)this;
    uVar7 = ~param_2 >> 0x1f;
    uVar6 = uVar5;
    if ((int)param_2 < *(int *)(lVar1 + 0x58)) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar13 * 8) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      lVar1 = *(longlong *)this;
      uVar6 = uVar5;
      if ((int)param_2 < *(int *)(lVar1 + 0x58)) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar13 * 8) + 0x10);
    }
    bVar3 = uVar9 < uVar6;
    if (uVar9 == uVar6) {
      lVar1 = *(longlong *)this;
      uVar9 = uVar5;
      if ((int)param_1 < *(int *)(lVar1 + 0x58)) {
        uVar9 = uVar10;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar12 * 8) == 0) {
        uVar11 = 0xffff;
      }
      else {
        lVar1 = *(longlong *)this;
        uVar9 = uVar5;
        if ((int)param_1 < *(int *)(lVar1 + 0x58)) {
          uVar9 = uVar10;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar11 = *(ushort *)(*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar12 * 8) + 8);
      }
      lVar1 = *(longlong *)this;
      uVar10 = uVar5;
      if ((int)param_2 < *(int *)(lVar1 + 0x58)) {
        uVar10 = uVar7;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar13 * 8) != 0) {
        lVar1 = *(longlong *)this;
        if ((int)param_2 < *(int *)(lVar1 + 0x58)) {
          uVar5 = uVar7;
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
        uVar8 = *(ushort *)(*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar13 * 8) + 8);
      }
      bVar3 = uVar11 < uVar8;
    }
  }
  else {
    uVar5 = 0;
    uVar9 = uVar5;
    if ((int)param_1 < *(int *)(lVar1 + 0x58)) {
      uVar9 = uVar10;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar9 = 0xffffffff;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar12 * 8) == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      lVar1 = *(longlong *)this;
      uVar6 = uVar5;
      if ((int)param_1 < *(int *)(lVar1 + 0x58)) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar12 * 8);
      uVar10 = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0x28);
    }
    lVar1 = *(longlong *)this;
    uVar6 = uVar5;
    if ((int)param_2 < *(int *)(lVar1 + 0x58)) {
      uVar6 = ~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar13 * 8) != 0) {
      lVar1 = *(longlong *)this;
      if ((int)param_2 < *(int *)(lVar1 + 0x58)) {
        uVar5 = ~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + lVar13 * 8);
      uVar9 = *(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0x28);
    }
    bVar3 = uVar9 < uVar10;
  }
  return bVar3;
}

// DeallocateInternal @ 1446d71b0

void __thiscall
FRHIPoolAllocator::DeallocateInternal(FRHIPoolAllocator *this,FRHIPoolAllocationData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  FRHIMemoryPool *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRHIPoolAllocationData *this_01;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->Type != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationData.IsAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x2e2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->Pools).ArrayNum <= (int)(short)param_1->PoolIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationData.GetPoolIndex() < Pools.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x2e3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = param_1->PoolIndex;
  uVar7 = 0;
  if ((int)(short)uVar1 < (this->Pools).ArrayNum) {
    uVar7 = (uint)~(int)(short)uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(FRHIMemoryPool **)((this->Pools).AllocatorInstance.Data + (longlong)(short)uVar1 * 8);
  if (param_1->Locked == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationData.IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x191,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this_00->PoolIndex != param_1->PoolIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoolIndex == AllocationData.GetPoolIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x192,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = param_1->Alignment;
  uVar2 = param_1->Size;
  if ((this_00->AllocationDataPool).ArrayNum < 1) {
    this_01 = ::operator_new(0x30);
    if (this_01 == (FRHIPoolAllocationData *)0x0) {
      this_01 = (FRHIPoolAllocationData *)0x0;
    }
    else {
      this_01->Size = 0;
      this_01->Alignment = 0;
      this_01->Offset = 0;
      this_01->PoolIndex = 0;
      *(undefined2 *)&this_01->field_0xe = 0;
      this_01->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
      this_01->NextAllocation = (FRHIPoolAllocationData *)0x0;
      this_01->AliasAllocation = (FRHIPoolAllocationData *)0x0;
      this_01->Owner = (FRHIPoolResource *)0x0;
    }
  }
  else {
    iVar3 = (this_00->AllocationDataPool).ArrayNum;
    this_01 = *(FRHIPoolAllocationData **)
               ((this_00->AllocationDataPool).AllocatorInstance.Data + (longlong)iVar3 * 8 + -8);
    (this_00->AllocationDataPool).ArrayNum = iVar3 + -1;
  }
  FRHIPoolAllocationData::MoveFrom(this_01,param_1,false);
  uVar4 = this_00->PoolAlignment;
  if (this_01->Type != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x87,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uint *)&this_01->PoolIndex = *(uint *)&this_01->PoolIndex & 0xfff1ffff;
  *(uint *)&this_01->PoolIndex = *(uint *)&this_01->PoolIndex | 0x10000;
  uVar7 = FRHIMemoryPool::GetAlignedSize(this_01->Size,uVar4,uVar7);
  this_01->Size = uVar7;
  this_01->Alignment = uVar4;
  this_01->Offset = this_01->Offset & -uVar4;
  this_00->FreeSize = this_00->FreeSize + (ulonglong)uVar7;
  uVar7 = this_01->Size;
  this_00->AllocatedBlocks = this_00->AllocatedBlocks - 1;
  this_00->AligmnentWaste = this_00->AligmnentWaste + ((ulonglong)uVar2 - (ulonglong)uVar7);
  FRHIMemoryPool::AddToFreeBlocks(this_00,this_01);
                    /* WARNING: Could not recover jumptable at 0x0001446d73e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Defrag @ 1446d7a00

void __thiscall
FRHIPoolAllocator::Defrag
          (FRHIPoolAllocator *this,FRHIContextArray *param_1,uint param_2,uint *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIMemoryPool *this_00;
  code *pcVar1;
  float fVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  FIdentityFunctor local_res8 [8];
  FRHIContextArray *local_res10;
  uint local_res18;
  uint *local_res20;
  longlong local_88;
  FRHIMemoryPool *local_80;
  TArray<FRHIMemoryPool_*,TSizedDefaultAllocator<32>_> local_78;
  ForAnyElementType local_68;
  undefined8 local_60;
  
  if (this->bDefragEnabled != false) {
    bVar17 = -1 < CpuChannel->Enabled;
    local_res10 = param_1;
    local_res18 = param_2;
    local_res20 = param_3;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId781,"FRHIPoolAllocator::Defrag",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                 ,0x30d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId781);
    }
    lpCriticalSection = &this->CS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar16 = (this->Pools).ArrayNum;
    iVar15 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    local_60._0_4_ = iVar15;
    if (0 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&local_68,0,(int *)((longlong)&local_60 + 4));
    }
    fVar2 = __real_3f800000;
    iVar7 = (this->Pools).ArrayNum;
    pFVar12 = (this->Pools).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar7 * 8;
    iVar8 = (int)local_60;
    while( true ) {
      if ((this->Pools).ArrayNum != iVar7) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FRHIMemoryPool_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar8 = (int)local_60;
      }
      if (pFVar12 == pFVar13) break;
      local_88 = *(longlong *)pFVar12;
      fVar18 = fVar2;
      if (local_88 != 0) {
        if (*(longlong *)(local_88 + 0x28) != 0) {
          iVar5 = iVar8;
          if ((local_68.Data <= (FScriptContainerElement *)&local_88) &&
             ((FScriptContainerElement *)&local_88 < local_68.Data + (longlong)local_60._4_4_ * 8))
          {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar5 = (int)local_60;
          }
          if (iVar5 == local_60._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_68,(int *)((longlong)&local_60 + 4));
          }
          iVar8 = iVar5 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          *(longlong *)(local_68.Data + (longlong)iVar5 * 8) = local_88;
        }
        if (local_88 != 0) {
          uVar10 = *(ulonglong *)(local_88 + 0x10);
          fVar18 = (float)(uVar10 - *(longlong *)(local_88 + 0x28));
          if ((longlong)uVar10 < 0) {
            fVar18 = fVar18 / (float)uVar10;
          }
          else {
            fVar18 = fVar18 / (float)(longlong)uVar10;
          }
        }
      }
      if (fVar18 < GRHIPoolAllocatorDefragSizeFraction) {
        iVar15 = iVar15 + 1;
      }
      pFVar12 = pFVar12 + 8;
    }
    if ((iVar15 != 0) && (1 < iVar8)) {
      AlgoImpl::
      IntroSortInternal<FRHIMemoryPool_*,int,FIdentityFunctor,_FRHIPoolAllocator::Defrag_::__l2::<lambda_1>_>
                ((FRHIMemoryPool **)local_68.Data,iVar8,local_res8[0],(<lambda_1>)local_res8[0]);
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      if (GRHIPoolAllocatorDefragMaxPoolsToClear < 0) {
        uVar10 = local_60 & 0xffffffff;
        if ((int)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar10);
        }
        if (0 < (int)local_60) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_60,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
          uVar10 = local_60 & 0xffffffff;
        }
        uVar16 = (int)uVar10 - 1;
        if (0 < (int)uVar16) {
          lVar14 = (longlong)(int)uVar16 * 8;
          do {
            uVar11 = 0;
            if ((int)uVar16 < (int)uVar10) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar13 = local_68.Data + lVar14;
            if (((local_78.AllocatorInstance.Data <= pFVar13) &&
                (pFVar13 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (local_78.ArrayNum == local_78.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
              local_78.ArrayNum = iVar15;
            }
            lVar9 = (longlong)local_78.ArrayNum;
            uVar16 = uVar16 - 1;
            lVar14 = lVar14 + -8;
            local_78.ArrayNum = local_78.ArrayNum + 1;
            *(FRHIMemoryPool **)(local_78.AllocatorInstance.Data + lVar9 * 8) =
                 *(FRHIMemoryPool **)pFVar13;
            uVar10 = local_60 & 0xffffffff;
          } while (0 < (int)uVar16);
        }
        puVar3 = local_res20;
        uVar16 = local_res18;
        uVar11 = 0;
        if (0 < (int)uVar10 + -1) {
          lVar14 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar10) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FRHIMemoryPool::TryClear
                      (*(FRHIMemoryPool **)(local_68.Data + lVar14),local_res10,this,uVar16,puVar3,
                       &local_78);
            if (local_78.ArrayNum < 1) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            iVar7 = (local_78.ArrayNum - (local_78.ArrayNum + -1)) + -1;
            iVar15 = local_78.ArrayNum;
            if (iVar7 != 0) {
              memmove(local_78.AllocatorInstance.Data + (longlong)(local_78.ArrayNum + -1) * 8,
                      local_78.AllocatorInstance.Data + (longlong)(local_78.ArrayNum + -1) * 8 + 8,
                      (longlong)iVar7 << 3);
              iVar15 = local_78.ArrayNum;
            }
            local_78.ArrayNum = iVar15 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&local_78.AllocatorInstance,iVar15 + -1,&local_78.ArrayMax);
            if (uVar16 <= *puVar3) break;
            uVar10 = local_60 & 0xffffffff;
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + 8;
          } while ((int)uVar11 < (int)local_60 + -1);
        }
      }
      else {
        uVar16 = this->LastDefragPoolIndex;
        iVar15 = (this->Pools).ArrayNum;
        if (iVar15 <= (int)uVar16) {
          this->LastDefragPoolIndex = 0;
          uVar16 = 0;
        }
        iVar7 = 0;
        if ((int)uVar16 < iVar15) {
          do {
            uVar11 = 0;
            if ((int)uVar16 < (this->Pools).ArrayNum) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            this_00 = *(FRHIMemoryPool **)
                       ((this->Pools).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
            fVar18 = fVar2;
            if (this_00 != (FRHIMemoryPool *)0x0) {
              uVar10 = this_00->PoolSize;
              fVar18 = (float)(uVar10 - this_00->FreeSize);
              if ((longlong)uVar10 < 0) {
                fVar18 = fVar18 / (float)uVar10;
              }
              else {
                fVar18 = fVar18 / (float)(longlong)uVar10;
              }
            }
            if (fVar18 < GRHIPoolAllocatorDefragSizeFraction) {
              if ((int)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(local_60 & 0xffffffff);
              }
              iVar15 = local_78.ArrayMax;
              local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
              if (iVar15 != (int)local_60) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(int)local_60,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
              }
              uVar16 = (int)local_60 - 1;
              if (-1 < (int)uVar16) {
                lVar14 = (longlong)(int)uVar16 * 8;
                do {
                  uVar11 = 0;
                  if ((int)uVar16 < (int)local_60) {
                    uVar11 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  local_80 = *(FRHIMemoryPool **)(local_68.Data + lVar14);
                  if (this_00 == local_80) break;
                  if (((local_78.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
                      ((FScriptContainerElement *)&local_80 <
                       local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 8)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar4)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  if (local_78.ArrayNum == local_78.ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
                    local_78.ArrayNum = iVar15;
                  }
                  lVar9 = (longlong)local_78.ArrayNum;
                  lVar14 = lVar14 + -8;
                  uVar16 = uVar16 - 1;
                  local_78.ArrayNum = local_78.ArrayNum + 1;
                  *(FRHIMemoryPool **)(local_78.AllocatorInstance.Data + lVar9 * 8) = local_80;
                } while (-1 < (int)uVar16);
              }
              puVar3 = local_res20;
              uVar16 = local_res18;
              if (local_78.ArrayNum != 0) {
                FRHIMemoryPool::TryClear(this_00,local_res10,this,local_res18,local_res20,&local_78)
                ;
                iVar7 = iVar7 + 1;
                if ((uVar16 <= *puVar3) || (GRHIPoolAllocatorDefragMaxPoolsToClear <= iVar7)) break;
              }
            }
            uVar16 = this->LastDefragPoolIndex + 1;
            this->LastDefragPoolIndex = uVar16;
          } while ((int)uVar16 < (this->Pools).ArrayNum);
        }
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// Destroy @ 1446d83c0

void __thiscall FRHIPoolAllocator::Destroy(FRHIPoolAllocator *this)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar7 = (this->Pools).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar9 = (longlong)(int)uVar7 * 8;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      uVar6 = uVar5;
      if ((int)uVar7 < (this->Pools).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->Pools).AllocatorInstance.Data + lVar9) != 0) {
        uVar6 = uVar5;
        if ((int)uVar7 < (this->Pools).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(**(longlong **)((this->Pools).AllocatorInstance.Data + lVar9) + 0x10))();
        if ((int)uVar7 < (this->Pools).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar2 = *(undefined8 **)((this->Pools).AllocatorInstance.Data + lVar9);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar9 = lVar9 + -8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  piVar1 = &(this->Pools).ArrayMax;
  (this->Pools).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Pools).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PoolAllocationOrder).ArrayMax;
  (this->PoolAllocationOrder).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PoolAllocationOrder).AllocatorInstance,0,piVar1);
  }
  return;
}

// Initialize @ 1446df5e0

void __thiscall FRHIPoolAllocator::Initialize(FRHIPoolAllocator *this)

{
  return;
}

// SortPools @ 1446e4fa0

void __thiscall FRHIPoolAllocator::SortPools(FRHIPoolAllocator *this)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<unsigned_int,int,FIdentityFunctor,_FRHIPoolAllocator::SortPools_::__l2::<lambda_1>_>
            ((uint *)(this->PoolAllocationOrder).AllocatorInstance.Data,
             (this->PoolAllocationOrder).ArrayNum,local_res8,(<lambda_1>)this);
  return;
}

// TryAllocateInternal @ 1446e62d0

bool __thiscall
FRHIPoolAllocator::TryAllocateInternal
          (FRHIPoolAllocator *this,uint param_1,uint param_2,ERHIPoolResourceTypes param_3,
          FRHIPoolAllocationData *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FRHIMemoryPool_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRHIMemoryPool *this_00;
  code *pcVar3;
  uint uVar4;
  ERHIPoolResourceTypes EVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  ERHIPoolResourceTypes local_res20;
  int local_68 [2];
  undefined8 local_60;
  FScriptContainerElement *local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId693,"FRHIPoolAllocator::TryAllocateInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
               ,0x2b5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId693);
  }
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->PoolAllocationOrder).ArrayNum != (this->Pools).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolAllocationOrder.Num() == Pools.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x2b9,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  pFVar16 = (this->PoolAllocationOrder).AllocatorInstance.Data;
  pTVar1 = &this->Pools;
  iVar13 = (this->PoolAllocationOrder).ArrayNum;
  local_58 = pFVar16 + (longlong)iVar13 * 4;
  while( true ) {
    pFVar6 = local_58;
    if ((this->PoolAllocationOrder).ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar6) {
      uVar12 = 0xffffffff;
      uVar15 = 0;
      if (0 < (this->Pools).ArrayNum) goto LAB_1446e6490;
      goto LAB_1446e64f6;
    }
    uVar12 = *(uint *)pFVar16;
    uVar15 = 0;
    if ((int)uVar12 < (this->Pools).ArrayNum) {
      uVar15 = ~uVar12 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    this_00 = *(FRHIMemoryPool **)((this->Pools).AllocatorInstance.Data + (longlong)(int)uVar12 * 8)
    ;
    if ((((this_00 != (FRHIMemoryPool *)0x0) &&
         ((this_00->SupportedResourceTypes & local_res20) != 0)) && (this_00->FreeSize != 0)) &&
       (bVar7 = FRHIMemoryPool::TryAllocate(this_00,local_res10,local_res18,local_res20,param_4),
       bVar7)) break;
    pFVar16 = pFVar16 + 4;
  }
  bVar7 = true;
  goto LAB_1446e67b8;
  while (uVar15 = uVar15 + 1, (int)uVar15 < (this->Pools).ArrayNum) {
LAB_1446e6490:
    uVar9 = 0;
    if ((int)uVar15 < (this->Pools).ArrayNum) {
      uVar9 = ~uVar15 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (*(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar15 * 8) == 0) {
      uVar12 = uVar15 & 0xffff;
      break;
    }
  }
LAB_1446e64f6:
  uVar9 = local_res18;
  sVar14 = (short)uVar12;
  uVar15 = this->PoolAlignment;
  if ((uVar15 < local_res18) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAllocationAlignment <= InPoolAlignment",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0xfd,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  EVar5 = local_res20;
  uVar4 = local_res10 + uVar9;
  if (uVar15 % uVar9 == 0) {
    uVar4 = local_res10;
  }
  if (sVar14 < 0) {
    sVar14 = (short)(this->Pools).ArrayNum;
    iVar13 = (int)sVar14;
    local_60 = (**(code **)(this->_padding_ + 8))
                         (this,iVar13,
                          (int)((((ulonglong)uVar4 - 1) + (ulonglong)uVar15) / (ulonglong)uVar15) *
                          uVar15,local_res20);
    pFVar16 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar16 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar16 + (longlong)(this->Pools).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    iVar10 = (this->Pools).ArrayNum;
    piVar2 = &(this->Pools).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar2);
      (this->Pools).ArrayNum = iVar10;
    }
    (this->Pools).ArrayNum = iVar10 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_60;
    pFVar16 = (this->PoolAllocationOrder).AllocatorInstance.Data;
    local_68[0] = iVar13;
    if (((pFVar16 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 <
         pFVar16 + (longlong)(this->PoolAllocationOrder).ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    iVar13 = (this->PoolAllocationOrder).ArrayNum;
    piVar2 = &(this->PoolAllocationOrder).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->PoolAllocationOrder).AllocatorInstance,piVar2);
    }
    (this->PoolAllocationOrder).ArrayNum = iVar13 + 1;
    *(int *)((this->PoolAllocationOrder).AllocatorInstance.Data + (longlong)iVar13 * 4) =
         local_68[0];
  }
  else {
    uVar11 = (**(code **)(this->_padding_ + 8))(this,uVar12 & 0xffff);
    uVar12 = 0;
    if ((int)sVar14 < (this->Pools).ArrayNum) {
      uVar12 = (uint)~(int)sVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)sVar14 * 8) = uVar11;
  }
  uVar12 = 0;
  if ((int)sVar14 < (this->Pools).ArrayNum) {
    uVar12 = (uint)~(int)sVar14 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  bVar7 = FRHIMemoryPool::TryAllocate
                    (*(FRHIMemoryPool **)((pTVar1->AllocatorInstance).Data + (longlong)sVar14 * 8),
                     local_res10,local_res18,EVar5,param_4);
LAB_1446e67b8:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// UpdateMemoryStats @ 1446e71b0

void __thiscall
FRHIPoolAllocator::UpdateMemoryStats
          (FRHIPoolAllocator *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6,uint *param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  uint *local_res10;
  uint *local_res18;
  
  lpCriticalSection = &this->CS;
  local_res10 = param_1;
  local_res18 = param_2;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar4 = local_res18;
    uVar7 = 0;
    this->TotalAllocatedBlocks = 0;
    pFVar6 = (this->Pools).AllocatorInstance.Data;
    iVar2 = (this->Pools).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Pools).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRHIMemoryPool_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar6 == pFVar1) break;
      lVar3 = *(longlong *)pFVar6;
      if (lVar3 != 0) {
        *local_res10 = *local_res10 + *(int *)(lVar3 + 0x10);
        *puVar4 = *puVar4 + ((*(int *)(lVar3 + 0x10) - *(int *)(lVar3 + 0x30)) -
                            *(int *)(lVar3 + 0x28));
        *param_3 = *param_3 + *(int *)(lVar3 + 0x28);
        uVar5 = *(uint *)(lVar3 + 0x28);
        if (*(uint *)(lVar3 + 0x28) < uVar7) {
          uVar5 = uVar7;
        }
        uVar7 = uVar5;
        *param_5 = *param_5 + *(int *)(lVar3 + 0x30);
        *param_6 = *param_6 + 1;
        if (*(longlong *)(lVar3 + 0x28) == 0) {
          *param_7 = *param_7 + 1;
        }
        this->TotalAllocatedBlocks = this->TotalAllocatedBlocks + *(int *)(lVar3 + 0x38);
      }
      pFVar6 = pFVar6 + 8;
    }
    *param_4 = *param_4 + uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001446e72c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

