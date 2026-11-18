// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// CollectLayer @ 143246a10

FBlockRange * __thiscall
BuildPatchServices::FChunkMatchProcessor::CollectLayer
          (FChunkMatchProcessor *this,FBlockRange *__return_storage_ptr__,int param_1,
          TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar6;
  ulong64 *puVar7;
  ulong64 *puVar8;
  FBlockRange *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  InitLayer(this,param_1);
  this_00 = TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->LayerMatches,param_1);
  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&this->LayerFlushedMatch,param_1);
  puVar7 = TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
           ::FindChecked((TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                          *)&this->LayerCollectedSize,param_1);
  puVar8 = TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
           ::FindChecked((TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                          *)&this->LayerFlushedSize,param_1);
  if ((*puVar8 < *puVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FlushedSize >= CollectedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkMatchProcessor.cpp"
                         ,0xbf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FBlockRange *)(*pcVar2)();
    return pFVar9;
  }
  FBlockRange::FromFirstAndSize(__return_storage_ptr__,*puVar7,*puVar8 - *puVar7);
  uVar11 = *piVar6 + 1;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar11,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar5 = *piVar6;
  uVar11 = 0;
  if (-1 < iVar5) {
    lVar12 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar11 < this_00->ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FBlockRange *)(*pcVar2)();
        return pFVar9;
      }
      pFVar10 = (this_00->AllocatorInstance).Data + lVar12;
      local_38 = *(undefined8 *)(pFVar10 + 0x20);
      local_58 = *(undefined8 *)pFVar10;
      uStack_50 = *(undefined8 *)(pFVar10 + 8);
      uStack_30 = *(undefined8 *)(pFVar10 + 0x28);
      local_48 = *(undefined8 *)(pFVar10 + 0x10);
      uStack_40 = *(undefined8 *)(pFVar10 + 0x18);
      *(undefined8 *)(pFVar10 + 0x20) = 0;
      *(undefined8 *)(pFVar10 + 0x28) = 0;
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar10 + (longlong)*piVar1 * 0x30)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FBlockRange *)(*pcVar2)();
        return pFVar9;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_2->AllocatorInstance,piVar1);
        param_2->ArrayNum = iVar5;
      }
      uVar11 = uVar11 + 1;
      param_2->ArrayNum = iVar5 + 1;
      lVar12 = lVar12 + 0x30;
      pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
      *(undefined8 *)pFVar10 = local_58;
      *(undefined8 *)(pFVar10 + 8) = uStack_50;
      *(undefined8 *)(pFVar10 + 0x10) = local_48;
      *(undefined8 *)(pFVar10 + 0x18) = uStack_40;
      *(undefined8 *)(pFVar10 + 0x20) = local_38;
      *(undefined8 *)(pFVar10 + 0x28) = uStack_30;
      iVar5 = *piVar6;
      local_38 = 0;
      uStack_30 = 0;
    } while ((int)uVar11 <= iVar5);
  }
  uVar11 = iVar5 + 1;
  uVar4 = 0;
  if ((int)uVar11 <= this_00->ArrayNum) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FBlockRange *)(*pcVar2)();
    return pFVar9;
  }
  if (uVar11 != 0) {
    TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this_00,0,uVar11);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
  }
  *piVar6 = -1;
  *puVar7 = *puVar8;
  return __return_storage_ptr__;
}

// FlushLayer @ 143252830

