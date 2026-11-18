// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 27

// AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&> @ 14606af70

TTuple<FMovieSceneSequenceID,FGuid> * __thiscall
TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
          (TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           *this,FMovieSceneSequenceID *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<FMovieSceneSequenceID,FGuid> *pTVar7;
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar8;
  int iVar9;
  uint uVar10;
  
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  uVar2 = (this->Pairs).ArrayNum;
  FVar8 = (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)this;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
    FVar8 = FVar3;
  }
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(uint *)((longlong)FVar8 + (longlong)iVar1 * 0x14) < param_1->Value) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FMovieSceneSequenceID,FGuid> *)(*pcVar4)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14606b089;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FMovieSceneSequenceID,FGuid> *)(*pcVar4)();
      return pTVar7;
    }
    FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)this;
    if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
      FVar8 = FVar3;
    }
    if (*(uint *)((longlong)iVar9 * 0x14 + (longlong)FVar8) <= param_1->Value) {
      if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
        this = (TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
                *)FVar3;
      }
      return (TTuple<FMovieSceneSequenceID,FGuid> *)((longlong)iVar9 * 0x14 + (longlong)this);
    }
  }
LAB_14606b089:
  TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
    this = (TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
            *)FVar3;
  }
  return (TTuple<FMovieSceneSequenceID,FGuid> *)((longlong)this + (longlong)iVar9 * 0x14);
}

// AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&> @ 14606b0d0

TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
* __thiscall
TSortedMap<FMovieSceneSequenceID,`UMovieSceneCompiledDataManager::CompileSubSequences'::__l2::FSubSequenceItMetaData,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>(void *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
  *pTVar6;
  void *_Src;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)((longlong)this + 8);
  iVar7 = 0;
  if (0 < (int)uVar1) {
    uVar8 = uVar1;
    do {
      iVar5 = (uVar8 >> 1) + iVar7;
      if (*(uint *)(*(longlong *)this + (longlong)iVar5 * 0x10) < param_1->Value) {
        iVar7 = iVar5 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar3 != 0);
  }
  if ((iVar7 < 0) || ((int)uVar1 < iVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
                *)(*pcVar2)();
      return pTVar6;
    }
    if (iVar7 < 0) goto LAB_14606b1ca;
  }
  if (iVar7 < *(int *)((longlong)this + 8)) {
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
                *)(*pcVar2)();
      return pTVar6;
    }
    pTVar6 = (TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
              *)(*(longlong *)this + (longlong)iVar7 * 0x10);
    if (*(uint *)pTVar6 <= param_1->Value) {
      return pTVar6;
    }
  }
LAB_14606b1ca:
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  _Src = (void *)(*(longlong *)this + (longlong)iVar7 * 0x10);
  memmove((void *)((longlong)_Src + 0x10),_Src,(longlong)(iVar5 - iVar7) << 4);
  return (TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
          *)(*(longlong *)this + (longlong)iVar7 * 0x10);
}

// Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&> @ 146073520

FMovieSceneEntityID * __thiscall
TSortedMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
          (TSortedMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
           *this,FMovieSceneEntityID *param_1,FMovieSceneEntityID *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneEntityID *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar7 = (uVar11 >> 1) + iVar10;
      if (*(ushort *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 4) < param_1->Value)
      {
        iVar10 = iVar7 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneEntityID *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1460735b8;
  }
  else {
LAB_1460735b8:
    if (iVar10 < *piVar1) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieSceneEntityID *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 4;
      if (*(ushort *)(pFVar3 + (longlong)iVar10 * 4) <= param_1->Value) goto LAB_14607365c;
    }
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 4;
  memmove(pFVar9 + 4,pFVar9,(longlong)(iVar7 - iVar10) << 2);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 4;
LAB_14607365c:
  *(ushort *)pFVar9 = param_1->Value;
  *(ushort *)&pFVar9[2].field_0x0 = param_2->Value;
  return (FMovieSceneEntityID *)(pFVar9 + 2);
}

// Find @ 1460c4e60

FGuid * __thiscall
TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
::Find(TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
       *this,FMovieSceneSequenceID *param_1)

{
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGuid *pFVar5;
  uint uVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,FGuid>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<FMovieSceneSequenceID_const_&>)local_res8);
  if (uVar4 == 0xffffffff) {
    return (FGuid *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FGuid *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>)0x0) {
    this = (TSortedMap<FMovieSceneSequenceID,FGuid,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
            *)FVar1;
  }
  return (FGuid *)((longlong)this + ((longlong)(int)uVar4 * 5 + 1) * 4);
}

// AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&> @ 146103450

TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData> *
__thiscall
TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
          (TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           *this,FMovieSceneSequenceID *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
  *pTVar7;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar8;
  int iVar9;
  uint uVar10;
  
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  uVar2 = (this->Pairs).ArrayNum;
  FVar8 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
           )this;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    FVar8 = FVar3;
  }
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(uint *)((longlong)FVar8 + (longlong)iVar1 * 0x18) < param_1->Value) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
                *)(*pcVar4)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_146103569;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
                *)(*pcVar4)();
      return pTVar7;
    }
    FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
             )this;
    if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                  )0x0) {
      FVar8 = FVar3;
    }
    if (*(uint *)((longlong)iVar9 * 0x18 + (longlong)FVar8) <= param_1->Value) {
      if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                    )0x0) {
        this = (TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
                *)FVar3;
      }
      return (TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
              *)((longlong)iVar9 * 0x18 + (longlong)this);
    }
  }
LAB_146103569:
  TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    this = (TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
            *)FVar3;
  }
  return (TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
          *)((longlong)this + (longlong)iVar9 * 0x18);
}

// Find @ 146130df0

FSubInstanceData * __thiscall
TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
::Find(TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
       *this,FMovieSceneSequenceID *param_1)

{
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSubInstanceData *pFVar5;
  uint uVar6;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<FMovieSceneSequenceID_const_&>)local_res8);
  if (uVar4 == 0xffffffff) {
    return (FSubInstanceData *)0x0;
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Pairs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSubInstanceData *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    this = (TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
            *)FVar1;
  }
  return (FSubInstanceData *)((uchar *)((longlong)this + 4) + (longlong)(int)uVar4 * 0x18);
}

// AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&> @ 146169900

TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> * __thiscall
TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
          (TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           *this,FMovieSceneSequenceID *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *pTVar7;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar8;
  int iVar9;
  uint uVar10;
  
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  uVar2 = (this->Pairs).ArrayNum;
  FVar8 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>)
          this;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )0x0) {
    FVar8 = FVar3;
  }
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(uint *)((longlong)iVar1 * 0x20 + (longlong)FVar8) < param_1->Value) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *)(*pcVar4)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_146169a16;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *)(*pcVar4)();
      return pTVar7;
    }
    FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>)
            this;
    if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                  )0x0) {
      FVar8 = FVar3;
    }
    if (*(uint *)((longlong)iVar9 * 0x20 + (longlong)FVar8) <= param_1->Value) {
      if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )0x0) {
        this = (TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
                *)FVar3;
      }
      return (TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *)
             ((longlong)iVar9 * 0x20 + (longlong)this);
    }
  }
LAB_146169a16:
  TArray<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  FVar3 = (this->Pairs).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )0x0) {
    this = (TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
            *)FVar3;
  }
  return (TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *)
         ((longlong)this + (longlong)iVar9 * 0x20);
}

// Emplace<int_const_&> @ 14616b390

TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::Emplace<int_const_&>
          (TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < *param_1) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14616b41d;
  }
  else {
LAB_14616b41d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)
               (pFVar3 + (longlong)iVar8 * 0x18);
      if (*(int *)(pFVar3 + (longlong)iVar8 * 0x18) <= *param_1) {
        DestructItems<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,int>
                  (pTVar9,1);
        goto LAB_14616b4a6;
      }
    }
  }
  TArray<TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>_> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14616b4a6:
  *(int *)pTVar9 = *param_1;
  *(undefined8 *)&pTVar9->field_0x8 = 0;
  *(undefined8 *)&pTVar9->field_0x10 = 0;
  return (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)&pTVar9->field_0x8;
}

// Emplace<FMovieSceneSequenceID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&> @ 14616b4e0

FMovieSceneEntityID * __thiscall
TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::Emplace<FMovieSceneSequenceID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
          (TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
           *this,FMovieSceneSequenceID *param_1,FMovieSceneEntityID *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneEntityID *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar7 = (uVar11 >> 1) + iVar10;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 8) < param_1->Value) {
        iVar10 = iVar7 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneEntityID *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_14616b576;
  }
  else {
LAB_14616b576:
    if (iVar10 < *piVar1) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieSceneEntityID *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 8;
      if (*(uint *)(pFVar3 + (longlong)iVar10 * 8) <= param_1->Value) goto LAB_14616b618;
    }
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar7 - iVar10) << 3);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
LAB_14616b618:
  *(uint *)pFVar9 = param_1->Value;
  *(ushort *)&pFVar9[4].field_0x0 = param_2->Value;
  return (FMovieSceneEntityID *)(pFVar9 + 4);
}

// Emplace<FMovieSceneSequenceID_const_&,TObjectPtr<UObject>_> @ 14616b650

TObjectPtr<UObject> * __thiscall
TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::Emplace<FMovieSceneSequenceID_const_&,TObjectPtr<UObject>_>
          (TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
           *this,FMovieSceneSequenceID *param_1,TObjectPtr<UObject> *param_2)

{
  int iVar1;
  uint uVar2;
  TObjectPtr<UObject> TVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TObjectPtr<UObject> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x10) < param_1->Value)
      {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TObjectPtr<UObject> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar9) goto LAB_14616b6e9;
  }
  else {
LAB_14616b6e9:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TObjectPtr<UObject> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
      if (*(uint *)pFVar8 <= param_1->Value) goto LAB_14616b762;
    }
  }
  TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>::
  InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
LAB_14616b762:
  *(uint *)pFVar8 = param_1->Value;
  TVar3 = (TObjectPtr<UObject>)(param_2->field0_0x0).DebugPtr;
  *(TObjectPtr<UObject>_u_0 *)(pFVar8 + 8) = TVar3.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.field0_0x0 != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
  }
  return (TObjectPtr<UObject> *)(TObjectPtr<UObject>_u_0 *)(pFVar8 + 8);
}

// Emplace<FMovieSceneSequenceID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_> @ 14616b7b0

TWeakObjectPtr<UObject,FWeakObjectPtr> * __thiscall
TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::Emplace<FMovieSceneSequenceID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_>
          (TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
           *this,FMovieSceneSequenceID *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0xc) < param_1->Value)
      {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar9) goto LAB_14616b848;
  }
  else {
LAB_14616b848:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar8 = pFVar3 + (longlong)iVar9 * 0xc;
      if (*(uint *)(pFVar3 + (longlong)iVar9 * 0xc) <= param_1->Value) goto LAB_14616b8c4;
    }
  }
  TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0xc;
LAB_14616b8c4:
  *(uint *)pFVar8 = param_1->Value;
  *(FWeakObjectPtr *)(pFVar8 + 4) = param_2->WeakPtr;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pFVar8 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_> @ 14616b900

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           *this,FPreAnimatedStorageID *param_1,
          TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar7;
  int iVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
  *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < param_1->TypeID
         ) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14616b98d;
  }
  else {
LAB_14616b98d:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(uint *)(pFVar3 + (longlong)iVar8 * 0x18) <= param_1->TypeID) {
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,int>
                  (pTVar9,1);
        goto LAB_14616ba16;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14616ba16:
  *(uint *)pTVar9 = param_1->TypeID;
  *(IPreAnimatedStorage **)&pTVar9->field_0x8 = param_2->Object;
  *(TReferenceControllerBase<1> **)&pTVar9->field_0x10 =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IPreAnimatedStorage *)0x0;
  return (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_> @ 14616ba60

TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageID_const_&,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
           *this,FPreAnimatedStorageID *param_1,
          TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *pTVar7;
  int iVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
  *pTVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar8;
      if (*(uint *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x18) < param_1->TypeID
         ) {
        iVar8 = iVar1 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar8 < 0) || ((int)uVar2 < iVar8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)(*pcVar4)();
      return pTVar7;
    }
    if (-1 < iVar8) goto LAB_14616baed;
  }
  else {
LAB_14616baed:
    if (iVar8 < (this->Pairs).ArrayNum) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
                *)(pFVar3 + (longlong)iVar8 * 0x18);
      if (*(uint *)(pFVar3 + (longlong)iVar8 * 0x18) <= param_1->TypeID) {
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,int>
                  (pTVar9,1);
        goto LAB_14616bb76;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar8,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar8 * 0x18);
LAB_14616bb76:
  *(uint *)pTVar9 = param_1->TypeID;
  *(IPreAnimatedStateGroupManager **)&pTVar9->field_0x8 = param_2->Object;
  *(TReferenceControllerBase<1> **)&pTVar9->field_0x10 =
       (param_2->WeakReferenceCount).ReferenceController;
  (param_2->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IPreAnimatedStateGroupManager *)0x0;
  return (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)&pTVar9->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_> @ 14616bbc0

TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_14616bc2c;
  }
  else {
LAB_14616bc2c:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,int>
                  (pTVar7,1);
        goto LAB_14616bd22;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_14616bd22:
  *(int *)pTVar7 = param_1->Value;
  pTVar7->field_0x28 = pTVar7->field_0x28 & 0xfe;
  pTVar7->field_0x28 = pTVar7->field_0x28 | 2;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>::operator=
            ((TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)&pTVar7->field_0x8,param_2);
  return (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)&pTVar7->field_0x8;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,TInlineValue<IMovieScenePreAnimatedToken,32,8>_> @ 14616bd60

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar6;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
  *pTVar7;
  longlong lVar8;
  FKeyForward local_res8;
  
  iVar5 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar5 < 0) || ((this->Pairs).ArrayNum < iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
      return pTVar6;
    }
    if (-1 < iVar5) goto LAB_14616bdcc;
  }
  else {
LAB_14616bdcc:
    if (iVar5 < (this->Pairs).ArrayNum) {
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar8 = (longlong)iVar5 * 0x30;
      if (param_1->Value == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar3)();
          return pTVar6;
        }
      }
      if (*(int *)(pFVar2 + lVar8) <= iVar1) {
        pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar8);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,int>
                  (pTVar7,1);
        goto LAB_14616bec2;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar5,1);
  pTVar7 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar5 * 0x30);
LAB_14616bec2:
  *(int *)pTVar7 = param_1->Value;
  pTVar7->field_0x28 = pTVar7->field_0x28 & 0xfe;
  pTVar7->field_0x28 = pTVar7->field_0x28 | 2;
  TInlineValue<IMovieScenePreAnimatedToken,32,8>::operator=
            ((TInlineValue<IMovieScenePreAnimatedToken,32,8> *)&pTVar7->field_0x8,param_2);
  return (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)&pTVar7->field_0x8;
}

// FindOrAddImpl<int_const_&> @ 146170840

TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> * __thiscall
TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
::FindOrAddImpl<int_const_&>
          (TSortedMap<int,TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->Pairs).AllocatorInstance.Data;
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x18) < *param_1) {
        iVar7 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar7 < (int)uVar2) && (*(int *)(pFVar3 + (longlong)iVar7 * 0x18) <= *param_1)) &&
     (iVar7 != -1)) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    pTVar8 = (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8);
    if (pTVar8 != (TArray<FMovieSceneTrackInstanceInput,TSizedDefaultAllocator<32>_> *)0x0) {
      return pTVar8;
    }
  }
  pTVar8 = Emplace<int_const_&>(this,param_1);
  return pTVar8;
}

// Find @ 1461a7330

TObjectPtr<UObject> * __thiscall
TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::Find(TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
       *this,FMovieSceneSequenceID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UObject> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<FMovieSceneSequenceID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TObjectPtr<UObject> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TObjectPtr<UObject> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TObjectPtr<UObject> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10 + 8);
}

// Find @ 1461a73d0

TWeakObjectPtr<UObject,FWeakObjectPtr> * __thiscall
TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::Find(TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
       *this,FMovieSceneSequenceID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>,FMovieSceneSequenceID,TSortedMap<FMovieSceneSequenceID,TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>::FKeyForward,TLess<FMovieSceneSequenceID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<FMovieSceneSequenceID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TWeakObjectPtr<UObject,FWeakObjectPtr> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xc + 4);
}

// Find @ 1461a7470

FMovieSceneEntityID * __thiscall
TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
::Find(TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
       *this,FMovieSceneSequenceID *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneEntityID *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar6;
      if (*(uint *)(pFVar8 + (longlong)iVar1 * 8) < param_1->Value) {
        iVar6 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(uint *)(pFVar8 + (longlong)iVar6 * 8) <= param_1->Value)) &&
     (iVar6 != -1)) {
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEntityID *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 8 + 4;
  }
  else {
    pFVar8 = (FScriptContainerElement *)0x0;
  }
  return (FMovieSceneEntityID *)pFVar8;
}

// Find @ 1461a7540

TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
       *this,FPreAnimatedStorageID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8);
}

// Find @ 1461a75e0

TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
       *this,FPreAnimatedStorageID *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageID,TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TWeakPtr<UE::MovieScene::IPreAnimatedStateGroupManager,1> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8);
}

// Find @ 1461a7680

TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Find @ 1461a7720

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 8);
}

// Remove @ 1461c8c00

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
    FVar2 = _Dst[0x28];
    if (((byte)FVar2 & 1) != 0) {
      pFVar8 = _Dst + 8;
      if (((byte)FVar2 & 2) == 0) {
        pFVar8 = *(FScriptContainerElement **)(_Dst + 8);
      }
      _Dst[0x28] = (FScriptContainerElement)((byte)FVar2 & 0xfe);
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,0);
      if (((byte)_Dst[0x28] & 2) == 0) {
        FMemory::Free(*(void **)(_Dst + 8));
      }
    }
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 1461c8d20

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30;
    FVar2 = _Dst[0x28];
    if (((byte)FVar2 & 1) != 0) {
      pFVar8 = _Dst + 8;
      if (((byte)FVar2 & 2) == 0) {
        pFVar8 = *(FScriptContainerElement **)(_Dst + 8);
      }
      _Dst[0x28] = (FScriptContainerElement)((byte)FVar2 & 0xfe);
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,0);
      if (((byte)_Dst[0x28] & 2) == 0) {
        FMemory::Free(*(void **)(_Dst + 8));
      }
    }
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,int_const_&> @ 146280790

int * __thiscall
TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,int_const_&>
          (TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
           *this,FMovieSceneEntityID *param_1,int *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  piVar7 = &(this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      if (*(ushort *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 8) < param_1->Value)
      {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      piVar7 = (int *)(*pcVar3)();
      return piVar7;
    }
    if (-1 < iVar9) goto LAB_146280828;
  }
  else {
LAB_146280828:
    if (iVar9 < *piVar7) {
      if ((iVar9 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        piVar7 = (int *)(*pcVar3)();
        return piVar7;
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      pFVar8 = pFVar2 + (longlong)iVar9 * 8;
      if (*(ushort *)(pFVar2 + (longlong)iVar9 * 8) <= param_1->Value) goto LAB_1462808cc;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,piVar7,&(this->Pairs).ArrayMax);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 8;
  memmove(pFVar8 + 8,pFVar8,(longlong)(iVar6 - iVar9) << 3);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 8;
LAB_1462808cc:
  *(ushort *)pFVar8 = param_1->Value;
  *(int *)(pFVar8 + 4) = *param_2;
  return (int *)(pFVar8 + 4);
}

// Find @ 1462acc90

int * __thiscall
TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
::Find(TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
       *this,FMovieSceneEntityID *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar6 = 0;
  pFVar8 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar2) {
    uVar9 = uVar2;
    do {
      iVar1 = (uVar9 >> 1) + iVar6;
      if (*(ushort *)(pFVar8 + (longlong)iVar1 * 8) < param_1->Value) {
        iVar6 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  if (((iVar6 < (int)uVar2) && (*(ushort *)(pFVar8 + (longlong)iVar6 * 8) <= param_1->Value)) &&
     (iVar6 != -1)) {
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        piVar7 = (int *)(*pcVar3)();
        return piVar7;
      }
    }
    pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 8 + 4;
  }
  else {
    pFVar8 = (FScriptContainerElement *)0x0;
  }
  return (int *)pFVar8;
}

