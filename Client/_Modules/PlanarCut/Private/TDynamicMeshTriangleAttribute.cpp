// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 24

// Append @ 14c9b30e0

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Append
          (TDynamicMeshTriangleAttribute<bool,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  uVar5 = param_2->TriangleOffset + param_2->NumTriangle;
  if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar5) {
    TDynamicVector<bool,512>::Resize(&this->AttribValues,uVar5);
  }
  iVar6 = 0;
  if (0 < param_2->NumTriangle) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar6,local_res8,1);
      if (cVar2 == '\0') {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6293916625418583852>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                           ,0xd4,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar3) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar5 = param_2->TriangleOffset + iVar6;
      iVar6 = iVar6 + 1;
      *(undefined1 *)
       ((ulonglong)(uVar5 & 0x1ff) +
       *(longlong *)
        ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)) =
           local_res8[0];
    } while (iVar6 < param_2->NumTriangle);
  }
  return true;
}

// AppendDefaulted @ 14c9b3450

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::AppendDefaulted
          (TDynamicMeshTriangleAttribute<bool,1> *this,FAppendInfo *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1->NumTriangle + param_1->TriangleOffset;
  uVar2 = (**(code **)(this->_padding_ + 0xd8))();
  uVar4 = (this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed;
  if (uVar4 < uVar5) {
    TDynamicVector<bool,512>::Resize(&this->AttribValues,uVar5);
    do {
      uVar3 = uVar4 & 0x1ff;
      uVar1 = uVar4 >> 9;
      uVar4 = uVar4 + 1;
      *(undefined1 *)
       ((ulonglong)uVar3 +
       *(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8)) =
           uVar2;
    } while (uVar4 < uVar5);
  }
  return;
}

// CompactCopy @ 14c9b9ce0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::CompactCopy
          (TDynamicMeshTriangleAttribute<bool,1> *this,FCompactMaps *param_1,
          TDynamicMeshTriangleAttribute<bool,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  (**(code **)(this->_padding_ + 0xd0))(this,param_2);
  if (((int)((param_2->AttribValues).CurBlock * 0x200 + (param_2->AttribValues).CurBlockUsed) <
       (param_1->TriMap).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumTriangleMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                         ,0x93,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = (longlong)(param_1->TriMap).ArrayNum;
  uVar4 = 0;
  if (0 < lVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (param_1->TriMap).ArrayNum) {
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
      uVar3 = *(uint *)((param_1->TriMap).AllocatorInstance.Data + lVar6 * 4);
      if (uVar3 != 0xffffffff) {
        *(undefined1 *)
         ((ulonglong)(uVar3 & 0x1ff) +
         *(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)) =
             *(undefined1 *)
              ((ulonglong)(uVar4 & 0x1ff) +
              *(longlong *)
               ((param_2->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8)
              );
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  return;
}

// CompactInPlace @ 14c9ba1a0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::CompactInPlace
          (TDynamicMeshTriangleAttribute<bool,1> *this,FCompactMaps *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(param_1->TriMap).ArrayNum;
  uVar8 = 0;
  if (0 < lVar11) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (param_1->TriMap).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
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
      uVar4 = *(uint *)((param_1->TriMap).AllocatorInstance.Data + lVar6 * 4);
      if (uVar4 != 0xffffffff) {
        if ((int)uVar8 < (int)uVar4) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6293916625418583928>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                             ,0x88,"ToTID <= TID");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uVar9 = (this->AttribValues).CurBlockUsed;
          puVar7 = (undefined1 *)
                   ((ulonglong)(uVar8 & 0x1ff) +
                   *(longlong *)
                    ((this->AttribValues).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar8 >> 9) * 8));
          uVar5 = (this->AttribValues).CurBlock;
          uVar10 = uVar5 * 0x200 + uVar9;
          if (uVar4 == uVar10) {
            if (uVar9 == 0x200) {
              if (uVar5 == (this->AttribValues).Blocks.ArrayNum - 1U) {
                TDynamicVector<bool,512>::AddAllocatedBlock(&this->AttribValues);
              }
              (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
              uVar9 = 0;
              uVar5 = (this->AttribValues).CurBlock;
              (this->AttribValues).CurBlockUsed = 0;
            }
            *(undefined1 *)
             ((longlong)(int)uVar9 +
             *(longlong *)
              ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8)) =
                 *puVar7;
            puVar1 = &(this->AttribValues).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else if (uVar10 < uVar4) {
            TDynamicVector<bool,512>::Resize(&this->AttribValues,uVar4);
            uVar4 = (this->AttribValues).CurBlockUsed;
            if (uVar4 == 0x200) {
              if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
                TDynamicVector<bool,512>::AddAllocatedBlock(&this->AttribValues);
              }
              (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
              uVar4 = 0;
              (this->AttribValues).CurBlockUsed = 0;
            }
            *(undefined1 *)
             ((longlong)(int)uVar4 +
             *(longlong *)
              ((this->AttribValues).Blocks.AllocatorInstance.Data +
              (longlong)(int)(this->AttribValues).CurBlock * 8)) = *puVar7;
            puVar1 = &(this->AttribValues).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else {
            *(undefined1 *)
             ((ulonglong)(uVar4 & 0x1ff) +
             *(longlong *)
              ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8)) =
                 *puVar7;
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar11);
  }
  TDynamicVector<bool,512>::Resize
            (&this->AttribValues,
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed);
  return;
}

// CopyIn @ 14c9bd280

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::CopyIn
          (TDynamicMeshTriangleAttribute<bool,1> *this,int param_1,void *param_2,int param_3)

{
  if (param_3 != 1) {
    return false;
  }
  *(undefined1 *)
   ((ulonglong)(param_1 & 0x1ff) +
   *(longlong *)
    ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)) =
       *(undefined1 *)param_2;
  return true;
}

// CopyOut @ 14c9bd3c0

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::CopyOut
          (TDynamicMeshTriangleAttribute<bool,1> *this,int param_1,void *param_2,int param_3)

{
  if (param_3 != 1) {
    return false;
  }
  *(undefined1 *)param_2 =
       *(undefined1 *)
        ((ulonglong)(param_1 & 0x1ff) +
        *(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8))
  ;
  return true;
}

// CopyThroughMapping @ 14c9bd510

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::CopyThroughMapping
          (TDynamicMeshTriangleAttribute<bool,1> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar16 = 0;
  puVar1 = &(param_2->TriangleMap).ForwardMap.field_0x10;
  iVar3 = *(int *)&(param_2->TriangleMap).ForwardMap.field_0x28;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_2->TriangleMap).ForwardMap.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      iVar14 = iVar14 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14c9bd5bd;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar14 + -1 + (int)lVar10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14c9bd5bd:
  uVar13 = *(uint *)&(param_2->TriangleMap).ForwardMap.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_2->TriangleMap).ForwardMap.field_0x8 -
                       *(int *)&(param_2->TriangleMap).ForwardMap.field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar8 = *(uint *)&(param_2->TriangleMap).ForwardMap.field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(param_2->TriangleMap).ForwardMap.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14c9bd6c1;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14c9bd6c1:
  while( true ) {
    if (*(int *)&(param_2->TriangleMap).ForwardMap.field_0x8 -
        *(int *)&(param_2->TriangleMap).ForwardMap.field_0x34 != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar11 = (undefined4 *)
              (*(longlong *)&(param_2->TriangleMap).ForwardMap +
              (longlong)TStack_68.CurrentBitIndex * 0x10);
    cVar7 = (**(code **)(param_1->_padding_ + 0x48))(param_1,*puVar11,local_res20,1);
    if (cVar7 == '\0') {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6293916625418583873>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                         ,0xbf,"Source->CopyOut(MapTID.Key, BufferData, BufferSize)");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar8 = puVar11[1];
    *(undefined1 *)
     ((ulonglong)(uVar8 & 0x1ff) +
     *(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8)
     ) = local_res20[0];
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return true;
}

// CopyValue @ 14c9bdd90

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::CopyValue
          (TDynamicMeshTriangleAttribute<bool,1> *this,int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar2 = (this->AttribValues).CurBlock;
  puVar4 = (undefined1 *)
           ((ulonglong)(param_1 & 0x1ff) +
           *(longlong *)
            ((this->AttribValues).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8));
  uVar5 = uVar2 * 0x200 + uVar3;
  if (param_2 == uVar5) {
    if (uVar3 == 0x200) {
      if (uVar2 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<bool,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar2 = (this->AttribValues).CurBlock;
      uVar3 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
  }
  else {
    if ((uint)param_2 <= uVar5) {
      *(undefined1 *)
       ((ulonglong)(param_2 & 0x1ff) +
       *(longlong *)
        ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8))
           = *puVar4;
      return;
    }
    TDynamicVector<bool,512>::Resize(&this->AttribValues,param_2);
    uVar3 = (this->AttribValues).CurBlockUsed;
    if (uVar3 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<bool,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar3 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    uVar2 = (this->AttribValues).CurBlock;
  }
  *(undefined1 *)
   ((longlong)(int)uVar3 +
   *(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar2 * 8)) =
       *puVar4;
  puVar1 = &(this->AttribValues).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
  return;
}

// GetByteCount @ 14c9d1a50

ulong64 __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::GetByteCount
          (TDynamicMeshTriangleAttribute<bool,1> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9);
}

// GetDefaultAttributeValue @ 14c9d2330

bool __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::GetDefaultAttributeValue
          (TDynamicMeshTriangleAttribute<bool,1> *this)

{
  return false;
}

// Initialize @ 14c9d46f0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
          (TDynamicMeshTriangleAttribute<bool,1> *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  if (this->ParentMesh == (FDynamicMesh3 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentMesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                       ,0xa5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDynamicVector<bool,512>::Resize
            (&this->AttribValues,
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->ParentMesh->TriangleRefCounts).RefCounts.CurBlockUsed);
  uVar1 = (this->AttribValues).Blocks.ArrayNum;
  uVar7 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar7 < uVar1 - 1) {
        uVar6 = 0x200;
LAB_14c9d4785:
        uVar4 = 0;
        do {
          lVar5 = (longlong)(int)uVar4;
          uVar4 = uVar4 + 1;
          *(bool *)(lVar5 + *(longlong *)
                             ((this->AttribValues).Blocks.AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 8)) = param_1;
        } while (uVar4 < uVar6);
      }
      else {
        uVar6 = ((this->AttribValues).CurBlock - (uVar1 - 1)) * 0x200 +
                (this->AttribValues).CurBlockUsed;
        if (uVar6 != 0) goto LAB_14c9d4785;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return;
}

// MakeCompactCopy @ 14c9d5b30

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::MakeCompactCopy
          (TDynamicMeshTriangleAttribute<bool,1> *this,FCompactMaps *param_1,FDynamicMesh3 *param_2)

{
  TDynamicVector<bool,512> *this_00;
  TDynamicMeshTriangleAttribute<bool,1> *this_01;
  
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<bool,1> *)0x0) {
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    this_01->_padding_ = 0;
    TDynamicVector<bool,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = param_2;
    Initialize(this_01,false);
  }
  Initialize(this_01,false);
  CompactCopy(this_01,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_01;
}

// MakeCopy @ 14c9d5da0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::MakeCopy
          (TDynamicMeshTriangleAttribute<bool,1> *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<bool,512> *this_00;
  code *pcVar1;
  TDynamicMeshTriangleAttribute<bool,1> *this_01;
  
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<bool,1> *)0x0) {
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    this_01->_padding_ = 0;
    TDynamicVector<bool,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = param_1;
    Initialize(this_01,false);
  }
  pcVar1 = *(code **)(this_01->_padding_ + 0xd0);
  if (pcVar1 == TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::CopyParentClassData) {
    this_01->_padding_ = this->_padding_;
  }
  else {
    (*pcVar1)(this_01,this);
  }
  TDynamicVector<bool,512>::operator=(&this_01->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_01;
}

// MakeNew @ 14c9d5f40

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::MakeNew
          (TDynamicMeshTriangleAttribute<bool,1> *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<bool,512> *this_00;
  TDynamicMeshTriangleAttribute<bool,1> *this_01;
  
  this_01 = ::operator_new(0x30);
  if (this_01 != (TDynamicMeshTriangleAttribute<bool,1> *)0x0) {
    this_01->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    this_00 = &this_01->AttribValues;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->AttribValues).Blocks.ArrayNum = 0;
    (this_01->AttribValues).Blocks.ArrayMax = 0;
    this_01->_padding_ = 0;
    TDynamicVector<bool,512>::AddAllocatedBlock(this_00);
    this_01->ParentMesh = param_1;
    Initialize(this_01,false);
  }
  Initialize(this_01,false);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_01;
}

// NewBlankChange @ 14c9dc870

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::NewBlankChange
          (TDynamicMeshTriangleAttribute<bool,1> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 = &___7__FDynamicMeshTriangleAttributeChange__N_00_Geometry_UE__6B_;
    *(undefined8 *)((longlong)TVar1 + 8) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x20) = 0;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// OnCollapseEdge @ 14c9dce70

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnCollapseEdge
          (TDynamicMeshTriangleAttribute<bool,1> *this,FEdgeCollapseInfo *param_1)

{
  return;
}

// OnFlipEdge @ 14c9dcee0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnFlipEdge
          (TDynamicMeshTriangleAttribute<bool,1> *this,FEdgeFlipInfo *param_1)

{
  return;
}

// OnMergeEdges @ 14c9dcf10

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnMergeEdges
          (TDynamicMeshTriangleAttribute<bool,1> *this,FMergeEdgesInfo *param_1)

{
  return;
}

// OnMergeVertices @ 14c9dd020

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnMergeVertices
          (TDynamicMeshTriangleAttribute<bool,1> *this,FMergeVerticesInfo *param_1)

{
  return;
}

// OnNewTriangle @ 14c9dd090

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnNewTriangle
          (TDynamicMeshTriangleAttribute<bool,1> *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined7 in_register_00000081;
  
  if (param_1 < 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6293916625418583658>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicMeshTriangleAttribute.h"
                       ,0x196,"TriangleID >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
           (longlong)param_1 + 1U) {
    uVar3 = (**(code **)(this->_padding_ + 0xd8))
                      (this,CONCAT44(in_register_00000014,param_1),
                       CONCAT71(in_register_00000081,param_2));
    uVar7 = (this->AttribValues).CurBlock;
    uVar6 = (uint)((longlong)param_1 + 1U);
    uVar5 = (this->AttribValues).CurBlockUsed;
    TDynamicVector<bool,512>::Resize(&this->AttribValues,uVar6);
    uVar5 = uVar7 * 0x200 + uVar5;
    uVar7 = uVar5;
    for (; uVar5 < uVar6; uVar5 = uVar5 + 1) {
      uVar4 = uVar7 & 0x1ff;
      uVar7 = uVar7 + 1;
      *(undefined1 *)
       ((ulonglong)uVar4 +
       *(longlong *)
        ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)) = uVar3;
    }
  }
  uVar3 = (**(code **)(this->_padding_ + 0xd8))(this);
  *(undefined1 *)
   ((ulonglong)(param_1 & 0x1ff) +
   *(longlong *)
    ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)) =
       uVar3;
  return;
}

// OnPokeTriangle @ 14c9dd2c0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnPokeTriangle
          (TDynamicMeshTriangleAttribute<bool,1> *this,FPokeTriangleInfo *param_1)

{
  CopyValue(this,param_1->OriginalTriangle,(param_1->NewTriangles).field0_0x0._s_0.A);
  CopyValue(this,param_1->OriginalTriangle,(param_1->NewTriangles).field0_0x0._s_0.B);
  return;
}

// OnSplitEdge @ 14c9dd3e0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnSplitEdge
          (TDynamicMeshTriangleAttribute<bool,1> *this,FEdgeSplitInfo *param_1)

{
  int iVar1;
  
  CopyValue(this,(param_1->OriginalTriangles).field0_0x0._s_0.A,
            (param_1->NewTriangles).field0_0x0._s_0.A);
  iVar1 = (param_1->OriginalTriangles).field0_0x0._s_0.B;
  if (iVar1 != -1) {
    CopyValue(this,iVar1,(param_1->NewTriangles).field0_0x0._s_0.B);
  }
  return;
}

// OnSplitVertex @ 14c9dd4d0

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::OnSplitVertex
          (TDynamicMeshTriangleAttribute<bool,1> *this,FVertexSplitInfo *param_1,
          TArrayView<int_const_,int> *param_2)

{
  return;
}

// Reparent @ 14c9dea80

void __thiscall
UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Reparent
          (TDynamicMeshTriangleAttribute<bool,1> *this,FDynamicMesh3 *param_1)

{
  this->ParentMesh = param_1;
  return;
}