void __thiscall
BuildPatchServices::FChunkMatchProcessor::FlushLayer
          (FChunkMatchProcessor *this,int param_1,ulong64 param_2)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *this_00;
  uint *puVar7;
  ulong64 *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  <lambda_1> local_res8;
  
  if ((param_2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SafeByteSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkMatchProcessor.cpp"
                         ,0x7e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  InitLayer(this,param_1);
  pTVar6 = TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->LayerMatches,param_1);
  this_00 = TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->LayerRejects,param_1);
  puVar7 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->LayerFlushedMatch,param_1);
  puVar8 = TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
           ::FindChecked((TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                          *)&this->LayerFlushedSize,param_1);
  uVar1 = *puVar8;
  *puVar8 = param_2;
  if ((param_2 < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FlushedSize >= PrevFlushedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkMatchProcessor.cpp"
                         ,0x87,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = pTVar6->ArrayNum;
  uVar11 = *puVar7 + 1;
  if ((int)uVar11 < iVar10) {
    lVar14 = (longlong)(int)uVar11 * 0x30;
    do {
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      uVar13 = (ulonglong)*(uint *)(pFVar2 + lVar14 + 0x18);
      uVar9 = *(ulonglong *)(pFVar2 + lVar14);
      if (uVar13 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                           ,0x11,L"Using GetFirst for a 0 size range is invalid.");
        if (bVar4) goto code_r0x0001432529e1;
      }
      else if (((uVar9 - 1) + uVar13 < uVar9) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x2f,L"Byte range has uint64 overflow."), bVar4)) {
code_r0x0001432529e1:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_2 <= uVar9) break;
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_2 <= (uVar9 - 1) + uVar13) {
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Size > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                               ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *puVar8 = uVar9;
        if ((uVar9 < uVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FlushedSize >= PrevFlushedSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkMatchProcessor.cpp"
                               ,0x9c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      *puVar7 = uVar11;
      lVar14 = lVar14 + 0x30;
      iVar10 = pTVar6->ArrayNum;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar10);
  }
  local_res8 = SUB81(puVar8,0);
  AlgoImpl::
  IntroSortInternal<BuildPatchServices::FMatchEntry,int,_BuildPatchServices::FChunkMatchProcessor::FlushLayer_::__l2::<lambda_1>,TLess<void>_>
            ((FMatchEntry *)(this_00->AllocatorInstance).Data,this_00->ArrayNum,local_res8,
             (TLess<void>)local_res8);
  iVar10 = this_00->ArrayNum;
  uVar11 = 0xffffffff;
  if (0 < iVar10) {
    lVar14 = 0;
    uVar5 = 0;
    uVar11 = 0xffffffff;
    do {
      uVar12 = uVar5;
      uVar5 = 0;
      if ((int)uVar12 < iVar10) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this_00->AllocatorInstance).Data;
      uVar9 = (ulonglong)*(uint *)(pFVar2 + lVar14 + 0x18);
      uVar1 = *(ulonglong *)(pFVar2 + lVar14);
      if (uVar9 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                           ,0x11,L"Using GetFirst for a 0 size range is invalid.");
        if (bVar4) goto code_r0x000143252bb1;
      }
      else if (((uVar1 - 1) + uVar9 < uVar1) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x2f,L"Byte range has uint64 overflow."), bVar4)) {
code_r0x000143252bb1:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*puVar8 <= uVar1) break;
      iVar10 = this_00->ArrayNum;
      lVar14 = lVar14 + 0x30;
      uVar5 = uVar12 + 1;
      uVar11 = uVar12;
    } while ((int)(uVar12 + 1) < iVar10);
  }
  uVar11 = uVar11 + 1;
  uVar5 = 0;
  if ((int)uVar11 <= this_00->ArrayNum) {
    uVar5 = ~uVar11 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar11 != 0) {
    TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this_00,0,uVar11);
  }
  return;
}

// InitLayer @ 143257d40

void __thiscall
BuildPatchServices::FChunkMatchProcessor::InitLayer(FChunkMatchProcessor *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>
  local_res8;
  TPairInitializer<int_const_&,int_&&> local_res18;
  FMatchEntry *local_38;
  undefined8 local_30;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> **local_28;
  TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>
  *local_20;
  
  local_res8.Value._0_4_ = param_1;
  if (*(int *)&(this->LayerMatches).field_0x8 != *(int *)&(this->LayerMatches).field_0x34) {
    puVar3 = *(undefined1 **)&(this->LayerMatches).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->LayerMatches).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->LayerMatches).field_0x48 - 1U & param_1) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->LayerMatches) == param_1)
        goto LAB_143257de1;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this->LayerMatches);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_38 = (FMatchEntry *)0x0;
  local_20 = (TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>
              *)&local_38;
  local_30 = 0;
  TSet<TTuple<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->LayerMatches,&local_res8,(bool *)&local_28);
  DestructItems<BuildPatchServices::FMatchEntry,int>(local_38,(int)local_30);
  if (local_38 != (FMatchEntry *)0x0) {
    FMemory::Free(local_38);
  }
