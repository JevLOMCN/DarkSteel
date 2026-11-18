// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 15

// FRHIMemoryPool @ 1446cf0d0

FRHIMemoryPool * __thiscall
FRHIMemoryPool::FRHIMemoryPool
          (FRHIMemoryPool *this,short param_1,ulong64 param_2,uint param_3,
          ERHIPoolResourceTypes param_4,EFreeListOrder param_5)

{
  code *pcVar1;
  bool bVar2;
  FRHIMemoryPool *pFVar3;
  
  this->PoolIndex = param_1;
  this->_padding_ = (longlong)&___7FRHIMemoryPool__6B_;
  this->SupportedResourceTypes = param_4;
  this->FreeListOrder = param_5;
  this->FreeSize = 0;
  this->AligmnentWaste = 0;
  this->AllocatedBlocks = 0;
  (this->FreeBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeBlocks).ArrayNum = 0;
  (this->FreeBlocks).ArrayMax = 0;
  (this->AllocationDataPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocationDataPool).ArrayNum = 0;
  (this->AllocationDataPool).ArrayMax = 0;
  this->PoolSize = param_2;
  this->PoolAlignment = param_3;
  if (0xfffffffe < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoolSize < 0xffffffffui32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIMemoryPool *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FRHIMemoryPool @ 1446cf700

void __thiscall FRHIMemoryPool::~FRHIMemoryPool(FRHIMemoryPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FRHIMemoryPool__6B_;
  Validate(this);
  pFVar4 = (this->FreeBlocks).AllocatorInstance.Data;
  iVar2 = (this->FreeBlocks).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->FreeBlocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRHIPoolAllocationData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    ReleaseAllocationData(this,*(FRHIPoolAllocationData **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->FreeBlocks).ArrayMax;
  (this->FreeBlocks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeBlocks).AllocatorInstance,0,piVar1);
  }
  pTVar5 = &this->AllocationDataPool;
  pFVar4 = (pTVar5->AllocatorInstance).Data;
  iVar2 = (this->AllocationDataPool).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllocationDataPool).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRHIPoolAllocationData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    ::operator_delete(*(void **)pFVar4,0x30);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->AllocationDataPool).ArrayMax;
  (this->AllocationDataPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar5->AllocatorInstance,0,piVar1);
  }
  pFVar3 = (pTVar5->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FreeBlocks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddToFreeBlocks @ 1446d1270

FRHIPoolAllocationData * __thiscall
FRHIMemoryPool::AddToFreeBlocks(FRHIMemoryPool *this,FRHIPoolAllocationData *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FRHIPoolAllocationData *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  FRHIPoolAllocationData *local_18 [2];
  
  if ((param_1->Type != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFreeBlock->IsFree()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x20a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRHIPoolAllocationData *)(*pcVar2)();
    return pFVar6;
  }
  if (((param_1->Size & this->PoolAlignment - 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(InFreeBlock->GetSize(), PoolAlignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x20b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRHIPoolAllocationData *)(*pcVar2)();
    return pFVar6;
  }
  if (((param_1->Offset & this->PoolAlignment - 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(InFreeBlock->GetOffset(), PoolAlignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x20c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRHIPoolAllocationData *)(*pcVar2)();
    return pFVar6;
  }
  pFVar6 = param_1->PreviousAllocation;
  local_18[0] = param_1;
  if ((pFVar6->Type == 1) && (local_18[0] = param_1, pFVar6->Locked == 0)) {
    local_18[0] = param_1;
    FRHIPoolAllocationData::Merge(pFVar6,param_1);
    RemoveFromFreeBlocks(this,pFVar6);
    ReleaseAllocationData(this,local_18[0]);
    local_18[0] = pFVar6;
  }
  pFVar6 = local_18[0]->NextAllocation;
  if ((pFVar6->Type == 1) && (pFVar6->Locked == 0)) {
    FRHIPoolAllocationData::Merge(local_18[0],pFVar6);
    RemoveFromFreeBlocks(this,pFVar6);
    ReleaseAllocationData(this,pFVar6);
  }
  iVar5 = 0;
  if (this->FreeListOrder == SortBySize) {
    uVar9 = (this->FreeBlocks).ArrayNum;
    iVar8 = 0;
    if (0 < (int)uVar9) {
      do {
        iVar8 = (uVar9 >> 1) + iVar5;
        if (**(uint **)((this->FreeBlocks).AllocatorInstance.Data + (longlong)iVar8 * 8) <
            local_18[0]->Size) {
          iVar5 = iVar8 + (uVar9 & 1);
        }
        uVar3 = uVar9 >> 1;
        iVar8 = iVar5;
        uVar9 = uVar9 >> 1;
      } while (uVar3 != 0);
    }
  }
  else {
    iVar8 = iVar5;
    if (this->FreeListOrder == SortByOffset) {
      uVar9 = (this->FreeBlocks).ArrayNum;
      iVar8 = 0;
      if (0 < (int)uVar9) {
        do {
          iVar8 = (uVar9 >> 1) + iVar5;
          if (*(uint *)(*(longlong *)
                         ((this->FreeBlocks).AllocatorInstance.Data + (longlong)iVar8 * 8) + 8) <
              local_18[0]->Offset) {
            iVar5 = iVar8 + (uVar9 & 1);
          }
          uVar3 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
          iVar8 = iVar5;
        } while (uVar3 != 0);
      }
    }
  }
  pFVar7 = (this->FreeBlocks).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar7 + (longlong)(this->FreeBlocks).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRHIPoolAllocationData *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = (this->FreeBlocks).ArrayNum;
  piVar1 = &(this->FreeBlocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->FreeBlocks).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->FreeBlocks).AllocatorInstance.Data;
  (this->FreeBlocks).ArrayNum = iVar5 + 1;
  pFVar7 = pFVar7 + (longlong)iVar8 * 8;
  memmove(pFVar7 + 8,pFVar7,(longlong)(iVar5 - iVar8) << 3);
  *(FRHIPoolAllocationData **)((this->FreeBlocks).AllocatorInstance.Data + (longlong)iVar8 * 8) =
       local_18[0];
  Validate(this);
  return local_18[0];
}

// Deallocate @ 1446d6d50

void __thiscall FRHIMemoryPool::Deallocate(FRHIMemoryPool *this,FRHIPoolAllocationData *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRHIPoolAllocationData *this_00;
  
  if (param_1->Locked == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationData.IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x191,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->PoolIndex != param_1->PoolIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoolIndex == AllocationData.GetPoolIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x192,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = param_1->Alignment;
  uVar1 = param_1->Size;
  if ((this->AllocationDataPool).ArrayNum < 1) {
    this_00 = ::operator_new(0x30);
    if (this_00 == (FRHIPoolAllocationData *)0x0) {
      this_00 = (FRHIPoolAllocationData *)0x0;
    }
    else {
      this_00->Size = 0;
      this_00->Alignment = 0;
      this_00->Offset = 0;
      this_00->PoolIndex = 0;
      *(undefined2 *)&this_00->field_0xe = 0;
      this_00->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
      this_00->NextAllocation = (FRHIPoolAllocationData *)0x0;
      this_00->AliasAllocation = (FRHIPoolAllocationData *)0x0;
      this_00->Owner = (FRHIPoolResource *)0x0;
    }
  }
  else {
    iVar2 = (this->AllocationDataPool).ArrayNum;
    this_00 = *(FRHIPoolAllocationData **)
               ((this->AllocationDataPool).AllocatorInstance.Data + (longlong)iVar2 * 8 + -8);
    (this->AllocationDataPool).ArrayNum = iVar2 + -1;
  }
  FRHIPoolAllocationData::MoveFrom(this_00,param_1,false);
  uVar3 = this->PoolAlignment;
  if (this_00->Type != 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x87,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uint *)&this_00->PoolIndex = *(uint *)&this_00->PoolIndex & 0xfff1ffff;
  *(uint *)&this_00->PoolIndex = *(uint *)&this_00->PoolIndex | 0x10000;
  uVar6 = GetAlignedSize(this_00->Size,uVar3,uVar6);
  this_00->Size = uVar6;
  this_00->Alignment = uVar3;
  this_00->Offset = this_00->Offset & -uVar3;
  this->FreeSize = this->FreeSize + (ulonglong)uVar6;
  uVar6 = this_00->Size;
  this->AllocatedBlocks = this->AllocatedBlocks - 1;
  this->AligmnentWaste = this->AligmnentWaste + ((ulonglong)uVar1 - (ulonglong)uVar6);
  AddToFreeBlocks(this,this_00);
  return;
}

// Destroy @ 1446d82d0

void __thiscall FRHIMemoryPool::Destroy(FRHIMemoryPool *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->FreeBlocks).AllocatorInstance.Data;
  iVar3 = (this->FreeBlocks).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->FreeBlocks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRHIPoolAllocationData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    ReleaseAllocationData(this,*(FRHIPoolAllocationData **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->FreeBlocks).ArrayMax;
  (this->FreeBlocks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeBlocks).AllocatorInstance,0,piVar1);
  }
  pFVar4 = (this->AllocationDataPool).AllocatorInstance.Data;
  iVar3 = (this->AllocationDataPool).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AllocationDataPool).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRHIPoolAllocationData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    ::operator_delete(*(void **)pFVar4,0x30);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->AllocationDataPool).ArrayMax;
  (this->AllocationDataPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AllocationDataPool).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindFreeBlock @ 1446d9fa0

int __thiscall FRHIMemoryPool::FindFreeBlock(FRHIMemoryPool *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar4 = GetAlignedSize(param_1,this->PoolAlignment,param_2);
  if ((ulonglong)uVar4 <= this->FreeSize) {
    uVar8 = 0;
    iVar5 = 0;
    if (this->FreeListOrder == SortBySize) {
      if (((this->FreeBlocks).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->FreeBlocks).AllocatorInstance.Data;
      if (uVar4 <= **(uint **)pFVar1) {
        return 0;
      }
      uVar6 = (this->FreeBlocks).ArrayNum;
      uVar7 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar9 = uVar7 >> 1;
          iVar5 = uVar9 + (int)uVar8;
          if (**(uint **)(pFVar1 + (longlong)iVar5 * 8) < uVar4) {
            uVar8 = (ulonglong)(iVar5 + (uVar7 & 1));
          }
          iVar5 = (int)uVar8;
          uVar7 = uVar9;
        } while (uVar9 != 0);
      }
      if ((int)uVar6 <= iVar5) {
        return -1;
      }
      return iVar5;
    }
    uVar10 = uVar8;
    if (0 < (this->FreeBlocks).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar6 = 0;
        if ((int)uVar7 < (this->FreeBlocks).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (uVar4 <= **(uint **)((this->FreeBlocks).AllocatorInstance.Data + uVar10)) {
          return uVar7;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar10 = uVar10 + 8;
      } while ((int)(uVar7 + 1) < (this->FreeBlocks).ArrayNum);
    }
  }
  return -1;
}

// GetAlignedOffset @ 1446dd860

uint __cdecl FRHIMemoryPool::GetAlignedOffset(uint param_1,uint param_2,uint param_3)

{
  if ((param_2 % param_3 != 0) && (param_1 % param_3 != 0)) {
    return param_3 + (param_1 - param_1 % param_3);
  }
  return param_1;
}

// GetAlignedSize @ 1446dd890

uint __cdecl FRHIMemoryPool::GetAlignedSize(uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAllocationAlignment <= InPoolAlignment",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0xfd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = param_1 + param_3;
  if (param_2 % param_3 == 0) {
    uVar3 = param_1;
  }
  return (int)((((ulonglong)uVar3 - 1) + (ulonglong)param_2) / (ulonglong)param_2) * param_2;
}

// GetNewAllocationData @ 1446de4d0

FRHIPoolAllocationData * __thiscall FRHIMemoryPool::GetNewAllocationData(FRHIMemoryPool *this)

{
  int iVar1;
  FRHIPoolAllocationData *pFVar2;
  
  if (0 < (this->AllocationDataPool).ArrayNum) {
    iVar1 = (this->AllocationDataPool).ArrayNum;
    pFVar2 = *(FRHIPoolAllocationData **)
              ((this->AllocationDataPool).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
    (this->AllocationDataPool).ArrayNum = iVar1 + -1;
    return pFVar2;
  }
  pFVar2 = ::operator_new(0x30);
  if (pFVar2 != (FRHIPoolAllocationData *)0x0) {
    pFVar2->Size = 0;
    pFVar2->Alignment = 0;
    pFVar2->Offset = 0;
    pFVar2->PoolIndex = 0;
    *(undefined2 *)&pFVar2->field_0xe = 0;
    pFVar2->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
    pFVar2->NextAllocation = (FRHIPoolAllocationData *)0x0;
    pFVar2->AliasAllocation = (FRHIPoolAllocationData *)0x0;
    pFVar2->Owner = (FRHIPoolResource *)0x0;
    return pFVar2;
  }
  return (FRHIPoolAllocationData *)0x0;
}

// Init @ 1446df020

void __thiscall FRHIMemoryPool::Init(FRHIMemoryPool *this)

{
  int *piVar1;
  FRHIPoolAllocationData *pFVar2;
  ushort *puVar3;
  TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_> *pTVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ulong64 uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  FRHIPoolAllocationData *local_28;
  undefined8 *local_20;
  undefined8 *puVar15;
  
  iVar11 = DesiredAllocationPoolSize;
  uVar13 = (ulonglong)(uint)DesiredAllocationPoolSize;
  pTVar4 = &this->AllocationDataPool;
  this->FreeSize = this->PoolSize;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  piVar1 = &(this->AllocationDataPool).ArrayMax;
  if (*piVar1 < iVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar11,&pTVar4->AllocatorInstance,(this->AllocationDataPool).ArrayNum,piVar1);
    iVar11 = DesiredAllocationPoolSize;
  }
  puVar15 = (undefined8 *)0x0;
  if (0 < iVar11) {
    do {
      puVar12 = ::operator_new(0x30);
      local_20 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
        local_20 = puVar12;
      }
      *local_20 = 0;
      *(undefined4 *)(local_20 + 1) = 0;
      *(uint *)((longlong)local_20 + 0xc) =
           *(uint *)((longlong)local_20 + 0xc) & 0xffe0ffff | 0xffff;
      local_20[5] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      pFVar6 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->AllocationDataPool).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar4->AllocatorInstance,piVar1);
        (this->AllocationDataPool).ArrayNum = iVar11;
      }
      iVar9 = DesiredAllocationPoolSize;
      uVar14 = (int)puVar15 + 1;
      puVar15 = (undefined8 *)(ulonglong)uVar14;
      (this->AllocationDataPool).ArrayNum = iVar11 + 1;
      *(undefined8 **)((pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_20;
    } while ((int)uVar14 < iVar9);
  }
  uVar5 = this->PoolIndex;
  pFVar2 = &this->HeadBlock;
  puVar3 = &(this->HeadBlock).PoolIndex;
  *(uint *)puVar3 = *(uint *)puVar3 & 0xffe3ffff;
  puVar3 = &(this->HeadBlock).PoolIndex;
  *(uint *)puVar3 = *(uint *)puVar3 | 0x3ffff;
  (this->HeadBlock).PoolIndex = uVar5;
  pFVar2->Size = 0;
  pFVar2->Alignment = 0;
  (this->HeadBlock).Offset = 0;
  (this->HeadBlock).Owner = (FRHIPoolResource *)0x0;
  (this->HeadBlock).AliasAllocation = (FRHIPoolAllocationData *)0x0;
  (this->HeadBlock).NextAllocation = pFVar2;
  (this->HeadBlock).PreviousAllocation = pFVar2;
  local_28 = GetNewAllocationData(this);
  uVar8 = this->PoolSize;
  uVar14 = this->PoolAlignment;
  uVar5 = this->PoolIndex;
  *(uint *)&local_28->PoolIndex = *(uint *)&local_28->PoolIndex & 0xffe1ffff;
  *(uint *)&local_28->PoolIndex = *(uint *)&local_28->PoolIndex | 0x1ffff;
  local_28->Owner = (FRHIPoolResource *)0x0;
  local_28->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  local_28->NextAllocation = (FRHIPoolAllocationData *)0x0;
  local_28->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  local_28->Offset = 0;
  local_28->PoolIndex = uVar5;
  local_28->Size = (uint)uVar8;
  local_28->Alignment = uVar14;
  ((this->HeadBlock).NextAllocation)->PreviousAllocation = local_28;
  local_28->NextAllocation = (this->HeadBlock).NextAllocation;
  (this->HeadBlock).NextAllocation = local_28;
  local_28->PreviousAllocation = pFVar2;
  pFVar6 = (this->FreeBlocks).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->FreeBlocks).ArrayMax * 8))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar11 = (this->FreeBlocks).ArrayNum;
  piVar1 = &(this->FreeBlocks).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->FreeBlocks).AllocatorInstance,piVar1);
  }
  (this->FreeBlocks).ArrayNum = iVar11 + 1;
  *(FRHIPoolAllocationData **)((this->FreeBlocks).AllocatorInstance.Data + (longlong)iVar11 * 8) =
       local_28;
  Validate(this);
  return;
}

