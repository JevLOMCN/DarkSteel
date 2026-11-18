// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// AddData @ 1431c2990

void __thiscall
BuildPatchServices::TBlockData<unsigned_char>::AddData
          (TBlockData<unsigned_char> *this,FBlockStructure *param_1,uchar *param_2,int param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FBlockStructure *pFVar7;
  ulong64 uVar8;
  FBlockEntry *pFVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *_Src;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  <lambda_1> local_res20 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FBlockStructure local_88;
  FBlockToCopy local_78;
  FBlockToCopy local_58;
  
  pFVar7 = FBlockStructure::Intersect(&this->DataStructure,&local_88,param_1);
  uVar8 = BlockStructureHelpers::CountSize(pFVar7);
  FBlockStructure::~FBlockStructure(&local_88);
  if ((uVar8 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockStructureHelpers::CountSize(DataStructure.Intersect(NewStructure)) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockData.h"
                         ,0x3a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = BlockStructureHelpers::CountSize(param_1);
  if ((uVar8 != (longlong)param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockStructureHelpers::CountSize(NewStructure) == NewDataCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockData.h"
                         ,0x3c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = FBlockStructure::GetHead(param_1);
  uVar8 = FBlockEntry::GetOffset(pFVar9);
  pTVar1 = &this->Data;
  pFVar9 = FBlockStructure::GetTail(&this->DataStructure);
  if (pFVar9 != (FBlockEntry *)0x0) {
    pFVar9 = FBlockStructure::GetTail(&this->DataStructure);
    uVar10 = FBlockEntry::GetOffset(pFVar9);
    if (uVar8 < uVar10) {
      uVar14 = 0;
      uVar15 = (this->Data).ArrayNum + param_3;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (0 < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar15,&local_98,0,(int *)((longlong)&local_90 + 4));
      }
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      pFVar9 = FBlockStructure::GetHead(&this->DataStructure);
      uVar13 = uVar14;
      for (; pFVar9 != (FBlockEntry *)0x0; pFVar9 = FBlockEntry::GetNext(pFVar9)) {
        local_78.SortOffset = FBlockEntry::GetOffset(pFVar9);
        local_78.CopyBlockRange.Size = FBlockEntry::GetSize(pFVar9);
        local_78.CopyBlockRange.First = uVar13;
        if (local_78.CopyBlockRange.Size != 0) {
          uVar11 = (uVar13 - 1) + local_78.CopyBlockRange.Size;
          if ((local_78.CopyBlockRange.Size == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((uVar11 < local_78.CopyBlockRange.First) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x2f,L"Byte range has uint64 overflow."), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_78.DataPtr = (uchar *)(pTVar1->AllocatorInstance).Data;
        if (((local_a8.Data <= &local_78) &&
            (&local_78 < (FBlockToCopy *)(local_a8.Data + (longlong)local_a0._4_4_ * 0x20))) &&
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
        iVar5 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
        *(ulong64 *)&local_a8.Data[(longlong)iVar5 * 0x20].field_0x0 = local_78.SortOffset;
        *(ulong64 *)(local_a8.Data + (longlong)iVar5 * 0x20 + 8) = local_78.CopyBlockRange.First;
        *(ulong64 *)(local_a8.Data + (longlong)iVar5 * 0x20 + 0x10) = local_78.CopyBlockRange.Size;
        *(uchar **)(local_a8.Data + (longlong)iVar5 * 0x20 + 0x10 + 8) = local_78.DataPtr;
        uVar8 = FBlockEntry::GetSize(pFVar9);
        uVar13 = uVar13 + uVar8;
      }
      for (pFVar9 = FBlockStructure::GetHead(param_1); pFVar9 != (FBlockEntry *)0x0;
          pFVar9 = FBlockEntry::GetNext(pFVar9)) {
        local_58.SortOffset = FBlockEntry::GetOffset(pFVar9);
        local_58.CopyBlockRange.Size = FBlockEntry::GetSize(pFVar9);
        local_58.CopyBlockRange.First = uVar14;
        if (local_58.CopyBlockRange.Size != 0) {
          uVar13 = (uVar14 - 1) + local_58.CopyBlockRange.Size;
          if ((local_58.CopyBlockRange.Size == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((uVar13 < local_58.CopyBlockRange.First) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x2f,L"Byte range has uint64 overflow."), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_58.DataPtr = param_2;
        if (((local_a8.Data <= &local_58) &&
            (&local_58 < (FBlockToCopy *)(local_a8.Data + (longlong)local_a0._4_4_ * 0x20))) &&
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
        iVar5 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
        *(ulong64 *)&local_a8.Data[(longlong)iVar5 * 0x20].field_0x0 = local_58.SortOffset;
        *(ulong64 *)(local_a8.Data + (longlong)iVar5 * 0x20 + 8) = local_58.CopyBlockRange.First;
        *(ulong64 *)(local_a8.Data + (longlong)iVar5 * 0x20 + 0x10) = local_58.CopyBlockRange.Size;
        *(uchar **)(local_a8.Data + (longlong)iVar5 * 0x20 + 0x10 + 8) = local_58.DataPtr;
        uVar8 = FBlockEntry::GetSize(pFVar9);
        uVar14 = uVar14 + uVar8;
      }
      AlgoImpl::
      IntroSortInternal<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,_BuildPatchServices::TBlockData<unsigned_char>::AddData_::__l21::<lambda_1>,TLess<void>_>
                ((FBlockToCopy *)local_a8.Data,(int)local_a0,local_res20[0],
                 (TLess<void>)local_res20[0]);
      iVar5 = (int)local_a0;
      uVar14 = (ulonglong)(int)local_a0;
      pFVar16 = local_a8.Data + uVar14 * 0x20;
      pFVar12 = local_a8.Data + 0x10;
      while( true ) {
        if ((int)uVar14 != iVar5) {
          local_res20[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<BuildPatchServices::TBlockData<unsigned_char>::FBlockToCopy,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar12 + -0x10 == pFVar16) break;
        iVar2 = *(int *)pFVar12;
        if ((*(ulong64 *)pFVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Src = (void *)(((FBlockRange *)(pFVar12 + -8))->First + *(longlong *)(pFVar12 + 8));
        if (((_Src == (void *)0x0) && (iVar2 != 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar2,&local_98,(int *)&local_90,(int *)((longlong)&local_90 + 4));
        if (iVar2 != 0) {
          memcpy(local_98.Data + iVar6,_Src,(longlong)iVar2);
        }
        uVar14 = local_a0 & 0xffffffff;
        pFVar12 = pFVar12 + 0x20;
      }
      if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_98) {
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (pTVar1->AllocatorInstance).Data = local_98.Data;
        (this->Data).ArrayNum = (int)local_90;
        (this->Data).ArrayMax = local_90._4_4_;
        local_90 = 0;
        local_98.Data = (FScriptContainerElement *)0x0;
      }
      if ((FBlockToCopy *)local_a8.Data != (FBlockToCopy *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      goto LAB_1431c2f24;
    }
  }
  if (((param_2 == (uchar *)0x0) && (param_3 != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_3,&pTVar1->AllocatorInstance,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  if (param_3 != 0) {
    memcpy((pTVar1->AllocatorInstance).Data + iVar5,param_2,(longlong)param_3);
  }
LAB_1431c2f24:
  FBlockStructure::Add(&this->DataStructure,param_1,FromStart);
  return;
}

// RemoveData @ 1431f0330

void __thiscall
BuildPatchServices::TBlockData<unsigned_char>::RemoveData
          (TBlockData<unsigned_char> *this,FBlockStructure *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  FBlockStructure *pFVar8;
  ulong64 uVar9;
  FBlockEntry *this_00;
  uint uVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  uint uVar12;
  FBlockStructure local_38;
  FBlockStructure local_28;
  
  BlockStructureHelpers::SerializeIntersection(&local_38,&this->DataStructure,param_1);
  uVar5 = BlockStructureHelpers::CountSize(param_1);
  uVar6 = BlockStructureHelpers::CountSize(&this->DataStructure);
  uVar7 = BlockStructureHelpers::CountSize(&local_38);
  pFVar8 = FBlockStructure::Intersect(&this->DataStructure,&local_28,param_1);
  uVar9 = BlockStructureHelpers::CountSize(pFVar8);
  FBlockStructure::~FBlockStructure(&local_28);
  if ((uVar9 != uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntersectSize == StructureSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockData.h"
                         ,0x6e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uVar7 != uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalSpaceStructureSize == StructureSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockData.h"
                         ,0x6f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((uVar6 != (longlong)(this->Data).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataStructureSize == Data.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockData.h"
                         ,0x70,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = FBlockStructure::GetTail(&local_38);
  while( true ) {
    if (this_00 == (FBlockEntry *)0x0) {
      FBlockStructure::Remove(&this->DataStructure,param_1,FromStart);
      FBlockStructure::~FBlockStructure(&local_38);
      return;
    }
    uVar5 = FBlockEntry::GetSize(this_00);
    uVar6 = FBlockEntry::GetOffset(this_00);
    uVar11 = (uint)uVar5;
    uVar12 = (uint)uVar6;
    uVar10 = 0;
    if ((int)(uVar11 + uVar12) <= (this->Data).ArrayNum) {
      uVar10 = ~(uVar11 | uVar12) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) break;
    if (uVar5 != 0) {
      _Dst = (this->Data).AllocatorInstance.Data + (int)uVar12;
      iVar4 = ((this->Data).ArrayNum - uVar11) - uVar12;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (int)uVar11,(longlong)iVar4);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar11;
    }
    this_00 = FBlockEntry::GetPrevious(this_00);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