LAB_143257de1:
  if (*(int *)&(this->LayerRejects).field_0x8 != *(int *)&(this->LayerRejects).field_0x34) {
    puVar3 = *(undefined1 **)&(this->LayerRejects).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->LayerRejects).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->LayerRejects).field_0x48 - 1U &
                              (uint)local_res8.Value) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)((longlong)iVar2 * 0x20 + *(longlong *)&this->LayerRejects) ==
            (uint)local_res8.Value) goto LAB_143257e7f;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this->LayerRejects);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_38 = (FMatchEntry *)0x0;
  local_20 = (TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>
              *)&local_38;
  local_30 = 0;
  TSet<TTuple<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->LayerRejects,&local_res8,(bool *)&local_28);
  DestructItems<BuildPatchServices::FMatchEntry,int>(local_38,(int)local_30);
  if (local_38 != (FMatchEntry *)0x0) {
    FMemory::Free(local_38);
  }
LAB_143257e7f:
  if (*(int *)&(this->LayerFlushedMatch).field_0x8 != *(int *)&(this->LayerFlushedMatch).field_0x34)
  {
    puVar3 = *(undefined1 **)&(this->LayerFlushedMatch).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->LayerFlushedMatch).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->LayerFlushedMatch).field_0x48 - 1U &
                              (uint)local_res8.Value) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->LayerFlushedMatch).field_0x0;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x10) == (uint)local_res8.Value) goto LAB_143257f02;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_res8.Key._0_4_ = 0xffffffff;
  local_20 = &local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->LayerFlushedMatch,&local_res18,(bool *)&local_28);
LAB_143257f02:
  if (*(int *)&(this->LayerFlushedSize).field_0x8 != *(int *)&(this->LayerFlushedSize).field_0x34) {
    puVar3 = *(undefined1 **)&(this->LayerFlushedSize).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->LayerFlushedSize).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->LayerFlushedSize).field_0x48 - 1U &
                              (uint)local_res8.Value) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->LayerFlushedSize).field_0x0;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == (uint)local_res8.Value) goto LAB_143257f80;
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_res18.Key = (int *)0x0;
  local_20 = (TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>
              *)&local_res18;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,unsigned___int64_&&>_>
            ((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->LayerFlushedSize,
             (TPairInitializer<int_const_&,unsigned___int64_&&> *)&local_res8,(bool *)&local_28);
LAB_143257f80:
  if (*(int *)&(this->LayerCollectedSize).field_0x8 !=
      *(int *)&(this->LayerCollectedSize).field_0x34) {
    puVar3 = *(undefined1 **)&(this->LayerCollectedSize).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->LayerCollectedSize).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->LayerCollectedSize).field_0x48 - 1U &
                              (uint)local_res8.Value) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->LayerCollectedSize).field_0x0;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == (uint)local_res8.Value) {
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_res18.Key = (int *)0x0;
  local_20 = (TPairInitializer<int_const_&,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>_&&>
              *)&local_res18;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,unsigned___int64_&&>_>
            ((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
              *)&this->LayerCollectedSize,
             (TPairInitializer<int_const_&,unsigned___int64_&&> *)&local_res8,(bool *)&local_28);
  return;
}

// ProcessMatch @ 14325d620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkMatchProcessor::ProcessMatch
          (FChunkMatchProcessor *this,int param_1,FChunkMatch *param_2,FBlockStructure *param_3)

