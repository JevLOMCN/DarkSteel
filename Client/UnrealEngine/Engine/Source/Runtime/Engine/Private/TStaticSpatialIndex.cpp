// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// operator() @ 148a82240

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::
ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FCone>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  UWorldPartitionRuntimeCell *local_res8;
  
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar8 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = *(UWorldPartitionRuntimeCell **)
            (*(longlong *)(lVar1 + 8) + 0x28 + (longlong)(int)param_1 * 0x30);
  if (*(FWorldPartitionQueryCache **)(lVar2 + 8) != (FWorldPartitionQueryCache *)0x0) {
    FWorldPartitionQueryCache::AddCellInfo
              (*(FWorldPartitionQueryCache **)(lVar2 + 8),pUVar3,
               *(FSphericalSector **)(lVar2 + 0x18));
  }
  bVar5 = `UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_1>::operator()
                    (*(void **)(lVar2 + 0x10),pUVar3,
                     *(FWorldPartitionStreamingQuerySource **)(lVar2 + 0x20));
  if (bVar5) {
    local_res8 = pUVar3;
    cVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))
                      ((*(undefined8 **)(lVar2 + 0x28))[1],&local_res8);
    if (cVar7 == '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 148a82320

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FCone>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  UWorldPartitionRuntimeCell *local_res8;
  
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar8 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = *(UWorldPartitionRuntimeCell **)
            ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8));
  if (*(FWorldPartitionQueryCache **)(lVar2 + 8) != (FWorldPartitionQueryCache *)0x0) {
    FWorldPartitionQueryCache::AddCellInfo
              (*(FWorldPartitionQueryCache **)(lVar2 + 8),pUVar3,
               *(FSphericalSector **)(lVar2 + 0x18));
  }
  bVar5 = `UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_1>::operator()
                    (*(void **)(lVar2 + 0x10),pUVar3,
                     *(FWorldPartitionStreamingQuerySource **)(lVar2 + 0x20));
  if (bVar5) {
    local_res8 = pUVar3;
    cVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))
                      ((*(undefined8 **)(lVar2 + 0x28))[1],&local_res8);
    if (cVar7 == '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 148a82400

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FCone>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  `UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_1>::operator()
            (*(void **)(puVar2 + 0x38),
             *(UWorldPartitionRuntimeCell **)
              ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8)));
  return (bool)*puVar2;
}

// operator() @ 148a824a0

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::
ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>,FStaticSpatialIndex::FSpatialIndexProfile2D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FSphere>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  UWorldPartitionRuntimeCell *local_res8;
  
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar8 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = *(UWorldPartitionRuntimeCell **)
            (*(longlong *)(lVar1 + 8) + 0x28 + (longlong)(int)param_1 * 0x30);
  if (*(FWorldPartitionQueryCache **)(lVar2 + 8) != (FWorldPartitionQueryCache *)0x0) {
    FWorldPartitionQueryCache::AddCellInfo
              (*(FWorldPartitionQueryCache **)(lVar2 + 8),pUVar3,
               *(FSphericalSector **)(lVar2 + 0x18));
  }
  bVar5 = `UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_1>::operator()
                    (*(void **)(lVar2 + 0x10),pUVar3,
                     *(FWorldPartitionStreamingQuerySource **)(lVar2 + 0x20));
  if (bVar5) {
    local_res8 = pUVar3;
    cVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))
                      ((*(undefined8 **)(lVar2 + 0x28))[1],&local_res8);
    if (cVar7 == '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 148a82580

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_2>::operator()<TStaticSpatialIndexRTree<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>,FStaticSpatialIndex::FSpatialIndexProfile3D>_>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FSphere>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  UWorldPartitionRuntimeCell *local_res8;
  
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar8 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = *(UWorldPartitionRuntimeCell **)
            ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8));
  if (*(FWorldPartitionQueryCache **)(lVar2 + 8) != (FWorldPartitionQueryCache *)0x0) {
    FWorldPartitionQueryCache::AddCellInfo
              (*(FWorldPartitionQueryCache **)(lVar2 + 8),pUVar3,
               *(FSphericalSector **)(lVar2 + 0x18));
  }
  bVar5 = `UWorldPartitionRuntimeHashSet::ForEachStreamingCellsQuery'::__l2::<lambda_1>::operator()
                    (*(void **)(lVar2 + 0x10),pUVar3,
                     *(FWorldPartitionStreamingQuerySource **)(lVar2 + 0x20));
  if (bVar5) {
    local_res8 = pUVar3;
    cVar7 = (*(code *)**(undefined8 **)(lVar2 + 0x28))
                      ((*(undefined8 **)(lVar2 + 0x28))[1],&local_res8);
    if (cVar7 == '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 148a82660

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<````UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>::operator()<FStaticSpatialIndex::FSphere>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  `UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_1>::operator()
            (*(void **)(puVar2 + 0x38),
             *(UWorldPartitionRuntimeCell **)
              ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8)));
  return (bool)*puVar2;
}