// ReleaseAllocationData @ 1446e2320

void __thiscall
FRHIMemoryPool::ReleaseAllocationData(FRHIMemoryPool *this,FRHIPoolAllocationData *param_1)

{
  int *piVar1;
  TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRHIPoolAllocationData *local_res10 [3];
  
  param_1->Size = 0;
  param_1->Alignment = 0;
  param_1->Offset = 0;
  *(uint *)&param_1->PoolIndex = *(uint *)&param_1->PoolIndex & 0xffe0ffff | 0xffff;
  param_1->Owner = (FRHIPoolResource *)0x0;
  param_1->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->NextAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  local_res10[0] = param_1;
  if (DesiredAllocationPoolSize <= (this->AllocationDataPool).ArrayNum) {
    ::operator_delete(param_1,0x30);
    return;
  }
  pTVar2 = &this->AllocationDataPool;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->AllocationDataPool).ArrayMax * 8)) {
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
  iVar6 = (this->AllocationDataPool).ArrayNum;
  piVar1 = &(this->AllocationDataPool).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AllocationDataPool).ArrayNum = iVar6 + 1;
  *(FRHIPoolAllocationData **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10[0];
  return;
}

// RemoveFromFreeBlocks @ 1446e28a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRHIMemoryPool::RemoveFromFreeBlocks(FRHIMemoryPool *this,FRHIPoolAllocationData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->FreeBlocks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->FreeBlocks).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(FRHIPoolAllocationData **)((this->FreeBlocks).AllocatorInstance.Data + lVar5) == param_1
         ) {
        TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->FreeBlocks,uVar4,No);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->FreeBlocks).ArrayNum);
  }
  return;
}

