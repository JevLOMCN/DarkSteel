// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// BuildLevelCutSet @ 14ca7a910

FTreeCutSet * __thiscall
UE::Geometry::FDynamicMeshOctree3::BuildLevelCutSet
          (FDynamicMeshOctree3 *this,FTreeCutSet *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FTreeCutSet *pFVar7;
  bool *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_res18 [4];
  undefined4 local_38 [4];
  
  uVar10 = 0;
  (__return_storage_ptr__->CutCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CutCells).ArrayNum = 0;
  (__return_storage_ptr__->CutCells).ArrayMax = 0;
  *(undefined8 *)&(__return_storage_ptr__->CutCellIDs).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->CutCellIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->CutCellIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->CutCellIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->CutCellIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->CutCellIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->CutCellIDs).Elements.field_0x34 = 0;
  (__return_storage_ptr__->CutCellIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->CutCellIDs).HashSize = 0;
  __return_storage_ptr__->FixedCutLevel = param_1;
  lVar4 = this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  do {
    uVar9 = (uint)uVar10;
    if (uVar9 == (int)lVar4 * 0x200 + iVar1) {
      return __return_storage_ptr__;
    }
    pbVar8 = (bool *)(*(longlong *)(this->_padding_ + (uVar10 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 0x34);
    if ((uint)pbVar8[4] == __return_storage_ptr__->FixedCutLevel) {
      local_38[0] = *(undefined4 *)pbVar8;
      pFVar2 = (__return_storage_ptr__->CutCells).AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 <
          pFVar2 + (longlong)(__return_storage_ptr__->CutCells).ArrayMax * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FTreeCutSet *)(*pcVar3)();
          return pFVar7;
        }
      }
      iVar6 = (__return_storage_ptr__->CutCells).ArrayNum;
      if (iVar6 == (__return_storage_ptr__->CutCells).ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)__return_storage_ptr__,
                           &(__return_storage_ptr__->CutCells).ArrayMax);
      }
      (__return_storage_ptr__->CutCells).ArrayNum = iVar6 + 1;
      *(undefined4 *)
       ((__return_storage_ptr__->CutCells).AllocatorInstance.Data + (longlong)iVar6 * 4) =
           local_38[0];
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>(&__return_storage_ptr__->CutCellIDs,local_res18,pbVar8);
    }
    uVar10 = (ulonglong)(uVar9 + 1);
  } while( true );
}

// CollectRootTriangles @ 14ca800e0

void __thiscall
UE::Geometry::FDynamicMeshOctree3::CollectRootTriangles
          (FDynamicMeshOctree3 *this,FTreeCutSet *param_1,TFunctionRef<void___cdecl(int)> *param_2)

{
  uint uVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int local_res8 [2];
  longlong local_88;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_80;
  <lambda_1> local_68;
  BaseValueIterator local_58;
  
  local_68.Queue = &local_80;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_68.__this = this;
  TSparseGrid3<unsigned_int>::
  AllocatedIteration<_UE::Geometry::FDynamicMeshOctree3::CollectRootTriangles_::__l2::<lambda_1>_>
            ((TSparseGrid3<unsigned_int> *)&this->_padding_,&local_68);
  iVar7 = local_80.ArrayNum;
joined_r0x00014ca80136:
  do {
    if (iVar7 < 1) {
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return;
    }
    iVar6 = iVar7 + -1;
    puVar9 = *(uint **)(local_80.AllocatorInstance.Data + (longlong)iVar6 * 8);
    iVar5 = (iVar7 - iVar6) + -1;
    iVar11 = iVar7;
    if (iVar5 != 0) {
      memmove(local_80.AllocatorInstance.Data + (longlong)iVar6 * 8,
              local_80.AllocatorInstance.Data + (longlong)iVar6 * 8 + 8,(longlong)iVar5 << 3);
      iVar11 = local_80.ArrayNum;
    }
    local_80.ArrayNum = iVar11 + -1;
    uVar1 = *puVar9;
    if (*(int *)&(param_1->CutCellIDs).Elements.field_0x8 !=
        *(int *)&(param_1->CutCellIDs).Elements.field_0x34) {
      FVar2 = (param_1->CutCellIDs).Hash.SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&(param_1->CutCellIDs).Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar2;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      (ulonglong)((param_1->CutCellIDs).HashSize - 1U & uVar1) * 4);
      if (iVar6 != -1) {
        lVar10 = *(longlong *)&(param_1->CutCellIDs).Elements;
        do {
          iVar7 = iVar11 + -1;
          if (*(uint *)(lVar10 + (longlong)iVar6 * 0xc) == uVar1) goto joined_r0x00014ca80136;
          iVar6 = *(int *)(lVar10 + 4 + (longlong)iVar6 * 0xc);
        } while (iVar6 != -1);
      }
    }
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_58,(FSmallListSet *)&this->_padding_,uVar1,false);
    while ((((local_58.ListSet != (FSmallListSet *)&this->_padding_ || (local_58.ListIndex != uVar1)
             ) || (local_58.iCur != -1)) || (local_58.cur_ptr != -1))) {
      local_res8[0] = local_58.cur_value;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res8);
      FSmallListSet::BaseValueIterator::GotoNext(&local_58);
    }
    puVar9 = puVar9 + 5;
    lVar10 = 8;
    do {
      uVar1 = *puVar9;
      if (uVar1 != 0xffffffff) {
        local_88 = (ulonglong)(uVar1 & 0x1ff) * 0x34 +
                   *(longlong *)(this->_padding_ + (ulonglong)(uVar1 >> 9) * 8);
        if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
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
        iVar7 = local_80.ArrayNum;
        if (local_80.ArrayNum == local_80.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
        }
        local_80.ArrayNum = iVar7 + 1;
        *(longlong *)(local_80.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_88;
      }
      puVar9 = puVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar7 = local_80.ArrayNum;
  } while( true );
}