// operator() @ 148a82700

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  ``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::
  __l2::<lambda_1>::operator()
            (puVar2 + 8,
             *(UWorldPartitionRuntimeCell **)
              (*(longlong *)(lVar1 + 8) + 0x28 + (longlong)(int)param_1 * 0x30));
  return (bool)*puVar2;
}

// operator() @ 148a827a0

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  ``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::
  __l2::<lambda_1>::operator()
            (puVar2 + 8,
             *(UWorldPartitionRuntimeCell **)
              (*(longlong *)(lVar1 + 8) + 0x28 + (longlong)(int)param_1 * 0x30));
  return (bool)*puVar2;
}

// operator() @ 148a82840

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  ``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::
  __l2::<lambda_1>::operator()
            (puVar2 + 8,
             *(UWorldPartitionRuntimeCell **)
              ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8)));
  return (bool)*puVar2;
}

// operator() @ 148a828e0

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  ``UWorldPartitionRuntimeHashSet::ForEachStreamingCellsSources'::__l68::<lambda_1>::operator()'::
  __l2::<lambda_1>::operator()
            (puVar2 + 8,
             *(UWorldPartitionRuntimeCell **)
              ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8)));
  return (bool)*puVar2;
}

// operator() @ 148a82980

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  ``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::
  operator()(puVar2 + 8,
             *(UWorldPartitionRuntimeCell **)
              (*(longlong *)(lVar1 + 8) + 0x28 + (longlong)(int)param_1 * 0x30));
  return (bool)*puVar2;
}

// operator() @ 148a82a20

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  ``UWorldPartitionRuntimeHashSet::Draw2D'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::
  operator()(puVar2 + 8,
             *(UWorldPartitionRuntimeCell **)
              ((longlong)(int)param_1 * 0x40 + 0x38 + *(longlong *)(lVar1 + 8)));
  return (bool)*puVar2;
}

// operator() @ 148a82ac0

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::
ForEachIntersectingElement<``UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_2>::operator()'::__l16::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  puVar2 = *(undefined1 **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)param_1 < *(int *)(lVar1 + 0x10)) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  `UWorldPartitionRuntimeHashSet::Draw3D'::__l2::<lambda_1>::operator()
            (*(void **)(puVar2 + 8),
             *(UWorldPartitionRuntimeCell **)
              (*(longlong *)(lVar1 + 8) + 0x28 + (longlong)(int)param_1 * 0x30));
  return (bool)*puVar2;
}

// operator() @ 148a884b0

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::InitSpatialIndex'::__l5::<lambda_2>::operator()
          (void *this,
          TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_2)

{
  sbyte sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  iVar5 = **(int **)this + -1;
  for (iVar6 = iVar5; -1 < iVar6; iVar6 = iVar6 + -1) {
    sVar1 = (((byte)((int)((*(double *)param_1 + *(double *)&param_1->field_0x10) *
                          __real_3ee0000000000000) >> ((byte)iVar6 & 0x1f)) & 1) * '\x02' |
             (byte)((int)((*(double *)&param_1->field_0x18 + *(double *)&param_1->field_0x8) *
                         __real_3ee0000000000000) >> ((byte)iVar6 & 0x1f)) & 1 |
            (char)uVar2 * '\x04') * '\x02';
    uVar3 = 0x361e9cb4 >> sVar1 & 3U | uVar3 * 4;
    uVar2 = 0x8fe65831U >> sVar1 & 3;
  }
  uVar2 = 0;
  for (; -1 < iVar5; iVar5 = iVar5 + -1) {
    sVar1 = (((byte)((int)((*(double *)param_2 + *(double *)&param_2->field_0x10) *
                          __real_3ee0000000000000) >> ((byte)iVar5 & 0x1f)) & 1) * '\x02' |
             (byte)((int)((*(double *)&param_2->field_0x18 + *(double *)&param_2->field_0x8) *
                         __real_3ee0000000000000) >> ((byte)iVar5 & 0x1f)) & 1 |
            (char)uVar2 * '\x04') * '\x02';
    uVar4 = 0x361e9cb4 >> sVar1 & 3U | uVar4 * 4;
    uVar2 = 0x8fe65831U >> sVar1 & 3;
  }
  return (int)uVar3 < (int)uVar4;
}

