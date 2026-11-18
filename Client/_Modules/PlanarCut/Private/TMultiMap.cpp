// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// RemoveSingle @ 14c9de870

int __thiscall
TMultiMap<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>_>
::RemoveSingle(TMultiMap<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>_>
               *this,FVector3i *param_1,FIndex2i *param_2)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  uint *puVar9;
  ForElementType<unsigned_int> FVar10;
  TBaseKeyIterator<0> local_28;
  
  TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<UE::Geometry::FVector3i,UE::Geometry::FIndex2i>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,UE::Geometry::FIndex2i,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<UE::Geometry::FVector3i_const_>)param_1);
  if (local_28.Index == 0xffffffff) {
    return 0;
  }
  lVar8 = *(longlong *)&(local_28.Set)->Elements;
  while ((iVar5 = local_28.Index,
         *(int *)((longlong)local_28.Index * 0x1c + 0xc + lVar8) != (param_2->field0_0x0)._s_0.A ||
         (*(int *)((longlong)local_28.Index * 0x1c + 0x10 + lVar8) != (param_2->field0_0x0)._s_0.B))
        ) {
    if (local_28.NextIndex == 0xffffffff) {
      return 0;
    }
    local_28.Index = local_28.NextIndex;
    do {
      lVar6 = (longlong)local_28.Index * 0x1c;
      local_28.NextIndex = *(uint *)(lVar6 + 0x14 + lVar8);
      if (((*(int *)(lVar6 + lVar8) == ((local_28.Key)->field0_0x0)._s_0.X) &&
          (*(int *)(lVar6 + 4 + lVar8) == ((local_28.Key)->field0_0x0)._s_0.Y)) &&
         (*(int *)(lVar6 + 8 + lVar8) == ((local_28.Key)->field0_0x0)._s_0.Z)) break;
      local_28.Index = local_28.NextIndex;
    } while (local_28.NextIndex != 0xffffffff);
    if (local_28.Index == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < local_28.Index) && (local_28.Index < *(int *)&((local_28.Set)->Elements).field_0x28)) {
    if ((*(int *)&((local_28.Set)->Elements).field_0x28 <= local_28.Index) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    FVar2 = *(ForElementType<unsigned_int> *)&((local_28.Set)->Elements).field_0x20;
    FVar10 = (ForElementType<unsigned_int>)&((local_28.Set)->Elements).field_0x10;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar2;
    }
    if ((*(uint *)((longlong)FVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
         >> (iVar5 & 0x1fU) & 1) != 0) goto LAB_14c9de9d1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14c9de9d1:
  FVar7 = ((local_28.Set)->Hash).SecondaryData;
  lVar8 = (longlong)iVar5 * 0x1c + *(longlong *)&(local_28.Set)->Elements;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&(local_28.Set)->Hash;
  }
  puVar9 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar8 + 0x18) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == iVar5) {
      *puVar9 = *(uint *)(lVar8 + 0x14);
      TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_28.Set,iVar5,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&(local_28.Set)->Elements + 0x14 + (longlong)(int)uVar1 * 0x1c);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

