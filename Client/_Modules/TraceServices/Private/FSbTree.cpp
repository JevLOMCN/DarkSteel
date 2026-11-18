// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 10

// FSbTree @ 14d425cb0

FSbTree * __thiscall
TraceServices::FSbTree::FSbTree(FSbTree *this,ILinearAllocator *param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSbTree *pFVar6;
  undefined8 local_18 [2];
  
  this->Allocator = param_1;
  (this->Cells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cells).ArrayNum = 0;
  piVar1 = &(this->Cells).ArrayMax;
  (this->OffsettedCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffsettedCells).ArrayNum = 0;
  (this->OffsettedCells).ArrayMax = 0;
  (this->ColumnStartTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnStartTimes).ArrayNum = 0;
  (this->ColumnStartTimes).ArrayMax = 0;
  this->ColumnShift = param_2;
  this->CurrentColumn = 0;
  this->LastAllocEndTime = 0.0;
  *piVar1 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&(this->Cells).AllocatorInstance,piVar1);
  local_18[0] = 0;
  (this->Cells).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->Cells).AllocatorInstance.Data + (longlong)iVar5 * 8) = 0;
  pFVar2 = (this->OffsettedCells).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->OffsettedCells).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSbTree *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->OffsettedCells).ArrayNum;
  if (iVar5 == (this->OffsettedCells).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OffsettedCells).AllocatorInstance,
                       &(this->OffsettedCells).ArrayMax);
  }
  (this->OffsettedCells).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->OffsettedCells).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0]
  ;
  return this;
}

// ~FSbTree @ 14d42c590

void __thiscall TraceServices::FSbTree::~FSbTree(FSbTree *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_> *local_res18;
  
  pFVar8 = (this->Cells).AllocatorInstance.Data;
  pTVar6 = &this->Cells;
  iVar2 = (this->Cells).ArrayNum;
  pFVar5 = pFVar8 + (longlong)iVar2 * 8;
  local_res18 = pTVar6;
  while( true ) {
    if (pTVar6->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FSbTreeCell_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar5) break;
    pvVar4 = *(void **)pFVar8;
    if (pvVar4 != (void *)0x0) {
      puVar7 = *(undefined8 **)((longlong)pvVar4 + 8);
      iVar3 = *(int *)((longlong)pvVar4 + 0x10);
      puVar1 = puVar7 + iVar3;
      while( true ) {
        if (*(int *)((longlong)pvVar4 + 0x10) != iVar3) {
          `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        if (puVar7 == puVar1) break;
        ::operator_delete((void *)*puVar7,0x40);
        puVar7 = puVar7 + 1;
      }
      if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar4 + 8));
      }
      ::operator_delete(pvVar4,0x30);
      pTVar6 = local_res18;
    }
    pFVar8 = pFVar8 + 8;
  }
  pTVar6->ArrayNum = 0;
  if (pTVar6->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar6->AllocatorInstance,0,&pTVar6->ArrayMax);
  }
  pFVar8 = (this->OffsettedCells).AllocatorInstance.Data;
  iVar2 = (this->OffsettedCells).ArrayNum;
  pFVar5 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OffsettedCells).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FSbTreeCell_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar5) break;
    pvVar4 = *(void **)pFVar8;
    if (pvVar4 != (void *)0x0) {
      puVar7 = *(undefined8 **)((longlong)pvVar4 + 8);
      iVar3 = *(int *)((longlong)pvVar4 + 0x10);
      puVar1 = puVar7 + iVar3;
      while( true ) {
        if (*(int *)((longlong)pvVar4 + 0x10) != iVar3) {
          `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        if (puVar7 == puVar1) break;
        ::operator_delete((void *)*puVar7,0x40);
        puVar7 = puVar7 + 1;
      }
      if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar4 + 8));
      }
      ::operator_delete(pvVar4,0x30);
    }
    pFVar8 = pFVar8 + 8;
  }
  (this->OffsettedCells).ArrayNum = 0;
  if ((this->OffsettedCells).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->OffsettedCells).AllocatorInstance,0,&(this->OffsettedCells).ArrayMax);
  }
  pFVar5 = (this->ColumnStartTimes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->OffsettedCells).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Cells).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// AddAlloc @ 14d439680