// operator() @ 148a88610

bool __thiscall
`TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::InitSpatialIndex'::__l5::<lambda_2>::operator()
          (void *this,
          TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_1,
          TTuple<UE::Math::TBox<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *param_2)

{
  sbyte sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  iVar5 = **(int **)this + -1;
  for (iVar6 = iVar5; -1 < iVar6; iVar6 = iVar6 + -1) {
    sVar1 = (((byte)((int)((*(double *)param_1 + *(double *)&param_1->field_0x18) *
                          __real_3ee0000000000000) >> ((byte)iVar6 & 0x1f)) & 1) * '\x02' |
             (byte)((int)((*(double *)&param_1->field_0x20 + *(double *)&param_1->field_0x8) *
                         __real_3ee0000000000000) >> ((byte)iVar6 & 0x1f)) & 1 |
            (char)uVar2 * '\x04') * '\x02';
    uVar3 = 0x361e9cb4 >> sVar1 & 3U | uVar3 * 4;
    uVar2 = 0x8fe65831U >> sVar1 & 3;
  }
  uVar2 = 0;
  for (; -1 < iVar5; iVar5 = iVar5 + -1) {
    sVar1 = (((byte)((int)((*(double *)param_2 + *(double *)&param_2->field_0x18) *
                          __real_3ee0000000000000) >> ((byte)iVar5 & 0x1f)) & 1) * '\x02' |
             (byte)((int)((*(double *)&param_2->field_0x20 + *(double *)&param_2->field_0x8) *
                         __real_3ee0000000000000) >> ((byte)iVar5 & 0x1f)) & 1 |
            (char)uVar2 * '\x04') * '\x02';
    uVar4 = 0x361e9cb4 >> sVar1 & 3U | uVar4 * 4;
    uVar2 = 0x8fe65831U >> sVar1 & 3;
  }
  return (int)uVar3 < (int)uVar4;
}

// GetAllocatedSize @ 148a93ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::GetAllocatedSize(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                   *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  void *this_00;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  uint local_58 [2];
  FNode *local_50;
  code *local_48 [2];
  undefined **local_38;
  TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *local_30;
  code **local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar1 = (this->Elements).ArrayMax;
  local_30 = &this->SpatialIndex;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__GetAllocatedSize___TRTreeImpl_UFSpatialIndexProfile2D_FStaticSpatialIndex___0BA__0EA__FStaticSpatialIndex__QEBAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_28 = local_48;
  local_20 = (undefined ***)0x0;
  local_50 = &(this->SpatialIndex).RootNode;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,unsigned_int,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_*,unsigned_int>
                ::Call;
  local_58[0] = 0x40;
  UE::Core::Private::Function::CheckCallable
            (UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,unsigned_int,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_*,unsigned_int>
             ::Call);
  pcVar2 = local_48[0];
  pppuVar4 = &local_38;
  if (local_20 != (undefined ***)0x0) {
    pppuVar4 = local_20;
  }
  this_00 = (void *)(*(code *)(*pppuVar4)[1])();
  if (pcVar2 == UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,unsigned_int,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_*,unsigned_int>
                ::Call) {
    uVar3 = `FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
            GetAllocatedSize'::__l2::<lambda_1>::operator()(this_00,local_50,local_58[0]);
  }
  else {
    uVar3 = (*pcVar2)(this_00,&local_50,local_58);
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return iVar1 * 0x30 + 0x58 + uVar3;
}