// TryAllocate @ 1446e5f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FRHIMemoryPool::TryAllocate
          (FRHIMemoryPool *this,uint param_1,uint param_2,ERHIPoolResourceTypes param_3,
          FRHIPoolAllocationData *param_4)

{
  FScriptContainerElement *pFVar1;
  FRHIPoolAllocationData *this_00;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  if (((this->SupportedResourceTypes & param_3) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsResourceTypeSupported(InAllocationResourceType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x162,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = GetAlignedSize(param_1,this->PoolAlignment,param_2);
  if ((ulonglong)uVar6 <= this->FreeSize) {
    uVar10 = 0;
    uVar8 = 0;
    if (this->FreeListOrder == SortBySize) {
      if (((this->FreeBlocks).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = (this->FreeBlocks).AllocatorInstance.Data;
      if (uVar6 <= **(uint **)pFVar1) {
LAB_1446e60b2:
        uVar7 = GetAlignedSize(param_1,this->PoolAlignment,param_2);
        uVar6 = 0;
        if ((int)uVar8 < (this->FreeBlocks).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        this_00 = *(FRHIPoolAllocationData **)
                   ((this->FreeBlocks).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
        if ((this_00->Size < uVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FreeBlock->GetSize() >= AlignedSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x16a,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->FreeBlocks,uVar8,Default);
        uVar6 = this->PoolAlignment;
        if ((this_00->Type != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFree->IsFree()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x46,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        *(uint *)&param_4->PoolIndex = *(uint *)&param_4->PoolIndex & 0xffe2ffff;
        *(uint *)&param_4->PoolIndex = *(uint *)&param_4->PoolIndex | 0x2ffff;
        param_4->Offset = 0;
        param_4->Owner = (FRHIPoolResource *)0x0;
        param_4->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
        param_4->NextAllocation = (FRHIPoolAllocationData *)0x0;
        param_4->AliasAllocation = (FRHIPoolAllocationData *)0x0;
        param_4->Size = param_1;
        param_4->Alignment = param_2;
        uVar8 = this_00->Offset;
        if ((uVar6 % param_2 != 0) && (uVar8 % param_2 != 0)) {
          uVar8 = uVar8 + (param_2 - uVar8 % param_2);
        }
        param_4->Offset = uVar8;
        param_4->PoolIndex = this_00->PoolIndex;
        INSERT(param_4->PoolIndex,1,0x14,1);
        param_4->PoolIndex = (ushort)uVar3;
        *(short *)&param_4->field_0xe = SUB42(uVar3,2);
        uVar6 = GetAlignedSize(param_1,uVar6,param_2);
        this_00->Size = this_00->Size - uVar6;
        this_00->Offset = this_00->Offset + uVar6;
        this_00->PreviousAllocation->NextAllocation = param_4;
        param_4->PreviousAllocation = this_00->PreviousAllocation;
        this_00->PreviousAllocation = param_4;
        param_4->NextAllocation = this_00;
        if ((param_4->Offset % param_2 != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(AllocationData.GetOffset() % InAllocationAlignment) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x171,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((this->FreeSize < (ulonglong)uVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FreeSize >= AlignedSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x174,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        this->FreeSize = this->FreeSize - (ulonglong)uVar7;
        this->AllocatedBlocks = this->AllocatedBlocks + 1;
        this->AligmnentWaste = this->AligmnentWaste + (ulonglong)(uVar7 - param_1);
        if (this_00->Size == 0) {
          FRHIPoolAllocationData::RemoveFromLinkedList(this_00);
          ReleaseAllocationData(this,this_00);
          Validate(this);
          return true;
        }
        AddToFreeBlocks(this,this_00);
        return true;
      }
      uVar7 = (this->FreeBlocks).ArrayNum;
      uVar12 = uVar7;
      uVar8 = 0;
      if (0 < (int)uVar7) {
        do {
          uVar13 = uVar12 >> 1;
          iVar9 = uVar13 + (int)uVar10;
          if (**(uint **)(pFVar1 + (longlong)iVar9 * 8) < uVar6) {
            uVar10 = (ulonglong)(iVar9 + (uVar12 & 1));
          }
          uVar8 = (uint)uVar10;
          uVar12 = uVar13;
        } while (uVar13 != 0);
      }
      if ((int)uVar8 < (int)uVar7) {
LAB_1446e60a9:
        if (uVar8 != 0xffffffff) goto LAB_1446e60b2;
      }
    }
    else if (0 < (this->FreeBlocks).ArrayNum) {
      uVar11 = uVar10;
      do {
        uVar8 = (uint)uVar10;
        uVar7 = 0;
        if ((int)uVar8 < (this->FreeBlocks).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar6 <= **(uint **)((this->FreeBlocks).AllocatorInstance.Data + uVar11))
        goto LAB_1446e60a9;
        uVar10 = (ulonglong)(uVar8 + 1);
        uVar11 = uVar11 + 8;
      } while ((int)(uVar8 + 1) < (this->FreeBlocks).ArrayNum);
    }
  }
  return false;
}

// TryClear @ 1446e6810

void __thiscall
FRHIMemoryPool::TryClear
          (FRHIMemoryPool *this,FRHIContextArray *param_1,FRHIPoolAllocator *param_2,uint param_3,
          uint *param_4,TArray<FRHIMemoryPool_*,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FRHIPoolAllocationData *pFVar4;
  bool bVar5;
  FRHIPoolAllocationData *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_87 [3];
  uint local_84;
  FRHIPoolAllocationData *local_80;
  FRHIPoolAllocationData local_78;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId426,"FRHIMemoryPool::TryClear",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
               ,0x1aa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId426);
  }
  pFVar6 = (this->HeadBlock).PreviousAllocation;
  local_80 = &this->HeadBlock;
  if (pFVar6 != local_80) {
    do {
      if (param_3 <= *param_4) break;
      pFVar4 = pFVar6->PreviousAllocation;
      if (((pFVar6->Type == 2) && (pFVar6->Locked == 0)) &&
         (pFVar6->Owner != (FRHIPoolResource *)0x0)) {
        pFVar7 = (param_5->AllocatorInstance).Data;
        iVar2 = param_5->ArrayNum;
        local_84 = pFVar6->Alignment;
        uVar3 = pFVar6->Size;
        pFVar1 = pFVar7 + (longlong)iVar2 * 8;
        while( true ) {
          if (param_5->ArrayNum != iVar2) {
            `TCheckedPointerIterator<FRHIMemoryPool_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_87);
          }
          if (pFVar7 == pFVar1) goto LAB_1446e69d7;
          bVar5 = TryAllocate(*(FRHIMemoryPool **)pFVar7,uVar3,local_84,this->SupportedResourceTypes
                              ,&local_78);
          if (bVar5) break;
          pFVar7 = pFVar7 + 8;
        }
        (**(code **)(param_2->_padding_ + 0x10))(param_2,param_1,pFVar6,&local_78);
        *param_4 = *param_4 + pFVar6->Size;
      }
LAB_1446e69d7:
      pFVar6 = pFVar4;
    } while (pFVar4 != local_80);
  }
  Validate(this);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Validate @ 1446e72e0

void __thiscall FRHIMemoryPool::Validate(FRHIMemoryPool *this)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  FRHIPoolAllocationData *pFVar9;
  ulong64 uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong local_res10;
  
  if (0 < GRHIPoolAllocatorValidateLinkList) {
    pFVar9 = (this->HeadBlock).NextAllocation;
    lVar12 = 0;
    uVar10 = 0;
    local_res10 = 0;
    if (pFVar9 != &this->HeadBlock) {
      do {
        if ((pFVar9 != pFVar9->NextAllocation->PreviousAllocation) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentBlock == CurrentBlock->GetNext()->GetPrev()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x25d,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pFVar9 != pFVar9->PreviousAllocation->NextAllocation) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentBlock == CurrentBlock->GetPrev()->GetNext()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x25e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = this->PoolAlignment;
        uVar8 = pFVar9->Alignment;
        uVar1 = pFVar9->Size;
        if ((uVar11 < uVar8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InAllocationAlignment <= InPoolAlignment",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0xfd,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar5 = uVar1 + uVar8;
        if (uVar11 % uVar8 == 0) {
          uVar5 = uVar1;
        }
        uVar11 = (int)((((ulonglong)uVar5 - 1) + (ulonglong)uVar11) / (ulonglong)uVar11) * uVar11;
        if (((pFVar9->Offset & -this->PoolAlignment) != local_res10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AlignedOffset == CurrentOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x263,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar7 = pFVar9->Type;
        if (bVar7 == 2) {
          lVar12 = lVar12 + (ulonglong)uVar11;
        }
        else if (bVar7 == 1) {
          uVar10 = uVar10 + uVar11;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                             ,0x26f,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar9 = pFVar9->NextAllocation;
        local_res10 = local_res10 + uVar11;
      } while (pFVar9 != &this->HeadBlock);
    }
    if ((lVar12 + uVar10 != this->PoolSize) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalFreeSize + TotalAllocatedSize == PoolSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                           ,0x276,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uVar10 != this->FreeSize) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalFreeSize == FreeSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                           ,0x277,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((lVar12 != this->PoolSize - this->FreeSize) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalAllocatedSize == GetUsedSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                           ,0x278,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = 0;
    uVar11 = 0;
    if (0 < (this->FreeBlocks).ArrayNum) {
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (this->FreeBlocks).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(uint **)((this->FreeBlocks).AllocatorInstance.Data + lVar12);
        if (((((byte)(*(uint *)(*(longlong *)(puVar3 + 4) + 0xc) >> 0x10) & 0xf) == 1) &&
            ((*(uint *)(*(longlong *)(puVar3 + 4) + 0xc) >> 0x14 & 1) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FreeBlock->GetPrev()->IsFree() || FreeBlock->GetPrev()->IsLocked()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x27f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((((byte)(*(uint *)(*(longlong *)(puVar3 + 6) + 0xc) >> 0x10) & 0xf) == 1) &&
            ((*(uint *)(*(longlong *)(puVar3 + 6) + 0xc) >> 0x14 & 1) == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!FreeBlock->GetNext()->IsFree() || FreeBlock->GetNext()->IsLocked()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x280,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->FreeListOrder == SortBySize) &&
           (iVar2 = (this->FreeBlocks).ArrayNum, uVar11 != iVar2 - 1U)) {
          uVar8 = 0;
          if ((int)(uVar11 + 1) < iVar2) {
            uVar8 = ~(uVar11 + 1) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((**(uint **)((this->FreeBlocks).AllocatorInstance.Data + lVar12 + 8) < *puVar3) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("FreeListOrder != EFreeListOrder::SortBySize || FreeBlockIndex == (FreeBlocks.Num() - 1) || FreeBlock->GetSize() <= FreeBlocks[FreeBlockIndex + 1]->GetSize()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                                 ,0x281,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (((puVar3[2] & this->PoolAlignment - 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsAligned(FreeBlock->GetOffset(), PoolAlignment)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                               ,0x282,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 + *puVar3;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < (this->FreeBlocks).ArrayNum);
    }
    if ((uVar10 != this->FreeSize) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalFreeSize == FreeSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                           ,0x285,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