void __thiscall TraceServices::FSbTree::AddAlloc(FSbTree *this,FAllocationItem *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FSbTreeCell *pFVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  byte bVar8;
  FSbTreeCell *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if ((param_1 == (FAllocationItem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Alloc != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                         ,0x193,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->EndTime <= this->LastAllocEndTime && this->LastAllocEndTime != param_1->EndTime) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Alloc->EndTime >= LastAllocEndTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                         ,0x195,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->LastAllocEndTime = param_1->EndTime;
  bVar7 = (byte)this->ColumnShift;
  uVar14 = param_1->StartEventIndex >> (bVar7 & 0x1f);
  bVar7 = bVar7 & 0x1f;
  uVar10 = param_1->EndEventIndex >> bVar7;
  if (this->CurrentColumn < uVar10) {
    if (((uint)(this->Cells).ArrayNum <= this->CurrentColumn * 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<uint32>(Cells.Num()) > (CurrentColumn << 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                           ,0x19d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->ColumnStartTimes).ArrayNum != uVar10 + 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<uint32>(ColumnStartTimes.Num()) == EndColumn + 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                           ,0x19e,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (uVar10 - this->CurrentColumn) * 2;
    TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->Cells,iVar3);
    TArray<TraceServices::FSbTreeCell_*,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->OffsettedCells,iVar3);
    this->CurrentColumn = uVar10;
  }
  if (uVar10 - uVar14 == 0) {
    uVar12 = uVar14 * 2;
LAB_14d439803:
    if (((uint)(this->Cells).ArrayNum <= uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CellIndex < static_cast<uint32>(Cells.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                           ,0x1da,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar14 = 0 >> bVar7;
    pFVar9 = (FSbTreeCell *)(ulonglong)uVar14;
    uVar10 = uVar14;
    if ((int)uVar12 < (this->Cells).ArrayNum) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar13 = (longlong)(int)uVar12;
    pFVar5 = *(FSbTreeCell **)((this->Cells).AllocatorInstance.Data + lVar13 * 8);
    if (pFVar5 != (FSbTreeCell *)0x0) goto LAB_14d439a60;
    pFVar5 = ::operator_new(0x30);
    if (pFVar5 != (FSbTreeCell *)0x0) {
      pFVar5->Allocator = this->Allocator;
      pFVar5->MinStartTime = 1.7976931348623157e+308;
      (pFVar5->Allocs).AllocatorInstance.Data = (FScriptContainerElement *)pFVar9;
      *(FSbTreeCell **)&(pFVar5->Allocs).ArrayNum = pFVar9;
      pFVar5->MinStartEventIndex = 0xffffffff;
      pFVar5->MaxEndEventIndex = uVar14;
      pFVar5->MaxEndTime = (double)pFVar9;
      pFVar9 = pFVar5;
    }
    if ((int)uVar12 < (this->Cells).ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->Cells).AllocatorInstance.Data;
  }
  else {
    uVar1 = (ulonglong)(uVar10 - uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar8 = (byte)lVar13;
    uVar11 = (1 << (bVar8 & 0x1f)) >> 1;
    if ((uVar11 & uVar14) == (uVar11 & uVar10)) {
      uVar11 = uVar11 * 2;
      bVar8 = bVar8 + 1;
    }
    uVar12 = 1 << (bVar8 & 0x1f);
    uVar10 = uVar12 - 1;
    uVar12 = (~uVar11 & uVar14) * 2 & ~uVar12 | uVar10;
    if ((uVar14 & uVar11) == 0) goto LAB_14d439803;
    if (((uVar10 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(CellIndex & 1) != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                           ,0x1e6,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((uint)(this->OffsettedCells).ArrayNum <= uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CellIndex < static_cast<uint32>(OffsettedCells.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                           ,0x1e8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar14 = 0 >> bVar7;
    pFVar9 = (FSbTreeCell *)(ulonglong)uVar14;
    uVar10 = uVar14;
    if ((int)uVar12 < (this->OffsettedCells).ArrayNum) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar13 = (longlong)(int)uVar12;
    pFVar5 = *(FSbTreeCell **)((this->OffsettedCells).AllocatorInstance.Data + lVar13 * 8);
    if (pFVar5 != (FSbTreeCell *)0x0) goto LAB_14d439a60;
    pFVar5 = ::operator_new(0x30);
    if (pFVar5 != (FSbTreeCell *)0x0) {
      pFVar5->Allocator = this->Allocator;
      pFVar5->MinStartTime = 1.7976931348623157e+308;
      (pFVar5->Allocs).AllocatorInstance.Data = (FScriptContainerElement *)pFVar9;
      *(FSbTreeCell **)&(pFVar5->Allocs).ArrayNum = pFVar9;
      pFVar5->MinStartEventIndex = 0xffffffff;
      pFVar5->MaxEndEventIndex = uVar14;
      pFVar5->MaxEndTime = (double)pFVar9;
      pFVar9 = pFVar5;
    }
    if ((int)uVar12 < (this->OffsettedCells).ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->OffsettedCells).AllocatorInstance.Data;
  }
  *(FSbTreeCell **)(pFVar6 + lVar13 * 8) = pFVar9;
  pFVar5 = pFVar9;
LAB_14d439a60:
  FSbTreeCell::AddAlloc(pFVar5,param_1);
  return;
}

// DebugPrint @ 14d44e4c0

void __thiscall TraceServices::FSbTree::DebugPrint(FSbTree *this)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  IFileManager *pIVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_res20;
  FString local_b8;
  ForAnyElementType local_a8;
  int local_a0 [4];
  uint local_90;
  longlong local_88;
  FString local_80;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  
  uVar11 = 0;
  uVar2 = (this->Cells).ArrayNum;
  local_a0[3] = this->CurrentColumn + 1;
  uVar1 = (ulonglong)(uint)local_a0[3] * 2 + 1;
  local_88 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> local_88 == 0; local_88 = local_88 + -1) {
    }
  }
  uVar15 = (uint)local_88;
  uVar13 = uVar11;
  local_90 = uVar15;
  if (uVar2 != 0) {
    do {
      uVar14 = 0;
      if ((int)uVar13 < (this->Cells).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      if ((lVar3 != 0) && (uVar14 = *(uint *)(lVar3 + 0x10), uVar11 < uVar14)) {
        uVar11 = uVar14;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar2);
  }
  uVar14 = 0;
  uVar13 = (this->OffsettedCells).ArrayNum;
  if (uVar13 != 0) {
    do {
      uVar7 = 0;
      if ((int)uVar14 < (this->OffsettedCells).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)
               ((this->OffsettedCells).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
      if ((lVar3 != 0) && (uVar7 = *(uint *)(lVar3 + 0x10), uVar11 < uVar7)) {
        uVar11 = uVar7;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ::FString::AppendfImpl(&local_b8,L"Column Width:\t%u\n");
  ::FString::AppendfImpl(&local_b8,L"Allocs:\t%u\n");
  iVar5 = local_a0[3];
  ::FString::AppendfImpl(&local_b8,L"Columns:\t%u\n");
  ::FString::AppendfImpl(&local_b8,L"Max Depth:\t%u\n");
  ::FString::AppendfImpl(&local_b8,L"Cells:\t%u\n");
  ::FString::AppendfImpl(&local_b8,L"Max Alloc Count Per Cell:\t%u\n");
  ::FString::AppendfImpl(&local_b8,L"Not Empty Cells:\t%u\n");
  ::FString::AppendfImpl(&local_b8,L"Not Empty Offsetted Cells:\t%u\n");
  ::FString::AppendChars(&local_b8,L"\n",1);
  uVar11 = 0;
  do {
    ::FString::AppendfImpl(&local_b8,L"\t%u\t%u*");
    uVar11 = uVar11 + 1;
  } while (uVar11 <= uVar15);
  ::FString::AppendChars(&local_b8,L"\n",1);
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar15 + 1,&local_a8,local_a0,local_a0 + 1);
  memset(local_a8.Data + (longlong)iVar8 * 4,0,(longlong)(int)(uVar15 + 1) << 2);
  if ((local_a0[0] < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)local_a8.Data = 1;
  local_res20 = 0;
  if (iVar5 != 0) {
    local_a0[2] = 0;
    do {
      uVar11 = local_a0[2];
      ::FString::AppendfImpl(&local_b8,L"%u");
      uVar14 = 1;
      uVar15 = 0;
      do {
        uVar12 = ~uVar14 & uVar11 | uVar14 - 1;
        uVar7 = 0;
        if ((int)uVar15 < local_a0[0]) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar12 == *(uint *)(local_a8.Data + (longlong)(int)uVar15 * 4)) {
          ::FString::AppendChars(&local_b8,L"\t\t",2);
        }
        else {
          if (uVar12 < uVar2) {
            uVar11 = 0;
            if ((int)uVar12 < (this->Cells).ArrayNum) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
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
          }
          if (uVar12 < uVar13) {
            uVar11 = 0;
            if ((int)uVar12 < (this->OffsettedCells).ArrayNum) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
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
          }
          ::FString::AppendfImpl(&local_b8,L"\t%u\t%u");
          uVar11 = 0;
          if ((int)uVar15 < local_a0[0]) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          *(uint *)(local_a8.Data + (longlong)(int)uVar15 * 4) = uVar12;
          uVar11 = local_a0[2];
        }
        uVar15 = uVar15 + 1;
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      } while (uVar15 <= (uint)local_88);
      ::FString::AppendChars(&local_b8,L"\n",1);
      local_a0[2] = uVar11 + 2;
      local_res20 = local_res20 + 1;
    } while (local_res20 < (uint)local_a0[3]);
  }
  ::FString::AppendChars(&local_b8,L"\n",1);
  ::FString::FString(&local_80,L"D:/work/sbif.tab");
  pIVar9 = IFileManager::Get();
  local_68 = local_b8.Data.AllocatorInstance.Data;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar10.Data = local_80.Data.AllocatorInstance.Data;
  }
  iStack_60 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iStack_60 = 0;
  }
  local_58._12_4_ = uStack_5c;
  local_58.Size = iStack_60;
  local_58.DataPtr = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_58,(wchar_t *)FVar10.Data,AutoDetect,pIVar9,0);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetColumnsAtTime @ 14d464060

int __thiscall
TraceServices::FSbTree::GetColumnsAtTime(FSbTree *this,double param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = (this->ColumnStartTimes).ArrayNum;
  uVar8 = 0;
  if (0 < (int)uVar9) {
    do {
      iVar6 = (uVar9 >> 1) + uVar8;
      pFVar1 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar6 * 8;
      if (*(double *)pFVar1 <= param_1 && param_1 != *(double *)pFVar1) {
        uVar8 = iVar6 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  iVar6 = uVar8 - 1;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  if (param_3 != (int *)0x0) {
    iVar2 = (this->ColumnStartTimes).ArrayNum;
    uVar9 = uVar8;
    for (lVar7 = (longlong)iVar6; lVar7 < iVar2 + -1; lVar7 = lVar7 + 1) {
      uVar5 = 0;
      if ((int)uVar9 < (this->ColumnStartTimes).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (param_1 != *(double *)((this->ColumnStartTimes).AllocatorInstance.Data + lVar7 * 8 + 8))
      break;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 + 1;
    }
    *param_3 = iVar6;
  }
  return uVar8;
}

// IterateCells @ 14d474dd0

void __thiscall
TraceServices::FSbTree::IterateCells
          (FSbTree *this,
          TArray<TraceServices::FSbTreeCell_const_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  if ((-1 < param_2) && (param_2 <= (int)this->CurrentColumn)) {
    uVar7 = (ulonglong)this->CurrentColumn * 2 + 1;
    local_48 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_48 == 0; local_48 = local_48 + -1) {
      }
    }
    uVar11 = 1;
    uVar8 = 1;
    uVar1 = (this->Cells).ArrayNum;
    uVar7 = (ulonglong)((int)local_48 + 1);
    do {
      uVar9 = ~uVar8 & param_2 * 2 | uVar8 - 1;
      if (uVar9 < uVar1) {
        uVar10 = 0;
        if ((int)uVar9 < (this->Cells).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_58 = *(longlong *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        if (local_58 != 0) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = param_1->ArrayNum;
          if (iVar5 == param_1->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar5 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_58;
        }
      }
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    uVar1 = (this->OffsettedCells).ArrayNum;
    uVar8 = (uint)local_48;
    if (uVar8 != 0) {
      uVar9 = 2;
      do {
        if ((uint)param_2 < (uint)((int)uVar9 >> 1)) {
          return;
        }
        uVar10 = (param_2 - ((int)uVar9 >> 1)) * 2 & ~uVar9 | uVar9 - 1;
        if (uVar10 < uVar1) {
          uVar6 = 0;
          if ((int)uVar10 < (this->OffsettedCells).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_50 = *(longlong *)
                      ((this->OffsettedCells).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
          if (local_50 != 0) {
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
                ((FScriptContainerElement *)&local_50 < pFVar2 + (longlong)param_1->ArrayMax * 8))
               && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = param_1->ArrayNum;
            if (iVar5 == param_1->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar5 + 1;
            *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_50;
          }
        }
        uVar11 = uVar11 + 1;
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      } while (uVar11 <= uVar8);
    }
  }
  return;
}

// IterateCells @ 14d4750f0

void __thiscall
TraceServices::FSbTree::IterateCells
          (FSbTree *this,
          TArray<TraceServices::FSbTreeCell_const_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  if (param_2 == param_3) {
    IterateCells(this,param_1,param_2);
    return;
  }
  if (((-1 < param_3) && (uVar1 = this->CurrentColumn, param_2 <= (int)uVar1)) &&
     (param_2 <= param_3)) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (uVar1 < (uint)param_3) {
      param_3 = uVar1;
    }
    if (((uint)param_3 < (uint)param_2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalStartColumn <= LocalEndColumn",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                           ,0x2e9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = (this->Cells).ArrayNum;
    uVar11 = 1;
    uVar12 = (ulonglong)this->CurrentColumn * 2 + 1;
    local_48 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> local_48 == 0; local_48 = local_48 - 1) {
      }
    }
    uVar12 = (ulonglong)((int)local_48 + 1);
    do {
      uVar8 = uVar11 - 1;
      uVar10 = ~uVar11;
      uVar5 = (param_3 * 2 & uVar10 | uVar8) + 1;
      uVar9 = uVar1;
      if (uVar5 < uVar1) {
        uVar9 = uVar5;
      }
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      for (uVar8 = param_2 * 2 & uVar10 | uVar8; uVar8 < uVar9; uVar8 = uVar8 + uVar11) {
        uVar5 = 0;
        if ((int)uVar8 < (this->Cells).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
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
        local_58 = *(longlong *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
        if (local_58 != 0) {
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == param_1->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar6 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_58;
        }
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar1 = (this->OffsettedCells).ArrayNum;
    if ((int)local_48 != 0) {
      uVar11 = 2;
      uVar12 = local_48 & 0xffffffff;
      do {
        uVar5 = uVar11 - 1;
        uVar9 = (int)uVar11 >> 1;
        uVar8 = ~uVar11;
        iVar6 = param_3 - uVar9;
        if ((uint)param_3 <= uVar9) {
          iVar6 = 0;
        }
        uVar7 = (iVar6 * 2 & uVar8 | uVar5) + 1;
        uVar10 = uVar1;
        if (uVar7 < uVar1) {
          uVar10 = uVar7;
        }
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        iVar6 = param_2 - uVar9;
        if ((uint)param_2 <= uVar9) {
          iVar6 = 0;
        }
        uVar5 = iVar6 * 2 & uVar8 | uVar5;
        if (uVar5 < uVar10) {
          do {
            uVar9 = 0;
            if ((int)uVar5 < (this->OffsettedCells).ArrayNum) {
              uVar9 = ~uVar5 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_50 = *(longlong *)
                        ((this->OffsettedCells).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
            if (local_50 != 0) {
              pFVar2 = (param_1->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
                  ((FScriptContainerElement *)&local_50 < pFVar2 + (longlong)param_1->ArrayMax * 8))
                 && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar6 = param_1->ArrayNum;
              if (iVar6 == param_1->ArrayMax) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              param_1->ArrayNum = iVar6 + 1;
              *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_50;
            }
            uVar5 = uVar5 + uVar11;
          } while (uVar5 < uVar10);
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}

// Query @ 14d47e390

void __thiscall
TraceServices::FSbTree::Query
          (FSbTree *this,
          TArray<TraceServices::FSbTreeCell_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FQueryParams *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  uint local_res18 [2];
  int local_res20 [2];
  
  switch(param_2->Rule) {
  case aAf:
    GetColumnsAtTime(this,param_2->TimeA,local_res20,(int *)local_res18);
    break;
  case afA:
    dVar7 = param_2->TimeA;
    goto LAB_14d47e781;
  case Aaf:
    iVar5 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    local_res20[0] = 0;
    if (0 < (int)uVar6) {
      do {
        iVar4 = (uVar6 >> 1) + iVar5;
        pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar4 * 8;
        if (*(double *)pFVar2 <= param_2->TimeA && param_2->TimeA != *(double *)pFVar2) {
          iVar5 = iVar4 + (uVar6 & 1);
        }
        uVar3 = uVar6 >> 1;
        uVar6 = uVar6 >> 1;
        local_res20[0] = iVar5;
      } while (uVar3 != 0);
    }
LAB_14d47e430:
    local_res18[0] = this->CurrentColumn;
    local_res20[0] = local_res20[0] + -1;
    break;
  case aAfB:
    iVar4 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    iVar5 = 0;
    if (0 < (int)uVar6) {
      do {
        iVar5 = (uVar6 >> 1) + iVar4;
        pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar5 * 8;
        if (*(double *)pFVar2 <= param_2->TimeA && param_2->TimeA != *(double *)pFVar2) {
          iVar4 = iVar5 + (uVar6 & 1);
        }
        uVar3 = uVar6 >> 1;
        uVar6 = uVar6 >> 1;
        iVar5 = iVar4;
      } while (uVar3 != 0);
    }
    goto LAB_14d47e480;
  case AaBf:
    local_res20[0] = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if ((int)uVar6 < 1) goto LAB_14d47e430;
    do {
      iVar5 = (uVar6 >> 1) + local_res20[0];
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar5 * 8;
      if (*(double *)pFVar2 <= param_2->TimeB && param_2->TimeB != *(double *)pFVar2) {
        local_res20[0] = iVar5 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
    local_res18[0] = this->CurrentColumn;
    local_res20[0] = local_res20[0] + -1;
    break;
  case aAfaBf:
    local_res20[0] = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if ((int)uVar6 < 1) goto LAB_14d47e430;
    do {
      iVar5 = (uVar6 >> 1) + local_res20[0];
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar5 * 8;
      if (*(double *)pFVar2 <= param_2->TimeA && param_2->TimeA != *(double *)pFVar2) {
        local_res20[0] = iVar5 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
    local_res18[0] = this->CurrentColumn;
    local_res20[0] = local_res20[0] + -1;
    break;
  case AfB:
    iVar5 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if (0 < (int)uVar6) {
      do {
        iVar4 = (uVar6 >> 1) + iVar5;
        pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar4 * 8;
        if (*(double *)pFVar2 <= param_2->TimeA && param_2->TimeA != *(double *)pFVar2) {
          iVar5 = iVar4 + (uVar6 & 1);
        }
        uVar3 = uVar6 >> 1;
        uVar6 = uVar6 >> 1;
      } while (uVar3 != 0);
    }
    goto LAB_14d47e480;
  case AaB:
    local_res20[0] = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if ((int)uVar6 < 1) goto LAB_14d47e430;
    do {
      iVar5 = (uVar6 >> 1) + local_res20[0];
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar5 * 8;
      if (*(double *)pFVar2 <= param_2->TimeA && param_2->TimeA != *(double *)pFVar2) {
        local_res20[0] = iVar5 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
    local_res18[0] = this->CurrentColumn;
    local_res20[0] = local_res20[0] + -1;
    break;
  case AafB:
    iVar4 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    iVar5 = 0;
    if (0 < (int)uVar6) {
      do {
        iVar1 = (uVar6 >> 1) + iVar4;
        pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar1 * 8;
        iVar5 = iVar4;
        if (*(double *)pFVar2 <= param_2->TimeA && param_2->TimeA != *(double *)pFVar2) {
          iVar5 = iVar1 + (uVar6 & 1);
        }
        uVar3 = uVar6 >> 1;
        iVar4 = iVar5;
        uVar6 = uVar6 >> 1;
      } while (uVar3 != 0);
    }
LAB_14d47e480:
    dVar7 = param_2->TimeB;
    goto LAB_14d47e486;
  case aABf:
    local_res20[0] = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if ((int)uVar6 < 1) goto LAB_14d47e430;
    do {
      iVar5 = (uVar6 >> 1) + local_res20[0];
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar5 * 8;
      if (*(double *)pFVar2 <= param_2->TimeB && param_2->TimeB != *(double *)pFVar2) {
        local_res20[0] = iVar5 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
    local_res18[0] = this->CurrentColumn;
    local_res20[0] = local_res20[0] + -1;
    break;
  case AaBCf:
    iVar5 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    local_res20[0] = 0;
    if ((int)uVar6 < 1) goto LAB_14d47e430;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar4 * 8;
      if (*(double *)pFVar2 <= param_2->TimeC && param_2->TimeC != *(double *)pFVar2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
    local_res18[0] = this->CurrentColumn;
    local_res20[0] = iVar5 + -1;
    break;
  case AaBfC:
    iVar5 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if (0 < (int)uVar6) {
      do {
        iVar4 = (uVar6 >> 1) + iVar5;
        pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar4 * 8;
        if (*(double *)pFVar2 <= param_2->TimeB && param_2->TimeB != *(double *)pFVar2) {
          iVar5 = iVar4 + (uVar6 & 1);
        }
        uVar3 = uVar6 >> 1;
        uVar6 = uVar6 >> 1;
      } while (uVar3 != 0);
    }
LAB_14d47e6f0:
    dVar7 = param_2->TimeC;
    goto LAB_14d47e486;
  case aABfC:
    iVar5 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    iVar4 = 0;
    if ((int)uVar6 < 1) goto LAB_14d47e6f0;
    do {
      iVar1 = (uVar6 >> 1) + iVar4;
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar1 * 8;
      iVar5 = iVar4;
      if (*(double *)pFVar2 <= param_2->TimeB && param_2->TimeB != *(double *)pFVar2) {
        iVar5 = iVar1 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
      iVar4 = iVar5;
    } while (uVar3 != 0);
    dVar7 = param_2->TimeC;
    goto LAB_14d47e486;
  case AaBCfD:
    iVar5 = 0;
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    if (0 < (int)uVar6) {
      do {
        iVar4 = (uVar6 >> 1) + iVar5;
        pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar4 * 8;
        if (*(double *)pFVar2 <= param_2->TimeC && param_2->TimeC != *(double *)pFVar2) {
          iVar5 = iVar4 + (uVar6 & 1);
        }
        uVar3 = uVar6 >> 1;
        uVar6 = uVar6 >> 1;
      } while (uVar3 != 0);
    }
    dVar7 = param_2->TimeD;
LAB_14d47e486:
    GetColumnsAtTime(this,dVar7,(int *)0x0,(int *)local_res18);
    local_res20[0] = iVar5 + -1;
    break;
  case AoB:
  case AiB:
    dVar7 = param_2->TimeB;
LAB_14d47e781:
    GetColumnsAtTime(this,dVar7,(int *)0x0,(int *)local_res18);
    local_res20[0] = 0;
    break;
  default:
    goto switchD_14d47e3c6_default;
  }
  IterateCells(this,param_1,local_res20[0],local_res18[0]);
switchD_14d47e3c6_default:
  return;
}

// SetTimeForEvent @ 14d48b700

void __thiscall TraceServices::FSbTree::SetTimeForEvent(FSbTree *this,uint param_1,double param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  double local_res18 [2];
  
  bVar7 = (byte)this->ColumnShift;
  if ((param_1 & (1 << (bVar7 & 0x1f)) - 1U) == 0) {
    uVar6 = (this->ColumnStartTimes).ArrayNum;
    uVar8 = param_1 >> (bVar7 & 0x1f);
    local_res18[0] = param_2;
    if (uVar6 == uVar8) {
      pFVar2 = (this->ColumnStartTimes).AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
         ((FScriptContainerElement *)local_res18 <
          pFVar2 + (longlong)(this->ColumnStartTimes).ArrayMax * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (this->ColumnStartTimes).ArrayNum;
      piVar1 = &(this->ColumnStartTimes).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ColumnStartTimes).AllocatorInstance,piVar1);
      }
      (this->ColumnStartTimes).ArrayNum = iVar5 + 1;
      *(double *)((this->ColumnStartTimes).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_res18[0];
      return;
    }
    if (uVar6 != uVar8 + 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<uint32>(ColumnStartTimes.Num()) == (EventIndex >> ColumnShift) + 1"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                         ,0x189,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ColumnStartTimes).ArrayNum;
    uVar8 = iVar5 - 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar5) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    if (local_res18[0] !=
        *(double *)
         ((this->ColumnStartTimes).AllocatorInstance.Data +
         (longlong)(this->ColumnStartTimes).ArrayNum * 8 + -8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColumnStartTimes.Last() == Time",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                         ,0x18a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// Validate @ 14d48fcb0

void __thiscall TraceServices::FSbTree::Validate(FSbTree *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_res10;
  
  local_res10 = 1;
  uVar10 = (ulonglong)this->CurrentColumn * 2 + 1;
  lVar3 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar1 = (this->Cells).ArrayNum;
  uVar10 = (ulonglong)((int)lVar3 + 1);
  uVar9 = 1;
  do {
    uVar8 = 0;
    uVar7 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    uVar11 = 0;
    uVar12 = 0;
    for (uVar9 = uVar9 - 1; uVar9 < uVar1; uVar9 = uVar9 + uVar7) {
      uVar6 = 0;
      if ((int)uVar9 < (this->Cells).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((this->Cells).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x1c) <= *(uint *)(lVar2 + 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMaxEndEventIndex() > CellPtr->GetMinStartEventIndex()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3a1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(uint *)(lVar2 + 0x18) < uVar8) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMinStartEventIndex() >= EventIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3a2,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(int *)(lVar2 + 0x1c) + 1;
        if ((*(double *)(lVar2 + 0x28) <= *(double *)(lVar2 + 0x20) &&
             *(double *)(lVar2 + 0x20) != *(double *)(lVar2 + 0x28)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMaxEndTime() >= CellPtr->GetMinStartTime()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3a5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(double *)(lVar2 + 0x20) <= (double)CONCAT44(uVar12,uVar11) &&
             (double)CONCAT44(uVar12,uVar11) != *(double *)(lVar2 + 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMinStartTime() >= Time",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3a6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = (undefined4)*(undefined8 *)(lVar2 + 0x20);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
      }
    }
    uVar10 = uVar10 - 1;
    uVar9 = uVar7;
  } while (uVar10 != 0);
  uVar9 = (this->OffsettedCells).ArrayNum;
  uVar10 = (ulonglong)((int)lVar3 + 1);
  do {
    uVar7 = local_res10 << 1 | (uint)((int)local_res10 < 0);
    uVar8 = 0;
    uVar11 = 0;
    uVar12 = 0;
    for (local_res10 = local_res10 - 1; local_res10 < uVar9; local_res10 = local_res10 + uVar7) {
      uVar6 = 0;
      if ((int)local_res10 < (this->OffsettedCells).ArrayNum) {
        uVar6 = ~local_res10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)
               ((this->OffsettedCells).AllocatorInstance.Data + (longlong)(int)local_res10 * 8);
      if (lVar3 != 0) {
        if ((*(uint *)(lVar3 + 0x1c) <= *(uint *)(lVar3 + 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMaxEndEventIndex() > CellPtr->GetMinStartEventIndex()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3ba,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(uint *)(lVar3 + 0x18) < uVar8) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMinStartEventIndex() >= EventIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3bb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = *(int *)(lVar3 + 0x1c) + 1;
        if ((*(double *)(lVar3 + 0x28) <= *(double *)(lVar3 + 0x20) &&
             *(double *)(lVar3 + 0x20) != *(double *)(lVar3 + 0x28)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMaxEndTime() >= CellPtr->GetMinStartTime()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(double *)(lVar3 + 0x20) <= (double)CONCAT44(uVar12,uVar11) &&
             (double)CONCAT44(uVar12,uVar11) != *(double *)(lVar3 + 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CellPtr->GetMinStartTime() >= Time",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                               ,0x3bf,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = (undefined4)*(undefined8 *)(lVar3 + 0x20);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
      }
    }
    uVar10 = uVar10 - 1;
    local_res10 = uVar7;
    if (uVar10 == 0) {
      if ((uVar1 != uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumCells == NumOffsettedCells",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\SbTree.cpp"
                             ,0x3c5,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      return;
    }
  } while( true );
}