// CollectSpillTriangles @ 14ca80370

void __thiscall
UE::Geometry::FDynamicMeshOctree3::CollectSpillTriangles
          (FDynamicMeshOctree3 *this,TFunctionRef<void___cdecl(int)> *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  plVar1 = &this->_padding_;
  iVar3 = (int)this->_padding_;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = plVar1;
    }
    uVar10 = (uint)*plVar12;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ca8041d;
      uVar10 = *(uint *)((longlong)plVar12 + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ca8041d:
  uVar10 = (uint)this->_padding_;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = (uint)this->_padding_;
  if (uVar10 != uVar6) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = plVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ca80520;
      uVar10 = *(uint *)((longlong)plVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14ca80520:
  while( true ) {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    local_res18[0] = *(undefined4 *)(this->_padding_ + (longlong)TStack_60.CurrentBitIndex * 0xc);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// CollectTriangles @ 14ca805a0

void __thiscall
UE::Geometry::FDynamicMeshOctree3::CollectTriangles
          (FDynamicMeshOctree3 *this,FCellReference *param_1,
          TFunctionRef<void___cdecl(int)> *param_2)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int local_res8 [2];
  longlong local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  BaseValueIterator local_50;
  
  uVar1 = param_1->CellID;
  if (((((int)uVar1 < 0) ||
       ((int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4) <= (int)uVar1)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)(this->_padding_ + (ulonglong)(uVar1 >> 9) * 8) +
                                   (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellRefCounts.IsValid(CellRef.CellID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshOctree3.h"
                         ,0x173,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = param_1->CellID;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  lVar9 = *(longlong *)(this->_padding_ + (ulonglong)(uVar1 >> 9) * 8);
  iVar5 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_60,(int *)((longlong)&local_58 + 4));
  iVar7 = iVar5 + 1;
  local_58 = CONCAT44(local_58._4_4_,iVar7);
  *(ulonglong *)(local_60.Data + (longlong)iVar5 * 8) = lVar9 + (ulonglong)(uVar1 & 0x1ff) * 0x34;
  if (0 < iVar7) {
    do {
      iVar5 = iVar7 + -1;
      piVar2 = *(int **)(local_60.Data + (longlong)iVar5 * 8);
      iVar6 = (iVar7 - iVar5) + -1;
      if (iVar6 != 0) {
        memmove(local_60.Data + (longlong)iVar5 * 8,local_60.Data + (longlong)iVar5 * 8 + 8,
                (longlong)iVar6 << 3);
        iVar7 = (int)local_58;
      }
      local_58 = CONCAT44(local_58._4_4_,iVar7 + -1);
      iVar7 = *piVar2;
      FSmallListSet::BaseValueIterator::BaseValueIterator
                (&local_50,(FSmallListSet *)&this->_padding_,iVar7,false);
      while (((local_50.ListSet != (FSmallListSet *)&this->_padding_ ||
              (local_50.ListIndex != iVar7)) || ((local_50.iCur != -1 || (local_50.cur_ptr != -1))))
            ) {
        local_res8[0] = local_50.cur_value;
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res8);
        FSmallListSet::BaseValueIterator::GotoNext(&local_50);
      }
      puVar8 = (uint *)(piVar2 + 5);
      lVar9 = 8;
      do {
        uVar1 = *puVar8;
        if (uVar1 != 0xffffffff) {
          local_68 = (ulonglong)(uVar1 & 0x1ff) * 0x34 +
                     *(longlong *)(this->_padding_ + (ulonglong)(uVar1 >> 9) * 8);
          if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8))
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
          iVar7 = (int)local_58;
          if ((int)local_58 == local_58._4_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_60,(int *)((longlong)&local_58 + 4));
          }
          local_58 = CONCAT44(local_58._4_4_,iVar7 + 1);
          *(longlong *)(local_60.Data + (longlong)iVar7 * 8) = local_68;
        }
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar7 = (int)local_58;
    } while (0 < (int)local_58);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// InsertTriangles @ 14ca96f60

void __thiscall
UE::Geometry::FDynamicMeshOctree3::InsertTriangles
          (FDynamicMeshOctree3 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  int iVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  iVar2 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < (longlong)iVar2) {
    lVar8 = 0;
    do {
      pFVar3 = this->Mesh;
      uVar9 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = uVar9;
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
      uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar8 * 4);
      if (((-1 < (int)uVar6) &&
          ((int)uVar6 <
           (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        pFVar3 = this->Mesh;
        uVar6 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FDynamicMesh3::GetTriBounds
                  (pFVar3,(TAxisAlignedBox3<double> *)&local_58._s_0,
                   *(int *)((param_1->AllocatorInstance).Data + lVar8 * 4));
        uVar10 = (this->ModifiedBounds).Min.field0_0x0._s_0.X;
        if (local_58._s_0.X <= (double)uVar10) {
          uVar10 = local_58._s_0.X;
        }
        uVar12 = (this->ModifiedBounds).Min.field0_0x0._s_0.Y;
        if (local_58._s_0.Y <= (double)uVar12) {
          uVar12 = local_58._s_0.Y;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.X = (double)uVar10;
        uVar10 = (this->ModifiedBounds).Min.field0_0x0._s_0.Z;
        if (local_58._s_0.Z <= (double)uVar10) {
          uVar10 = local_58._s_0.Z;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.Y = (double)uVar12;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.X;
        dVar13 = local_40;
        if (local_40 <= dVar1) {
          dVar13 = dVar1;
        }
        (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)uVar10;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.Y;
        dVar11 = local_38;
        if (local_38 <= dVar1) {
          dVar11 = dVar1;
        }
        (this->ModifiedBounds).Max.field0_0x0._s_0.X = dVar13;
        dVar1 = (this->ModifiedBounds).Max.field0_0x0._s_0.Z;
        dVar13 = local_30;
        if (local_30 <= dVar1) {
          dVar13 = dVar1;
        }
        (this->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar11;
        (this->ModifiedBounds).Max.field0_0x0._s_0.Z = dVar13;
        uVar6 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FSparseDynamicOctree3::InsertObject
                  ((FSparseDynamicOctree3 *)this,
                   *(int *)((param_1->AllocatorInstance).Data + lVar8 * 4),
                   (TAxisAlignedBox3<double> *)&local_58._s_0);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar2);
  }
  return;
}

// UpdateLevelCutSet @ 14caa85b0

void __thiscall
UE::Geometry::FDynamicMeshOctree3::UpdateLevelCutSet
          (FDynamicMeshOctree3 *this,FTreeCutSet *param_1,
          TArray<UE::Geometry::FDynamicMeshOctree3::FCellReference,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  bool *pbVar12;
  uint local_res8 [2];
  uint local_38 [4];
  
  lVar7 = this->_padding_;
  uVar11 = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  do {
    if (uVar11 == (int)lVar7 * 0x200 + iVar2) {
      return;
    }
    pbVar12 = (bool *)(*(longlong *)(this->_padding_ + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 0x34);
    if ((uint)pbVar12[4] == param_1->FixedCutLevel) {
      local_38[0] = *(uint *)pbVar12;
      if (*(int *)&(param_1->CutCellIDs).Elements.field_0x8 !=
          *(int *)&(param_1->CutCellIDs).Elements.field_0x34) {
        FVar3 = (param_1->CutCellIDs).Hash.SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&(param_1->CutCellIDs).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar3;
        }
        iVar9 = *(int *)((longlong)FVar10 +
                        (ulonglong)((param_1->CutCellIDs).HashSize - 1U & local_38[0]) * 4);
        if (iVar9 != -1) {
          lVar4 = *(longlong *)&(param_1->CutCellIDs).Elements;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar9 * 0xc) == local_38[0]) goto LAB_14caa87a7;
            iVar9 = *(int *)(lVar4 + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      pFVar5 = (param_1->CutCells).AllocatorInstance.Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)(param_1->CutCells).ArrayMax * 4)
         ) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = (param_1->CutCells).ArrayNum;
      piVar1 = &(param_1->CutCells).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_1,piVar1);
      }
      (param_1->CutCells).ArrayNum = iVar9 + 1;
      *(uint *)((param_1->CutCells).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_38[0];
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>(&param_1->CutCellIDs,local_res8,pbVar12);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)param_2->ArrayMax * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == param_2->ArrayMax) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar9 + 1;
      *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
    }
LAB_14caa87a7:
    uVar11 = uVar11 + 1;
  } while( true );
}