{
  int *piVar1;
  FBlockEntry *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar10;
  longlong lVar11;
  FBlockEntry *pFVar12;
  ulonglong uVar13;
  void *pvVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  FMatchEntry *pFVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  <lambda_1> local_res20;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> local_d8;
  TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_> *local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  FBlockStructure local_a0;
  ulong64 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong64 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  InitLayer(this,param_1);
  this_00 = TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->LayerMatches,param_1);
  local_c8 = TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->LayerRejects,param_1);
  local_88 = param_2->DataOffset;
  uStack_80._0_4_ = (param_2->ChunkGuid).A;
  uStack_80._4_4_ = (param_2->ChunkGuid).B;
  pFVar12 = param_3->Head;
  local_78._0_4_ = (param_2->ChunkGuid).C;
  local_78._4_4_ = (param_2->ChunkGuid).D;
  uStack_70 = *(undefined8 *)&param_2->WindowSize;
  pFVar2 = param_3->Tail;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  param_3->Head = (FBlockEntry *)0x0;
  param_3->Tail = (FBlockEntry *)0x0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
  local_68 = local_88;
  uStack_60 = uStack_80;
  iVar9 = iVar8 + 1;
  lVar10 = (longlong)iVar8;
  local_d8.ArrayNum = iVar9;
  *(ulong64 *)&local_d8.AllocatorInstance.Data[lVar10 * 0x30].field_0x0 = local_88;
  *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar10 * 0x30 + 8) = uStack_80;
  *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar10 * 0x30 + 0x10) = local_78;
  *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar10 * 0x30 + 0x10 + 8) = uStack_70;
  *(FBlockEntry **)(local_d8.AllocatorInstance.Data + lVar10 * 0x30 + 0x20) = pFVar12;
  *(FBlockEntry **)(local_d8.AllocatorInstance.Data + lVar10 * 0x30 + 0x28) = pFVar2;
  local_58 = local_78;
  uStack_50 = uStack_70;
  if (iVar9 < 1) {
LAB_14325e328:
    DestructItems<BuildPatchServices::FMatchEntry,int>
              ((FMatchEntry *)local_d8.AllocatorInstance.Data,iVar9);
    if ((FMatchEntry *)local_d8.AllocatorInstance.Data != (FMatchEntry *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    pFVar12 = param_3->Head;
    while (pFVar12 != (FBlockEntry *)0x0) {
      param_3->Tail = pFVar12->Next;
      pFVar12->Prev = (FBlockEntry *)0x0;
      pFVar12->Next = (FBlockEntry *)0x0;
      ::operator_delete(pFVar12,0x20);
      pFVar12 = param_3->Tail;
      param_3->Head = pFVar12;
    }
    return;
  }
  local_res20 = SUB81(param_3,0);
  piVar1 = &this_00->ArrayNum;
LAB_14325d700:
  if (iVar9 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_d8.ArrayNum;
  }
  FVar19.Data = local_d8.AllocatorInstance.Data;
  uVar22 = *(ulonglong *)local_d8.AllocatorInstance.Data;
  uVar20 = (ulonglong)*(uint *)(local_d8.AllocatorInstance.Data + 0x18);
  if (*piVar1 < 1) {
    if ((iVar9 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar19.Data = local_d8.AllocatorInstance.Data;
    pFVar18 = (FMatchEntry *)(this_00->AllocatorInstance).Data;
    if (((pFVar18 <= local_d8.AllocatorInstance.Data) &&
        (local_d8.AllocatorInstance.Data < pFVar18 + this_00->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = this_00->ArrayNum;
    if (iVar9 == this_00->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&this_00->AllocatorInstance,&this_00->ArrayMax);
    }
    this_00->ArrayNum = iVar9 + 1;
    uVar22 = *(ulonglong *)(FVar19.Data + 8);
    pFVar15 = (this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
    *(ulonglong *)pFVar15 = *(ulonglong *)FVar19.Data;
    *(ulonglong *)(pFVar15 + 8) = uVar22;
    uVar22 = *(ulonglong *)(FVar19.Data + 0x18);
    *(ulonglong *)(pFVar15 + 0x10) = *(ulonglong *)(FVar19.Data + 0x10);
    *(ulonglong *)(pFVar15 + 0x18) = uVar22;
    *(ulonglong *)(pFVar15 + 0x20) = *(ulonglong *)(FVar19.Data + 0x20);
    *(ulonglong *)(pFVar15 + 0x28) = *(ulonglong *)(FVar19.Data + 0x28);
    *(ulonglong *)(FVar19.Data + 0x20) = 0;
    *(ulonglong *)(FVar19.Data + 0x28) = 0;
    iVar9 = local_d8.ArrayNum;
    if (local_d8.ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = local_d8.ArrayNum;
    }
    FVar19.Data = local_d8.AllocatorInstance.Data;
    pvVar14 = *(void **)(local_d8.AllocatorInstance.Data + 0x20);
    if (pvVar14 == (void *)0x0) goto LAB_14325e2bb;
    do {
      *(ulonglong *)(FVar19.Data + 0x28) = *(ulonglong *)((longlong)pvVar14 + 0x18);
      *(undefined8 *)((longlong)pvVar14 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar14 + 0x18) = 0;
      ::operator_delete(pvVar14,0x20);
      pvVar14 = *(void **)(FVar19.Data + 0x28);
      *(void **)(FVar19.Data + 0x20) = pvVar14;
    } while (pvVar14 != (void *)0x0);
    goto LAB_14325e2b7;
  }
  uVar16 = *piVar1 - 1;
  if (-1 < (int)uVar16) {
    lVar10 = (longlong)(int)uVar16 * 0x30;
    do {
      uVar17 = 0;
      if ((int)uVar16 < *piVar1) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(ulonglong *)((this_00->AllocatorInstance).Data + lVar10) <= *(ulonglong *)FVar19.Data)
      goto LAB_14325d7ca;
      lVar10 = lVar10 + -0x30;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
    uVar16 = 0;
LAB_14325d7ca:
    iVar9 = local_d8.ArrayNum;
  }
  iVar8 = *piVar1;
  if ((int)uVar16 < iVar8) {
    lVar10 = (longlong)(int)uVar16 * 0x30;
    do {
      uVar21 = ~uVar16 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar16 < iVar8) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = (this_00->AllocatorInstance).Data;
      uVar3 = *(ulonglong *)(pFVar15 + lVar10);
      uVar13 = (ulonglong)*(uint *)(pFVar15 + lVar10 + 0x18);
      if (uVar22 <= (uVar3 - 1) + uVar13) {
        if ((uVar20 - 1) + uVar22 < uVar3) {
          if ((local_d8.ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar19.Data = local_d8.AllocatorInstance.Data;
          pFVar18 = (FMatchEntry *)(this_00->AllocatorInstance).Data;
          if (((pFVar18 <= local_d8.AllocatorInstance.Data) &&
              (local_d8.AllocatorInstance.Data < pFVar18 + this_00->ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = this_00->ArrayNum;
          if (iVar9 == this_00->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&this_00->AllocatorInstance,&this_00->ArrayMax);
          }
          pFVar15 = (this_00->AllocatorInstance).Data;
          this_00->ArrayNum = iVar9 + 1;
          pFVar15 = pFVar15 + (longlong)(int)uVar16 * 0x30;
          memmove(pFVar15 + 0x30,pFVar15,(longlong)(int)(iVar9 - uVar16) * 0x30);
          uVar22 = *(ulonglong *)(FVar19.Data + 8);
          pFVar15 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x30;
          *(ulonglong *)pFVar15 = *(ulonglong *)FVar19.Data;
          *(ulonglong *)(pFVar15 + 8) = uVar22;
          uVar22 = *(ulonglong *)(FVar19.Data + 0x18);
          *(ulonglong *)(pFVar15 + 0x10) = *(ulonglong *)(FVar19.Data + 0x10);
          *(ulonglong *)(pFVar15 + 0x18) = uVar22;
          *(ulonglong *)(pFVar15 + 0x20) = *(ulonglong *)(FVar19.Data + 0x20);
          *(ulonglong *)(pFVar15 + 0x28) = *(ulonglong *)(FVar19.Data + 0x28);
          *(ulonglong *)(FVar19.Data + 0x20) = 0;
          *(ulonglong *)(FVar19.Data + 0x28) = 0;
          iVar9 = local_d8.ArrayNum;
          if (local_d8.ArrayNum < 1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = local_d8.ArrayNum;
          }
          FVar19.Data = local_d8.AllocatorInstance.Data;
          pvVar14 = *(void **)(local_d8.AllocatorInstance.Data + 0x20);
          if (pvVar14 != (void *)0x0) goto LAB_14325e110;
          goto LAB_14325e2bb;
        }
        if ((uVar13 < uVar20) || ((uVar20 == uVar13 && (uVar22 < uVar3)))) {
          if ((local_d8.ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_a0.Head = *(FBlockEntry **)(local_d8.AllocatorInstance.Data + 0x20);
          local_c0 = *(ulonglong *)local_d8.AllocatorInstance.Data;
          uStack_b8 = *(ulonglong *)(local_d8.AllocatorInstance.Data + 8);
          local_a0.Tail = *(FBlockEntry **)(local_d8.AllocatorInstance.Data + 0x28);
          local_b0 = *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x10);
          uStack_a8 = *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18);
          *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x20) = 0;
          *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x28) = 0;
          uVar17 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = (this_00->AllocatorInstance).Data;
          lVar10 = (longlong)(int)uVar16 * 0x30;
          if ((local_d8.ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar22 = *(ulonglong *)(pFVar15 + lVar10 + 8);
          *(ulonglong *)local_d8.AllocatorInstance.Data = *(ulonglong *)(pFVar15 + lVar10);
          *(ulonglong *)(local_d8.AllocatorInstance.Data + 8) = uVar22;
          uVar22 = *(ulonglong *)(pFVar15 + lVar10 + 0x10 + 8);
          *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x10) =
               *(ulonglong *)(pFVar15 + lVar10 + 0x10);
          *(ulonglong *)(local_d8.AllocatorInstance.Data + 0x18) = uVar22;
          FBlockStructure::operator=
                    ((FBlockStructure *)(local_d8.AllocatorInstance.Data + 0x20),
                     (FBlockStructure *)(pFVar15 + lVar10 + 0x20));
          uVar17 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar17 = uVar21;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = (this_00->AllocatorInstance).Data;
          *(ulonglong *)(pFVar15 + lVar10) = local_c0;
          *(ulonglong *)(pFVar15 + lVar10 + 8) = uStack_b8;
          *(ulonglong *)(pFVar15 + lVar10 + 0x10) = local_b0;
          *(ulonglong *)(pFVar15 + lVar10 + 0x10 + 8) = uStack_a8;
          FBlockStructure::operator=((FBlockStructure *)(pFVar15 + lVar10 + 0x20),&local_a0);
          iVar9 = this_00->ArrayNum;
          uVar16 = uVar16 + 1;
          uVar22 = (ulonglong)(int)uVar16;
          if ((int)uVar16 < iVar9) {
            lVar10 = uVar22 * 0x30;
            do {
              uVar21 = (uint)uVar22;
              uVar17 = 0;
              if ((int)uVar21 < iVar9) {
                uVar17 = ~uVar21 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar18 = (FMatchEntry *)((this_00->AllocatorInstance).Data + lVar10);
              if (((local_d8.AllocatorInstance.Data <= pFVar18) &&
                  (pFVar18 < (FMatchEntry *)
                             (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x30))
                  ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar9 = local_d8.ArrayNum;
              if (local_d8.ArrayNum == local_d8.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
              }
              uVar22 = (ulonglong)(uVar21 + 1);
              local_d8.ArrayNum = iVar9 + 1;
              lVar10 = lVar10 + 0x30;
              uVar5 = *(undefined8 *)&(pFVar18->ChunkMatch).ChunkGuid;
              lVar11 = (longlong)iVar9;
              *(ulong64 *)&local_d8.AllocatorInstance.Data[lVar11 * 0x30].field_0x0 =
                   (pFVar18->ChunkMatch).DataOffset;
              *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar11 * 0x30 + 8) = uVar5;
              uVar5 = *(undefined8 *)&(pFVar18->ChunkMatch).WindowSize;
              *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar11 * 0x30 + 0x10) =
                   *(undefined8 *)&(pFVar18->ChunkMatch).ChunkGuid.C;
              *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar11 * 0x30 + 0x10 + 8) = uVar5;
              *(FBlockEntry **)(local_d8.AllocatorInstance.Data + lVar11 * 0x30 + 0x20) =
                   (pFVar18->BlockStructure).Head;
              *(FBlockEntry **)(local_d8.AllocatorInstance.Data + lVar11 * 0x30 + 0x28) =
                   (pFVar18->BlockStructure).Tail;
              (pFVar18->BlockStructure).Head = (FBlockEntry *)0x0;
              (pFVar18->BlockStructure).Tail = (FBlockEntry *)0x0;
              iVar9 = this_00->ArrayNum;
            } while ((int)(uVar21 + 1) < iVar9);
          }
          if ((iVar9 < (int)uVar16) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewMatchesArraySize <= Matches.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkMatchProcessor.cpp"
                                 ,0x52,L"Matches array should never grow uninitialised."), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = this_00->ArrayNum;
          if (iVar9 < (int)uVar16) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,uVar16 - iVar9,&this_00->AllocatorInstance,&this_00->ArrayNum,
                       &this_00->ArrayMax);
          }
          else {
            if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
            }
            if ((int)uVar16 < iVar9) {
              uVar17 = iVar9 - uVar16;
              if (((int)(uVar17 | uVar16) < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (uVar17 != 0) {
                TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                          (this_00,uVar16,uVar17);
              }
            }
          }
          pTVar6 = local_c8;
          if ((&local_d8 == local_c8) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = pTVar6->ArrayNum;
          if (iVar9 != 0) {
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x30,8,iVar9,&local_d8.AllocatorInstance,&local_d8.ArrayNum,
                               &local_d8.ArrayMax);
            memmove(local_d8.AllocatorInstance.Data + (longlong)iVar8 * 0x30,
                    (pTVar6->AllocatorInstance).Data,(longlong)iVar9 * 0x30);
            pTVar6->ArrayNum = 0;
          }
          pFVar12 = local_a0.Head;
          if (local_a0.Head != (FBlockEntry *)0x0) {
            do {
              pFVar2 = pFVar12->Next;
              local_a0.Tail = pFVar2;
              if (pFVar12 != (FBlockEntry *)0x0) {
                pFVar12->Prev = (FBlockEntry *)0x0;
                pFVar12->Next = (FBlockEntry *)0x0;
                ::operator_delete(pFVar12,0x20);
              }
              pFVar12 = pFVar2;
            } while (pFVar2 != (FBlockEntry *)0x0);
            local_a0.Head = (FBlockEntry *)0x0;
          }
        }
        else {
          if ((local_d8.ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar6 = local_c8;
          FVar19.Data = local_d8.AllocatorInstance.Data;
          pFVar18 = (FMatchEntry *)(local_c8->AllocatorInstance).Data;
          if (((pFVar18 <= local_d8.AllocatorInstance.Data) &&
              (local_d8.AllocatorInstance.Data < pFVar18 + local_c8->ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = pTVar6->ArrayNum;
          if (iVar9 == pTVar6->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          pTVar6->ArrayNum = iVar9 + 1;
          uVar22 = *(ulonglong *)(FVar19.Data + 8);
          pFVar15 = (pTVar6->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
          *(ulonglong *)pFVar15 = *(ulonglong *)FVar19.Data;
          *(ulonglong *)(pFVar15 + 8) = uVar22;
          uVar22 = *(ulonglong *)(FVar19.Data + 0x18);
          *(ulonglong *)(pFVar15 + 0x10) = *(ulonglong *)(FVar19.Data + 0x10);
          *(ulonglong *)(pFVar15 + 0x18) = uVar22;
          *(ulonglong *)(pFVar15 + 0x20) = *(ulonglong *)(FVar19.Data + 0x20);
          *(ulonglong *)(pFVar15 + 0x28) = *(ulonglong *)(FVar19.Data + 0x28);
          *(ulonglong *)(FVar19.Data + 0x20) = 0;
          *(ulonglong *)(FVar19.Data + 0x28) = 0;
          TArray<BuildPatchServices::FMatchEntry,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&local_d8,0,Default);
        }
        goto LAB_14325e300;
      }
      iVar8 = *piVar1;
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x30;
      iVar9 = local_d8.ArrayNum;
    } while ((int)uVar16 < iVar8);
  }
  if ((iVar9 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar19.Data = local_d8.AllocatorInstance.Data;
  pFVar18 = (FMatchEntry *)(this_00->AllocatorInstance).Data;
  if (((pFVar18 <= local_d8.AllocatorInstance.Data) &&
      (local_d8.AllocatorInstance.Data < pFVar18 + this_00->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = this_00->ArrayNum;
  if (iVar9 == this_00->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&this_00->AllocatorInstance,&this_00->ArrayMax);
  }
  this_00->ArrayNum = iVar9 + 1;
  uVar22 = *(ulonglong *)(FVar19.Data + 8);
  pFVar15 = (this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
  *(ulonglong *)pFVar15 = *(ulonglong *)FVar19.Data;
  *(ulonglong *)(pFVar15 + 8) = uVar22;
  uVar22 = *(ulonglong *)(FVar19.Data + 0x18);
  *(ulonglong *)(pFVar15 + 0x10) = *(ulonglong *)(FVar19.Data + 0x10);
  *(ulonglong *)(pFVar15 + 0x18) = uVar22;
  *(ulonglong *)(pFVar15 + 0x20) = *(ulonglong *)(FVar19.Data + 0x20);
  *(ulonglong *)(pFVar15 + 0x28) = *(ulonglong *)(FVar19.Data + 0x28);
  *(ulonglong *)(FVar19.Data + 0x20) = 0;
  *(ulonglong *)(FVar19.Data + 0x28) = 0;
  if (local_d8.ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar19.Data = local_d8.AllocatorInstance.Data;
  pvVar14 = *(void **)(local_d8.AllocatorInstance.Data + 0x20);
  iVar9 = local_d8.ArrayNum;
  if (pvVar14 != (void *)0x0) {
    do {
      *(ulonglong *)(FVar19.Data + 0x28) = *(ulonglong *)((longlong)pvVar14 + 0x18);
      *(undefined8 *)((longlong)pvVar14 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar14 + 0x18) = 0;
      ::operator_delete(pvVar14,0x20);
      pvVar14 = *(void **)(FVar19.Data + 0x28);
      *(void **)(FVar19.Data + 0x20) = pvVar14;
    } while (pvVar14 != (void *)0x0);
    goto LAB_14325e2b7;
  }
  goto LAB_14325e2bb;
LAB_14325e110:
  do {
    *(ulonglong *)(FVar19.Data + 0x28) = *(ulonglong *)((longlong)pvVar14 + 0x18);
    *(undefined8 *)((longlong)pvVar14 + 0x10) = 0;
    *(undefined8 *)((longlong)pvVar14 + 0x18) = 0;
    ::operator_delete(pvVar14,0x20);
    pvVar14 = *(void **)(FVar19.Data + 0x28);
    *(void **)(FVar19.Data + 0x20) = pvVar14;
  } while (pvVar14 != (void *)0x0);
LAB_14325e2b7:
  iVar9 = local_d8.ArrayNum;
LAB_14325e2bb:
  if (iVar9 + -1 != 0) {
    memmove(FVar19.Data,(FMatchEntry *)((longlong)FVar19.Data + 0x30),(longlong)(iVar9 + -1) * 0x30)
    ;
    iVar9 = local_d8.ArrayNum;
  }
  local_d8.ArrayNum = iVar9 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,&local_d8.AllocatorInstance,iVar9 + -1,&local_d8.ArrayMax);
LAB_14325e300:
  AlgoImpl::
  IntroSortInternal<BuildPatchServices::FMatchEntry,int,_BuildPatchServices::FChunkMatchProcessor::ProcessMatch_::__l4::<lambda_1>,TLess<void>_>
            ((FMatchEntry *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum,local_res20,
             (TLess<void>)local_res20);
  iVar9 = local_d8.ArrayNum;
  if (local_d8.ArrayNum < 1) goto LAB_14325e328;
  goto LAB_14325d700;
}