// GetAllocatedSize @ 148a93fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::GetAllocatedSize(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
                   *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  void *this_00;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  uint local_58 [2];
  FNode *local_50;
  code *local_48 [2];
  undefined **local_38;
  TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *local_30;
  code **local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar1 = (this->Elements).ArrayMax;
  local_30 = &this->SpatialIndex;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__GetAllocatedSize___TRTreeImpl_UFSpatialIndexProfile3D_FStaticSpatialIndex___0BA__0EA__FStaticSpatialIndex__QEBAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_28 = local_48;
  local_20 = (undefined ***)0x0;
  local_50 = &(this->SpatialIndex).RootNode;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,unsigned_int,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_*,unsigned_int>
                ::Call;
  local_58[0] = 0x50;
  UE::Core::Private::Function::CheckCallable
            (UE::Core::Private::Function::
             TFunctionRefCaller<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,unsigned_int,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_*,unsigned_int>
             ::Call);
  pcVar2 = local_48[0];
  pppuVar4 = &local_38;
  if (local_20 != (undefined ***)0x0) {
    pppuVar4 = local_20;
  }
  this_00 = (void *)(*(code *)(*pppuVar4)[1])();
  if (pcVar2 == UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::GetAllocatedSize'::__l2::<lambda_1>,unsigned_int,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_*,unsigned_int>
                ::Call) {
    uVar3 = `FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
            GetAllocatedSize'::__l2::<lambda_1>::operator()(this_00,local_50,local_58[0]);
  }
  else {
    uVar3 = (*pcVar2)(this_00,&local_50,local_58);
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return iVar1 * 0x40 + 0x68 + uVar3;
}

// GetBox @ 148a94160

TBox2<double> * __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::GetBox(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
         *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TBox2<double> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Elements).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TBox2<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TBox2<double> *)((this->Elements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x30);
}

// GetBox @ 148a941e0

TBox<double> * __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::GetBox(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
         *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TBox<double> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Elements).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TBox<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TBox<double> *)((this->Elements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x40);
}

// GetBoxes @ 148a94260

TBox2<double> * __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::GetBoxes(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
           *this,uint param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TBox2<double> *pTVar4;
  
  *param_2 = 0x30;
  uVar3 = 0;
  if ((int)param_1 < (this->Elements).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TBox2<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TBox2<double> *)((this->Elements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x30);
}

// GetBoxes @ 148a942e0

TBox<double> * __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::GetBoxes(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
           *this,uint param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TBox<double> *pTVar4;
  
  *param_2 = 0x40;
  uVar3 = 0;
  if ((int)param_1 < (this->Elements).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TBox<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TBox<double> *)((this->Elements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x40);
}

// GetNumBox @ 148a95710

int __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::GetNumBox(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
            *this)

{
  return (this->Elements).ArrayNum;
}

// GetNumBox @ 148a95720

int __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
::GetNumBox(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile3D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile3D,65536>_>
            *this)

{
  return (this->Elements).ArrayNum;
}

// Init @ 148a98d00

void __thiscall
TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
::Init(TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
       *this,TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
             *param_1)

{
  TArray<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  TBox2<double> *pTVar7;
  TBox2<double> *pTVar8;
  double dVar9;
  double dVar10;
  int *local_res8;
  int local_res10 [2];
  TVector2<double>_u_0 local_48;
  double local_38;
  double local_30;
  
  pTVar1 = &this->Elements;
  if (pTVar1 != param_1) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Elements).ArrayNum = param_1->ArrayNum;
    (this->Elements).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  iVar5 = (this->Elements).ArrayNum;
  pTVar7 = (TBox2<double> *)(pTVar1->AllocatorInstance).Data;
  pTVar8 = (TBox2<double> *)((longlong)pTVar7 + (longlong)iVar5 * 0x30);
  while( true ) {
    if ((this->Elements).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pTVar7 == pTVar8) break;
    UE::Math::TBox2<double>::operator+=((TBox2<double> *)&local_48._s_0,pTVar7);
    pTVar7 = (TBox2<double> *)((longlong)&pTVar7[1].Min.field0_0x0 + 8);
  }
  dVar9 = (local_38 - local_48._s_0.X) * __real_3fe0000000000000;
  dVar10 = (local_30 - local_48._s_0.Y) * __real_3fe0000000000000;
  if (dVar10 <= dVar9) {
    dVar10 = dVar9;
  }
  iVar6 = -((int)ROUND(__real_bfe0000000000000 - dVar10 * __real_3f00000000000000) >> 1);
  iVar5 = 1;
  if (iVar6 != 0) {
    iVar5 = iVar6;
  }
  uVar2 = (ulonglong)(iVar5 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  local_res10[0] = (int)lVar4 + 1;
  local_res8 = local_res10;
  AlgoImpl::
  IntroSortInternal<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_>,_TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>::InitSpatialIndex_::__l5::<lambda_2>_>_>
            ((TTuple<UE::Math::TBox2<double>,TObjectPtr<UWorldPartitionRuntimeCell>_> *)
             (this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum,local_res8._0_1_,
             (<lambda_2> *)&local_res8);
  FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::Init
            (&this->SpatialIndex);
  return;
}

